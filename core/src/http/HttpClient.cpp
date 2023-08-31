/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache LICENSE, Version 2.0 (the
 * "LICENSE"); you may not use this file except in compliance
 * with the LICENSE.  You may obtain a copy of the LICENSE at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the LICENSE is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the LICENSE for the
 * specific language governing permissions and limitations
 * under the LICENSE.
 */

#include <cstdio>

#include <huaweicloud/core/http/HttpClient.h>

using namespace HuaweiCloud::Sdk::Core::Http;
using namespace HuaweiCloud::Sdk::Core::Exception;

static size_t WriteMemoryCallback(const char *contents, size_t size, size_t nmemb, void *userp)
{
    (reinterpret_cast<std::string *>(userp))->append(contents, size * nmemb);
    return size * nmemb;
}

static size_t HeaderCallBack(const char *contents, size_t size, size_t nmemb, void *userp)
{
    (reinterpret_cast<std::string *>(userp))->append(contents, size * nmemb);
    return size * nmemb;
}

HttpClient::HttpClient() = default;

HttpClient::~HttpClient() = default;

std::unique_ptr<HttpResponse>
HttpClient::doHttpRequestSync(const HttpRequest &httpRequest, const HttpConfig &httpConfig,
                              const std::function<void(const HttpResponse &)> &handler_response)
{
    std::string body;
    std::string header;
    long statusCode;
    CURLcode res;
    res = curl_perform(httpRequest, httpConfig, body, header, statusCode);

    if (httpRequest.isStreamLog() && !spdlog::get("console")) {
        auto console = spdlog::stdout_color_mt("console");
    }
    if (httpRequest.isFileLog() && !spdlog::get("basic_logger")) {
        auto logger = spdlog::basic_logger_mt("basic_logger", httpRequest.getFilePath());
    }

    switch (res) {
        case CURLE_SSL_CONNECT_ERROR:
            dealSslHandShakeException(httpRequest.isStreamLog(), httpRequest.isFileLog());
            break;
        case CURLE_COULDNT_RESOLVE_HOST:
            dealHostUnreachableException(httpRequest.isStreamLog(), httpRequest.isFileLog());
            break;
        case CURLE_OPERATION_TIMEDOUT:
            dealCallTimeoutException(httpRequest.isStreamLog(), httpRequest.isFileLog());
            break;
        case CURLE_TOO_MANY_REDIRECTS:
            dealRetryOutageException(httpRequest.isStreamLog(), httpRequest.isFileLog());
            break;
        default:
            HttpResponse httpResponse;

            httpResponse.setHttpBody(body);
            httpResponse.setHeaderParams(header);
            httpResponse.setStatusCode(statusCode);
            if (handler_response) {
                handler_response(httpResponse);
            }

            std::unique_ptr<HttpResponse> httpResponseCurl = std::make_unique<HttpResponse>(statusCode, header, body);
            dealCurlOk(httpRequest, *httpResponseCurl, httpRequest.isStreamLog(), httpRequest.isFileLog());
            return httpResponseCurl;
    }
    return nullptr;
}

CURLcode HttpClient::curl_perform(const HttpRequest &httpRequest, const HttpConfig &httpConfig, std::string &body,
    std::string &header, long &statusCode)
{
    curl_global_init(CURL_GLOBAL_ALL);
    CURL *curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, httpRequest.getMethod().c_str());
    curl_easy_setopt(curl, CURLOPT_URL, httpRequest.getUrl().c_str());

    std::string use_pwd;
    std::string proxy_host;
    use_pwd = httpConfig.getProxyUser() + ":" + httpConfig.getProxyPassword();
    proxy_host = httpConfig.getProxyHost() + ":" + httpConfig.getProxyPort();
    if (httpConfig.getProxyProtocol() == "https") {
        curl_easy_setopt(curl, CURLOPT_PROXYTYPE, CURLPROXY_HTTPS);
        curl_easy_setopt(curl, CURLOPT_PROXY, proxy_host.c_str());
        curl_easy_setopt(curl, CURLOPT_PROXYUSERPWD, use_pwd.c_str());
    } else if (httpConfig.getProxyProtocol() == "http") {
        curl_easy_setopt(curl, CURLOPT_PROXYTYPE, CURLPROXY_HTTP);
        curl_easy_setopt(curl, CURLOPT_PROXY, proxy_host.c_str());
        curl_easy_setopt(curl, CURLOPT_PROXYUSERPWD, use_pwd.c_str());
    }

    if (!httpConfig.isIgnoreSslVerification()) {
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, false);
    }

    curl_easy_setopt(curl, CURLOPT_TIMEOUT, httpConfig.getReadTimeout());
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, httpConfig.getConnectTimeout());

    curl_slist *list = nullptr;
    for (auto requestHeader : httpRequest.getHeaders()) {
        std::string headerEntry = requestHeader.getKey() + ": " + requestHeader.getValue();
        list = curl_slist_append(list, headerEntry.c_str());
    }

    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);
    curl_easy_setopt(curl, CURLOPT_COPYPOSTFIELDS, httpRequest.getRequestBody().c_str());
    curl_easy_setopt(curl, CURLOPT_NOBODY, 0L);

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &body);

    curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, HeaderCallBack);
    curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header);

    CURLcode res;
    res = curl_easy_perform(curl);

    curl_easy_getinfo(curl, CURLINFO_HTTP_CODE, &statusCode);

    curl_slist_free_all(list);
    curl_easy_cleanup(curl);
    curl_global_cleanup();

    return res;
}

std::map<std::string, std::string> HttpClient::parseErrorMessage(const std::string &responseBody)
{
    std::map<std::string, std::string> errorMsg;

    spdlog::info("begin parse error message from response body");
    web::json::value error;
    error = web::json::value::parse(utility::conversions::to_string_t(responseBody));

    for (const auto &iter : error.as_object()) {
        const std::string key = utility::conversions::to_utf8string(iter.first);
        const web::json::value value = iter.second;
        if (key == "error_code" || key == "code") {
            errorMsg["error_code"] = utility::conversions::to_utf8string(value.serialize());
        } else if (key == "error_msg" || key == "message") {
            errorMsg["error_msg"] = utility::conversions::to_utf8string(value.serialize());
        } else if (key == "request_id") {
            errorMsg["request_id"] = utility::conversions::to_utf8string(value.serialize());
        } else if (key == "encoded_authorization_message") {
            errorMsg["encoded_authorization_message"] =  utility::conversions::to_utf8string(value.serialize());
        } else {
            for (const auto &inner : value.as_object()) {
                const std::string innerKey = utility::conversions::to_utf8string(inner.first);
                const web::json::value innerValue = inner.second;
                if (innerKey == "code" || innerKey == "error_code") {
                    errorMsg["error_code"] = utility::conversions::to_utf8string(innerValue.serialize());
                } else if (innerKey == "message" || innerKey == "error_msg") {
                    errorMsg["error_msg"] = utility::conversions::to_utf8string(innerValue.serialize());
                } else if (key == "encoded_authorization_message") {
                    errorMsg["encoded_authorization_message"] =  utility::conversions::to_utf8string(value.serialize());
                }
            }
        }
    }
    spdlog::info("parse error message from response body successfully");
    return errorMsg;
}

void HttpClient::dealSslHandShakeException(bool streamLog, bool fileLog)
{
    if (streamLog) {
        spdlog::get("console")->error("\"SslHandShakeException!\"");
    }
    if (fileLog) {
        spdlog::get("basic_logger")->error("\"SslHandShakeException!\"");
        spdlog::get("basic_logger")->flush();
    }
    throw SslHandShakeException("SslHandShakeException!");
}

void HttpClient::dealHostUnreachableException(bool streamLog, bool fileLog)
{
    if (streamLog) {
        spdlog::get("console")->error("\"HostUnreachableException!\"");
    }
    if (fileLog) {
        spdlog::get("basic_logger")->error("\"HostUnreachableException!\"");
        spdlog::get("basic_logger")->flush();
    }
    throw HostUnreachableException("HostUnreachableException!");
}

void HttpClient::dealCallTimeoutException(bool streamLog, bool fileLog)
{
    if (streamLog) {
        spdlog::get("console")->error("\"CallTimeoutException!\"");
    }
    if (fileLog) {
        spdlog::get("basic_logger")->error("\"CallTimeoutException!\"");
        spdlog::get("basic_logger")->flush();
    }
    throw CallTimeoutException("CallTimeoutException!");
}

void HttpClient::dealRetryOutageException(bool streamLog, bool fileLog)
{
    if (streamLog) {
        spdlog::get("console")->error("\"RetryOutageException!\"");
    }
    if (fileLog) {
        spdlog::get("basic_logger")->error("\"RetryOutageException!\"");
        spdlog::get("basic_logger")->flush();
    }
    throw RetryOutageException("RetryOutageException!");
}

void HttpClient::dealCurlOk(const HttpRequest &httpRequest, HttpResponse &httpResponse, bool streamLog, bool fileLog)
{
    if (httpResponse.getStatusCode() < HTTP_SUCCESS_BEGIN_CODE ||
        httpResponse.getStatusCode() > HTTP_SUCCESS_END_CODE) {
        std::map<std::string, std::string> errMap = parseErrorMessage(httpResponse.getHttpBody());
        // firstly parse requestId from http response, if not exist and get requestId from header(X-Request-Id)
        std::string requestId = errMap["request_id"];
        if (requestId.empty()) {
            requestId = parseRequestId(httpResponse.getHeaderParams());
        }
        std::string encodedAuthorizationMessage = errMap["encoded_authorization_message"];
        SdkErrorMessage sdkErrorMessage(errMap["error_code"], errMap["error_msg"], requestId,
                                        encodedAuthorizationMessage);

        if (streamLog) {
            spdlog::get("console")->info("\n{0} {1} {2} {3} {4}\n\n", httpRequest.getMethod(), httpRequest.getUrl(),
                httpResponse.getStatusCode(), httpResponse.getHttpBody().length(), requestId);
        }
        if (fileLog) {
            spdlog::get("basic_logger")
                ->info("\n{0} {1} {2} {3} {4}\n\n", httpRequest.getMethod(), httpRequest.getUrl(),
                httpResponse.getStatusCode(), httpResponse.getHttpBody().length(), requestId);
            spdlog::get("basic_logger")->flush();
        }
        throw ServiceResponseException::mapException(httpResponse.getStatusCode(), sdkErrorMessage);
    } else {
        std::string requestId = parseRequestId(httpResponse.getHeaderParams());
        if (streamLog) {
            spdlog::get("console")->info("\n{0} {1} {2} {3} {4}\n\n", httpRequest.getMethod(), httpRequest.getUrl(),
                httpResponse.getStatusCode(), httpResponse.getHttpBody().length(), requestId);
        }
        if (fileLog) {
            spdlog::get("basic_logger")
                ->info("\n{0} {1} {2} {3} {4}\n\n", httpRequest.getMethod(), httpRequest.getUrl(),
                httpResponse.getStatusCode(), httpResponse.getHttpBody().length(), requestId);
            spdlog::get("basic_logger")->flush();
        }
    }
}

std::string HttpClient::parseRequestId(const std::string &responseHeader)
{
    std::istringstream resp(responseHeader);
    std::string header;
    std::string::size_type index;
    while (std::getline(resp, header) && header != "\r") {
        index = header.find(':', 0);
        if (header.substr(0, index) == "X-Request-Id") {
            return header.substr(index + 1);
        }
    }
    return responseHeader;
}

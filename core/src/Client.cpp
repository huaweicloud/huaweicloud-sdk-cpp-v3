/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/auth/GlobalCredentials.h>
#include <huaweicloud/core/auth/BasicCredentials.h>
#include <huaweicloud/core/http/HttpRequest.h>
#include <huaweicloud/core/http/HttpClient.h>
#include <boost/algorithm/string/replace.hpp>
#include <utility>

using namespace HuaweiCloud::Sdk::Core;

Client::Client() = default;

Client::~Client() {}

std::unique_ptr<HttpResponse> Client::callApi(const std::string &method, const std::string &resourcePath,
    const std::map<std::string, std::string> &pathParams, const std::map<std::string, std::string> &queryParams,
    const std::map<std::string, std::string> &headerParams, const std::string &body)
{
    std::string scheme;
    std::string host;
    parseEndPoint(endpoint_, scheme, host);
    std::string uriHttp = getResourcePath(resourcePath, pathParams, credentials_->getUpdatePathParams());
    std::string queryParamsHttp = getQueryParams(queryParams);
    RequestParams requestParams(method, scheme, host, uriHttp, queryParamsHttp, false, body);

    requestParams.addHeader(Header("User-Agent", "huaweicloud-sdk-cpp/3.0"));
    addHeaderParams(requestParams, headerParams);
    credentials_->processAuthRequest(requestParams);

    if (handler_request) {
        handler_request(requestParams);
    }

    HttpRequest httpRequest;
    httpRequest.setUrl(parseUrl(requestParams));
    httpRequest.setMethod(requestParams.getMethod());
    httpRequest.setRequestBody(requestParams.getBody());
    httpRequest.setHeaders(requestParams.getHeaders());
    httpRequest.setStreamLog(streamLog_);
    httpRequest.setFileLog(fileLog_);
    httpRequest.setFilePath(filePath_);

    HttpClient httpClient;
    std::unique_ptr<HttpResponse> httpResponse =
            httpClient.doHttpRequestSync(httpRequest, httpConfig_, handler_response);

    return httpResponse;
}

std::string Client::parseUrl(const RequestParams &requestParams)
{
    std::string url = requestParams.getScheme() + "://" + requestParams.getHost() + requestParams.getUri();
    if (!requestParams.getQueryParams().empty()) {
        url += "?" + requestParams.getQueryParams();
    }
    return url;
}

std::string Client::getResourcePath(const std::string &uri, const std::map<std::string, std::string> &pathParams,
    const std::map<std::string, std::string> &updatePathParams)
{
    std::string res = uri;
    for (const auto &path : pathParams) {
        boost::replace_all(res, "{" + path.first + "}", path.second);
    }

    for (const auto &updatePath : updatePathParams) {
        boost::replace_all(res, "{" + updatePath.first + "}", updatePath.second);
    }
    return res;
}

std::string Client::getQueryParams(const std::map<std::string, std::string> &queryParams)
{
    std::string res;
    for (const auto &query : queryParams) {
        res.append(query.first + "=" + query.second + "&");
    }
    return res;
}

void Client::addHeaderParams(RequestParams &requestParams, const std::map<std::string, std::string> &headerParams)
{
    for (const auto &header : headerParams) {
        requestParams.addHeader(header.first, header.second);
    }
}

void Client::setHttpConfig(const HttpConfig &httpConfig)
{
    httpConfig_ = httpConfig;
}

void Client::setCredentials(std::unique_ptr<Credentials> credentials)
{
    credentials_ = std::move(credentials);
}

void Client::setEndPoint(std::string endPoint)
{
    endpoint_ = std::move(endPoint);
}

void Client::setStreamLog(bool streamLog)
{
    streamLog_ = streamLog;
}

void Client::setFileLog(std::string filePath, bool fileLog)
{
    filePath_ = std::move(filePath);
    fileLog_ = fileLog;
}

void Client::parseEndPoint(const std::string &str, std::string &scheme, std::string &host)
{
    std::vector<std::string> res;
    std::string pattern = "://";
    if (str.empty()) {
        return;
    }

    std::string strs = str + pattern;

    size_t pos = strs.find(pattern);
    size_t size = strs.size();
    size_t patternSize = pattern.size();

    while (pos != std::string::npos) {
        std::string x = strs.substr(0, pos);
        res.push_back(x);
        strs = strs.substr(pos + patternSize, size);
        pos = strs.find(pattern);
    }
    scheme = res.at(0);
    host = res.at(1);
}
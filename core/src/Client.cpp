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
#include <huaweicloud/core/utils/ModelBase.h>

#include <boost/algorithm/string/replace.hpp>
#include <utility>

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

Client::Client() {
    endpointIndex = 0;
};

Client::~Client() = default;

void Client::processRegionAuth() {
    spdlog::info("[Client]begin execute region auth...");
    const std::string regionId = region_.getRegionId();
    const std::string endPoint = region_.getEndpoint();
    const std::vector<std::string>& regionEndpoints = this->region_.getEndpoints();
    this->endpoints_.insert(this->endpoints_.end(), regionEndpoints.begin(), regionEndpoints.end());
    spdlog::info("[Client]execute region auth end...");
}

std::unique_ptr<HttpResponse> Client::callApi(const std::string &method, const std::string &resourcePath,
    const std::map<std::string, std::string> &pathParams, const std::map<std::string, std::string> &queryParams,
    const std::map<std::string, std::string> &headerParams, const std::string &body, const HttpRequestDef& def) {
    std::string scheme;
    std::string host;

    spdlog::info("client:call service api {}, resourcePath:{}", method, resourcePath);
    const std::string regionId = this->region_.getRegionId();
    if (!regionId.empty()) {
        spdlog::info("begin execute region auth for region:{}", regionId);
        credentials_->regionInit();
        credentials_->processAuthParams(regionId);
        spdlog::info("region auth for region:{} successfully!", regionId);
    }
    while (true) {
        std::string endpoint = buildEndpoint(def, pathParams, queryParams);
        spdlog::info("build endpoint:{} successfully", endpoint);
        parseEndPoint(endpoint, scheme, host);
        std::string uriHttp = getResourcePath(resourcePath, pathParams, credentials_->getUpdatePathParams());
        std::string queryParamsHttp = getQueryParams(queryParams);
        RequestParams requestParams(method, scheme, host, uriHttp, queryParamsHttp, false, body);

        requestParams.addHeader(Header("User-Agent", "huaweicloud-usdk-cpp/3.0"));
        addHeaderParams(requestParams, headerParams);
        credentials_->processAuthRequest(requestParams, httpConfig_, region_.getRegionId(), derivedAuthServiceName_);

        if (handler_request) {
           handler_request(requestParams);
        }
        spdlog::info("begin execute http request for the api....");
        HttpRequest httpRequest;
        httpRequest.setUrl(parseUrl(requestParams));
        httpRequest.setMethod(requestParams.getMethod());
        httpRequest.setRequestBody(requestParams.getBody());
        httpRequest.setHeaders(requestParams.getHeaders());
        httpRequest.setStreamLog(streamLog_);
        httpRequest.setFileLog(fileLog_);
        httpRequest.setFilePath(filePath_);
        try {
            std::unique_ptr<HttpResponse> httpResponse =
                httpClient_.doHttpRequestSync(httpRequest, httpConfig_, handler_response);
            spdlog::info("execute http request for the api successfully, get the response....");
            return httpResponse;
        } catch (HostUnreachableException ex) {
            if (!this->endpoints_.empty() && endpointIndex < this->endpoints_.size() - 1) {
                spdlog::error("can not resolve host for service,region:{}, error:{}", regionId, ex.what());
                endpointIndex++;
            } else {
               endpointIndex = 0;
               std::string errorMsg = "can not resolve all endpoints for service in region:!" + regionId;
               throw HostUnreachableException(errorMsg.c_str());
            }
        }
    }
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

const std::string &Client::getDerivedAuthServiceName() const {
    return derivedAuthServiceName_;
}

void Client::setDerivedAuthServiceName(const std::string &derivedAuthServiceName) {
    derivedAuthServiceName_ = derivedAuthServiceName;
}

void Client::setDerivedPredicate(
        const std::function<bool(const HuaweiCloud::Sdk::Core::RequestParams &)> &derivedPredicate) {
    Client::derivedPredicate = derivedPredicate;
}

void Client::setCredentials(std::unique_ptr<Credentials> credentials)
{
    credentials_ = std::move(credentials);
}

bool Client::isCredentialsEmpty() {
    return credentials_ == nullptr;
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

void Client::setRegion(Region region)
{
    region_ = std::move(region);
}

void Client::setHttpClient(const HttpClient& httpClient) {
    httpClient_ = httpClient;
}

Region Client::getRegion() {
    return this->region_;
}
bool Client::getFileLog() {
    return this->fileLog_;
}

bool Client::getStreamLog() {
    return this->streamLog_;
}

const std::vector<std::string> &Client::getEndpoints() const {
    return endpoints_;
}

void Client::setEndpoints(const std::vector<std::string> &endpoints) {
    endpoints_ = endpoints;
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

std::string Client::buildEndpoint(const HttpRequestDef& def, const std::map<std::string, std::string>& pathParams,
                                  const std::map<std::string, std::string> &queryParams) {
    spdlog::info("[Client] begin assemable service endpoint...");
    for (auto field : def.getRequestFields()) {
        if (field.getLocationType() != Cname) {
            continue;
        }
        std::string scheme;
        std::string host;
        parseEndPoint(this->endpoints_[endpointIndex], scheme, host);
        std::string value = getFieldValueByName(field.getJsonTag(),
                                                const_cast<std::map<std::string, std::string> &>(pathParams),
                                                const_cast<std::map<std::string, std::string> &>(queryParams));
        if (!scheme.empty() && !host.empty() && !value.empty()) {
            return scheme + "://" + value + "." + host;
        }
    }
    std::string scheme;
    std::string host;
    parseEndPoint(this->endpoints_[endpointIndex], scheme, host);
    return scheme + "://" + host;
}

std::string Client::getFieldValueByName(std::string key, std::map<std::string, std::string>& pathParams,
                                        std::map<std::string, std::string> &queryParams) {
    if (pathParams.find(key) != pathParams.end()) {
        return pathParams[key];
    }
    if (queryParams.find(key) != queryParams.end()) {
        return queryParams[key];
    }
    return "";
}

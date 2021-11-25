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

#include <huaweicloud/core/auth/IamService.h>

#include <huaweicloud/core/exception/SdkException.h>
#include <spdlog/spdlog.h>
#include <exception>
#include <huaweicloud/core/http/HttpRequest.h>
#include <huaweicloud/core/http/HttpClient.h>
#include <huaweicloud/core/auth/Signer.h>

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Http;
using namespace HuaweiCloud::Sdk::Core::Exception;
using namespace web;
using namespace web::http;

IamService::IamService(std::string endpoint, std::string ak, std::string sk)
    :endpoint_(endpoint), ak_(ak), sk_(sk)
{}
IamService::IamService(std::string ak, std::string sk) :ak_(ak), sk_(sk)
{}

IamService::~IamService() 
{}

void IamService::parseEndPoint(const std::string &endpoint, std::string &scheme, std::string &host)
{
    std::vector<std::string> res;
    std::string pattern = "://";
    if (endpoint.empty()) {
        spdlog::info("the endpoint is empty, do not need to pasre...");
        return;
    }
    std::string strs = endpoint + pattern;
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

void IamService::init() {
    this->httpClient_ = std::make_unique<HttpClient>();
}

std::unique_ptr<HttpResponse> IamService::callApi(std::string uriHttp) {
    std::string scheme;
    std::string host;
    std::string endpoint = endpoint_.empty() ? DefaultIamEndpoint : endpoint_;

    spdlog::info("begin call iam api, uri:{}", uriHttp);
    parseEndPoint(endpoint, scheme, host);
    RequestParams requestParams("GET", scheme, host, uriHttp, "", false, "");
    requestParams.addHeader(Header("User-Agent", "huaweicloud-sdk-cpp/3.0"));

    Signer signer(ak_, sk_);
    signer.createSignature(requestParams);
 
    HttpRequest httpRequest;
    std::string url = requestParams.getScheme() + "://" + requestParams.getHost() + requestParams.getUri();
    httpRequest.setUrl(url);
    httpRequest.setMethod("GET");
    httpRequest.setRequestBody(requestParams.getBody());
    httpRequest.setHeaders(requestParams.getHeaders());
    httpRequest.setStreamLog(true);
    httpRequest.setFileLog(false);

    if (this->httpClient_ == nullptr) {
        spdlog::error("the http client of iamService has not been initialized, call init method before call api!");
        throw SdkException("the http client of iamService has not been initialized");
    }
    HttpConfig httpConfig;
    std::unique_ptr<HttpResponse> httpResponse =
            httpClient_->doHttpRequestSync(httpRequest, httpConfig, handler_response);
    spdlog::info("call iam api successfully, uri:{}", uriHttp);
    return httpResponse;
}

void IamService::setHttpClient(std::unique_ptr<HttpClient> httpClient) {
    this->httpClient_ = std::move(httpClient);
}

std::unique_ptr<HttpClient> IamService::getHttpClient() {
    return std::move(this->httpClient_);
}

const std::string IamService::getProjectId(const std::string regionId) {
    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    spdlog::info("begin get projectId from Iam Service, regionId:{}", regionId);
    std::string localVarPath = "/v3/projects";
    std::string localVarHttpBody;
    std::unique_ptr<HttpResponse> resp;
    try {
        resp = callApi(localVarPath);
    } catch (SdkException& ex) {
        spdlog::error("get keystone project error, sdkexception:{}", ex.what());
        return "";
    } catch (std::exception& ex) {
        spdlog::error("get keystone project error, unknown error:{}", ex.what());
        return "";
    }
    utility::string_t localVarResponse = utility::conversions::to_string_t(resp->getHttpBody());
    web::json::value localVarJson = web::json::value::parse(localVarResponse);
    if (!localVarJson.has_array_field(utility::conversions::to_string_t("projects"))) {
        spdlog::error("the response from Iam has no projects field!");
        return "";
    }
    web::json::value projects = localVarJson.at(utility::conversions::to_string_t("projects"));
    json::array projectIds = projects.as_array();
    if (projectIds.size() == 0) {
        spdlog::info("the projectId list of current user is empty");
        return "";
    }
    auto tmp = projectIds[0].at(utility::conversions::to_string_t("id")).as_string();
    auto newprojectId = utility::conversions::to_utf8string(tmp);
    spdlog::info("the projectId of current user is {}", newprojectId);
    return newprojectId;
}

const std::string IamService::getDomainId(const std::string regionId) {
    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    spdlog::info("begin get domainId from iam, regionId:{}", regionId);
    localVarHeaderParams["Content-Type"] = "application/json";
    std::string localVarPath = "/v3/auth/domains";
    std::string localVarHttpBody;
    std::unique_ptr<HttpResponse> res;
    try {
        res = callApi(localVarPath);
    } catch (Exception::SdkException& ex) {
        spdlog::error("call {} fail, sdk exception, error message:{}", localVarPath, ex.what());
        return "";
    } catch (std::exception& ex) {
        spdlog::error("call {} fail, unknown exception, error message:{}", localVarPath, ex.what());
        return "";
    }
    utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
    web::json::value localVarJson = web::json::value::parse(localVarResponse);
    if (!localVarJson.has_array_field(utility::conversions::to_string_t("domains"))) {
        spdlog::error("the response from Iam has no domains field");
        return "";
    }
    web::json::value domains = localVarJson.at(utility::conversions::to_string_t("domains"));
    json::array domainIds = domains.as_array();
    if (domainIds.size() == 0) {
        spdlog::error("the domainId list of current user is empty");
        return "";
    }
    auto tmp = domainIds[0].at(utility::conversions::to_string_t("id")).as_string();
    auto newDomainId = utility::conversions::to_utf8string(tmp);
    spdlog::info("the domainId of current user is {}", newDomainId);
    return newDomainId;
}
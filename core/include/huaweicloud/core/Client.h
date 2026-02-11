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

#ifndef HUAWEICLOUD_SDK_CORE_CLIENT_H
#define HUAWEICLOUD_SDK_CORE_CLIENT_H
#include <memory>
#include <curl/curl.h>
#include <map>
#include <atomic>
#include <regex>

#include <huaweicloud/core/RequestParams.h>
#include <huaweicloud/core/utils/Header.h>
#include <huaweicloud/core/auth/Credentials.h>
#include <huaweicloud/core/http/HttpConfig.h>
#include <huaweicloud/core/http/HttpResponse.h>
#include <huaweicloud/core/http/HttpClient.h>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/http/HttpRequestDef.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
using namespace Auth;
using namespace Http;
class HUAWEICLOUD_CORE_EXPORT Client {
public:
    Client();
    ~Client();

    std::function<void(const HttpResponse&)> handler_response;
    void register_response_handler(std::function<void(const HttpResponse&)> func_response) {
        handler_response = std::move(func_response);
    }

    std::function<void(const RequestParams&)> handler_request;
    void register_request_handler(std::function<void(const RequestParams&)> func_request) {
        handler_request = std::move(func_request);
    }

    void setHttpConfig(const HttpConfig &httpConfig);
    void setCredentials(std::unique_ptr<Credentials> credentials);
    void setStreamLog(bool streamLog);
    void setFileLog(std::string filePath, bool fileLog);
    void setRegion(Region region);
    void setHttpClient(const HttpClient& httpClient);
    void setEndpoints(const std::vector<std::string> &endpoints);

    Region getRegion();
    bool getStreamLog();
    bool getFileLog();
    const std::vector<std::string> &getEndpoints() const;
    bool isCredentialsEmpty();

    void processRegionAuth();
    std::unique_ptr<HttpResponse> callApi(const std::string &method, const std::string &resourcePath,
        const std::map<std::string, std::string> &pathParams, const std::map<std::string, std::string> &queryParams,
        const std::map<std::string, std::string> &headerParams, const std::string &body, const HttpRequestDef& def);

    const std::string &getDerivedAuthServiceName() const;

    void setDerivedAuthServiceName(const std::string &derivedAuthServiceName);

    void setDerivedPredicate(const std::function<bool(const HuaweiCloud::Sdk::Core::RequestParams &)> &derivedPredicate);
private:
    std::string parseUrl(const RequestParams &requestParams);

    void addHeaderParams(RequestParams &requestParams, const std::map<std::string, std::string> &headerParams);

    static void parseEndPoint(const std::string &str, std::string &scheme, std::string &host);

    std::string buildEndpoint(const HttpRequestDef& ref, const std::map<std::string, std::string>& pathParams,
                              const std::map<std::string, std::string> &queryParams);

    std::string getFieldValueByName(std::string key, std::map<std::string, std::string>& pathParams,
                                    std::map<std::string, std::string> &queryParams);

    std::string getResourcePath(const std::string &uri, const std::map<std::string, std::string> &pathParams,
        const std::map<std::string, std::string> &updatePathParams);
    std::string getQueryParams(const std::map<std::string, std::string> &map);

    std::vector<std::string> endpoints_;
    std::unique_ptr<Credentials> credentials_;
    HttpConfig httpConfig_;
    bool streamLog_ = false;
    bool fileLog_ = false;
    std::string filePath_;
    Region region_;
    HttpClient httpClient_;
    std::string derivedAuthServiceName_;
    std::function<bool(const HuaweiCloud::Sdk::Core::RequestParams&)> derivedPredicate;
    std::atomic<uint32_t> endpointIndex;
};
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_CLIENT_H
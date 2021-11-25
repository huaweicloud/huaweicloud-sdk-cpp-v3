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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_IAMSERVICE_H
#define HUAWEICLOUD_SDK_CORE_AUTH_IAMSERVICE_H

#include <string>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/http/HttpClient.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
using namespace Http;
class HUAWEICLOUD_CORE_EXPORT IamService {
public:
    IamService(std::string endpoint, std::string ak_, std::string sk_);
    IamService(std::string ak_, std::string sk_);
    virtual ~IamService();

    virtual const std::string getProjectId(const std::string regionId);
    virtual const std::string getDomainId(const std::string regionId);

    std::unique_ptr<HttpClient> getHttpClient();

    void setHttpClient(std::unique_ptr<HttpClient> httpClient);
    void init();
private:
    std::string endpoint_;
    std::unique_ptr<HttpClient> httpClient_;
    std::string ak_;
    std::string sk_;

    std::function<void(const HttpResponse&)> handler_response;
    std::unique_ptr<HttpResponse> callApi(const std::string uri);

    void parseEndPoint(const std::string &str, std::string &scheme, std::string &host);

    const std::string KeystoneListProjectsUri = "/v3/projects";
    const std::string KeystoneListAuthDomainsUri = "/v3/auth/domains";
    const std::string DefaultIamEndpoint = "https://iam.myhuaweicloud.com";
};
}
}
}
}
#endif //HUAWEICLOUD_CPP_SDK_V3_IAMSERVICE_H

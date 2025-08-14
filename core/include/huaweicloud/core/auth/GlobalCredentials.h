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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_GLOBALCREDENTIALS_H
#define HUAWEICLOUD_SDK_CORE_AUTH_GLOBALCREDENTIALS_H
#include <memory>
#include <string>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/RequestParams.h>
#include <huaweicloud/core/auth/Credentials.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT GlobalCredentials : public Credentials {
public:
    GlobalCredentials();
    GlobalCredentials(std::string ak, std::string sk, std::string securityToken, std::string domainId);
    GlobalCredentials(std::string ak, std::string sk, std::string domainId);
    ~GlobalCredentials() override;

    const std::string &getAk() const;
    const std::string &getSk() const;
    const std::string &getSecurityToken() const;
    const std::string &getDomainId() const;
    const std::string &getIamEndpoint() const;

    GlobalCredentials &withAk(std::string ak);
    GlobalCredentials &withSk(std::string sk);
    GlobalCredentials &withSecurityToken(std::string securityToken);
    GlobalCredentials &withDomainId(std::string domainId);
    GlobalCredentials &withIamEndpoint(std::string iamEndpoint);
    GlobalCredentials &withIamService(std::unique_ptr<IamService> iamService);

    void regionInit() override;
    void processAuthParams(const std::string regionId) override;

protected:
    std::string processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams, HuaweiCloud::Sdk::Core::Http::HttpConfig &httpConfig, const std::string &region, const std::string &derivedAuthServiceName) override;
    const std::map<std::string, std::string> &getUpdatePathParams() override;

private:
    std::string ak_;
    std::string sk_;
    std::string securityToken_;
    std::string domainId_;
    std::string iamEndpoint_;
    std::unique_ptr<IamService> iamService;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_AUTH_GLOBALCREDENTIALS_H

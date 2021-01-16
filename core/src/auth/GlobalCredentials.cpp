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


#include <huaweicloud/core/auth/Signer.h>
#include <huaweicloud/core/auth/GlobalCredentials.h>

using namespace HuaweiCloud::Sdk::Core::Auth;

GlobalCredentials::GlobalCredentials() = default;

GlobalCredentials::~GlobalCredentials() = default;

GlobalCredentials::GlobalCredentials(std::string ak, std::string sk, std::string securityToken, std::string domainId)
    : ak_(std::move(ak)), sk_(std::move(sk)), securityToken_(std::move(securityToken)), domainId_(std::move(domainId))
{}

GlobalCredentials::GlobalCredentials(std::string ak, std::string sk, std::string domainId)
    : ak_(std::move(ak)), sk_(std::move(sk)), domainId_(std::move(domainId))
{}

const std::string &GlobalCredentials::getAk() const
{
    return ak_;
}

const std::string &GlobalCredentials::getSk() const
{
    return sk_;
}

const std::string &GlobalCredentials::getSecurityToken() const
{
    return securityToken_;
}

const std::string &GlobalCredentials::getDomainId() const
{
    return domainId_;
}

std::string GlobalCredentials::processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams)
{
    requestParams.addHeader("X-Domain-Id", domainId_);
    if (!securityToken_.empty()) {
        requestParams.addHeader("X-Security-Token", securityToken_);
    }

    Signer signer(ak_, sk_);
    return signer.createSignature(requestParams);
}

const std::map<std::string, std::string> &GlobalCredentials::getUpdatePathParams()
{
    static std::map<std::string, std::string> updatePathParams {{"domain_id", domainId_ }};
    return updatePathParams;
}

GlobalCredentials &GlobalCredentials::withSk(std::string sk)
{
    sk_ = std::move(sk);
    return *this;
}

GlobalCredentials &GlobalCredentials::withSecurityToken(std::string securityToken)
{
    securityToken_ = std::move(securityToken);
    return *this;
}

GlobalCredentials &GlobalCredentials::withDomainId(std::string domainId)
{
    domainId_ = std::move(domainId);
    return *this;
}

GlobalCredentials &GlobalCredentials::withAk(std::string ak)
{
    ak_ = std::move(ak);
    return *this;
}
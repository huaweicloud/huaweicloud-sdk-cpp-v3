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
#include <huaweicloud/core/auth/AuthCache.h>
#include <huaweicloud/core/auth/IamService.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <spdlog/spdlog.h>

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

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

std::string GlobalCredentials::processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams,
                                                  HuaweiCloud::Sdk::Core::Http::HttpConfig &httpConfig,
                                                  const std::string &region, const std::string &derivedAuthServiceName)
{
    requestParams.addHeader("X-Domain-Id", domainId_);
    if (!securityToken_.empty()) {
        requestParams.addHeader("X-Security-Token", securityToken_);
    }

    std::unique_ptr<Signer> signer = getAlgorithmSigner(httpConfig.getAlgorithm(), ak_, sk_);
    std::string signature = signer->createSignature(requestParams);
    return signature;
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

GlobalCredentials &GlobalCredentials::withIamEndpoint(std::string iamEndpoint) {
    iamEndpoint_ = std::move(iamEndpoint);
    return *this;
}

GlobalCredentials &GlobalCredentials::withIamService(std::unique_ptr<IamService> iamService_) {
    iamService = std::move(iamService_);
    return *this;
}

void GlobalCredentials::regionInit() {
    iamService = std::make_unique<IamService>(iamEndpoint_, ak_, sk_);
    iamService->init();
}

void GlobalCredentials::processAuthParams(const std::string regionId) {
    if (!this->domainId_.empty()) {
        spdlog::info("the domainId of the user exists");
        return;
    }
    std::string akWithName = this->getAk() + regionId;
    std::string domainId = AuthCache::getAuth(akWithName);
    if (!domainId.empty()) {
        spdlog::info("the domainId of the user exists!");
        this->domainId_ = domainId;
        return;
    }
    spdlog::info("begin get domainId from iam....");
    domainId = iamService->getDomainId(regionId);
    if (domainId.empty()) {
        spdlog::error("Failed to get domain id automatically, please input domainId!");
        throw SdkException("Failed to get domain id automatically, please input domain id when initializing GlobalCredentials");
    }
    this->domainId_ = domainId;
    AuthCache::setAuth(akWithName, this->domainId_);
    spdlog::info("get domainId from iam successfully!");
}
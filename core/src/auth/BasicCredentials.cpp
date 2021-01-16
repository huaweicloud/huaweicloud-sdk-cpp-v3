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
#include <huaweicloud/core/auth/BasicCredentials.h>

#include <utility>

using namespace HuaweiCloud::Sdk::Core::Auth;

BasicCredentials::BasicCredentials() = default;

BasicCredentials::~BasicCredentials() = default;

BasicCredentials::BasicCredentials(std::string ak, std::string sk, std::string securityToken, std::string projectId)
    : ak_(std::move(ak)), sk_(std::move(sk)), securityToken_(std::move(securityToken)), projectId_(std::move(projectId))
{}

BasicCredentials::BasicCredentials(std::string ak, std::string sk, std::string projectId)
    : ak_(std::move(ak)), sk_(std::move(sk)), projectId_(std::move(projectId))
{}

const std::string &BasicCredentials::getAk() const
{
    return ak_;
}

const std::string &BasicCredentials::getSk() const
{
    return sk_;
}

const std::string &BasicCredentials::getSecurityToken() const
{
    return securityToken_;
}

const std::string &BasicCredentials::getProjectId() const
{
    return projectId_;
}

std::string BasicCredentials::processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams)
{
    requestParams.addHeader("X-Project-Id", projectId_);
    if (!securityToken_.empty()) {
        requestParams.addHeader("X-Security-Token", securityToken_);
    }

    Signer signer(ak_, sk_);
    return signer.createSignature(requestParams);
}

const std::map<std::string, std::string> &BasicCredentials::getUpdatePathParams()
{
    static std::map<std::string, std::string> updatePathParams {{"project_id", projectId_ } };
    return updatePathParams;
}

BasicCredentials &BasicCredentials::withSk(std::string sk)
{
    sk_ = std::move(sk);
    return *this;
}

BasicCredentials &BasicCredentials::withSecurityToken(std::string securityToken)
{
    securityToken_ = std::move(securityToken);
    return *this;
}

BasicCredentials &BasicCredentials::withProjectId(std::string projectId)
{
    projectId_ = std::move(projectId);
    return *this;
}

BasicCredentials &BasicCredentials::withAk(std::string ak)
{
    ak_ = std::move(ak);
    return *this;
}
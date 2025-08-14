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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H
#define HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H

#include <map>
#include <memory>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/RequestParams.h>
#include <huaweicloud/core/auth/IamService.h>
#include <huaweicloud/core/auth/Signer.h>
#include <huaweicloud/core/auth/P256Sha256Signer.h>
#include <huaweicloud/core/auth/Sm2Sm3Signer.h>
#include <huaweicloud/core/auth/Sm3Signer.h>
#include <huaweicloud/core/utils/Constants.h>
#include "DerivedAKSKSigner.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT Credentials {
public:
    Credentials() = default;
    virtual ~Credentials() = default;

    virtual const std::map<std::string, std::string> &getUpdatePathParams() = 0;
    virtual std::string processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams, HuaweiCloud::Sdk::Core::Http::HttpConfig &httpConfig, const std::string &region, const std::string &derivedAuthServiceName) = 0;
	virtual void processAuthParams(const std::string regionId) = 0;
    virtual void regionInit() = 0;

    std::unique_ptr<Signer> getAlgorithmSigner(const std::string algorithm, const std::string &appKey, const std::string &appSecret,
                                               bool isDerived, const std::string &region, const std::string &derivedAuthServiceName) {
        spdlog::info("getAlgorithmSigner : algorithm {}", algorithm);
        if (algorithm == Constants::sdk_hmac_sha256 && isDerived) {
            return std::make_unique<DerivedAKSKSigner>(appKey, appSecret, region, derivedAuthServiceName);
        } else if (algorithm == Constants::sdk_hmac_sha256) {
            return std::make_unique<Signer>(appKey, appSecret);
        } else if (algorithm == Constants::sdk_ecdsa_p256_sha256) {
            return std::make_unique<P256Sha256Signer>(appKey, appSecret);
        } else if (algorithm == Constants::sdk_hmac_sm3) {
            return std::make_unique<Sm3Signer>(appKey, appSecret);
        } else if (algorithm == Constants::sdk_sm2_sm3) {
            return std::make_unique<Sm2Sm3Signer>(appKey, appSecret);
        }
        return std::make_unique<Signer>(appKey, appSecret);
    };
    std::unique_ptr<Signer> getAlgorithmSigner(const std::string algorithm, const std::string &appKey, const std::string &appSecret) {
        return getAlgorithmSigner(algorithm, appKey, appSecret, false, "", "");
    }
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H

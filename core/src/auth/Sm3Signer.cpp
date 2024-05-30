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

#include <huaweicloud/core/auth/Sm3Signer.h>
#include <huaweicloud/core/utils/Sm3Hasher.h>
#include <spdlog/spdlog.h>

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Utils;

Sm3Signer::Sm3Signer(const std::string &appKey, const std::string &appSecret) : Signer(appKey, appSecret)
{
    algorithm_ = Constants::sdk_hmac_sm3;
    contentHeader_ = Constants::x_sdk_content_sm3;
    hasher_ = new Sm3Hasher();
}

Sm3Signer::Sm3Signer() : Signer()
{
    hasher_ = new Sm3Hasher();
}

Sm3Signer::~Sm3Signer()= default;

/*
 * π˙√‹SM3À„∑®HMACº∆À„
 */
std::string Sm3Signer::getSignature(const std::string &stringToSign)
{
    const char *signingKey = const_cast<char *>(appSecret_.c_str());
    unsigned int digestLength = SM3_DIGEST_LENGTH;
    std::vector<unsigned char> signatureChar = hasher_->hmac(signingKey, strlen(signingKey), stringToSign);
    std::string signature = hasher_->hexEncode(signatureChar.data(), digestLength);
    return signature;
}
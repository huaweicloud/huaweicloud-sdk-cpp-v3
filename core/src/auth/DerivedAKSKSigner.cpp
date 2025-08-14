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


#include <huaweicloud/core/auth/DerivedAKSKSigner.h>

#include <sstream>
#include <iterator>
#include <cassert>
#include <cstring>

#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/utils/Constants.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <openssl/sha.h>
#include <spdlog/spdlog.h>

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Exception;

DerivedAKSKSigner::DerivedAKSKSigner(const std::string &appKey, const std::string &appSecret) : Signer(appKey, appSecret)
{
    appKey_ = appKey;
    appSecret_ = appSecret;
    algorithm_ = Constants::sdk_hmac_sha256;
    contentHeader_ = Constants::x_sdk_content_sha256;
    hkdf_ = HKDF();
    hasher_ = new Sha256Hasher();
}

DerivedAKSKSigner::DerivedAKSKSigner(const std::string &appKey, const std::string &appSecret, const std::string &region, const std::string &derivedAuthServiceName)
{
    appKey_ = appKey;
    appSecret_ = appSecret;
    algorithm_ = Constants::sdk_hmac_sha256;
    contentHeader_ = Constants::x_sdk_content_sha256;
    hkdf_ = HKDF();
    hasher_ = new Sha256Hasher();
    region_ = region;
    derivedAuthServiceName_ = derivedAuthServiceName;
}

DerivedAKSKSigner::DerivedAKSKSigner() : Signer()
{
    hasher_ = new Sha256Hasher();
}

/*
 * Create signature in one stroke
 *
 */
std::string DerivedAKSKSigner::createSignature(HuaweiCloud::Sdk::Core::RequestParams &request)
{
    if (region_.empty()) {
        throw SdkException("region is empty.");
    }
    if (derivedAuthServiceName_.empty()) {
        throw SdkException("derivedAuthServiceName is empty.");
    }

    std::string datetime = request.initHeaders();
    std::string signedHeaders = getSignedHeaders(request.getHeaders());

    std::string canonRequest = getCanonicalRequest(signedHeaders, request.getMethod(), request.getUri(),
                                                   request.getQueryParams(), request.getHeaders(), request.getBody());

    std::string dateStr = datetime.substr(0, 8);
    std::string info = dateStr + "/" + region_ + "/" + derivedAuthServiceName_;
    std::string derkey = hkdf_.getDerKeySHA256(appKey_, appSecret_, info);
    std::string stringToSign = getStringToSign(datetime, canonRequest, info);
    derkey = toLowerCaseStr(derkey);
    std::string signature = getSignature(stringToSign, derkey);
    std::string key = "Authorization";
    std::string value =
            "V11-HMAC-SHA256 Credential=" + appKey_ + "/" +info + ", SignedHeaders=" + signedHeaders + ", Signature=" + signature;
    request.addHeader(key, value);
    return signature;
}

std::string DerivedAKSKSigner::getStringToSign(const std::string &datetime, const std::string &canonicalRequest, const std::string &info)
{
    return "V11-HMAC-SHA256\n" + datetime + "\n" + info + "\n"+ getHexHash(canonicalRequest);
}

std::string DerivedAKSKSigner::getSignature(const std::string &stringToSign, std::string &derivedKey)
{
    const char *signingKey = const_cast<char *>(derivedKey.c_str());
    unsigned int digestLength = SHA256_DIGEST_LENGTH;
    std::vector<unsigned char> signatureChar = hasher_->hmac(signingKey, strlen(signingKey), stringToSign);
    std::string signature = hasher_->hexEncode(signatureChar.data(), digestLength);
    return signature;
}
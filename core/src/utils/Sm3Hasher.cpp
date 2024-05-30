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

#include "huaweicloud/core/utils/Sm3Hasher.h"
#include <cstring>

#include <openssl/hmac.h>
#include <openssl/evp.h>
#include <sstream>

#include <spdlog/spdlog.h>


using namespace HuaweiCloud::Sdk::Core::Utils;

Sm3Hasher::Sm3Hasher() = default;

/*
 * SM3 π˛œ£º∆À„
 */
int Sm3Hasher::hash(const std::string &str, unsigned char *hash)
{
    std::vector<char> cBuffer(str.length() + 1);
    std::copy(str.data(), str.data() + str.length() + 1, cBuffer.data());

    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    unsigned int mdLen;

    if (EVP_DigestInit_ex(ctx, EVP_sm3(), nullptr) == 0) {
        spdlog::error("Failed to DigestInit");
        EVP_MD_CTX_free(ctx);
        return 0;
    }

    if (EVP_DigestUpdate(ctx, cBuffer.data(), str.length()) == 0) {
        spdlog::error("Failed to DigestUpdate");
        EVP_MD_CTX_free(ctx);
        return 0;
    }

    if (EVP_DigestFinal_ex(ctx, hash, &mdLen) == 0) {
        spdlog::error("Failed to DigestFinal");
        EVP_MD_CTX_free(ctx);
        return 0;
    }

    EVP_MD_CTX_free(ctx);
    return SM3_DIGEST_LENGTH;
}

/*
 * SM3 HMACº∆À„
 */
std::vector<unsigned char> Sm3Hasher::hmac(const void *key, unsigned int keyLength, const std::string &data)
{
    auto charDataLength = data.length() + 1;
    std::vector<char> charData(charDataLength);
    std::copy(data.data(), data.data() + charDataLength, charData.data());

    std::vector<unsigned char> md(SM3_DIGEST_LENGTH);
    unsigned int mdLen;
    HMAC(EVP_sm3(), key, static_cast<int>(keyLength), reinterpret_cast<unsigned char*>(charData.data()),
         strlen(charData.data()), md.data(), &mdLen);
    return md;
}
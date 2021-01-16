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


#include <huaweicloud/core/utils/Hasher.h>

#include <cstring>
#include <cassert>

#include <openssl/sha.h>
#include <openssl/hmac.h>
#include <sstream>

#include <huaweicloud/core/utils/Utils.h>

using namespace HuaweiCloud::Sdk::Core::Utils;

Hasher::Hasher() = default;

std::string Hasher::hexEncode(const unsigned char *md, size_t length) const
{
    std::ostringstream ss;
    ss << std::setfill('0') << std::hex;
    for (size_t i = 0; i < length; i++) {
        ss << std::setw(2) << static_cast<int>(md[i]);
    }
    return ss.str();
}


int Hasher::hashSHA256(const std::string &str, unsigned char *hash, int i)
{
    // Hash the input string
    std::vector<char> cBuffer(str.length() + 1);
    std::copy(str.data(), str.data() + str.length() + 1, cBuffer.data());

    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, cBuffer.data(), str.length());
    SHA256_Final(hash, &sha256);

    return SHA256_DIGEST_LENGTH;
}

std::vector<unsigned char> Hasher::hmac(const void *key, unsigned int keyLength, const std::string &data)
{
    const EVP_MD *engine = EVP_sha256();
    unsigned int maxDigestLength = SHA256_DIGEST_LENGTH;

    unsigned int mdLength;

    std::vector<char> charData(data.length() + 1);
    std::copy(data.data(), data.data() + data.length() + 1, charData.data());

    std::vector<unsigned char> md(maxDigestLength);
    HMAC(engine, key, static_cast<int>(keyLength), reinterpret_cast<unsigned char*>(charData.data()),
            strlen(charData.data()), md.data(), &mdLength);
    return md;
}

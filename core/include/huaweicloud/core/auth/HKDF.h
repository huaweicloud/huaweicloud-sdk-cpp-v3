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

#ifndef  HUAWEICLOUD_SDK_CORE_AUTH_HKDF_H

#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Header.h>
#include <huaweicloud/core/utils/Sha256Hasher.h>
#include <huaweicloud/core/RequestParams.h>
#include <openssl/types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT HKDF {
public:
    HKDF();
    std::string getDerKeySHA256(std::string &accessKey, std::string &secretKey, std::string &info);
    int getHashLen(const std::string& hmac_algorithm) const;
    std::vector<unsigned char> extract(const std::vector<unsigned char>& ikm, std::vector<unsigned char>& salt, const std::string& hmacAlgorithm) const;
    static std::vector<unsigned char> expand(std::vector<unsigned char>& prk,std::vector<unsigned char>& info);
    static std::vector<unsigned char> expandFirst(const std::vector<unsigned char>& tmpKey,const std::vector<unsigned char>& info);
    static std::string toHex(const std::string& input);

    static std::vector<unsigned char> hmacSha256(const std::vector<unsigned char>& key,
                                           const std::vector<unsigned char>& data);
};
}
}
}
}
// 定义常量
static const std::string HMAC_SHA1 = "sha1";
static const std::string HMAC_SHA256 = "sha256";
static const std::string HMAC_ALGORITHM = HMAC_SHA256;
static const std::string UTF_8 = "utf-8";
static const int HMAC_SHA256_LENGTH = 32;
static const int HMAC_SHA1_LENGTH = 20;
#endif //HUAWEICLOUD_SDK_CORE_AUTH_HKDF_H

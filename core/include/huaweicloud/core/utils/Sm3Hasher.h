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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_SM3HASHER_H
#define HUAWEICLOUD_SDK_CORE_UTILS_SM3HASHER_H

#include <string>
#include <vector>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Constants.h>
#include <huaweicloud/core/utils/AbstractHasher.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
constexpr int SM3_DIGEST_LENGTH = 32;

// 国密SM3算法哈希和签名实现
class HUAWEICLOUD_CORE_EXPORT Sm3Hasher : public AbstractHasher {
public:
    Sm3Hasher();

    // SM3 哈希计算
    int hash(const std::string &str, unsigned char *hash) override;

    // SM3 HMAC计算
    std::vector<unsigned char> hmac(const void *key, unsigned int keyLength, const std::string &data) override;
};
}
}
}
}



#endif //HUAWEICLOUD_SDK_CORE_UTILS_SM3HASHER_H

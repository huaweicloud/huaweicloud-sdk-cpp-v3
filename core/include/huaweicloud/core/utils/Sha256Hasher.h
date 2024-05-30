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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_SHA256HASHER_H
#define HUAWEICLOUD_SDK_CORE_UTILS_SHA256HASHER_H
#include <string>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Constants.h>
#include <vector>
#include "huaweicloud/core/utils/AbstractHasher.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
// SHA256算法哈希和签名实现
class HUAWEICLOUD_CORE_EXPORT Sha256Hasher : public AbstractHasher {
public:
    Sha256Hasher();

    // SHA256 哈希计算
    int hash(const std::string &str, unsigned char *hash) override;

    // SHA256 HMAC计算
    std::vector<unsigned char> hmac(const void *key, unsigned int keyLength, const std::string &data) override;
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_SHA256HASHER_H
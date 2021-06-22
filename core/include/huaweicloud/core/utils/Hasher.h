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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_HASHER_H
#define HUAWEICLOUD_SDK_CORE_UTILS_HASHER_H
#include <string>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Constants.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
class HUAWEICLOUD_CORE_EXPORT Hasher {
public:
    Hasher();
    std::string hexEncode(const unsigned char *md, size_t length) const;
    int hashSHA256(const std::string &str, unsigned char *hash, int i);
    std::vector<unsigned char> hmac(const void *key, unsigned int keyLength, const std::string &data);
    int hashstring(const char* strTohash);
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_HASHER_H

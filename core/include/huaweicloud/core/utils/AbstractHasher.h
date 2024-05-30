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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_ABSTRACTHASHER_H
#define HUAWEICLOUD_SDK_CORE_UTILS_ABSTRACTHASHER_H
#include <string>
#include "huaweicloud/core/CoreExport.h"
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
/*
 * 抽象类定义, 提供两个虚方法, hash和hmac, 继承的子类根据自身不同的算法去实现
 * 提供两个工具方法, 字符到十六进制的string的互相转换
*/
class HUAWEICLOUD_CORE_EXPORT AbstractHasher {
public:
    virtual ~AbstractHasher() = default;

    // 将字符转换为十六进制的string表示
    std::string hexEncode(const unsigned char *md, size_t length) const;

    // 将十六进制的string转换为字符表示
    int hexStringToCharArray(std::string hexString, unsigned char* charArray) const;

    // 哈希计算
    virtual int hash(const std::string &str, unsigned char *hash) = 0;

    // HMAC计算
    virtual std::vector<unsigned char> hmac(const void *key, unsigned int keyLength, const std::string &data) = 0;
};
}
}
}
}




#endif //HUAWEICLOUD_SDK_CORE_UTILS_ABSTRACTHASHER_H

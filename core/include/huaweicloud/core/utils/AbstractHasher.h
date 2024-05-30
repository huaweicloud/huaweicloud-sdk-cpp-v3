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
 * �����ඨ��, �ṩ�����鷽��, hash��hmac, �̳е������������ͬ���㷨ȥʵ��
 * �ṩ�������߷���, �ַ���ʮ�����Ƶ�string�Ļ���ת��
*/
class HUAWEICLOUD_CORE_EXPORT AbstractHasher {
public:
    virtual ~AbstractHasher() = default;

    // ���ַ�ת��Ϊʮ�����Ƶ�string��ʾ
    std::string hexEncode(const unsigned char *md, size_t length) const;

    // ��ʮ�����Ƶ�stringת��Ϊ�ַ���ʾ
    int hexStringToCharArray(std::string hexString, unsigned char* charArray) const;

    // ��ϣ����
    virtual int hash(const std::string &str, unsigned char *hash) = 0;

    // HMAC����
    virtual std::vector<unsigned char> hmac(const void *key, unsigned int keyLength, const std::string &data) = 0;
};
}
}
}
}




#endif //HUAWEICLOUD_SDK_CORE_UTILS_ABSTRACTHASHER_H

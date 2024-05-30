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

#include <sstream>
#include <iomanip>
#include "huaweicloud/core/utils/AbstractHasher.h"

using namespace HuaweiCloud::Sdk::Core::Utils;

// ���ַ�����ת��Ϊʮ�������ַ���
std::string AbstractHasher::hexEncode(const unsigned char *md, size_t length) const
{
    std::ostringstream ss;
    ss << std::setfill('0') << std::hex;
    for (size_t i = 0; i < length; i++) {
        ss << std::setw(2) << static_cast<int>(md[i]);
    }
    return ss.str();
}

// ��ʮ�������ַ���ת��Ϊ�ַ�����
int AbstractHasher::hexStringToCharArray(std::string hexString, unsigned char* charArray) const
{
    // �ַ����е�ÿ�����ַ�ת��Ϊһ���ֽڣ��洢���ַ�������
    int length = hexString.length() / 2;
    for (int i = 0; i < length; i++) {
        std::string byteString = hexString.substr(i * 2, 2);
        // ת��Ϊ16���Ʊ�ʾ��������ת�����޷��ŵ��ַ�
        charArray[i] = (unsigned char)std::stoi(byteString, nullptr, 16);
    }
    return length;
}
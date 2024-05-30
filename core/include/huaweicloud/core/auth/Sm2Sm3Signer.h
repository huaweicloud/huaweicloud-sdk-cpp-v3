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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_SM2SM3SIGNER_H
#define HUAWEICLOUD_SDK_CORE_AUTH_SM2SM3SIGNER_H

#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/auth/Signer.h>
#include <openssl/ec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
constexpr int SM2_PUBKEY_LENGTH = 32;

// ����SM2��Բ��������ǩ��ʵ��, ��ϣ�㷨ʹ��SM3
class HUAWEICLOUD_CORE_EXPORT Sm2Sm3Signer : public Signer {
public:
    Sm2Sm3Signer();

    Sm2Sm3Signer(const std::string &appKey, const std::string &appSecret);

    ~Sm2Sm3Signer() override;

    // ��ȡ����SM2����ǩ�����
    std::string getSignature(const std::string &stringToSign) override;

    // ����SM2�㷨�ж�Zֵ����
    void sm3DigestZ(std::vector<unsigned char> pubKey, unsigned char *zDigest);

    // ����SM2�㷨�ж���Ϣֵ��SM3��ϣ����
    void sm3DigestWithMessage(const unsigned char *message, size_t messageLen, std::vector<unsigned char> pubKey,
                              unsigned char *digest);

    // ����SM2�㷨����ǩ��
    ECDSA_SIG * sm2SignData(const unsigned char *message, size_t messageLen, std::vector<unsigned char> pubKey,
                            BIGNUM *priKey);

    // ����SM2�㷨��֤ǩ��
    bool sm2VerifySig(const std::string &msg, std::string signature);
};
}
}
}
}


#endif //HUAWEICLOUD_SDK_CORE_AUTH_SM2SM3SIGNER_H
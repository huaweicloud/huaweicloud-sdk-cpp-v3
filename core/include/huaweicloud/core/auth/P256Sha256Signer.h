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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_P256SHA256SIGNER_H
#define HUAWEICLOUD_SDK_CORE_AUTH_P256SHA256SIGNER_H

#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/auth/Signer.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {

// 获取国标P-256数字签名实现
class HUAWEICLOUD_CORE_EXPORT P256Sha256Signer : public Signer {
public:
    P256Sha256Signer();

    P256Sha256Signer(const std::string &appKey, const std::string &appSecret);

    ~P256Sha256Signer() override;

    // 获取国标P-256数字签名入口
    std::string getSignature(const std::string &stringToSign) override;

    // 国标P-256算法验证签名
    bool p256Sha256DoVerify(std::string signature, const std::string &stringToSign);
};
}
}
}
}


#endif //HUAWEICLOUD_SDK_CORE_AUTH_P256SHA256SIGNER_H

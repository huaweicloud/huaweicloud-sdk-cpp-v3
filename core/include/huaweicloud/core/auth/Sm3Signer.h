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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_SM3SIGNER_H
#define HUAWEICLOUD_SDK_CORE_AUTH_SM3SIGNER_H

#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/auth/Signer.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {

// 国密SM3算法签名实现
class HUAWEICLOUD_CORE_EXPORT Sm3Signer : public Signer {
public:
    Sm3Signer();

    Sm3Signer(const std::string &appKey, const std::string &appSecret);

    ~Sm3Signer() override;

    // 国密SM3算法签名计算
    std::string getSignature(const std::string &stringToSign) override;
};
}
}
}
}



#endif //HUAWEICLOUD_SDK_CORE_AUTH_SM3SIGNER_H

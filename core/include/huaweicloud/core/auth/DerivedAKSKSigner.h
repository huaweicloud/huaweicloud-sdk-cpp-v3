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

#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/auth/Signer.h>

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_DERIVEDAKSKSIGNER_H
#define HUAWEICLOUD_SDK_CORE_AUTH_DERIVEDAKSKSIGNER_H

namespace HuaweiCloud {
namespace Sdk  {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT DerivedAKSKSigner : public Signer {
public:
    DerivedAKSKSigner();

    DerivedAKSKSigner(const std::string &appKey, const std::string &appSecret);

    DerivedAKSKSigner(const std::string &appKey, const std::string &appSecret, const std::string &region, const std::string &derivedAuthServiceName);

    /* Task 2:　Get String to Sign */
    std::string getStringToSign(const std::string &date, const std::string &canonicalRequest,  const std::string &info);

    /* Task 3: Calculate the Signature */
    std::string getSignature(const std::string &stringToSign, std::string &derivedKey);

    // One stroke create signature
    std::string createSignature(HuaweiCloud::Sdk::Core::RequestParams &request) final;
};
}
}
}
}



#endif //HUAWEICLOUD_SDK_CORE_AUTH_DERIVEDAKSKSIGNER_H

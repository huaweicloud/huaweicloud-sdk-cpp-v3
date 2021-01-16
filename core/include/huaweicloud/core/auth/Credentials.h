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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H
#define HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H

#include <map>
#include <memory>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/RequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT Credentials {
public:
    Credentials() = default;
    virtual ~Credentials() = default;

    virtual const std::map<std::string, std::string> &getUpdatePathParams() = 0;
    virtual std::string processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams) = 0;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_AUTH_CREDENTIALS_H

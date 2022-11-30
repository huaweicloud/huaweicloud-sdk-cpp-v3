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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_CONSTANTS_CONSTANTS_H
#define HUAWEICLOUD_SDK_CORE_UTILS_CONSTANTS_CONSTANTS_H
#include <string>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
namespace Constants {
static const std::string sdk_signing_algorithm = "SDK-HMAC-SHA256";
static const std::string dateFormat = "X-Sdk-Date";
static const std::string host = "Host";
}
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_CONSTANTS_CONSTANTS_H
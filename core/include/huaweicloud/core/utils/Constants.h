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
#include <huaweicloud/core/RequestParams.h>
#include <regex>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
namespace Constants {
static const std::string sdk_hmac_sha256 = "SDK-HMAC-SHA256";
static const std::string sdk_hmac_sm3 = "SDK-HMAC-SM3";
static const std::string sdk_ecdsa_p256_sha256 = "SDK-ECDSA-P256-SHA256";
static const std::string sdk_sm2_sm3 = "SDK-SM2-SM3";
static const std::string x_sdk_content_sha256 = "X-Sdk-Content-Sha256";
static const std::string x_sdk_content_sm3 = "X-Sdk-Content-Sm3";
static const std::string dateFormat = "X-Sdk-Date";
static const std::string host = "Host";
static const std::function<bool(const HuaweiCloud::Sdk::Core::RequestParams&)> DEFAULT_DERIVED_PREDICATE = [](const HuaweiCloud::Sdk::Core::RequestParams& requestParams) {
        std::string endpoint = requestParams.getHost();
        std::string https_scheme = "https://";
        endpoint = endpoint.substr(0, endpoint.find(https_scheme)) + endpoint.substr(endpoint.find(https_scheme) + https_scheme.length());
        std::regex re("(^[a-z][a-z0-9-]+(\.[a-z]{2,}-[a-z]+-\d{1,2})?\.(my)?(huaweicloud|myhwclouds).(com|cn))");
        return !std::regex_match(endpoint, re);
};
}
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_CONSTANTS_CONSTANTS_H
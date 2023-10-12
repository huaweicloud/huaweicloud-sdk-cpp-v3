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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_UTILS_H
#define HUAWEICLOUD_SDK_CORE_UTILS_UTILS_H
#include <string>
#include <ctime>
#include <locale>
#include <cpprest/http_client.h>
#include <cctype>
#include <iomanip>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
std::string trim(std::string str);
std::string toLowerCaseStr(std::string str);
std::string toISO8601Time(const time_t &time);
HUAWEICLOUD_CORE_EXPORT std::string uriDecode(std::string &str);
HUAWEICLOUD_CORE_EXPORT std::string uriEncode(std::string &str, bool path = false);
unsigned char toHex(unsigned char x);
std::string dealSwUsual(char ch, std::string encodedStr);
std::string dealSwQuotedSecond(char ch, std::string encodedStr, char decoded);
HUAWEICLOUD_CORE_EXPORT std::string getContentType(const std::string &contentType, bool &isJson, bool &isMultiPart, bool &isBson);
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_UTILS_H
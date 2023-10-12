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

#include <huaweicloud/core/bson/Decimal128.h>
#include <huaweicloud/core/exception/SdkException.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

Decimal128::Decimal128(const std::string &str) {
    if (!bson_decimal128_from_string(str.data(), &value_)) {
        throw SdkException("Invalid decimal128.");
    }
}

std::string Decimal128::toString() const {
    char str[BSON_DECIMAL128_STRING];
    bson_decimal128_to_string(&value_, str);
    return {str};
}

bool operator==(const Decimal128 &lhs, const Decimal128 &rhs) {
    return lhs.value_.high == rhs.value_.high && lhs.value_.low == rhs.value_.low;
}

bool operator!=(const Decimal128 &lhs, const Decimal128 &rhs) {
    return !(lhs == rhs);
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud


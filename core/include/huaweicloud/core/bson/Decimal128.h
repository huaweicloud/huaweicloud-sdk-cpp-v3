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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_DECIMAL128_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_DECIMAL128_H

#include <cstdint>
#include <string>
#include <bson.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

class Decimal128 {
public:
    Decimal128() = default;

    explicit Decimal128(const std::string &str);

    Decimal128(uint64_t high, uint64_t low) noexcept {
        value_.high = high;
        value_.low = low;
    }

    explicit operator const bson_decimal128_t *() const {
        return &value_;
    }

    std::string toString() const;

    uint64_t high() const {
        return value_.high;
    }

    uint64_t low() const {
        return value_.low;
    }

    friend bool operator==(const Decimal128 &lhs, const Decimal128 &rhs);

    friend bool operator!=(const Decimal128 &lhs, const Decimal128 &rhs);

    friend class LibBsonEncoder;
private:
    bson_decimal128_t value_{0, 0};
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_DECIMAL128_H


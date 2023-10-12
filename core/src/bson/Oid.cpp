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

#include <huaweicloud/core/bson/Oid.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

Oid::Oid() {
    bson_oid_init(&value_, nullptr);
}

Oid::Oid(const std::uint8_t *bytes) {
    bson_oid_init_from_data(&value_, (const uint8_t *) bytes);
}

bool Oid::operator==(const Oid &other) const {
    return bson_oid_compare(&value_, &other.value_) == 0;
}

bool Oid::operator!=(const Oid &other) const {
    return !operator==(other);
}

uint32_t Oid::hash() const {
    return bson_oid_hash(&value_);
}

std::time_t Oid::getTime() const {
    return bson_oid_get_time_t(&value_);
}

std::string Oid::toString() const {
    char str[25];

    bson_oid_to_string(&value_, str);

    return std::string(str);
}

const char *Oid::bytes() const {
    return (const char *) value_.bytes;
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud


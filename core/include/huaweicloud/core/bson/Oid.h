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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_OID_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_OID_H

#include <string>
#include <ctime>

#include <bson.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * ObjectId is a 12-byte BSON type, constructed using:
 *  - a 4-byte value representing the seconds since the Unix epoch (in Big Endian).
 *  - a 5-byte random value.
 *  - a 3-byte counter (Big Endian), starting with a random value.
 */
class Oid {
public:
    Oid();

    explicit Oid(const std::uint8_t *bytes);

    explicit operator const bson_oid_t *() const {
        return &value_;
    }

    bool operator==(const Oid &other) const;

    bool operator!=(const Oid &other) const;

    uint32_t hash() const;

    std::time_t getTime() const;

    std::string toString() const;

    const char *bytes() const;

    friend class LibBsonEncoder;

private:
    bson_oid_t value_{};
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_OID_H

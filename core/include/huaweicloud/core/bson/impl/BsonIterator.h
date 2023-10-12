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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONITERATOR_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONITERATOR_H

#include <string>

#include <huaweicloud/core/bson/Types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * Iterator for iterating bson object, and has not own bson object.
 */
class BsonIterator {
public:
    virtual ~BsonIterator() = default;

    virtual bool operator==(const BsonIterator &other) const {
        return true;
    }

    virtual bool operator!=(const BsonIterator &other) const {
        return true;
    }

    virtual bool valid() const = 0;

    // advanced to next element
    virtual bool next() = 0;

    // get key
    virtual std::string key() = 0;

    // get value
    virtual Element value() = 0;

    // find by key
    virtual bool find(const std::string &key) = 0;

    // write bool
    virtual void setValue(const BsonBool &value) = 0;

    // write decimal128
    virtual void setValue(const BsonDecimal128 &value) = 0;

    // write double
    virtual void setValue(const BsonDouble &value) = 0;

    // write int32
    virtual void setValue(const BsonInt32 &value) = 0;

    // write int64
    virtual void setValue(const BsonInt64 &value) = 0;
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONITERATOR_H

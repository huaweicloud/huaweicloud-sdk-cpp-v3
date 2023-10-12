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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSONITERATOR_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSONITERATOR_H

#include <huaweicloud/core/bson/Types.h>
#include <huaweicloud/core/bson/impl/BsonIterator.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * Implemented BsonIterator with libbson library.
 */
class LibBsonIterator : public BsonIterator {
public:
    explicit LibBsonIterator(const Document &doc);

    ~LibBsonIterator() override = default;

    bool operator==(const BsonIterator &other) const override;

    bool operator!=(const BsonIterator &other) const override;

    bool valid() const override;

    bool next() override;

    std::string key() override;

    Element value() override;

    bool find(const std::string &key) override;

    void setValue(const BsonBool &value) override;

    void setValue(const BsonDecimal128 &value) override;

    void setValue(const BsonDouble &value) override;

    void setValue(const BsonInt32 &value) override;

    void setValue(const BsonInt64 &value) override;

private:
    bson_iter_t iter_{};
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSONITERATOR_H
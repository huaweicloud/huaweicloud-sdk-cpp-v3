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

#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/core/bson/impl/LibBsonIterator.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

#define THROW_EXCEPTION_IF_TYPE_ERROR(TYPE)                 \
    if (!(BSON_ITER_HOLDS_##TYPE(&iter_))) {                \
        throw SdkException("Bson value type is not "#TYPE); \
    }

LibBsonIterator::LibBsonIterator(const Document &doc) {
    if (!bson_iter_init(&iter_, doc.value_)) {
        throw SdkException("Init iter failed.");
    }
}

bool LibBsonIterator::operator==(const BsonIterator &other) const {
    const auto &otherIter = reinterpret_cast<const LibBsonIterator &>(other);
    return iter_.raw == otherIter.iter_.raw &&
           iter_.off == otherIter.iter_.off;
}

bool LibBsonIterator::operator!=(const BsonIterator &other) const {
    return !(*this == other);
}

bool LibBsonIterator::valid() const {
    return iter_.raw != nullptr;
}

bool LibBsonIterator::next() {
    return bson_iter_next(&iter_);
}

std::string LibBsonIterator::key() {
    return std::string{bson_iter_key(&iter_)};
}

Element LibBsonIterator::value() {
    return Element(bson_iter_key(&iter_), bson_iter_value(&iter_));
}

bool LibBsonIterator::find(const std::string &key) {
    return bson_iter_find(&iter_, key.data());
}

void LibBsonIterator::setValue(const BsonBool &value) {
    THROW_EXCEPTION_IF_TYPE_ERROR(BOOL)
    bson_iter_overwrite_bool(&iter_, value.value_);
}

void LibBsonIterator::setValue(const BsonDecimal128 &value) {
    THROW_EXCEPTION_IF_TYPE_ERROR(DECIMAL128)
    bson_iter_overwrite_decimal128(&iter_,
                                   const_cast<bson_decimal128_t *>(value.value_.operator const bson_decimal128_t *()));
}

void LibBsonIterator::setValue(const BsonDouble &value) {
    THROW_EXCEPTION_IF_TYPE_ERROR(DOUBLE)
    bson_iter_overwrite_double(&iter_, value.value_);
}

void LibBsonIterator::setValue(const BsonInt32 &value) {
    THROW_EXCEPTION_IF_TYPE_ERROR(INT32)
    bson_iter_overwrite_int32(&iter_, value.value_);
}

void LibBsonIterator::setValue(const BsonInt64 &value) {
    THROW_EXCEPTION_IF_TYPE_ERROR(INT64)
    bson_iter_overwrite_int64(&iter_, value.value_);
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud
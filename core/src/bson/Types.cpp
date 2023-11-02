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

#include <huaweicloud/core/bson/Types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

#define THROW_EXCEPTION_IF_TYPE_ERROR(TYPE)                 \
    if (!valid()) {                                          \
        throw SdkException("Bson value is empty");          \
    }                                                       \
    if (static_cast<BsonType>(raw_.value_type) != TYPE) {  \
        throw SdkException("Bson value type is not "#TYPE); \
    }

std::map<int, std::function<bool(const bson_value_t&, const Element&)>> Element::condition_map_ = {
    {BSON_TYPE_EOD, [](const bson_value_t &raw, const Element &other) {
        return true;
    }},
    {BSON_TYPE_DOUBLE, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_double == other.raw_.value.v_double;
    }},
    {BSON_TYPE_UTF8, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_utf8.len == other.raw_.value.v_utf8.len
               && 0 == memcmp(raw.value.v_utf8.str, other.raw_.value.v_utf8.str, raw.value.v_utf8.len);
    }},
    {BSON_TYPE_DOCUMENT, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_doc.data_len == other.raw_.value.v_doc.data_len
               && 0 == memcmp(raw.value.v_doc.data, other.raw_.value.v_doc.data, raw.value.v_doc.data_len);
    }},
    {BSON_TYPE_ARRAY, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_doc.data_len == other.raw_.value.v_doc.data_len
               && 0 == memcmp(raw.value.v_doc.data, other.raw_.value.v_doc.data, raw.value.v_doc.data_len);
    }},
    {BSON_TYPE_BINARY, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_binary.subtype == other.raw_.value.v_binary.subtype
               && raw.value.v_binary.data_len == other.raw_.value.v_binary.data_len
               && 0 == memcmp(raw.value.v_binary.data, other.raw_.value.v_binary.data,
                              raw.value.v_binary.data_len);
    }},
    {BSON_TYPE_EOD, [](const bson_value_t &raw, const Element &other) {
        return true;
    }},
    {BSON_TYPE_OID, [](const bson_value_t &raw, const Element &other) {
        return 0 == bson_oid_compare(&raw.value.v_oid, &other.raw_.value.v_oid);
    }},
    {BSON_TYPE_BOOL, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_bool == other.raw_.value.v_bool;
    }},
    {BSON_TYPE_DATE_TIME, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_datetime == other.raw_.value.v_datetime;
    }},
    {BSON_TYPE_NULL, [](const bson_value_t &raw, const Element &other) {
        return true;
    }},
    {BSON_TYPE_REGEX, [](const bson_value_t &raw, const Element &other) {
        return 0 == strcmp(raw.value.v_regex.regex, other.raw_.value.v_regex.regex)
               && 0 == strcmp(raw.value.v_regex.options, other.raw_.value.v_regex.options);
    }},
    {BSON_TYPE_DBPOINTER, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_dbpointer.collection_len == other.raw_.value.v_dbpointer.collection_len
               && 0 == memcmp(raw.value.v_dbpointer.collection, other.raw_.value.v_dbpointer.collection,
                              raw.value.v_dbpointer.collection_len)
               && 0 == bson_oid_compare(&raw.value.v_dbpointer.oid, &other.raw_.value.v_dbpointer.oid);
    }},
    {BSON_TYPE_CODE, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_code.code_len == other.raw_.value.v_code.code_len
               && 0 == memcmp(raw.value.v_code.code, other.raw_.value.v_code.code, raw.value.v_code.code_len);
    }},
    {BSON_TYPE_SYMBOL, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_symbol.len == other.raw_.value.v_symbol.len
               && 0 == memcmp(raw.value.v_symbol.symbol, other.raw_.value.v_symbol.symbol,
                              raw.value.v_symbol.len);
    }},
    {BSON_TYPE_CODEWSCOPE, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_codewscope.code_len == other.raw_.value.v_codewscope.code_len
               && 0 == memcmp(raw.value.v_codewscope.code, other.raw_.value.v_codewscope.code,
                              raw.value.v_codewscope.code_len)
               && raw.value.v_codewscope.scope_len == other.raw_.value.v_codewscope.scope_len
               && 0 == memcmp(raw.value.v_codewscope.scope_data, other.raw_.value.v_codewscope.scope_data,
                              raw.value.v_codewscope.scope_len);
    }},
    {BSON_TYPE_TIMESTAMP, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_timestamp.timestamp == other.raw_.value.v_timestamp.timestamp
               && raw.value.v_timestamp.increment == other.raw_.value.v_timestamp.increment;
    }},
    {BSON_TYPE_INT32, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_int32 == other.raw_.value.v_int32;
    }},
    {BSON_TYPE_INT64, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_int64 == other.raw_.value.v_int64;
    }},
    {BSON_TYPE_DECIMAL128, [](const bson_value_t &raw, const Element &other) {
        return raw.value.v_decimal128.high == other.raw_.value.v_decimal128.high
               && raw.value.v_decimal128.low == other.raw_.value.v_decimal128.low;
    }},
    {BSON_TYPE_MAXKEY, [](const bson_value_t &raw, const Element &other) {
        return true;
    }},
    {BSON_TYPE_MINKEY, [](const bson_value_t &raw, const Element &other) {
        return true;
    }},
};

Element::Element(const Element &other) : key_(other.key_) {
    if (other.raw_.value_type != BSON_TYPE_EOD) {
        bson_value_copy(&other.raw_, &raw_);
    }
}

Element::Element(Element &&other) noexcept: key_(std::move(other.key_)) {
    std::memcpy(&raw_, &other.raw_, sizeof(bson_value_t));
    other.raw_ = {};
}

Element &Element::operator=(const Element &other) {
    key_ = other.key_;
    if (other.raw_.value_type == BSON_TYPE_EOD) {
        raw_ = {};
    } else {
        bson_value_copy(&other.raw_, &raw_);
    }
    return *this;
}

bool Element::operator==(const Element &other) const {
    if (raw_.value_type != other.raw_.value_type) {
        return false;
    }
    auto it = Element::condition_map_.find(raw_.value_type);
    if (it != Element::condition_map_.end()) {
        auto condition_lambda = it->second;
        return condition_lambda(raw_, other);
    } else {
        return true;
    }
}

bool Element::operator!=(const Element &other) const {
    return !(*this == other);
}

const std::string &Element::key() const {
    return key_;
}

BsonType Element::type() const {
    return static_cast<BsonType>(raw_.value_type);
}

BsonDouble Element::getDouble() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::DOUBLE)
    return BsonDouble{raw_.value.v_double};
}

BsonString Element::getString() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::STRING)
    return BsonString{std::string(raw_.value.v_utf8.str, raw_.value.v_utf8.len)};
}

BsonDocument Element::getDocument() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::DOCUMENT)
    return BsonDocument{Document(raw_.value.v_doc.data, raw_.value.v_doc.data_len)};
}

BsonArray Element::getArray() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::ARRAY)
    return BsonArray{Array{raw_.value.v_doc.data, raw_.value.v_doc.data_len}};
}

BsonBinary Element::getBinary() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::BINARY)
    return BsonBinary{static_cast<BsonBinaryType>(raw_.value.v_binary.subtype), raw_.value.v_binary.data_len,
                      raw_.value.v_binary.data};
}

BsonUndefined Element::getUndefined() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::UNDEFINED)
    return BsonUndefined{};
}

BsonOid Element::getOid() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::OID)
    return BsonOid{Oid(raw_.value.v_oid.bytes)};
}

BsonBool Element::getBool() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::BOOLEAN)
    return BsonBool{raw_.value.v_bool};
}

BsonDate Element::getDate() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::DATETIME)
    return BsonDate{std::chrono::milliseconds{raw_.value.v_datetime}};
}

BsonNull Element::getNull() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::BSONNULL)
    return BsonNull{};
}

BsonRegex Element::getRegex() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::REGEX)
    return BsonRegex{raw_.value.v_regex.regex, raw_.value.v_regex.options};
}

BsonDBPointer Element::getDBPointer() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::DBPOINTER)
    return BsonDBPointer{std::string(raw_.value.v_dbpointer.collection, raw_.value.v_dbpointer.collection_len),
                         Oid(raw_.value.v_dbpointer.oid.bytes)};
}

BsonCode Element::getCode() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::CODE)
    return BsonCode{std::string(raw_.value.v_code.code, raw_.value.v_code.code_len)};
}

BsonSymbol Element::getSymbol() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::SYMBOL)
    return BsonSymbol{std::string(raw_.value.v_symbol.symbol, raw_.value.v_symbol.len)};
}

BsonCodeWScope Element::getCodeWScope() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::CODEWSCOPE)
    return BsonCodeWScope{std::string(raw_.value.v_codewscope.code, raw_.value.v_codewscope.code_len),
                          Document(raw_.value.v_codewscope.scope_data, raw_.value.v_codewscope.scope_len)};
}

BsonInt32 Element::getInt32() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::INT32)
    return BsonInt32{raw_.value.v_int32};
}

BsonTimestamp Element::getTimestamp() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::TIMESTAMP)
    return BsonTimestamp{raw_.value.v_timestamp.increment, raw_.value.v_timestamp.timestamp};
}

BsonInt64 Element::getInt64() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::INT64)
    return BsonInt64{raw_.value.v_int64};
}

BsonDecimal128 Element::getDecimal128() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::DECIMAL128)
    return BsonDecimal128{Decimal128(raw_.value.v_decimal128.high, raw_.value.v_decimal128.low)};
}

BsonMinKey Element::getMinKey() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::MINKEY)
    return BsonMinKey{};
}

BsonMaxKey Element::getMaxKey() const {
    THROW_EXCEPTION_IF_TYPE_ERROR(BsonType::MAXKEY)
    return BsonMaxKey{};
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud
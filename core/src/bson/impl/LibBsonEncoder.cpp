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
#include <huaweicloud/core/bson/impl/LibBsonEncoder.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

#define ASSERT_IN_ARRAY()                                    \
    if (!frame_->isArray()) {                                \
        throw SdkException("You are not in array context."); \
    }

#define ASSERT_IN_DOCUMENT()                                    \
    if (!frame_->isDocument()) {                                \
        throw SdkException("You are not in document context."); \
    }

#define ASSERT_RET_OK(ok)                          \
    if (!ok) {                                     \
        throw SdkException("Bson append failed."); \
    }

DISABLE_WARNING_IGNORED_ATTRIBUTES

Document LibBsonEncoder::document() {
    return Document(frame_->releaseValue());
}

Array LibBsonEncoder::array() {
    return Array(frame_->releaseValue());
}

BsonEncoder &LibBsonEncoder::openArray(const std::string &key) {
    bson_t *child = bson_new();

    bool ret = bson_append_array_begin(frame_->value_, key.data(), key.length(), child);
    ASSERT_RET_OK(ret);

    frame_ = new Frame<bson_t>(frame_, child, bson_destroy, true);

    return *this;
}

BsonEncoder &LibBsonEncoder::closeArray() {
    ASSERT_IN_ARRAY();

    bool ret = bson_append_array_end(frame_->parent_->value_, frame_->value_);
    ASSERT_RET_OK(ret);

    Frame <bson_t> *tmp = frame_;
    frame_ = frame_->parentFrame();
    delete tmp;

    return *this;
}

BsonEncoder &LibBsonEncoder::openDocument(const std::string &key) {
    bson_t *child = bson_new();

    bool ret = bson_append_document_begin(frame_->value_, key.data(), key.length(), child);
    ASSERT_RET_OK(ret);

    frame_ = new Frame<bson_t>(frame_, child, bson_destroy, false);

    return *this;
}

BsonEncoder &LibBsonEncoder::closeDocument() {
    ASSERT_IN_DOCUMENT();

    bool ret = bson_append_document_end(frame_->parent_->value_, frame_->value_);
    ASSERT_RET_OK(ret);

    Frame <bson_t> *tmp = frame_;
    frame_ = frame_->parentFrame();
    delete tmp;

    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, double value) {
    bool ret = bson_append_double(frame_->value_, key.data(), key.length(), value);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonDouble &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const std::string &value) {
    return append(key, value.data(), value.length());
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const char *data, std::size_t len) {
    bool ret = bson_append_utf8(frame_->value_, key.data(), key.length(), data, len);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonString &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const Document &value) {
    bool ret = bson_append_document(frame_->value_, key.data(), key.length(), value.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonDocument &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const Array &value) {
    bool ret = bson_append_array(frame_->value_, key.data(), key.length(), value.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonArray &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonBinary &value) {
    bool ret = bson_append_binary(frame_->value_, key.data(), key.length(), (bson_subtype_t) value.subType_,
                                  value.bytes_, value.size_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonUndefined &value) {
    bool ret = bson_append_undefined(frame_->value_, key.data(), key.length());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const Oid &value) {
    bool ret = bson_append_oid(frame_->value_, key.data(), key.length(), &value.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonOid &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, bool value) {
    bool ret = bson_append_bool(frame_->value_, key.data(), key.length(), value);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonBool &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonDate &value) {
    bool ret = bson_append_date_time(frame_->value_, key.data(), key.length(), value);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonNull &value) {
    bool ret = bson_append_null(frame_->value_, key.data(), key.length());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonRegex &value) {
    bool ret = bson_append_regex(frame_->value_, key.data(), key.length(), value.regex_.data(), value.options_.data());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonDBPointer &value) {
    bool ret = bson_append_dbpointer(frame_->value_, key.data(), key.length(), value.coll_.data(), &value.oid_.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonCode &value) {
    bool ret = bson_append_code(frame_->value_, key.data(), key.length(), value.value_.data());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonSymbol &value) {
    bool ret = bson_append_symbol(frame_->value_, key.data(), key.length(), value.value_.data(), value.value_.length());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonCodeWScope &value) {
    bool ret = bson_append_code_with_scope(frame_->value_, key.data(), key.length(), value.code_.data(),
                                           value.scope_.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, int32_t value) {
    bool ret = bson_append_int32(frame_->value_, key.data(), key.length(), value);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonInt32 &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonTimestamp &value) {
    bool ret = bson_append_timestamp(frame_->value_, key.data(), key.length(), value.timestamp_, value.increment_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, int64_t value) {
    bool ret = bson_append_int64(frame_->value_, key.data(), key.length(), value);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonInt64 &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const Decimal128 &value) {
    bool ret = bson_append_decimal128(frame_->value_, key.data(), key.length(), &value.value_);
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonDecimal128 &value) {
    return append(key, value.value_);
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonMinKey &value) {
    bool ret = bson_append_minkey(frame_->value_, key.data(), key.length());
    ASSERT_RET_OK(ret);
    return *this;
}

BsonEncoder &LibBsonEncoder::append(const std::string &key, const BsonMaxKey &value) {
    bool ret = bson_append_maxkey(frame_->value_, key.data(), key.length());
    ASSERT_RET_OK(ret);
    return *this;
}

std::string LibBsonEncoder::nextKey() {
    return frame_->nextKey();
}

bool LibBsonEncoder::isArray() {
    return frame_->isArray();
}

bool LibBsonEncoder::isDocument() {
    return frame_->isDocument();
}

ENABLE_WARNING

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud
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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSON_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSON_H

#include <bson.h>
#include "BsonIterator.h"
#include "BsonEncoder.h"
#include <huaweicloud/core/utils/Utils.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
#define DISABLE_WARNING_IGNORED_ATTRIBUTES \
    __pragma(warning(push));               \
    __pragma(warning(disable: 4001));

#define ENABLE_WARNING \
    __pragma(warning(pop));
#else
#define DISABLE_WARNING_IGNORED_ATTRIBUTES                     \
    _Pragma("GCC diagnostic push")                             \
    _Pragma("GCC diagnostic ignored \"-Wignored-attributes\"")

#define ENABLE_WARNING            \
    _Pragma("GCC diagnostic pop")
#endif

/**
 * Implemented BsonEncoder with libbson library.
 */
class LibBsonEncoder : public BsonEncoder {
public:
    DISABLE_WARNING_IGNORED_ATTRIBUTES

    explicit LibBsonEncoder(bool isArray) : frame_(new Frame<bson_t>(bson_new(), bson_destroy, isArray)) {}

    ENABLE_WARNING


    ~LibBsonEncoder() override {
        delete frame_;
    }

    Document document() override;

    Array array() override;

    BsonEncoder &openArray(const std::string &key) override;

    BsonEncoder &closeArray() override;

    BsonEncoder &openDocument(const std::string &key) override;

    BsonEncoder &closeDocument() override;

    BsonEncoder &append(const std::string &key, const BsonDouble &value) override;

    BsonEncoder &append(const std::string &key, const BsonString &value) override;

    BsonEncoder &append(const std::string &key, const BsonDocument &value) override;

    BsonEncoder &append(const std::string &key, const BsonArray &value) override;

    BsonEncoder &append(const std::string &key, const BsonBinary &value) override;

    BsonEncoder &append(const std::string &key, const BsonUndefined &value) override;

    BsonEncoder &append(const std::string &key, const BsonOid &value) override;

    BsonEncoder &append(const std::string &key, const BsonBool &value) override;

    BsonEncoder &append(const std::string &key, const BsonDate &value) override;

    BsonEncoder &append(const std::string &key, const BsonNull &value) override;

    BsonEncoder &append(const std::string &key, const BsonRegex &value) override;

    BsonEncoder &append(const std::string &key, const BsonDBPointer &value) override;

    BsonEncoder &append(const std::string &key, const BsonCode &value) override;

    BsonEncoder &append(const std::string &key, const BsonSymbol &value) override;

    BsonEncoder &append(const std::string &key, const BsonCodeWScope &value) override;

    BsonEncoder &append(const std::string &key, const BsonInt32 &value) override;

    BsonEncoder &append(const std::string &key, const BsonTimestamp &value) override;

    BsonEncoder &append(const std::string &key, const BsonInt64 &value) override;

    BsonEncoder &append(const std::string &key, const BsonDecimal128 &value) override;

    BsonEncoder &append(const std::string &key, const BsonMinKey &value) override;

    BsonEncoder &append(const std::string &key, const BsonMaxKey &value) override;

    BsonEncoder &append(const std::string &key, double value) override;

    BsonEncoder &append(const std::string &key, bool value) override;

    BsonEncoder &append(const std::string &key, int32_t value) override;

    BsonEncoder &append(const std::string &key, int64_t value) override;

    BsonEncoder &append(const std::string &key, const std::string &value) override;

    BsonEncoder &append(const std::string &key, const char *data, std::size_t len) override;

    BsonEncoder &append(const std::string &key, const Document &value) override;

    BsonEncoder &append(const std::string &key, const Array &value) override;

    BsonEncoder &append(const std::string &key, const Oid &value) override;

    BsonEncoder &append(const std::string &key, const Decimal128 &value) override;

    std::string nextKey() override;

    bool isArray() override;

    bool isDocument() override;

private:
    DISABLE_WARNING_IGNORED_ATTRIBUTES
    Frame <bson_t> *frame_;
    ENABLE_WARNING
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_LIBBSON_H

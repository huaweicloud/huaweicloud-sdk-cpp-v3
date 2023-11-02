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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_TYPES_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_TYPES_H

#include <array>
#include <chrono>
#include <cstring>
#include <string>
#include <utility>
#include <map>
#include <functional>

#include <huaweicloud/core/bson/Document.h>
#include <huaweicloud/core/bson/Oid.h>
#include <huaweicloud/core/bson/Decimal128.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

enum class BsonType {
    EOD = 0x0,
    DOUBLE = 0x1,
    STRING = 0x2,
    DOCUMENT = 0x3,
    ARRAY = 0x4,
    BINARY = 0x5,
    UNDEFINED = 0x6,
    OID = 0x7,
    BOOLEAN = 0x8,
    DATETIME = 0x9,
    BSONNULL = 0xA,
    REGEX = 0xB,
    DBPOINTER = 0xC,
    CODE = 0xD,
    SYMBOL = 0xE,
    CODEWSCOPE = 0xF,
    INT32 = 0x10,
    TIMESTAMP = 0x11,
    INT64 = 0x12,
    DECIMAL128 = 0x13,
    MINKEY = 0xFF,
    MAXKEY = 0x7F,
};

enum class BsonBinaryType {
    BINARY = 0x0,
    FUNCTION = 0x1,
    BINARY_DEPRECATED = 0x2,
    UUID_DEPRECATED = 0x3,
    UUID = 0x4,
    MD5 = 0x5,
    COLUMN = 0x7,
    USER = 0x80,
};

// Base class
struct BsonValue {
};

struct BsonDouble : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::DOUBLE;

    double value_{0};

    BsonDouble() = default;

    explicit BsonDouble(double value) : value_(value) {}

    inline operator double() const {
        return value_;
    }
};

inline bool operator==(const BsonDouble &lhs, const BsonDouble &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonString : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::STRING;

    std::string value_{};

    BsonString() = default;

    explicit BsonString(std::string value) : value_(std::move(value)) {}

    inline operator std::string() const {
        return value_;
    }

//    inline operator const char *() const {
//        return value_.data();
//    }
};

inline bool operator==(const BsonString &lhs, const BsonString &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonDocument : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::DOCUMENT;

    Document value_{};

    BsonDocument() = default;

    explicit BsonDocument(const Document &value) : value_(value) {}

    inline operator Document() const {
        return value_;
    }
};

struct BsonArray : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::ARRAY;

    Array value_{};

    BsonArray() = default;

    explicit BsonArray(const Array &value) : value_(value) {}

    inline operator Array() const {
        return value_;
    }
};

struct BsonBinary : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::ARRAY;

    BsonBinaryType subType_{BsonBinaryType::BINARY};
    uint32_t size_{0};
    const uint8_t *bytes_{nullptr};

    BsonBinary() = default;

    BsonBinary(BsonBinaryType subType, uint32_t size, const uint8_t *bytes)
            : subType_(subType), size_(size), bytes_(bytes) {}
};

inline bool operator==(const BsonBinary &lhs, const BsonBinary &rhs) {
    return lhs.subType_ == rhs.subType_ && lhs.size_ == rhs.size_ &&
           (lhs.size_ == 0 || (std::memcmp(lhs.bytes_, rhs.bytes_, lhs.size_) == 0));
}

struct BsonUndefined : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::UNDEFINED;
};

inline bool operator==(const BsonUndefined &lhs, const BsonUndefined &rhs) {
    return true;
}

struct BsonOid : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::OID;

    Oid value_{};

    BsonOid() = default;

    explicit BsonOid(const Oid &value) : value_(value) {}

    operator Oid() const {
        return value_;
    }
};

inline bool operator==(const BsonOid &lhs, const BsonOid &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonBool : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::BOOLEAN;

    bool value_{false};

    BsonBool() = default;

    explicit BsonBool(bool value) : value_(value) {}

    inline operator bool() const {
        return value_;
    }
};

inline bool operator==(const BsonBool &lhs, const BsonBool &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonDate : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::DATETIME;

    std::chrono::milliseconds value_{0};

    BsonDate() = default;

    explicit BsonDate(std::chrono::milliseconds value) : value_(value) {}

    inline operator std::chrono::milliseconds() const {
        return value_;
    }

    inline operator int64_t() const {
        return value_.count();
    }
};

inline bool operator==(const BsonDate &lhs, const BsonDate &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonNull : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::BSONNULL;
};

inline bool operator==(const BsonNull &lhs, const BsonNull &rhs) {
    return true;
}

struct BsonRegex : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::REGEX;

    std::string regex_{};
    std::string options_{};

    BsonRegex() = default;
    BsonRegex(std::string regex, std::string options) : regex_(std::move(regex)), options_(std::move(options)) {}
};

inline bool operator==(const BsonRegex &lhs, const BsonRegex &rhs) {
    return lhs.regex_ == rhs.regex_ && lhs.options_ == rhs.options_;
}

struct BsonDBPointer : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::DBPOINTER;

    std::string coll_{};
    Oid oid_{};

    BsonDBPointer() = default;
    BsonDBPointer(std::string coll, const Oid &oid) : coll_(std::move(coll)), oid_(oid) {}
};

inline bool operator==(const BsonDBPointer &lhs, const BsonDBPointer &rhs) {
    return lhs.coll_ == rhs.coll_ && lhs.oid_ == rhs.oid_;
}

struct BsonCode : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::CODE;

    std::string value_{};

    BsonCode() = default;

    explicit BsonCode(std::string value) : value_(std::move(value)) {}

    inline operator std::string() const {
        return value_;
    }
};

inline bool operator==(const BsonCode &lhs, const BsonCode &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonSymbol : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::SYMBOL;

    std::string value_{};

    BsonSymbol() = default;
    explicit BsonSymbol(std::string value) : value_(std::move(value)) {}

    inline explicit operator std::string() const {
        return value_;
    }
};

inline bool operator==(const BsonSymbol &lhs, const BsonSymbol &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonCodeWScope : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::CODEWSCOPE;

    std::string code_{};
    Document scope_{};

    BsonCodeWScope() = default;
    BsonCodeWScope(std::string code, const Document &scope) : code_(std::move(code)), scope_(scope) {}
};

inline bool operator==(const BsonCodeWScope &lhs, const BsonCodeWScope &rhs) {
    return lhs.code_ == rhs.code_;
}

struct BsonInt32 : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::INT32;

    int32_t value_{0};

    BsonInt32() = default;

    explicit BsonInt32(int32_t value) : value_(value) {}

    operator int32_t() const {
        return value_;
    }
};

inline bool operator==(const BsonInt32 &lhs, const BsonInt32 &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonTimestamp : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::TIMESTAMP;

    uint32_t increment_{0};
    uint32_t timestamp_{0};

    BsonTimestamp() = default;

    BsonTimestamp(uint32_t increment, uint32_t timestamp) : increment_(increment), timestamp_(timestamp) {}
};

inline bool operator==(const BsonTimestamp &lhs, const BsonTimestamp &rhs) {
    return lhs.increment_ == rhs.increment_ && lhs.timestamp_ == rhs.timestamp_;
}

struct BsonInt64 : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::INT64;

    int64_t value_{0};

    BsonInt64() = default;

    explicit BsonInt64(int64_t value) : value_(value) {}

    operator int64_t() const {
        return value_;
    }
};

inline bool operator==(const BsonInt64 &lhs, const BsonInt64 &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonDecimal128 : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::DECIMAL128;

    Decimal128 value_{};

    BsonDecimal128() = default;

    explicit BsonDecimal128(const Decimal128 &value) : value_(value) {}

    operator Decimal128() const {
        return value_;
    }
};

inline bool operator==(const BsonDecimal128 &lhs, const BsonDecimal128 &rhs) {
    return lhs.value_ == rhs.value_;
}

struct BsonMinKey : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::MINKEY;
};

inline bool operator==(const BsonMinKey &lhs, const BsonMinKey &rhs) {
    return true;
}

struct BsonMaxKey : public BsonValue {
    static constexpr BsonType TYPE_ID = BsonType::MAXKEY;
};

inline bool operator==(const BsonMaxKey &lhs, const BsonMaxKey &rhs) {
    return true;
}

class Element {
public:
    Element() = default;

    Element(const Element &other);

    Element(Element &&other) noexcept;

    ~Element() {
        bson_value_destroy(&raw_);
    }

    Element &operator=(const Element &other);

    bool operator==(const Element &other) const;

    bool operator!=(const Element &other) const;

    bool valid() const {
        return !key_.empty() && raw_.value_type != BSON_TYPE_EOD;
    }

    const std::string &key() const;

    BsonType type() const;

    BsonDouble getDouble() const;

    BsonString getString() const;

    BsonDocument getDocument() const;

    BsonArray getArray() const;

    BsonBinary getBinary() const;

    BsonUndefined getUndefined() const;

    BsonOid getOid() const;

    BsonBool getBool() const;

    BsonDate getDate() const;

    BsonNull getNull() const;

    BsonRegex getRegex() const;

    BsonDBPointer getDBPointer() const;

    BsonCode getCode() const;

    BsonSymbol getSymbol() const;

    BsonCodeWScope getCodeWScope() const;

    BsonInt32 getInt32() const;

    BsonTimestamp getTimestamp() const;

    BsonInt64 getInt64() const;

    BsonDecimal128 getDecimal128() const;

    BsonMinKey getMinKey() const;

    BsonMaxKey getMaxKey() const;

    friend class LibBsonIterator;

private:
    explicit Element(const char *key, const bson_value_t *raw) : key_(key) {
        bson_value_copy(raw, &raw_);
    }

    std::string key_{};
    bson_value_t raw_{};
    static std::map<int, std::function<bool(const bson_value_t&, const Element&)>> condition_map_;
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_TYPES_H

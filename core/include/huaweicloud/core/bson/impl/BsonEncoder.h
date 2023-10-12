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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONADAPTOR_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONADAPTOR_H

#include <memory>
#include <functional>

#include "huaweicloud/core/bson/Decimal128.h"
#include "huaweicloud/core/bson/Document.h"
#include "huaweicloud/core/bson/Oid.h"
#include "huaweicloud/core/bson/Types.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * Encoder for build bson object.
 */
class BsonEncoder {
public:
    virtual ~BsonEncoder() = default;

    // Generate document bson object.
    virtual Document document() = 0;

    // Generate array bson object.
    virtual Array array() = 0;

    virtual BsonEncoder &openArray(const std::string &key) = 0;

    virtual BsonEncoder &closeArray() = 0;

    virtual BsonEncoder &openDocument(const std::string &key) = 0;

    virtual BsonEncoder &closeDocument() = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonDouble &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonString &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonDocument &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonArray &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonBinary &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonUndefined &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonOid &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonBool &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonDate &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonNull &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonRegex &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonDBPointer &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonCode &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonSymbol &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonCodeWScope &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonInt32 &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonTimestamp &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonInt64 &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonDecimal128 &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonMinKey &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const BsonMaxKey &value) = 0;

    virtual BsonEncoder &append(const std::string &key, double value) = 0;

    virtual BsonEncoder &append(const std::string &key, bool value) = 0;

    virtual BsonEncoder &append(const std::string &key, int32_t value) = 0;

    virtual BsonEncoder &append(const std::string &key, int64_t value) = 0;

    virtual BsonEncoder &append(const std::string &key, const std::string &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const char *data, std::size_t len) = 0;

    virtual BsonEncoder &append(const std::string &key, const Document &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const Array &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const Oid &value) = 0;

    virtual BsonEncoder &append(const std::string &key, const Decimal128 &value) = 0;

    // In array context, getting next array index, which cloud be append as element key.
    virtual std::string nextKey() = 0;

    virtual bool isDocument() = 0;

    virtual bool isArray() = 0;
protected:
    /**
     * When build nested bson object, we need backtrace parent object.
     * Frame is similar as stack, which record all parent bson object.
     */
    template<class T>
    struct Frame {
        Frame(T *value, std::function<void(T *)> destroyValue, bool isArray = false)
                : parent_(nullptr), value_(value), destroyValue_(destroyValue), isArray_(isArray) {}

        Frame(Frame *parent, T *value, std::function<void(T *)> destroyValue, bool isArray = false)
                : parent_(parent), value_(value), destroyValue_(destroyValue), isArray_(isArray), key_(0) {}

        ~Frame() {
            delete parent_;
            if (destroyValue_ && value_) {
                destroyValue_(value_);
            }
        }

        // In array context, get next array index.
        inline std::string nextKey() {
            return std::to_string(key_++);
        }

        // Get parent bson object.
        inline Frame<T> *parentFrame() {
            Frame<T> *tmp = parent_;
            parent_ = nullptr;
            return tmp;
        }

        // To avoiding value is freed with Frame.
        inline T *releaseValue() {
            T *tmp = value_;
            value_ = nullptr;
            return tmp;
        }

        // Top bson object.
        inline bool isTop() {
            return parent_ == nullptr;
        }

        // Array bson object.
        inline bool isArray() {
            return isArray_;
        }

        // Document bson object.
        inline bool isDocument() {
            return !isArray_;
        }

        Frame<T> *parent_{nullptr};
        T *value_{nullptr};
        std::function<void(T *)> destroyValue_{};
        bool isArray_{false};
        std::size_t key_{0};
    };
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_BSONADAPTOR_H

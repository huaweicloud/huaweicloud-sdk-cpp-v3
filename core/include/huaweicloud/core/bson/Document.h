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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_DOCUMENT_H
#define HUAWEICLOUD_CPP_SDK_CORE_DOCUMENT_H

#include <string>
#include <bson.h>

#include <huaweicloud/core/exception/SdkException.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * Bson object of document type.
 */
class Document {
public:
    Document() : value_(bson_new()) {}

    explicit Document(const std::string &str) {
        bson_error_t err;
        value_ = bson_new_from_json((const uint8_t *) str.data(), str.length(), &err);
        if (value_ == nullptr) {
            throw SdkException(err.message);
        }
    }

    Document(const std::uint8_t *data, std::size_t len) {
        value_ = bson_new_from_data((const uint8_t *) data, len);
        if (value_ == nullptr) {
            throw SdkException("Create bson failed.");
        }
    }

    Document(const Document &other);

    Document(Document &&other) noexcept;

    virtual ~Document() {
        if (value_) {
            bson_destroy(value_);
            value_ = nullptr;
        }
    }

    Document &operator=(const Document &other);

    // Get json string of document.
    virtual std::string toString() const;

    const uint8_t *data() const;

    std::uint32_t length() const;

    friend class LibBsonEncoder;

    friend class LibBsonIterator;

    friend class Array;

    friend bool operator==(const Document &lhs, const Document &rhs);

protected:
    bson_t *value_{nullptr};

private:
    explicit Document(bson_t *value) : value_(value) {
        if (value == nullptr) {
            throw SdkException("Invalid value: nullptr.");
        }
    }

};

/**
 * Bson object with array type.
 */
class Array : public Document {
public:
    Array() : Document() {}

    explicit Array(const std::string &str) : Document(str) {}

    Array(const std::uint8_t *data, std::size_t len) : Document(data, len) {}

    ~Array() override = default;

    // Get json string of document.
    std::string toString() const override;

    friend class LibBsonEncoder;

    friend class LibBsonIterator;

    friend bool operator==(const Array &lhs, const Array &rhs);

private:
    explicit Array(bson_t *value) : Document(value) {}
};


} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_DOCUMENT_H

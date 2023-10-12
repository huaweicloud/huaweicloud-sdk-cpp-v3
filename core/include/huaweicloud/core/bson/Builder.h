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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_BUILDER_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_BUILDER_H

#include <string>

#include <huaweicloud/core/bson/Types.h>
#include <huaweicloud/core/bson/impl/LibBsonEncoder.h>
#include <huaweicloud/core/exception/SdkException.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**************************** Stream manipulator ***************************/
// Begin append child document
struct OpenDocumentType {
    constexpr OpenDocumentType() = default;
};

// End append child document
struct CloseDocumentType {
    constexpr CloseDocumentType() = default;
};

// Begin append child array.
struct OpenArrayType {
    constexpr OpenArrayType() = default;
};

// End append child array.
struct CloseArrayType {
    constexpr CloseArrayType() = default;
};

// Builder should generate document bson object.
struct BuildDocumentType {
    constexpr BuildDocumentType() = default;
};

// Builder should generate array bson object.
struct BuildArrayType {
    constexpr BuildArrayType() = default;
};
/**************************** Stream manipulator end ***************************/

/**
 * Builder bson object with stream style, which is based capacity of LibBsonEncoder.
 */
class Builder {
public:
    Builder(Builder && other)  noexcept : key_(std::move(other.key_)), encoder_(other.encoder_) {
        other.encoder_ = nullptr;
    }

    virtual ~Builder() {
        delete encoder_;
    }

    static Builder array() {
        return Builder(true);
    }

    static Builder document() {
        return Builder(false);
    }

    Builder &operator<<(const OpenDocumentType &value);

    Builder &operator<<(const CloseDocumentType &value);

    Builder &operator<<(const OpenArrayType &value);

    Builder &operator<<(const CloseArrayType &value);

    virtual Builder &operator<<(const char *value);

    virtual Builder &operator<<(const std::string &value);

    Document operator<<(const BuildDocumentType &value);

    Array operator<<(const BuildArrayType &value);

    template<class T>
    Builder &operator<<(const T &value);

    static constexpr OpenDocumentType SubDocumentBegin{};
    static constexpr CloseDocumentType SubDocumentEnd{};
    static constexpr OpenArrayType SubArrayBegin{};
    static constexpr CloseArrayType SubArrayEnd{};
    static constexpr BuildDocumentType DocumentEnd{};
    static constexpr BuildArrayType ArrayEnd{};

private:
    explicit Builder(bool isArray) : encoder_(new LibBsonEncoder(isArray)) {}

    Builder(const Builder &) = default;

    Builder &operator=(const Builder &) = default;

    BsonEncoder *encoder_{nullptr};
    std::string key_;
};

#define ENSURE_KEY_SET_IN_ARRAY() \
    if (encoder_->isArray()) {    \
        key_ = encoder_->nextKey();  \
    }

#define THROW_EXCEPTION_IF_KEY_ABSENT()               \
    if (key_.empty()) {                               \
        throw SdkException("Document key is empty."); \
    }

#define CLEAR_AFTER_APPEND() \
    key_.clear();

template<class T>
Builder &Builder::operator<<(const T &value) {
    ENSURE_KEY_SET_IN_ARRAY()
    THROW_EXCEPTION_IF_KEY_ABSENT()

    encoder_->append(key_, value);

    CLEAR_AFTER_APPEND()

    return *this;
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_BUILDER_H

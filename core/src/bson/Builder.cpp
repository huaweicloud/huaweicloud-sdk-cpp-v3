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

#include <huaweicloud/core/bson/Builder.h>

using namespace HuaweiCloud::Sdk::Core::Bson;
using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

constexpr OpenDocumentType Builder::SubDocumentBegin;
constexpr CloseDocumentType Builder::SubDocumentEnd;
constexpr OpenArrayType Builder::SubArrayBegin;
constexpr CloseArrayType Builder::SubArrayEnd;
constexpr BuildDocumentType Builder::DocumentEnd;
constexpr BuildArrayType Builder::ArrayEnd;

Builder &Builder::operator<<(const OpenDocumentType &) {
    ENSURE_KEY_SET_IN_ARRAY()
    THROW_EXCEPTION_IF_KEY_ABSENT()

    encoder_->openDocument(key_);

    CLEAR_AFTER_APPEND()

    return *this;
}

Builder &Builder::operator<<(const CloseDocumentType &) {
    encoder_->closeDocument();
    return *this;
}

Builder &Builder::operator<<(const OpenArrayType &) {
    ENSURE_KEY_SET_IN_ARRAY()
    THROW_EXCEPTION_IF_KEY_ABSENT()

    encoder_->openArray(key_);

    CLEAR_AFTER_APPEND()

    return *this;
}

Builder &Builder::operator<<(const CloseArrayType &) {
    encoder_->closeArray();
    return *this;
}

Builder &Builder::operator<<(const char *value) {
    ENSURE_KEY_SET_IN_ARRAY()

    if (key_.empty()) {
        key_ = value;
    } else {
        encoder_->append(key_, value, strlen(value));
        CLEAR_AFTER_APPEND()
    }

    return *this;
}

Builder &Builder::operator<<(const std::string &value) {
    return operator<<(value.data());
}

Document Builder::operator<<(const BuildDocumentType &) {
    return encoder_->document();
}

Array Builder::operator<<(const BuildArrayType &) {
    return encoder_->array();
}

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

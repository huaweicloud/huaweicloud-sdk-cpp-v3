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

#include <huaweicloud/core/bson/Document.h>

#include <huaweicloud/core/bson/Types.h>
#include <huaweicloud/core/exception/SdkException.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

Document::Document(const Document &other) {
    value_ = bson_copy(other.value_);
}

Document::Document(Document &&other) noexcept {
    value_ = bson_new();
    bson_steal(value_, other.value_);
    other.value_ = nullptr;
}

Document &Document::operator=(const Document &other) {
    if (this != &other) {
        value_ = bson_copy(other.value_);
    }

    return *this;
}

std::string Document::toString() const {
    std::size_t len;
    char *json = bson_as_json(value_, &len);

    std::string ret(json, len);
    bson_free(json);

    return ret;
}

const uint8_t * Document::data() const {
    return bson_get_data(value_);
}

std::uint32_t Document::length() const {
    return value_->len;
}

std::string Array::toString() const {
    std::size_t len;
    char *json = bson_array_as_json(value_, &len);

    std::string ret(json, len);
    bson_free(json);

    return ret;
}

bool operator==(const Document &lhs, const Document &rhs) {
    return 0 == bson_compare(lhs.value_, rhs.value_);
}

bool operator==(const Array &lhs, const Array &rhs) {
    return 0 == bson_compare(lhs.value_, rhs.value_);
}
} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

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

#ifndef HUAWEICLOUD_CPP_SDK_CORE_BSON_VIEWER_H
#define HUAWEICLOUD_CPP_SDK_CORE_BSON_VIEWER_H

#include <memory>

#include <huaweicloud/core/bson/Document.h>
#include <huaweicloud/core/bson/Types.h>
#include <huaweicloud/core/bson/impl/BsonIterator.h>
#include <huaweicloud/core/bson/impl/LibBsonIterator.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

/**
 * View bson object with iterator, which is based capacity of LibBsonIterator.
 */
class Viewer {
public:
    class Iterator;

    explicit Viewer(const Document &value) : value_(value) {}

    explicit Viewer(const Array &value) : value_(value) {}

    Iterator begin() const;

    Iterator end() const;

    Iterator find(const std::string &key) const;

    Element operator[](const std::string &key) const;

    Element operator[](std::size_t key) const;

private:
    const Document &value_;
    // used for iterator c
    static Document doc_;
};

class Viewer::Iterator {
public:
    // std::iterator_traits
    using value_type = Element;
    using reference = Element&;
    using pointer = Element*;
    using const_reference = const Element&;
    using const_pointer = const Element*;
    using iterator_category = std::forward_iterator_tag;
    using difference_type = std::ptrdiff_t;

    Iterator() = default;

    explicit Iterator(const Document &value);

    Iterator(const Iterator &other);

    Iterator(Iterator &&other) noexcept;

    ~Iterator() {
        delete iter_;
        iter_ = nullptr;
    }

    Iterator& operator=(const Iterator &other);

    const_reference operator*() const;

    const_pointer operator->() const;

    reference operator*();

    pointer operator->();

    Iterator &operator++();

    Iterator operator++(int);

    friend bool operator==(const Iterator &lhs, const Iterator &rhs);

    friend bool operator!=(const Iterator &lhs, const Iterator &rhs);

private:
    BsonIterator *iter_{nullptr};
    Element elem_;
};

} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud

#endif //HUAWEICLOUD_CPP_SDK_CORE_BSON_VIEWER_H

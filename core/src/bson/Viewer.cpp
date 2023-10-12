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

#include <huaweicloud/core/bson/Viewer.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Bson {

Viewer::Iterator Viewer::begin() const {
    return Iterator{value_};
}

Viewer::Iterator Viewer::end() const {
    return Iterator{};
}

Viewer::Iterator Viewer::find(const std::string &key) const {
    Iterator it{value_};

    while (it != end()) {
        if (it->key() == key) {
            return it;
        }
        ++it;
    }

    return Iterator{};
}

Element Viewer::operator[](const std::string &key) const {
    Iterator it{value_};

    while (it != end()) {
        if (it->key() == key) {
            return *it;
        }
        ++it;
    }

    return Element{};
}

Element Viewer::operator[](std::size_t key) const {
    return operator[](std::to_string(key));
}

Viewer::Iterator::Iterator(const Document &value)
        : iter_(new LibBsonIterator(value)),
          elem_(iter_->next() ? iter_->value() : Element{}) {}

Viewer::Iterator::Iterator(const Viewer::Iterator &other) {
    iter_ = new LibBsonIterator(*dynamic_cast<LibBsonIterator *>(other.iter_));
    elem_ = other.elem_;
}

Viewer::Iterator::Iterator(Viewer::Iterator &&other) noexcept
        : iter_(other.iter_), elem_(std::move(other.elem_)) {
    other.iter_ = nullptr;
}

Viewer::Iterator &Viewer::Iterator::operator=(const Viewer::Iterator &other) {
    if (this != &other) {
        iter_ = new LibBsonIterator(*dynamic_cast<LibBsonIterator *>(other.iter_));
        elem_ = other.elem_;
    }
    return *this;
}

Viewer::Iterator::const_reference Viewer::Iterator::operator*() const {
    return elem_;
}

Viewer::Iterator::const_pointer Viewer::Iterator::operator->() const {
    return &elem_;
}

Viewer::Iterator::reference Viewer::Iterator::operator*() {
    return elem_;
}

Viewer::Iterator::pointer Viewer::Iterator::operator->() {
    return &elem_;
}

Viewer::Iterator &Viewer::Iterator::operator++() {
    if (iter_) {
        if (iter_->next()) {
            elem_ = iter_->value();
        } else {
            elem_ = Element{};
        }
    }
    return *this;
}

Viewer::Iterator Viewer::Iterator::operator++(int) {
    Iterator before(*this);
    operator++();
    return before;
}

bool operator==(const typename Viewer::Iterator &lhs, const typename Viewer::Iterator &rhs) {
    bool lEmpty = lhs.iter_ == nullptr || !lhs.iter_->valid();
    bool rEmpty = rhs.iter_ == nullptr || !rhs.iter_->valid();

    if (lEmpty && rEmpty) {
        return true;
    }

    if (lEmpty || rEmpty) {
        return false;
    }

    return *lhs.iter_ == *rhs.iter_ && rhs.elem_ == lhs.elem_;
}

bool operator!=(const typename Viewer::Iterator &lhs, const typename Viewer::Iterator &rhs) {
    return !(lhs == rhs);
}


} // namespace Bson
} // namespace Core
} // namespace Sdk
} // namespace HuaweiCloud
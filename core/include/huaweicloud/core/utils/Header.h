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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_HEADER_H
#define HUAWEICLOUD_SDK_CORE_UTILS_HEADER_H

#include <string>
#include <utility>
#include <vector>
#include "Utils.h"
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
class HUAWEICLOUD_CORE_EXPORT Header {
public:
    explicit Header(std::string key) : key_(std::move(key)) {}


    Header(std::string key, std::string value) : key_(std::move(key)), values_(std::move(value)) {}

    std::string getKey()
    {
        return key_;
    }

    const std::string &getValue()
    {
        return values_;
    }

    void setValue(std::string value)
    {
        values_ = std::move(value);
    }

    bool operator < (const Header &r) const
    {
        return toLowerCaseStr(this->key_).compare(toLowerCaseStr(r.key_)) < 0;
    }

    ~Header() = default;

private:
    std::string key_;
    std::string values_;
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_HEADER_H
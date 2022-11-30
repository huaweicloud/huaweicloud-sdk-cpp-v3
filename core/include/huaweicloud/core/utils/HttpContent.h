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
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 */

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_HttpContent_H_
#define HUAWEICLOUD_SDK_CORE_UTILS_HttpContent_H_

#include <memory>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
class HUAWEICLOUD_CORE_EXPORT HttpContent {
public:
    HttpContent();
    virtual ~HttpContent();

    virtual utility::string_t getContentDisposition() const;
    virtual void setContentDisposition(const utility::string_t &value);

    virtual utility::string_t getName() const;
    virtual void setName(const utility::string_t &value);

    virtual utility::string_t getFileName() const;
    virtual void setFileName(const utility::string_t &value);

    virtual utility::string_t getContentType() const;
    virtual void setContentType(const utility::string_t &value);

    virtual std::shared_ptr<std::istream> getData() const;
    virtual void setData(std::shared_ptr<std::istream> value);

    virtual void writeTo(std::ostream &stream);

protected:
    // NOTE: no utility::string_t here because those strings can only contain ascii
    utility::string_t contentDisposition_;
    utility::string_t name_;
    utility::string_t fileName_;
    utility::string_t contentType_;
    std::shared_ptr<std::istream> data_;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_UTILS_HttpContent_H_

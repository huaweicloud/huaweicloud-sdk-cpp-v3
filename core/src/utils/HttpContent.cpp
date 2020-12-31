/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 */

#include <huaweicloud/core/utils/HttpContent.h>

#include <utility>

using namespace HuaweiCloud::Sdk::Core::Utils;

HttpContent::HttpContent() = default;

HttpContent::~HttpContent() = default;

utility::string_t HttpContent::getContentDisposition() const
{
    return contentDisposition_;
}

void HttpContent::setContentDisposition(const utility::string_t &value)
{
    contentDisposition_ = value;
}

utility::string_t HttpContent::getName() const
{
    return name_;
}

void HttpContent::setName(const utility::string_t &value)
{
    name_ = value;
}

utility::string_t HttpContent::getFileName() const
{
    return fileName_;
}

void HttpContent::setFileName(const utility::string_t &value)
{
    fileName_ = value;
}

utility::string_t HttpContent::getContentType() const
{
    return contentType_;
}

void HttpContent::setContentType(const utility::string_t &value)
{
    contentType_ = value;
}

std::shared_ptr<std::istream> HttpContent::getData() const
{
    return data_;
}

void HttpContent::setData(std::shared_ptr<std::istream> value)
{
    data_ = std::move(value);
}

void HttpContent::writeTo(std::ostream &stream)
{
    data_->seekg(0, data_->beg );
    stream << data_->rdbuf();
}
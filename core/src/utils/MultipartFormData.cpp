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

#include <huaweicloud/core/utils/MultipartFormData.h>
#include <huaweicloud/core/utils/ModelBase.h>

#include <boost/uuid/random_generator.hpp>
#include <utility>
#include <boost/uuid/uuid_io.hpp>

using namespace HuaweiCloud::Sdk::Core::Utils;

MultipartFormData::MultipartFormData()
{
    utility::stringstream_t uuidString;
    uuidString << boost::uuids::random_generator()();
    boundary_ = uuidString.str();
}

MultipartFormData::MultipartFormData(utility::string_t boundary) : boundary_(std::move(boundary)) {}

MultipartFormData::~MultipartFormData() = default;

utility::string_t MultipartFormData::getBoundary()
{
    return boundary_;
}

void MultipartFormData::add(std::shared_ptr<HttpContent> content)
{
    contents_.push_back(content);
    contentLookup_[content->getName()] = content;
}

bool MultipartFormData::hasContent(const utility::string_t &name) const
{
    return contentLookup_.find(name) != contentLookup_.end();
}

std::shared_ptr<HttpContent> MultipartFormData::getContent(const utility::string_t &name) const
{
    auto result = contentLookup_.find(name);
    if (result == contentLookup_.end()) {
        return std::shared_ptr<HttpContent>(nullptr);
    }
    return result->second;
}

void MultipartFormData::writeTo(std::ostream &target)
{
    for (size_t i = 0; i < contents_.size(); i++) {
        std::shared_ptr<HttpContent> content = contents_[i];

        // boundary
        target << "\r\n"
               << "--" << utility::conversions::to_utf8string(boundary_) << "\r\n";

        // headers
        target << "Content-Disposition: " << utility::conversions::to_utf8string(content->getContentDisposition());
        if (content->getName().size() > 0) {
            target << "; name=\"" << utility::conversions::to_utf8string(content->getName()) << "\"";
        }
        if (content->getFileName().size() > 0) {
            target << "; filename=\"" << utility::conversions::to_utf8string(content->getFileName()) << "\"";
        }
        target << "\r\n";

        if (content->getContentType().size() > 0) {
            target << "Content-Type: " << utility::conversions::to_utf8string(content->getContentType()) << "\r\n";
        }

        target << "\r\n";

        // body
        std::shared_ptr<std::istream> data = content->getData();

        data->seekg(0, data->end);
        std::vector<char> dataBytes(data->tellg());

        data->seekg(0, data->beg);
        data->read(&dataBytes[0], dataBytes.size());

        std::copy(dataBytes.begin(), dataBytes.end(), std::ostreambuf_iterator<char>(target));
    }

    target << "\r\n--" << utility::conversions::to_utf8string(boundary_) << "--\r\n";
}
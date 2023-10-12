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

#include <huaweicloud/core/http/HttpRequestDef.h>

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef& HttpRequestDef::withPath(std::string path) {
    this->path = path;
    return *this;
}

HttpRequestDef& HttpRequestDef::withMethod(std::string method) {
    this->method = method;
    return *this;
}

HttpRequestDef& HttpRequestDef::withContentType(std::string contentType) {
    this->contentType = contentType;
    return *this;
}

HttpRequestDef& HttpRequestDef::withRequestField(FieldDef& field) {
    this->requestFields.emplace_back(field);
    return *this;
}

HttpRequestDef& HttpRequestDef::withResponseField(FieldDef& field) {
    this->responseFields.emplace_back(field);
    return *this;
}

std::vector<FieldDef> HttpRequestDef::getRequestFields() const {
    return this->requestFields;
}

std::vector<FieldDef> HttpRequestDef::getResponseFields() const {
    return this->responseFields;
}

std::string HttpRequestDef::getPath() const {
    return this->path;
}

std::string HttpRequestDef::getMethod() const {
    return this->method;
}

std::string HttpRequestDef::getContentType() const {
    return this->contentType;
}

HttpRequestDef::HttpRequestDef(const HttpRequestDef& def)
    :method(def.method), contentType(def.contentType), path(def.path) {
    for (auto field : def.requestFields) {
        this->requestFields.emplace_back(field);
    }
    for (auto field : def.responseFields) {
        this->responseFields.emplace_back(field);
    }
}


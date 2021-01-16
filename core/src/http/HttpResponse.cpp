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


#include <huaweicloud/core/http/HttpResponse.h>

#include <utility>

using namespace HuaweiCloud::Sdk::Core::Http;

HttpResponse::HttpResponse() = default;

HttpResponse::HttpResponse(int statusCode, std::string headerParams, std::string body)
    : statusCode_(statusCode), headerParams_(std::move(headerParams)), body_(std::move(body))
{}

HttpResponse::~HttpResponse() = default;

void HttpResponse::setStatusCode(int code)
{
    statusCode_ = code;
}

void HttpResponse::setHeaderParams(std::string header)
{
    headerParams_ = std::move(header);
}

void HttpResponse::setHttpBody(std::string body)
{
    body_ = std::move(body);
}

int HttpResponse::getStatusCode() const
{
    return statusCode_;
}

std::string HttpResponse::getHeaderParams() const
{
    return headerParams_;
}

std::string HttpResponse::getHttpBody() const
{
    return body_;
}
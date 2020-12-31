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
 */


#include <huaweicloud/core/RequestParams.h>

#include <ctime>

#include <huaweicloud/core/utils/Constants.h>

using namespace HuaweiCloud::Sdk::Core;

RequestParams::RequestParams() = default;

RequestParams::~RequestParams() = default;

RequestParams::RequestParams(std::string method, std::string scheme, std::string host, std::string uri,
    std::string queryParams, bool stream)
    : method_(std::move(method)),
      scheme_(std::move(scheme)),
      host_(std::move(host)),
      uri_(std::move(uri)),
      queryParams_(std::move(queryParams)),
      body_(""),
      stream_(stream)
{}

RequestParams::RequestParams(std::string method, std::string scheme, std::string host, std::string uri,
    std::string queryParams, bool stream, std::string body)
    : method_(std::move(method)),
      scheme_(std::move(scheme)),
      host_(std::move(host)),
      uri_(std::move(uri)),
      queryParams_(std::move(queryParams)),
      body_(std::move(body)),
      stream_(stream)
{}

const std::string &RequestParams::getMethod() const
{
    return method_;
}

const std::string &RequestParams::getScheme() const
{
    return scheme_;
}

const std::string &RequestParams::getHost() const
{
    return host_;
}

const std::string &RequestParams::getUri() const
{
    return uri_;
}

const std::string &RequestParams::getQueryParams() const
{
    return queryParams_;
}

const std::string &RequestParams::getBody() const
{
    return body_;
}

std::set<Header> RequestParams::getHeaders() const
{
    return headers_;
}

/*
 * Add a new header
 */
void RequestParams::addHeader(const Header &header)
{
    headers_.insert(header);
}


/*
 * Add a value to an existing header. If the header's key does not exsit, create
 * a new header with the key and the value passed in.
 */
void RequestParams::addHeader(const std::string &key, const std::string &value)
{
    headers_.emplace(key, value);
}

/*
 * Initialize host and x-sdk-date headers
 */
std::string RequestParams::initHeaders()
{
    auto it = headers_.find(Header(Constants::host, ""));
    if (it == headers_.end()) {
        headers_.emplace(Constants::host, host_);
    }
    auto it2 = headers_.find(Header(Constants::dateFormat, ""));
    if (it2 != headers_.end()) {
        auto *h = reinterpret_cast<Header *>(&it2);
        return h->getValue();
    } else {
        time_t now;
        time(&now);
        std::string datetime = toISO8601Time(now);
        headers_.emplace(Constants::dateFormat, datetime);
        return datetime;
    }
}
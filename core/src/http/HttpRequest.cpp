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


#include <huaweicloud/core/http/HttpRequest.h>

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequest::HttpRequest() = default;

HttpRequest::~HttpRequest() = default;

const std::string &HttpRequest::getUrl() const
{
    return url_;
}

void HttpRequest::setUrl(const std::string &httpUrl)
{
    url_ = httpUrl;
}

const std::string &HttpRequest::getMethod() const
{
    return method_;
}

void HttpRequest::setMethod(const std::string &httpMethod)
{
    method_ = httpMethod;
}

const std::string &HttpRequest::getRequestBody() const
{
    return requestBody_;
}

void HttpRequest::setRequestBody(const std::string &httpRequestBody)
{
    requestBody_ = httpRequestBody;
}

const std::set<Header> &HttpRequest::getHeaders() const
{
    return headers_;
}

void HttpRequest::setHeaders(const std::set<Header> &httpHeaders)
{
    headers_ = httpHeaders;
}

const std::string &HttpRequest::getFilePath() const
{
    return filePath_;
}

void HttpRequest::setFilePath(const std::string &logFilePath)
{
    filePath_ = logFilePath;
}

bool HttpRequest::isStreamLog() const
{
    return streamLog_;
}

void HttpRequest::setStreamLog(bool isStreamLog)
{
    streamLog_ = isStreamLog;
}

bool HttpRequest::isFileLog() const
{
    return fileLog_;
}

void HttpRequest::setFileLog(bool isFileLog)
{
    fileLog_ = isFileLog;
}

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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUEST_H
#define HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUEST_H

#include <string>
#include <set>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Header.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {
using namespace Utils;

class HUAWEICLOUD_CORE_EXPORT HttpRequest {
public:
    HttpRequest();
    ~HttpRequest();

    const std::string &getUrl() const;

    void setUrl(const std::string &httpUrl);

    const std::string &getMethod() const;

    void setMethod(const std::string &httpMethod);

    const std::string &getRequestBody() const;

    void setRequestBody(const std::string &httpRequestBody);

    const std::set<Header> &getHeaders() const;

    void setHeaders(const std::set<Header> &httpHeaders);

    const std::string &getFilePath() const;

    void setFilePath(const std::string &logFilePath);

    bool isStreamLog() const;

    void setStreamLog(bool isStreamLog);

    bool isFileLog() const;

    void setFileLog(bool isFileLog);

private:
    std::string url_;
    std::string method_;
    std::string requestBody_;
    std::set<Header> headers_;
    std::string filePath_;
    bool streamLog_ = false;
    bool fileLog_ = false;
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUEST_H
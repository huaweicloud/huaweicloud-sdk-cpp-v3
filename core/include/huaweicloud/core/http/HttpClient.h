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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_HTTPCLIENT_H
#define HUAWEICLOUD_SDK_CORE_HTTP_HTTPCLIENT_H

#include <iostream>
#include <map>

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/spdlog.h>
#include <curl/curl.h>
#include <boost/algorithm/string.hpp>

#include <huaweicloud/core/http/HttpConfig.h>
#include <huaweicloud/core/http/HttpResponse.h>
#include <huaweicloud/core/http/HttpRequest.h>

#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/RequestParams.h>

#include <huaweicloud/core/exception/SslHandShakeException.h>
#include <huaweicloud/core/exception/CallTimeoutException.h>
#include <huaweicloud/core/exception/RetryOutageException.h>
#include <huaweicloud/core/exception/HostUnreachableException.h>
#include <huaweicloud/core/exception/ServerResponseException.h>
#include <huaweicloud/core/exception/ClientRequestException.h>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {
class HUAWEICLOUD_CORE_EXPORT HttpClient {
public:
    HttpClient();
    ~HttpClient();

    std::unique_ptr<HttpResponse> doHttpRequestSync(const HttpRequest &httpRequest, const HttpConfig &httpConfig,
        bool streamLog, bool fileLog, const std::string &filePath, HttpResponse &httpResponse);

private:
    static constexpr int HTTP_SUCCESS_BEGIN_CODE = 200;
    static constexpr int HTTP_SUCCESS_END_CODE = 299;

    CURLcode curl_perform(const HttpRequest &httpRequest, const HttpConfig &httpConfig, std::string &body,
        std::string &header, long &statusCode);

    std::map<std::string, std::string> parseErrorMessage(const std::string &responseBody);

    void dealSslHandShakeException(bool streamLog, bool fileLog, const std::string &filePath);
    void dealHostUnreachableException(bool streamLog, bool fileLog, const std::string &filePath);
    void dealCallTimeoutException(bool log, bool log1, const std::string &basicString);
    void dealRetryOutageException(bool streamLog, bool fileLog, const std::string &filePath);
    void dealCurlOk(const HttpRequest &httpRequest, HttpResponse &httpResponse, bool streamLog, bool fileLog,
        const std::string &filePath);

    std::string parseRequestId(const std::string &responseHeader);
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_HTTP_HTTPCLIENT_H
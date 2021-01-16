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


#ifndef HUAWEICLOUD_SDK_CORE_REQUESTPARAMS_H
#define HUAWEICLOUD_SDK_CORE_REQUESTPARAMS_H
#include <string>
#include <set>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Header.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Core {
using namespace Utils;

class HUAWEICLOUD_CORE_EXPORT RequestParams {
public:
    RequestParams();
    RequestParams(std::string method, std::string scheme, std::string host, std::string uri, std::string queryParams,
        bool stream);
    RequestParams(std::string method, std::string scheme, std::string host, std::string uri, std::string queryParams,
        bool stream, std::string body);
    virtual ~RequestParams();

    const std::string &getMethod() const;
    const std::string &getScheme() const;
    const std::string &getHost() const;
    const std::string &getUri() const;
    const std::string &getQueryParams() const;
    const std::string &getBody() const;
    std::set<Header> getHeaders() const;


    void addHeader(const Utils::Header &header);
    void addHeader(const std::string &key, const std::string &value);
    std::string initHeaders();

private:
    std::string method_;
    std::string scheme_;
    std::string host_;
    std::string uri_;
    std::string queryParams_;
    std::string body_;
    bool stream_ = false;

    std::set<Utils::Header> headers_;
};
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_REQUESTPARAMS_H
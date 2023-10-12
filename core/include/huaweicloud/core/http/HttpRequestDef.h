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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUESTDEF_H
#define HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUESTDEF_H

#include <vector>
#include <huaweicloud/core/http/FieldDef.h>
#include <huaweicloud/core/CoreExport.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {

class HUAWEICLOUD_CORE_EXPORT HttpRequestDef {
public:
    HttpRequestDef() = default;
    virtual ~HttpRequestDef() = default;

    HttpRequestDef(HttpRequestDef&& def) = default;
    HttpRequestDef(const HttpRequestDef& def);

    HttpRequestDef& withPath(std::string path);
    HttpRequestDef& withMethod(std::string method);
    HttpRequestDef& withContentType(std::string contentType);

    HttpRequestDef& withRequestField(FieldDef& field);
    HttpRequestDef& withResponseField(FieldDef& field);

    std::vector<FieldDef> getRequestFields() const;
    std::vector<FieldDef> getResponseFields() const;
    std::string getPath() const;
    std::string getMethod() const;
    std::string getContentType() const;

private:
    std::string method;
    std::string contentType;
    std::string path;
    std::vector<FieldDef> requestFields; // 请求字段参数定义
    std::vector<FieldDef> responseFields;
    void* response; // 响应体类型
};

static const std::string MethodGet = "GET";
static const std::string MethodHead = "HEAD";
static const std::string MethodPut = "Put";
static const std::string MethodPost     = "POST";
static const std::string MethodDelete  = "DELETE";
static const std::string MethodConnect = "CONNECT";
static const std::string MethodOptions = "OPTIONS";
static const std::string MethodTrace   = "TRACE";

}
}
}
}

#endif //HUAWEICLOUD_SDK_CORE_HTTP_HTTPREQUESTDEF_H

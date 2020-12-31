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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_HTTPRESPONSE_H
#define HUAWEICLOUD_SDK_CORE_HTTP_HTTPRESPONSE_H

#include <string>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {
class HUAWEICLOUD_CORE_EXPORT HttpResponse {
public:
    HttpResponse();
    HttpResponse(int statusCode, std::string headerParams, std::string body);
    ~HttpResponse();

    int getStatusCode() const;
    std::string getHeaderParams() const;
    std::string getHttpBody() const;

    void setStatusCode(int code);
    void setHeaderParams(std::string header);
    void setHttpBody(std::string body);

private:
    /* HTTP Response Parameters */
    int statusCode_ {};
    std::string headerParams_;
    std::string body_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_HTTP_HTTPRESPONSE_H
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

#ifndef HUAWEICLOUD_SDK_CORE_EXCEPTION_SDKERRORMESSAGE_H
#define HUAWEICLOUD_SDK_CORE_EXCEPTION_SDKERRORMESSAGE_H

#include <cstdint>
#include <string>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Exception {
class HUAWEICLOUD_CORE_EXPORT SdkErrorMessage {
public:
    SdkErrorMessage();
    explicit SdkErrorMessage(int statusCode);
    SdkErrorMessage(const std::string &errorCode, const std::string &errorMsg, const std::string &requestId);
    SdkErrorMessage(const std::string &errorCode, const std::string &errorMsg);
    SdkErrorMessage(const std::string &errorCode, const std::string &errorMsg, const std::string &requestId,
                    const std::string &encodedAuthorizationMessage);

    virtual ~SdkErrorMessage();

    int getStatusCode() const;
    const std::string &getErrorMsg() const;
    const std::string &getErrorCode() const;
    const std::string &getRequestId() const;
    const std::string &getEncodedAuthorizationMessage() const;

    void setStatusCode(int statusCode);
    void setErrorMsg(const std::string &errorMsg);
    void setErrorCode(const std::string &errorCode);
    void setRequestId(const std::string &requestId);
    void setEncodedAuthorizationMessage(const std::string &encodedAuthorizationMessage);

    SdkErrorMessage &withErrorMsg(const std::string &errorMsg);
    SdkErrorMessage &withErrorCode(const std::string &errorCode);
    SdkErrorMessage &withRequestId(const std::string &requestId);
    SdkErrorMessage &withEncodedAuthorizationMessage(const std::string &encodedAuthorizationMessage);

private:
    int statusCode_ {};
    std::string errorMsg_;
    std::string errorCode_;
    std::string requestId_;
    std::string encodedAuthorizationMessage_;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_EXCEPTION_SDKERRORMESSAGE_H
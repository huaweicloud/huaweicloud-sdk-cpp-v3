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

#ifndef HUAWEICLOUD_SDK_CORE_EXCEPTION_SERVICERESPONSEEXCEPTION_H
#define HUAWEICLOUD_SDK_CORE_EXCEPTION_SERVICERESPONSEEXCEPTION_H

#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/core/exception/SdkErrorMessage.h>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Exception {
class HUAWEICLOUD_CORE_EXPORT ServiceResponseException : public SdkException {
public:
    ServiceResponseException(int statusCode, const SdkErrorMessage &sdkErrorMessage);
    ServiceResponseException(int statusCode, const std::string &errorCode, const std::string &errorMsg,
        const std::string &requestId);
    static ServiceResponseException mapException(int statusCode, const SdkErrorMessage &sdkErrorMessage);
    static ServiceResponseException mapException(int statusCode, const std::string &errorCode,
        const std::string &errorMsg, const std::string &requestId);

    int getStatusCode() const;
    const std::string &getErrorMsg() const;
    const std::string &getErrorCode() const;
    const std::string &getRequestId() const;

private:
    int statusCode_;
    std::string errorMsg_;
    std::string errorCode_;
    std::string requestId_;

    std::string toIndentedString(int msg);
    std::string toIndentedString(const std::string &msg);
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_EXCEPTION_SERVICERESPONSEEXCEPTION_H
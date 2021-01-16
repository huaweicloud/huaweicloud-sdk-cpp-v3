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


#include <sstream>
#include <boost/algorithm/string/replace.hpp>

#include <huaweicloud/core/exception/ServiceResponseException.h>
#include <huaweicloud/core/exception/ClientRequestException.h>
#include <huaweicloud/core/exception/ServerResponseException.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

ServiceResponseException::ServiceResponseException(int statusCode, const SdkErrorMessage &sdkErrorMessage)
    : SdkException(sdkErrorMessage.getErrorMsg().c_str())
{
    statusCode_ = statusCode;
    errorMsg_ = sdkErrorMessage.getErrorMsg();
    errorCode_ = sdkErrorMessage.getErrorCode();
    requestId_ = sdkErrorMessage.getRequestId();
}

ServiceResponseException::ServiceResponseException(int statusCode, const std::string &errorCode,
                                                   const std::string &errorMsg, const std::string &requestId)
    : SdkException(errorMsg.c_str())
{
    statusCode_ = statusCode;
    errorMsg_ = errorMsg;
    errorCode_ = errorCode;
    requestId_ = requestId;
}

ServiceResponseException ServiceResponseException::mapException(int statusCode,
                                                                const SdkErrorMessage &sdkErrorMessage)
{
    return mapException(statusCode, sdkErrorMessage.getErrorCode(), sdkErrorMessage.getErrorMsg(),
        sdkErrorMessage.getRequestId());
}

ServiceResponseException ServiceResponseException::mapException(int statusCode, const std::string &errorCode,
                                                                const std::string &errorMsg, const std::string &requestId)
{
    if (statusCode >= 400 && statusCode < 499) { // 400,499 statusCode
        return ClientRequestException(statusCode, errorCode, errorMsg, requestId);
    }
    if (statusCode >= 500 && statusCode < 600) { // 500,600 statusCode
        return ServerResponseException(statusCode, errorCode, errorMsg, requestId);
    }
    return ServiceResponseException(statusCode, errorCode, errorMsg, requestId);
}

int ServiceResponseException::getStatusCode() const
{
    return statusCode_;
}

const std::string &ServiceResponseException::getErrorMsg() const
{
    return errorMsg_;
}

const std::string &ServiceResponseException::getErrorCode() const
{
    return errorCode_;
}

const std::string &ServiceResponseException::getRequestId() const
{
    return requestId_;
}

std::string ServiceResponseException::toIndentedString(int msg)
{
    std::stringstream temp;
    temp << msg;
    std::string res = temp.str();
    boost::replace_all(res, "\n", "\n    ");
    return res;
}

std::string ServiceResponseException::toIndentedString(const std::string &msg)
{
    if (msg.empty()) {
        return "null";
    }
    std::string res = msg;
    boost::replace_all(res, "\n", "\n    ");
    return res;
}
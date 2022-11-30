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


#include <huaweicloud/core/exception/SdkErrorMessage.h>

using namespace HuaweiCloud::Sdk::Core::Exception;

SdkErrorMessage::SdkErrorMessage() = default;

SdkErrorMessage::~SdkErrorMessage() = default;

SdkErrorMessage::SdkErrorMessage(int statusCode)
{
    statusCode_ = statusCode;
}

SdkErrorMessage::SdkErrorMessage(const std::string &errorCode, const std::string &errorMsg,
    const std::string &requestId)
{
    errorCode_ = errorCode;
    errorMsg_ = errorMsg;
    requestId_ = requestId;
}

SdkErrorMessage::SdkErrorMessage(const std::string &errorCode, const std::string &errorMsg)
{
    errorCode_ = errorCode;
    errorMsg_ = errorMsg;
}

int SdkErrorMessage::getStatusCode() const
{
    return statusCode_;
}

void SdkErrorMessage::setStatusCode(int statusCode)
{
    SdkErrorMessage::statusCode_ = statusCode;
}

const std::string &SdkErrorMessage::getErrorMsg() const
{
    return errorMsg_;
}

void SdkErrorMessage::setErrorMsg(const std::string &errorMsg)
{
    SdkErrorMessage::errorMsg_ = errorMsg;
}

SdkErrorMessage &SdkErrorMessage::withErrorMsg(const std::string &errorMsg)
{
    return *this;
}

const std::string &SdkErrorMessage::getErrorCode() const
{
    return errorCode_;
}

void SdkErrorMessage::setErrorCode(const std::string &errorCode)
{
    SdkErrorMessage::errorCode_ = errorCode;
}

SdkErrorMessage &SdkErrorMessage::withErrorCode(const std::string &errorCode)
{
    return *this;
}

const std::string &SdkErrorMessage::getRequestId() const
{
    return requestId_;
}

void SdkErrorMessage::setRequestId(const std::string &requestId)
{
    SdkErrorMessage::requestId_ = requestId;
}

SdkErrorMessage &SdkErrorMessage::withRequestId(const std::string &requestId)
{
    return *this;
}
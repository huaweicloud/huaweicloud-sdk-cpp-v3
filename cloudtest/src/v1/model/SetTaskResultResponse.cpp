

#include "huaweicloud/cloudtest/v1/model/SetTaskResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SetTaskResultResponse::SetTaskResultResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    serverAddress_ = "";
    serverAddressIsSet_ = false;
}

SetTaskResultResponse::~SetTaskResultResponse() = default;

void SetTaskResultResponse::validate()
{
}

web::json::value SetTaskResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(serverAddressIsSet_) {
        val[utility::conversions::to_string_t("server_address")] = ModelBase::toJson(serverAddress_);
    }

    return val;
}
bool SetTaskResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueTaskResultVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ApiError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerAddress(refVal);
        }
    }
    return ok;
}


std::string SetTaskResultResponse::getStatus() const
{
    return status_;
}

void SetTaskResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetTaskResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetTaskResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTaskResultVo SetTaskResultResponse::getResult() const
{
    return result_;
}

void SetTaskResultResponse::setResult(const ResultValueTaskResultVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetTaskResultResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetTaskResultResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError SetTaskResultResponse::getError() const
{
    return error_;
}

void SetTaskResultResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool SetTaskResultResponse::errorIsSet() const
{
    return errorIsSet_;
}

void SetTaskResultResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string SetTaskResultResponse::getRequestId() const
{
    return requestId_;
}

void SetTaskResultResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool SetTaskResultResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void SetTaskResultResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string SetTaskResultResponse::getServerAddress() const
{
    return serverAddress_;
}

void SetTaskResultResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool SetTaskResultResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void SetTaskResultResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



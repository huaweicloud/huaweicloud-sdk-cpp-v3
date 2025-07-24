

#include "huaweicloud/cloudtest/v1/model/ShowCaseResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowCaseResultResponse::ShowCaseResultResponse()
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

ShowCaseResultResponse::~ShowCaseResultResponse() = default;

void ShowCaseResultResponse::validate()
{
}

web::json::value ShowCaseResultResponse::toJson() const
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
bool ShowCaseResultResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestResultVo refVal;
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


std::string ShowCaseResultResponse::getStatus() const
{
    return status_;
}

void ShowCaseResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCaseResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCaseResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestResultVo ShowCaseResultResponse::getResult() const
{
    return result_;
}

void ShowCaseResultResponse::setResult(const ResultValueListTestResultVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCaseResultResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCaseResultResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowCaseResultResponse::getError() const
{
    return error_;
}

void ShowCaseResultResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowCaseResultResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowCaseResultResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowCaseResultResponse::getRequestId() const
{
    return requestId_;
}

void ShowCaseResultResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowCaseResultResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowCaseResultResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowCaseResultResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowCaseResultResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowCaseResultResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowCaseResultResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



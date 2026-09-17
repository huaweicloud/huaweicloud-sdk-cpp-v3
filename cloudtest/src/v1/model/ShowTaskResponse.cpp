

#include "huaweicloud/cloudtest/v1/model/ShowTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTaskResponse::ShowTaskResponse()
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

ShowTaskResponse::~ShowTaskResponse() = default;

void ShowTaskResponse::validate()
{
}

web::json::value ShowTaskResponse::toJson() const
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
bool ShowTaskResponse::fromJson(const web::json::value& val)
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
            ResultValueTaskVo refVal;
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


std::string ShowTaskResponse::getStatus() const
{
    return status_;
}

void ShowTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTaskVo ShowTaskResponse::getResult() const
{
    return result_;
}

void ShowTaskResponse::setResult(const ResultValueTaskVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowTaskResponse::getError() const
{
    return error_;
}

void ShowTaskResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTaskResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTaskResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowTaskResponse::getRequestId() const
{
    return requestId_;
}

void ShowTaskResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowTaskResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowTaskResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowTaskResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowTaskResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowTaskResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowTaskResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



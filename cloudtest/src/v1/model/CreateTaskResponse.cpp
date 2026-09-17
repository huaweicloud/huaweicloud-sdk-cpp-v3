

#include "huaweicloud/cloudtest/v1/model/CreateTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTaskResponse::CreateTaskResponse()
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

CreateTaskResponse::~CreateTaskResponse() = default;

void CreateTaskResponse::validate()
{
}

web::json::value CreateTaskResponse::toJson() const
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
bool CreateTaskResponse::fromJson(const web::json::value& val)
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
            ResultValueString refVal;
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


std::string CreateTaskResponse::getStatus() const
{
    return status_;
}

void CreateTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString CreateTaskResponse::getResult() const
{
    return result_;
}

void CreateTaskResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateTaskResponse::getError() const
{
    return error_;
}

void CreateTaskResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateTaskResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateTaskResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateTaskResponse::getRequestId() const
{
    return requestId_;
}

void CreateTaskResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateTaskResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateTaskResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateTaskResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateTaskResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateTaskResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateTaskResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



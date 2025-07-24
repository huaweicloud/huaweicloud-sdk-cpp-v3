

#include "huaweicloud/cloudtest/v1/model/CreateTaskDefaultResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTaskDefaultResultResponse::CreateTaskDefaultResultResponse()
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

CreateTaskDefaultResultResponse::~CreateTaskDefaultResultResponse() = default;

void CreateTaskDefaultResultResponse::validate()
{
}

web::json::value CreateTaskDefaultResultResponse::toJson() const
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
bool CreateTaskDefaultResultResponse::fromJson(const web::json::value& val)
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
            ResultValueExecuteTaskVo refVal;
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


std::string CreateTaskDefaultResultResponse::getStatus() const
{
    return status_;
}

void CreateTaskDefaultResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTaskDefaultResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTaskDefaultResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueExecuteTaskVo CreateTaskDefaultResultResponse::getResult() const
{
    return result_;
}

void CreateTaskDefaultResultResponse::setResult(const ResultValueExecuteTaskVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateTaskDefaultResultResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateTaskDefaultResultResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateTaskDefaultResultResponse::getError() const
{
    return error_;
}

void CreateTaskDefaultResultResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateTaskDefaultResultResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateTaskDefaultResultResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateTaskDefaultResultResponse::getRequestId() const
{
    return requestId_;
}

void CreateTaskDefaultResultResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateTaskDefaultResultResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateTaskDefaultResultResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateTaskDefaultResultResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateTaskDefaultResultResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateTaskDefaultResultResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateTaskDefaultResultResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



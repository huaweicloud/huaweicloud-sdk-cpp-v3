

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTasksResponse::BatchDeleteTasksResponse()
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

BatchDeleteTasksResponse::~BatchDeleteTasksResponse() = default;

void BatchDeleteTasksResponse::validate()
{
}

web::json::value BatchDeleteTasksResponse::toJson() const
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
bool BatchDeleteTasksResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteTasksResponse::getStatus() const
{
    return status_;
}

void BatchDeleteTasksResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteTasksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteTasksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString BatchDeleteTasksResponse::getResult() const
{
    return result_;
}

void BatchDeleteTasksResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteTasksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteTasksResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError BatchDeleteTasksResponse::getError() const
{
    return error_;
}

void BatchDeleteTasksResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchDeleteTasksResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchDeleteTasksResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchDeleteTasksResponse::getRequestId() const
{
    return requestId_;
}

void BatchDeleteTasksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchDeleteTasksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchDeleteTasksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string BatchDeleteTasksResponse::getServerAddress() const
{
    return serverAddress_;
}

void BatchDeleteTasksResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool BatchDeleteTasksResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void BatchDeleteTasksResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



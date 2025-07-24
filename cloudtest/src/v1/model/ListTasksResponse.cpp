

#include "huaweicloud/cloudtest/v1/model/ListTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTasksResponse::ListTasksResponse()
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

ListTasksResponse::~ListTasksResponse() = default;

void ListTasksResponse::validate()
{
}

web::json::value ListTasksResponse::toJson() const
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
bool ListTasksResponse::fromJson(const web::json::value& val)
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
            ResultValueTaskListVo refVal;
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


std::string ListTasksResponse::getStatus() const
{
    return status_;
}

void ListTasksResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTasksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTasksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTaskListVo ListTasksResponse::getResult() const
{
    return result_;
}

void ListTasksResponse::setResult(const ResultValueTaskListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTasksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTasksResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTasksResponse::getError() const
{
    return error_;
}

void ListTasksResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTasksResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTasksResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTasksResponse::getRequestId() const
{
    return requestId_;
}

void ListTasksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTasksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTasksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTasksResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTasksResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTasksResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTasksResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ListProjectFieldConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListProjectFieldConfigsResponse::ListProjectFieldConfigsResponse()
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

ListProjectFieldConfigsResponse::~ListProjectFieldConfigsResponse() = default;

void ListProjectFieldConfigsResponse::validate()
{
}

web::json::value ListProjectFieldConfigsResponse::toJson() const
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
bool ListProjectFieldConfigsResponse::fromJson(const web::json::value& val)
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
            ResultValueListProjectFieldConfigVo refVal;
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


std::string ListProjectFieldConfigsResponse::getStatus() const
{
    return status_;
}

void ListProjectFieldConfigsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectFieldConfigsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectFieldConfigsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListProjectFieldConfigVo ListProjectFieldConfigsResponse::getResult() const
{
    return result_;
}

void ListProjectFieldConfigsResponse::setResult(const ResultValueListProjectFieldConfigVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProjectFieldConfigsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProjectFieldConfigsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListProjectFieldConfigsResponse::getError() const
{
    return error_;
}

void ListProjectFieldConfigsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListProjectFieldConfigsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListProjectFieldConfigsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListProjectFieldConfigsResponse::getRequestId() const
{
    return requestId_;
}

void ListProjectFieldConfigsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListProjectFieldConfigsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListProjectFieldConfigsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListProjectFieldConfigsResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListProjectFieldConfigsResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListProjectFieldConfigsResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListProjectFieldConfigsResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



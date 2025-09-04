

#include "huaweicloud/cloudtest/v1/model/ListIteratorsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIteratorsInfoResponse::ListIteratorsInfoResponse()
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

ListIteratorsInfoResponse::~ListIteratorsInfoResponse() = default;

void ListIteratorsInfoResponse::validate()
{
}

web::json::value ListIteratorsInfoResponse::toJson() const
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
bool ListIteratorsInfoResponse::fromJson(const web::json::value& val)
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
            ResultValueListIteratorVersionSummaryVo refVal;
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


std::string ListIteratorsInfoResponse::getStatus() const
{
    return status_;
}

void ListIteratorsInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIteratorsInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIteratorsInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListIteratorVersionSummaryVo ListIteratorsInfoResponse::getResult() const
{
    return result_;
}

void ListIteratorsInfoResponse::setResult(const ResultValueListIteratorVersionSummaryVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIteratorsInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIteratorsInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListIteratorsInfoResponse::getError() const
{
    return error_;
}

void ListIteratorsInfoResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListIteratorsInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListIteratorsInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListIteratorsInfoResponse::getRequestId() const
{
    return requestId_;
}

void ListIteratorsInfoResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListIteratorsInfoResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListIteratorsInfoResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListIteratorsInfoResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListIteratorsInfoResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListIteratorsInfoResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListIteratorsInfoResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/RemoveIssuesFromIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RemoveIssuesFromIteratorResponse::RemoveIssuesFromIteratorResponse()
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

RemoveIssuesFromIteratorResponse::~RemoveIssuesFromIteratorResponse() = default;

void RemoveIssuesFromIteratorResponse::validate()
{
}

web::json::value RemoveIssuesFromIteratorResponse::toJson() const
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
bool RemoveIssuesFromIteratorResponse::fromJson(const web::json::value& val)
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


std::string RemoveIssuesFromIteratorResponse::getStatus() const
{
    return status_;
}

void RemoveIssuesFromIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoveIssuesFromIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RemoveIssuesFromIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString RemoveIssuesFromIteratorResponse::getResult() const
{
    return result_;
}

void RemoveIssuesFromIteratorResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RemoveIssuesFromIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RemoveIssuesFromIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError RemoveIssuesFromIteratorResponse::getError() const
{
    return error_;
}

void RemoveIssuesFromIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool RemoveIssuesFromIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void RemoveIssuesFromIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string RemoveIssuesFromIteratorResponse::getRequestId() const
{
    return requestId_;
}

void RemoveIssuesFromIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool RemoveIssuesFromIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void RemoveIssuesFromIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string RemoveIssuesFromIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void RemoveIssuesFromIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool RemoveIssuesFromIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void RemoveIssuesFromIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



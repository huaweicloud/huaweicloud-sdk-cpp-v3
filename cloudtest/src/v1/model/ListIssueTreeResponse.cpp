

#include "huaweicloud/cloudtest/v1/model/ListIssueTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIssueTreeResponse::ListIssueTreeResponse()
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

ListIssueTreeResponse::~ListIssueTreeResponse() = default;

void ListIssueTreeResponse::validate()
{
}

web::json::value ListIssueTreeResponse::toJson() const
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
bool ListIssueTreeResponse::fromJson(const web::json::value& val)
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
            ResultValueListWorkItemVo refVal;
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


std::string ListIssueTreeResponse::getStatus() const
{
    return status_;
}

void ListIssueTreeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIssueTreeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIssueTreeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListWorkItemVo ListIssueTreeResponse::getResult() const
{
    return result_;
}

void ListIssueTreeResponse::setResult(const ResultValueListWorkItemVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIssueTreeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIssueTreeResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListIssueTreeResponse::getError() const
{
    return error_;
}

void ListIssueTreeResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListIssueTreeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListIssueTreeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListIssueTreeResponse::getRequestId() const
{
    return requestId_;
}

void ListIssueTreeResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListIssueTreeResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListIssueTreeResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListIssueTreeResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListIssueTreeResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListIssueTreeResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListIssueTreeResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



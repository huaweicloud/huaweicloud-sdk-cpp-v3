

#include "huaweicloud/cloudtest/v1/model/ListIteratorIssueTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIteratorIssueTreeResponse::ListIteratorIssueTreeResponse()
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

ListIteratorIssueTreeResponse::~ListIteratorIssueTreeResponse() = default;

void ListIteratorIssueTreeResponse::validate()
{
}

web::json::value ListIteratorIssueTreeResponse::toJson() const
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
bool ListIteratorIssueTreeResponse::fromJson(const web::json::value& val)
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


std::string ListIteratorIssueTreeResponse::getStatus() const
{
    return status_;
}

void ListIteratorIssueTreeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIteratorIssueTreeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIteratorIssueTreeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListWorkItemVo ListIteratorIssueTreeResponse::getResult() const
{
    return result_;
}

void ListIteratorIssueTreeResponse::setResult(const ResultValueListWorkItemVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIteratorIssueTreeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIteratorIssueTreeResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListIteratorIssueTreeResponse::getError() const
{
    return error_;
}

void ListIteratorIssueTreeResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListIteratorIssueTreeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListIteratorIssueTreeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListIteratorIssueTreeResponse::getRequestId() const
{
    return requestId_;
}

void ListIteratorIssueTreeResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListIteratorIssueTreeResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListIteratorIssueTreeResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListIteratorIssueTreeResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListIteratorIssueTreeResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListIteratorIssueTreeResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListIteratorIssueTreeResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



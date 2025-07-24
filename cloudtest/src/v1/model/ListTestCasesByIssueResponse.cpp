

#include "huaweicloud/cloudtest/v1/model/ListTestCasesByIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesByIssueResponse::ListTestCasesByIssueResponse()
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

ListTestCasesByIssueResponse::~ListTestCasesByIssueResponse() = default;

void ListTestCasesByIssueResponse::validate()
{
}

web::json::value ListTestCasesByIssueResponse::toJson() const
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
bool ListTestCasesByIssueResponse::fromJson(const web::json::value& val)
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
            ResultValueQueryTestCasesByIssueVo refVal;
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


std::string ListTestCasesByIssueResponse::getStatus() const
{
    return status_;
}

void ListTestCasesByIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestCasesByIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestCasesByIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueQueryTestCasesByIssueVo ListTestCasesByIssueResponse::getResult() const
{
    return result_;
}

void ListTestCasesByIssueResponse::setResult(const ResultValueQueryTestCasesByIssueVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestCasesByIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestCasesByIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestCasesByIssueResponse::getError() const
{
    return error_;
}

void ListTestCasesByIssueResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestCasesByIssueResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestCasesByIssueResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTestCasesByIssueResponse::getRequestId() const
{
    return requestId_;
}

void ListTestCasesByIssueResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTestCasesByIssueResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTestCasesByIssueResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTestCasesByIssueResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTestCasesByIssueResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTestCasesByIssueResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTestCasesByIssueResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



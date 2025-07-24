

#include "huaweicloud/cloudtest/v1/model/ListTestCaseCommentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseCommentsResponse::ListTestCaseCommentsResponse()
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

ListTestCaseCommentsResponse::~ListTestCaseCommentsResponse() = default;

void ListTestCaseCommentsResponse::validate()
{
}

web::json::value ListTestCaseCommentsResponse::toJson() const
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
bool ListTestCaseCommentsResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestCaseCommentVo refVal;
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


std::string ListTestCaseCommentsResponse::getStatus() const
{
    return status_;
}

void ListTestCaseCommentsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestCaseCommentsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestCaseCommentsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestCaseCommentVo ListTestCaseCommentsResponse::getResult() const
{
    return result_;
}

void ListTestCaseCommentsResponse::setResult(const ResultValueListTestCaseCommentVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestCaseCommentsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestCaseCommentsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestCaseCommentsResponse::getError() const
{
    return error_;
}

void ListTestCaseCommentsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestCaseCommentsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestCaseCommentsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTestCaseCommentsResponse::getRequestId() const
{
    return requestId_;
}

void ListTestCaseCommentsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTestCaseCommentsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTestCaseCommentsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTestCaseCommentsResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTestCaseCommentsResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTestCaseCommentsResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTestCaseCommentsResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



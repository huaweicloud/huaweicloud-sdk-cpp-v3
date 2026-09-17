

#include "huaweicloud/cloudtest/v1/model/ListTestCasesByConditionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesByConditionResponse::ListTestCasesByConditionResponse()
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

ListTestCasesByConditionResponse::~ListTestCasesByConditionResponse() = default;

void ListTestCasesByConditionResponse::validate()
{
}

web::json::value ListTestCasesByConditionResponse::toJson() const
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
bool ListTestCasesByConditionResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestCaseListVo refVal;
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


std::string ListTestCasesByConditionResponse::getStatus() const
{
    return status_;
}

void ListTestCasesByConditionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestCasesByConditionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestCasesByConditionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestCaseListVo ListTestCasesByConditionResponse::getResult() const
{
    return result_;
}

void ListTestCasesByConditionResponse::setResult(const ResultValueListTestCaseListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestCasesByConditionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestCasesByConditionResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestCasesByConditionResponse::getError() const
{
    return error_;
}

void ListTestCasesByConditionResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestCasesByConditionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestCasesByConditionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTestCasesByConditionResponse::getRequestId() const
{
    return requestId_;
}

void ListTestCasesByConditionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTestCasesByConditionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTestCasesByConditionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTestCasesByConditionResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTestCasesByConditionResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTestCasesByConditionResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTestCasesByConditionResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



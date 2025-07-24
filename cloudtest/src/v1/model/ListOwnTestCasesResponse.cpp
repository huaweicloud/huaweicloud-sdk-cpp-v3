

#include "huaweicloud/cloudtest/v1/model/ListOwnTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListOwnTestCasesResponse::ListOwnTestCasesResponse()
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

ListOwnTestCasesResponse::~ListOwnTestCasesResponse() = default;

void ListOwnTestCasesResponse::validate()
{
}

web::json::value ListOwnTestCasesResponse::toJson() const
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
bool ListOwnTestCasesResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestCaseVo refVal;
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


std::string ListOwnTestCasesResponse::getStatus() const
{
    return status_;
}

void ListOwnTestCasesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListOwnTestCasesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListOwnTestCasesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestCaseVo ListOwnTestCasesResponse::getResult() const
{
    return result_;
}

void ListOwnTestCasesResponse::setResult(const ResultValueListTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListOwnTestCasesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListOwnTestCasesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListOwnTestCasesResponse::getError() const
{
    return error_;
}

void ListOwnTestCasesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListOwnTestCasesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListOwnTestCasesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListOwnTestCasesResponse::getRequestId() const
{
    return requestId_;
}

void ListOwnTestCasesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListOwnTestCasesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListOwnTestCasesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListOwnTestCasesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListOwnTestCasesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListOwnTestCasesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListOwnTestCasesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ListAllTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllTestCasesResponse::ListAllTestCasesResponse()
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

ListAllTestCasesResponse::~ListAllTestCasesResponse() = default;

void ListAllTestCasesResponse::validate()
{
}

web::json::value ListAllTestCasesResponse::toJson() const
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
bool ListAllTestCasesResponse::fromJson(const web::json::value& val)
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


std::string ListAllTestCasesResponse::getStatus() const
{
    return status_;
}

void ListAllTestCasesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAllTestCasesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAllTestCasesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestCaseListVo ListAllTestCasesResponse::getResult() const
{
    return result_;
}

void ListAllTestCasesResponse::setResult(const ResultValueListTestCaseListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAllTestCasesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAllTestCasesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListAllTestCasesResponse::getError() const
{
    return error_;
}

void ListAllTestCasesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListAllTestCasesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListAllTestCasesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListAllTestCasesResponse::getRequestId() const
{
    return requestId_;
}

void ListAllTestCasesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListAllTestCasesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListAllTestCasesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListAllTestCasesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListAllTestCasesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListAllTestCasesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListAllTestCasesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



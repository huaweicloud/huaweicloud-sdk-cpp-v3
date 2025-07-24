

#include "huaweicloud/cloudtest/v1/model/ListTaskAssignCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskAssignCasesResponse::ListTaskAssignCasesResponse()
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

ListTaskAssignCasesResponse::~ListTaskAssignCasesResponse() = default;

void ListTaskAssignCasesResponse::validate()
{
}

web::json::value ListTaskAssignCasesResponse::toJson() const
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
bool ListTaskAssignCasesResponse::fromJson(const web::json::value& val)
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
            ResultValueListTaskAssignCaseDetailVo refVal;
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


std::string ListTaskAssignCasesResponse::getStatus() const
{
    return status_;
}

void ListTaskAssignCasesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTaskAssignCasesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTaskAssignCasesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTaskAssignCaseDetailVo ListTaskAssignCasesResponse::getResult() const
{
    return result_;
}

void ListTaskAssignCasesResponse::setResult(const ResultValueListTaskAssignCaseDetailVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTaskAssignCasesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTaskAssignCasesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTaskAssignCasesResponse::getError() const
{
    return error_;
}

void ListTaskAssignCasesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTaskAssignCasesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTaskAssignCasesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTaskAssignCasesResponse::getRequestId() const
{
    return requestId_;
}

void ListTaskAssignCasesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTaskAssignCasesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTaskAssignCasesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTaskAssignCasesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTaskAssignCasesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTaskAssignCasesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTaskAssignCasesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



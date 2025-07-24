

#include "huaweicloud/cloudtest/v1/model/ListTaskTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskTestCasesResponse::ListTaskTestCasesResponse()
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

ListTaskTestCasesResponse::~ListTaskTestCasesResponse() = default;

void ListTaskTestCasesResponse::validate()
{
}

web::json::value ListTaskTestCasesResponse::toJson() const
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
bool ListTaskTestCasesResponse::fromJson(const web::json::value& val)
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
            ResultValueQueryTaskTestCasesVo refVal;
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


std::string ListTaskTestCasesResponse::getStatus() const
{
    return status_;
}

void ListTaskTestCasesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTaskTestCasesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTaskTestCasesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueQueryTaskTestCasesVo ListTaskTestCasesResponse::getResult() const
{
    return result_;
}

void ListTaskTestCasesResponse::setResult(const ResultValueQueryTaskTestCasesVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTaskTestCasesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTaskTestCasesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTaskTestCasesResponse::getError() const
{
    return error_;
}

void ListTaskTestCasesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTaskTestCasesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTaskTestCasesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTaskTestCasesResponse::getRequestId() const
{
    return requestId_;
}

void ListTaskTestCasesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTaskTestCasesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTaskTestCasesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTaskTestCasesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTaskTestCasesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTaskTestCasesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTaskTestCasesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



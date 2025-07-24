

#include "huaweicloud/cloudtest/v1/model/AddTestCaseResultLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseResultLogResponse::AddTestCaseResultLogResponse()
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

AddTestCaseResultLogResponse::~AddTestCaseResultLogResponse() = default;

void AddTestCaseResultLogResponse::validate()
{
}

web::json::value AddTestCaseResultLogResponse::toJson() const
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
bool AddTestCaseResultLogResponse::fromJson(const web::json::value& val)
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
            ResultValueTestResultVo refVal;
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


std::string AddTestCaseResultLogResponse::getStatus() const
{
    return status_;
}

void AddTestCaseResultLogResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddTestCaseResultLogResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddTestCaseResultLogResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestResultVo AddTestCaseResultLogResponse::getResult() const
{
    return result_;
}

void AddTestCaseResultLogResponse::setResult(const ResultValueTestResultVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddTestCaseResultLogResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddTestCaseResultLogResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError AddTestCaseResultLogResponse::getError() const
{
    return error_;
}

void AddTestCaseResultLogResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddTestCaseResultLogResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddTestCaseResultLogResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddTestCaseResultLogResponse::getRequestId() const
{
    return requestId_;
}

void AddTestCaseResultLogResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddTestCaseResultLogResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddTestCaseResultLogResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddTestCaseResultLogResponse::getServerAddress() const
{
    return serverAddress_;
}

void AddTestCaseResultLogResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool AddTestCaseResultLogResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void AddTestCaseResultLogResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



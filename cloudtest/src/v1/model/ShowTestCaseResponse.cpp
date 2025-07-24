

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseResponse::ShowTestCaseResponse()
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

ShowTestCaseResponse::~ShowTestCaseResponse() = default;

void ShowTestCaseResponse::validate()
{
}

web::json::value ShowTestCaseResponse::toJson() const
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
bool ShowTestCaseResponse::fromJson(const web::json::value& val)
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
            ResultValueTestCaseDetailVo refVal;
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


std::string ShowTestCaseResponse::getStatus() const
{
    return status_;
}

void ShowTestCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTestCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTestCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseDetailVo ShowTestCaseResponse::getResult() const
{
    return result_;
}

void ShowTestCaseResponse::setResult(const ResultValueTestCaseDetailVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTestCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTestCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowTestCaseResponse::getError() const
{
    return error_;
}

void ShowTestCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTestCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTestCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowTestCaseResponse::getRequestId() const
{
    return requestId_;
}

void ShowTestCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowTestCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowTestCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowTestCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowTestCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowTestCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowTestCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



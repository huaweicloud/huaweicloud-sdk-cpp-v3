

#include "huaweicloud/cloudtest/v1/model/ShowTestVersionCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestVersionCaseResponse::ShowTestVersionCaseResponse()
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

ShowTestVersionCaseResponse::~ShowTestVersionCaseResponse() = default;

void ShowTestVersionCaseResponse::validate()
{
}

web::json::value ShowTestVersionCaseResponse::toJson() const
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
bool ShowTestVersionCaseResponse::fromJson(const web::json::value& val)
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


std::string ShowTestVersionCaseResponse::getStatus() const
{
    return status_;
}

void ShowTestVersionCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTestVersionCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTestVersionCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseDetailVo ShowTestVersionCaseResponse::getResult() const
{
    return result_;
}

void ShowTestVersionCaseResponse::setResult(const ResultValueTestCaseDetailVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTestVersionCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTestVersionCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowTestVersionCaseResponse::getError() const
{
    return error_;
}

void ShowTestVersionCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTestVersionCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTestVersionCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowTestVersionCaseResponse::getRequestId() const
{
    return requestId_;
}

void ShowTestVersionCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowTestVersionCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowTestVersionCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowTestVersionCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowTestVersionCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowTestVersionCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowTestVersionCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



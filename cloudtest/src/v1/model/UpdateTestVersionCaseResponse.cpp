

#include "huaweicloud/cloudtest/v1/model/UpdateTestVersionCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestVersionCaseResponse::UpdateTestVersionCaseResponse()
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

UpdateTestVersionCaseResponse::~UpdateTestVersionCaseResponse() = default;

void UpdateTestVersionCaseResponse::validate()
{
}

web::json::value UpdateTestVersionCaseResponse::toJson() const
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
bool UpdateTestVersionCaseResponse::fromJson(const web::json::value& val)
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
            ResultValueTestCaseVo refVal;
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


std::string UpdateTestVersionCaseResponse::getStatus() const
{
    return status_;
}

void UpdateTestVersionCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTestVersionCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTestVersionCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseVo UpdateTestVersionCaseResponse::getResult() const
{
    return result_;
}

void UpdateTestVersionCaseResponse::setResult(const ResultValueTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateTestVersionCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateTestVersionCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateTestVersionCaseResponse::getError() const
{
    return error_;
}

void UpdateTestVersionCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateTestVersionCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateTestVersionCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateTestVersionCaseResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTestVersionCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTestVersionCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTestVersionCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateTestVersionCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateTestVersionCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateTestVersionCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateTestVersionCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



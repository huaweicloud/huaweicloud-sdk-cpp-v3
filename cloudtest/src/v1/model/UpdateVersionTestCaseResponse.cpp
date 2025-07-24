

#include "huaweicloud/cloudtest/v1/model/UpdateVersionTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateVersionTestCaseResponse::UpdateVersionTestCaseResponse()
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

UpdateVersionTestCaseResponse::~UpdateVersionTestCaseResponse() = default;

void UpdateVersionTestCaseResponse::validate()
{
}

web::json::value UpdateVersionTestCaseResponse::toJson() const
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
bool UpdateVersionTestCaseResponse::fromJson(const web::json::value& val)
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


std::string UpdateVersionTestCaseResponse::getStatus() const
{
    return status_;
}

void UpdateVersionTestCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateVersionTestCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateVersionTestCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseVo UpdateVersionTestCaseResponse::getResult() const
{
    return result_;
}

void UpdateVersionTestCaseResponse::setResult(const ResultValueTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateVersionTestCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateVersionTestCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateVersionTestCaseResponse::getError() const
{
    return error_;
}

void UpdateVersionTestCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateVersionTestCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateVersionTestCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateVersionTestCaseResponse::getRequestId() const
{
    return requestId_;
}

void UpdateVersionTestCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateVersionTestCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateVersionTestCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateVersionTestCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateVersionTestCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateVersionTestCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateVersionTestCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



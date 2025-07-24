

#include "huaweicloud/cloudtest/v1/model/CreateVersionTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateVersionTestCaseResponse::CreateVersionTestCaseResponse()
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

CreateVersionTestCaseResponse::~CreateVersionTestCaseResponse() = default;

void CreateVersionTestCaseResponse::validate()
{
}

web::json::value CreateVersionTestCaseResponse::toJson() const
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
bool CreateVersionTestCaseResponse::fromJson(const web::json::value& val)
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


std::string CreateVersionTestCaseResponse::getStatus() const
{
    return status_;
}

void CreateVersionTestCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateVersionTestCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateVersionTestCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseVo CreateVersionTestCaseResponse::getResult() const
{
    return result_;
}

void CreateVersionTestCaseResponse::setResult(const ResultValueTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateVersionTestCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateVersionTestCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateVersionTestCaseResponse::getError() const
{
    return error_;
}

void CreateVersionTestCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateVersionTestCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateVersionTestCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateVersionTestCaseResponse::getRequestId() const
{
    return requestId_;
}

void CreateVersionTestCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateVersionTestCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateVersionTestCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateVersionTestCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateVersionTestCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateVersionTestCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateVersionTestCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



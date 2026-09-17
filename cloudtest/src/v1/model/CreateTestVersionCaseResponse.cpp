

#include "huaweicloud/cloudtest/v1/model/CreateTestVersionCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestVersionCaseResponse::CreateTestVersionCaseResponse()
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

CreateTestVersionCaseResponse::~CreateTestVersionCaseResponse() = default;

void CreateTestVersionCaseResponse::validate()
{
}

web::json::value CreateTestVersionCaseResponse::toJson() const
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
bool CreateTestVersionCaseResponse::fromJson(const web::json::value& val)
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


std::string CreateTestVersionCaseResponse::getStatus() const
{
    return status_;
}

void CreateTestVersionCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTestVersionCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTestVersionCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseVo CreateTestVersionCaseResponse::getResult() const
{
    return result_;
}

void CreateTestVersionCaseResponse::setResult(const ResultValueTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateTestVersionCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateTestVersionCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateTestVersionCaseResponse::getError() const
{
    return error_;
}

void CreateTestVersionCaseResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateTestVersionCaseResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateTestVersionCaseResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateTestVersionCaseResponse::getRequestId() const
{
    return requestId_;
}

void CreateTestVersionCaseResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateTestVersionCaseResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateTestVersionCaseResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateTestVersionCaseResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateTestVersionCaseResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateTestVersionCaseResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateTestVersionCaseResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



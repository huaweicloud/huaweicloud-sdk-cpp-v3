

#include "huaweicloud/cloudtest/v1/model/AddCaseResultFourResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddCaseResultFourResponse::AddCaseResultFourResponse()
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

AddCaseResultFourResponse::~AddCaseResultFourResponse() = default;

void AddCaseResultFourResponse::validate()
{
}

web::json::value AddCaseResultFourResponse::toJson() const
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
bool AddCaseResultFourResponse::fromJson(const web::json::value& val)
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


std::string AddCaseResultFourResponse::getStatus() const
{
    return status_;
}

void AddCaseResultFourResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddCaseResultFourResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddCaseResultFourResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestResultVo AddCaseResultFourResponse::getResult() const
{
    return result_;
}

void AddCaseResultFourResponse::setResult(const ResultValueTestResultVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddCaseResultFourResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddCaseResultFourResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError AddCaseResultFourResponse::getError() const
{
    return error_;
}

void AddCaseResultFourResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddCaseResultFourResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddCaseResultFourResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddCaseResultFourResponse::getRequestId() const
{
    return requestId_;
}

void AddCaseResultFourResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddCaseResultFourResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddCaseResultFourResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddCaseResultFourResponse::getServerAddress() const
{
    return serverAddress_;
}

void AddCaseResultFourResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool AddCaseResultFourResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void AddCaseResultFourResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



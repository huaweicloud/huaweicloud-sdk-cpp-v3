

#include "huaweicloud/cloudtest/v1/model/ShowFreeDeclarationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFreeDeclarationResponse::ShowFreeDeclarationResponse()
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

ShowFreeDeclarationResponse::~ShowFreeDeclarationResponse() = default;

void ShowFreeDeclarationResponse::validate()
{
}

web::json::value ShowFreeDeclarationResponse::toJson() const
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
bool ShowFreeDeclarationResponse::fromJson(const web::json::value& val)
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
            ResultValueBoolean refVal;
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


std::string ShowFreeDeclarationResponse::getStatus() const
{
    return status_;
}

void ShowFreeDeclarationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFreeDeclarationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFreeDeclarationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueBoolean ShowFreeDeclarationResponse::getResult() const
{
    return result_;
}

void ShowFreeDeclarationResponse::setResult(const ResultValueBoolean& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowFreeDeclarationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowFreeDeclarationResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowFreeDeclarationResponse::getError() const
{
    return error_;
}

void ShowFreeDeclarationResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowFreeDeclarationResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowFreeDeclarationResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowFreeDeclarationResponse::getRequestId() const
{
    return requestId_;
}

void ShowFreeDeclarationResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowFreeDeclarationResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowFreeDeclarationResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowFreeDeclarationResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowFreeDeclarationResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowFreeDeclarationResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowFreeDeclarationResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



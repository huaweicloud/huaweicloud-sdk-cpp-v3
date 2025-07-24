

#include "huaweicloud/cloudtest/v1/model/CreateResourceUriResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateResourceUriResponse::CreateResourceUriResponse()
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

CreateResourceUriResponse::~CreateResourceUriResponse() = default;

void CreateResourceUriResponse::validate()
{
}

web::json::value CreateResourceUriResponse::toJson() const
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
bool CreateResourceUriResponse::fromJson(const web::json::value& val)
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
            ResultValueString refVal;
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


std::string CreateResourceUriResponse::getStatus() const
{
    return status_;
}

void CreateResourceUriResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateResourceUriResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateResourceUriResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString CreateResourceUriResponse::getResult() const
{
    return result_;
}

void CreateResourceUriResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateResourceUriResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateResourceUriResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateResourceUriResponse::getError() const
{
    return error_;
}

void CreateResourceUriResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateResourceUriResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateResourceUriResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateResourceUriResponse::getRequestId() const
{
    return requestId_;
}

void CreateResourceUriResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateResourceUriResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateResourceUriResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateResourceUriResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateResourceUriResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateResourceUriResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateResourceUriResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



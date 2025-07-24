

#include "huaweicloud/cloudtest/v1/model/UpdateIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateIteratorResponse::UpdateIteratorResponse()
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

UpdateIteratorResponse::~UpdateIteratorResponse() = default;

void UpdateIteratorResponse::validate()
{
}

web::json::value UpdateIteratorResponse::toJson() const
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
bool UpdateIteratorResponse::fromJson(const web::json::value& val)
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
            ResultValueTestVersionVo refVal;
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


std::string UpdateIteratorResponse::getStatus() const
{
    return status_;
}

void UpdateIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestVersionVo UpdateIteratorResponse::getResult() const
{
    return result_;
}

void UpdateIteratorResponse::setResult(const ResultValueTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateIteratorResponse::getError() const
{
    return error_;
}

void UpdateIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateIteratorResponse::getRequestId() const
{
    return requestId_;
}

void UpdateIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



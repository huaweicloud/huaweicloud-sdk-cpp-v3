

#include "huaweicloud/cloudtest/v1/model/AddIssuesToIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddIssuesToIteratorResponse::AddIssuesToIteratorResponse()
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

AddIssuesToIteratorResponse::~AddIssuesToIteratorResponse() = default;

void AddIssuesToIteratorResponse::validate()
{
}

web::json::value AddIssuesToIteratorResponse::toJson() const
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
bool AddIssuesToIteratorResponse::fromJson(const web::json::value& val)
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


std::string AddIssuesToIteratorResponse::getStatus() const
{
    return status_;
}

void AddIssuesToIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddIssuesToIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddIssuesToIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString AddIssuesToIteratorResponse::getResult() const
{
    return result_;
}

void AddIssuesToIteratorResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddIssuesToIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddIssuesToIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError AddIssuesToIteratorResponse::getError() const
{
    return error_;
}

void AddIssuesToIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddIssuesToIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddIssuesToIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddIssuesToIteratorResponse::getRequestId() const
{
    return requestId_;
}

void AddIssuesToIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddIssuesToIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddIssuesToIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddIssuesToIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void AddIssuesToIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool AddIssuesToIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void AddIssuesToIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



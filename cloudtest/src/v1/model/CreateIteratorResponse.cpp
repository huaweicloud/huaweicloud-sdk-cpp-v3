

#include "huaweicloud/cloudtest/v1/model/CreateIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateIteratorResponse::CreateIteratorResponse()
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

CreateIteratorResponse::~CreateIteratorResponse() = default;

void CreateIteratorResponse::validate()
{
}

web::json::value CreateIteratorResponse::toJson() const
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
bool CreateIteratorResponse::fromJson(const web::json::value& val)
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


std::string CreateIteratorResponse::getStatus() const
{
    return status_;
}

void CreateIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestVersionVo CreateIteratorResponse::getResult() const
{
    return result_;
}

void CreateIteratorResponse::setResult(const ResultValueTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError CreateIteratorResponse::getError() const
{
    return error_;
}

void CreateIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateIteratorResponse::getRequestId() const
{
    return requestId_;
}

void CreateIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void CreateIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool CreateIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void CreateIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



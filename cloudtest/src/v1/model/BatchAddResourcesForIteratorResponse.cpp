

#include "huaweicloud/cloudtest/v1/model/BatchAddResourcesForIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddResourcesForIteratorResponse::BatchAddResourcesForIteratorResponse()
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

BatchAddResourcesForIteratorResponse::~BatchAddResourcesForIteratorResponse() = default;

void BatchAddResourcesForIteratorResponse::validate()
{
}

web::json::value BatchAddResourcesForIteratorResponse::toJson() const
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
bool BatchAddResourcesForIteratorResponse::fromJson(const web::json::value& val)
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


std::string BatchAddResourcesForIteratorResponse::getStatus() const
{
    return status_;
}

void BatchAddResourcesForIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchAddResourcesForIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchAddResourcesForIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString BatchAddResourcesForIteratorResponse::getResult() const
{
    return result_;
}

void BatchAddResourcesForIteratorResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchAddResourcesForIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchAddResourcesForIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError BatchAddResourcesForIteratorResponse::getError() const
{
    return error_;
}

void BatchAddResourcesForIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchAddResourcesForIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchAddResourcesForIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchAddResourcesForIteratorResponse::getRequestId() const
{
    return requestId_;
}

void BatchAddResourcesForIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchAddResourcesForIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchAddResourcesForIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string BatchAddResourcesForIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void BatchAddResourcesForIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool BatchAddResourcesForIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void BatchAddResourcesForIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



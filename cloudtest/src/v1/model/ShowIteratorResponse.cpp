

#include "huaweicloud/cloudtest/v1/model/ShowIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorResponse::ShowIteratorResponse()
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

ShowIteratorResponse::~ShowIteratorResponse() = default;

void ShowIteratorResponse::validate()
{
}

web::json::value ShowIteratorResponse::toJson() const
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
bool ShowIteratorResponse::fromJson(const web::json::value& val)
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
            ResultValueIteratorVersionSummaryVo refVal;
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


std::string ShowIteratorResponse::getStatus() const
{
    return status_;
}

void ShowIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueIteratorVersionSummaryVo ShowIteratorResponse::getResult() const
{
    return result_;
}

void ShowIteratorResponse::setResult(const ResultValueIteratorVersionSummaryVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowIteratorResponse::getError() const
{
    return error_;
}

void ShowIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowIteratorResponse::getRequestId() const
{
    return requestId_;
}

void ShowIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



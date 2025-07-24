

#include "huaweicloud/cloudtest/v1/model/ShowIteratorDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorDetailResponse::ShowIteratorDetailResponse()
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

ShowIteratorDetailResponse::~ShowIteratorDetailResponse() = default;

void ShowIteratorDetailResponse::validate()
{
}

web::json::value ShowIteratorDetailResponse::toJson() const
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
bool ShowIteratorDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowIteratorDetailResponse::getStatus() const
{
    return status_;
}

void ShowIteratorDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIteratorDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIteratorDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueIteratorVersionSummaryVo ShowIteratorDetailResponse::getResult() const
{
    return result_;
}

void ShowIteratorDetailResponse::setResult(const ResultValueIteratorVersionSummaryVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIteratorDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIteratorDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowIteratorDetailResponse::getError() const
{
    return error_;
}

void ShowIteratorDetailResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowIteratorDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowIteratorDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowIteratorDetailResponse::getRequestId() const
{
    return requestId_;
}

void ShowIteratorDetailResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowIteratorDetailResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowIteratorDetailResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowIteratorDetailResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowIteratorDetailResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowIteratorDetailResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowIteratorDetailResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



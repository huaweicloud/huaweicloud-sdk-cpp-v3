

#include "huaweicloud/cloudtest/v1/model/ShowBackgroundInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowBackgroundInfoResponse::ShowBackgroundInfoResponse()
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

ShowBackgroundInfoResponse::~ShowBackgroundInfoResponse() = default;

void ShowBackgroundInfoResponse::validate()
{
}

web::json::value ShowBackgroundInfoResponse::toJson() const
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
bool ShowBackgroundInfoResponse::fromJson(const web::json::value& val)
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
            ResultValueBackgroundInfoVo refVal;
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


std::string ShowBackgroundInfoResponse::getStatus() const
{
    return status_;
}

void ShowBackgroundInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBackgroundInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBackgroundInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueBackgroundInfoVo ShowBackgroundInfoResponse::getResult() const
{
    return result_;
}

void ShowBackgroundInfoResponse::setResult(const ResultValueBackgroundInfoVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBackgroundInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBackgroundInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowBackgroundInfoResponse::getError() const
{
    return error_;
}

void ShowBackgroundInfoResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBackgroundInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBackgroundInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBackgroundInfoResponse::getRequestId() const
{
    return requestId_;
}

void ShowBackgroundInfoResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowBackgroundInfoResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowBackgroundInfoResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowBackgroundInfoResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowBackgroundInfoResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowBackgroundInfoResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowBackgroundInfoResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



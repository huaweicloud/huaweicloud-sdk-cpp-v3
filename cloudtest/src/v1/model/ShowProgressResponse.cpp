

#include "huaweicloud/cloudtest/v1/model/ShowProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowProgressResponse::ShowProgressResponse()
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

ShowProgressResponse::~ShowProgressResponse() = default;

void ShowProgressResponse::validate()
{
}

web::json::value ShowProgressResponse::toJson() const
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
bool ShowProgressResponse::fromJson(const web::json::value& val)
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
            ResultValueProgressVo refVal;
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


std::string ShowProgressResponse::getStatus() const
{
    return status_;
}

void ShowProgressResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProgressResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProgressResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueProgressVo ShowProgressResponse::getResult() const
{
    return result_;
}

void ShowProgressResponse::setResult(const ResultValueProgressVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProgressResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProgressResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowProgressResponse::getError() const
{
    return error_;
}

void ShowProgressResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowProgressResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowProgressResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowProgressResponse::getRequestId() const
{
    return requestId_;
}

void ShowProgressResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowProgressResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowProgressResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowProgressResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowProgressResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowProgressResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowProgressResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



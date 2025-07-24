

#include "huaweicloud/cloudtest/v1/model/ShowFeatureChildrenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFeatureChildrenResponse::ShowFeatureChildrenResponse()
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

ShowFeatureChildrenResponse::~ShowFeatureChildrenResponse() = default;

void ShowFeatureChildrenResponse::validate()
{
}

web::json::value ShowFeatureChildrenResponse::toJson() const
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
bool ShowFeatureChildrenResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestItemVo refVal;
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


std::string ShowFeatureChildrenResponse::getStatus() const
{
    return status_;
}

void ShowFeatureChildrenResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFeatureChildrenResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFeatureChildrenResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestItemVo ShowFeatureChildrenResponse::getResult() const
{
    return result_;
}

void ShowFeatureChildrenResponse::setResult(const ResultValueListTestItemVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowFeatureChildrenResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowFeatureChildrenResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowFeatureChildrenResponse::getError() const
{
    return error_;
}

void ShowFeatureChildrenResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowFeatureChildrenResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowFeatureChildrenResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowFeatureChildrenResponse::getRequestId() const
{
    return requestId_;
}

void ShowFeatureChildrenResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowFeatureChildrenResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowFeatureChildrenResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowFeatureChildrenResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowFeatureChildrenResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowFeatureChildrenResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowFeatureChildrenResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



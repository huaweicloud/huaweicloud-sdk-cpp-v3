

#include "huaweicloud/cloudtest/v1/model/AddFeatureResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddFeatureResponse::AddFeatureResponse()
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

AddFeatureResponse::~AddFeatureResponse() = default;

void AddFeatureResponse::validate()
{
}

web::json::value AddFeatureResponse::toJson() const
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
bool AddFeatureResponse::fromJson(const web::json::value& val)
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
            ResultValueTestItemVo refVal;
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


std::string AddFeatureResponse::getStatus() const
{
    return status_;
}

void AddFeatureResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddFeatureResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddFeatureResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestItemVo AddFeatureResponse::getResult() const
{
    return result_;
}

void AddFeatureResponse::setResult(const ResultValueTestItemVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddFeatureResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddFeatureResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError AddFeatureResponse::getError() const
{
    return error_;
}

void AddFeatureResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddFeatureResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddFeatureResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddFeatureResponse::getRequestId() const
{
    return requestId_;
}

void AddFeatureResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddFeatureResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddFeatureResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddFeatureResponse::getServerAddress() const
{
    return serverAddress_;
}

void AddFeatureResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool AddFeatureResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void AddFeatureResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}



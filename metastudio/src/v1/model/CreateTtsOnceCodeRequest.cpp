

#include "huaweicloud/metastudio/v1/model/CreateTtsOnceCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsOnceCodeRequest::CreateTtsOnceCodeRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

CreateTtsOnceCodeRequest::~CreateTtsOnceCodeRequest() = default;

void CreateTtsOnceCodeRequest::validate()
{
}

web::json::value CreateTtsOnceCodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }

    return val;
}
bool CreateTtsOnceCodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    return ok;
}


std::string CreateTtsOnceCodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateTtsOnceCodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateTtsOnceCodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateTtsOnceCodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateTtsOnceCodeRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTtsOnceCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTtsOnceCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTtsOnceCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTtsOnceCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTtsOnceCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTtsOnceCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTtsOnceCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTtsOnceCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTtsOnceCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTtsOnceCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTtsOnceCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTtsOnceCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTtsOnceCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTtsOnceCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTtsOnceCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ShowLivePlatformRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLivePlatformRequest::ShowLivePlatformRequest()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowLivePlatformRequest::~ShowLivePlatformRequest() = default;

void ShowLivePlatformRequest::validate()
{
}

web::json::value ShowLivePlatformRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
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
bool ShowLivePlatformRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformId(refVal);
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


std::string ShowLivePlatformRequest::getPlatformId() const
{
    return platformId_;
}

void ShowLivePlatformRequest::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool ShowLivePlatformRequest::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void ShowLivePlatformRequest::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string ShowLivePlatformRequest::getAuthorization() const
{
    return authorization_;
}

void ShowLivePlatformRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowLivePlatformRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowLivePlatformRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowLivePlatformRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowLivePlatformRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowLivePlatformRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowLivePlatformRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowLivePlatformRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowLivePlatformRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowLivePlatformRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowLivePlatformRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowLivePlatformRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowLivePlatformRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowLivePlatformRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowLivePlatformRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ShowLivePlatformAccessTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLivePlatformAccessTypeRequest::ShowLivePlatformAccessTypeRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    used_ = false;
    usedIsSet_ = false;
}

ShowLivePlatformAccessTypeRequest::~ShowLivePlatformAccessTypeRequest() = default;

void ShowLivePlatformAccessTypeRequest::validate()
{
}

web::json::value ShowLivePlatformAccessTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool ShowLivePlatformAccessTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string ShowLivePlatformAccessTypeRequest::getAuthorization() const
{
    return authorization_;
}

void ShowLivePlatformAccessTypeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowLivePlatformAccessTypeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowLivePlatformAccessTypeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowLivePlatformAccessTypeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowLivePlatformAccessTypeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowLivePlatformAccessTypeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowLivePlatformAccessTypeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowLivePlatformAccessTypeRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowLivePlatformAccessTypeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowLivePlatformAccessTypeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowLivePlatformAccessTypeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowLivePlatformAccessTypeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowLivePlatformAccessTypeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowLivePlatformAccessTypeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowLivePlatformAccessTypeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

bool ShowLivePlatformAccessTypeRequest::isUsed() const
{
    return used_;
}

void ShowLivePlatformAccessTypeRequest::setUsed(bool value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ShowLivePlatformAccessTypeRequest::usedIsSet() const
{
    return usedIsSet_;
}

void ShowLivePlatformAccessTypeRequest::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}



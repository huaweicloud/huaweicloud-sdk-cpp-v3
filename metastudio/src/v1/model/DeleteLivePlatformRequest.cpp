

#include "huaweicloud/metastudio/v1/model/DeleteLivePlatformRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteLivePlatformRequest::DeleteLivePlatformRequest()
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

DeleteLivePlatformRequest::~DeleteLivePlatformRequest() = default;

void DeleteLivePlatformRequest::validate()
{
}

web::json::value DeleteLivePlatformRequest::toJson() const
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
bool DeleteLivePlatformRequest::fromJson(const web::json::value& val)
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


std::string DeleteLivePlatformRequest::getPlatformId() const
{
    return platformId_;
}

void DeleteLivePlatformRequest::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool DeleteLivePlatformRequest::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void DeleteLivePlatformRequest::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string DeleteLivePlatformRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteLivePlatformRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteLivePlatformRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteLivePlatformRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteLivePlatformRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteLivePlatformRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteLivePlatformRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteLivePlatformRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteLivePlatformRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteLivePlatformRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteLivePlatformRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteLivePlatformRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteLivePlatformRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteLivePlatformRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteLivePlatformRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteLivePlatformRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}



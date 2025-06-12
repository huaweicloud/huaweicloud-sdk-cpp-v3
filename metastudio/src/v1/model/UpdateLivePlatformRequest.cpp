

#include "huaweicloud/metastudio/v1/model/UpdateLivePlatformRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLivePlatformRequest::UpdateLivePlatformRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    platformId_ = "";
    platformIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLivePlatformRequest::~UpdateLivePlatformRequest() = default;

void UpdateLivePlatformRequest::validate()
{
}

web::json::value UpdateLivePlatformRequest::toJson() const
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
    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLivePlatformRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("platform_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLivePlatformReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLivePlatformRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateLivePlatformRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateLivePlatformRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateLivePlatformRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateLivePlatformRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateLivePlatformRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateLivePlatformRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateLivePlatformRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateLivePlatformRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateLivePlatformRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateLivePlatformRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateLivePlatformRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateLivePlatformRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateLivePlatformRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateLivePlatformRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateLivePlatformRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateLivePlatformRequest::getPlatformId() const
{
    return platformId_;
}

void UpdateLivePlatformRequest::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool UpdateLivePlatformRequest::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void UpdateLivePlatformRequest::unsetplatformId()
{
    platformIdIsSet_ = false;
}

UpdateLivePlatformReq UpdateLivePlatformRequest::getBody() const
{
    return body_;
}

void UpdateLivePlatformRequest::setBody(const UpdateLivePlatformReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLivePlatformRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLivePlatformRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



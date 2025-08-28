

#include "huaweicloud/metastudio/v1/model/CheckVoiceAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CheckVoiceAssetRequest::CheckVoiceAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
}

CheckVoiceAssetRequest::~CheckVoiceAssetRequest() = default;

void CheckVoiceAssetRequest::validate()
{
}

web::json::value CheckVoiceAssetRequest::toJson() const
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
    if(voiceAssetIdIsSet_) {
        val[utility::conversions::to_string_t("voice_asset_id")] = ModelBase::toJson(voiceAssetId_);
    }

    return val;
}
bool CheckVoiceAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("voice_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceAssetId(refVal);
        }
    }
    return ok;
}


std::string CheckVoiceAssetRequest::getAuthorization() const
{
    return authorization_;
}

void CheckVoiceAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CheckVoiceAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CheckVoiceAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CheckVoiceAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CheckVoiceAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CheckVoiceAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CheckVoiceAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CheckVoiceAssetRequest::getXProjectId() const
{
    return xProjectId_;
}

void CheckVoiceAssetRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CheckVoiceAssetRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CheckVoiceAssetRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CheckVoiceAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CheckVoiceAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CheckVoiceAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CheckVoiceAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CheckVoiceAssetRequest::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void CheckVoiceAssetRequest::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool CheckVoiceAssetRequest::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void CheckVoiceAssetRequest::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

}
}
}
}
}



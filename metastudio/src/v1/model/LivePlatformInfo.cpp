

#include "huaweicloud/metastudio/v1/model/LivePlatformInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LivePlatformInfo::LivePlatformInfo()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    accessTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authorizationInfoIsSet_ = false;
    authConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
}

LivePlatformInfo::~LivePlatformInfo() = default;

void LivePlatformInfo::validate()
{
}

web::json::value LivePlatformInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(accessTypeIsSet_) {
        val[utility::conversions::to_string_t("access_type")] = ModelBase::toJson(accessType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authorizationInfoIsSet_) {
        val[utility::conversions::to_string_t("authorization_info")] = ModelBase::toJson(authorizationInfo_);
    }
    if(authConfigIsSet_) {
        val[utility::conversions::to_string_t("auth_config")] = ModelBase::toJson(authConfig_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }

    return val;
}
bool LivePlatformInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_type"));
        if(!fieldValue.is_null())
        {
            AccessTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorization_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization_info"));
        if(!fieldValue.is_null())
        {
            PlatformAuthorizationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_config"));
        if(!fieldValue.is_null())
        {
            CustomPlatformAuthConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            std::vector<StandardPlatformApiConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    return ok;
}


std::string LivePlatformInfo::getPlatformId() const
{
    return platformId_;
}

void LivePlatformInfo::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool LivePlatformInfo::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void LivePlatformInfo::unsetplatformId()
{
    platformIdIsSet_ = false;
}

AccessTypeEnum LivePlatformInfo::getAccessType() const
{
    return accessType_;
}

void LivePlatformInfo::setAccessType(const AccessTypeEnum& value)
{
    accessType_ = value;
    accessTypeIsSet_ = true;
}

bool LivePlatformInfo::accessTypeIsSet() const
{
    return accessTypeIsSet_;
}

void LivePlatformInfo::unsetaccessType()
{
    accessTypeIsSet_ = false;
}

std::string LivePlatformInfo::getName() const
{
    return name_;
}

void LivePlatformInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LivePlatformInfo::nameIsSet() const
{
    return nameIsSet_;
}

void LivePlatformInfo::unsetname()
{
    nameIsSet_ = false;
}

PlatformAuthorizationInfo LivePlatformInfo::getAuthorizationInfo() const
{
    return authorizationInfo_;
}

void LivePlatformInfo::setAuthorizationInfo(const PlatformAuthorizationInfo& value)
{
    authorizationInfo_ = value;
    authorizationInfoIsSet_ = true;
}

bool LivePlatformInfo::authorizationInfoIsSet() const
{
    return authorizationInfoIsSet_;
}

void LivePlatformInfo::unsetauthorizationInfo()
{
    authorizationInfoIsSet_ = false;
}

CustomPlatformAuthConfig LivePlatformInfo::getAuthConfig() const
{
    return authConfig_;
}

void LivePlatformInfo::setAuthConfig(const CustomPlatformAuthConfig& value)
{
    authConfig_ = value;
    authConfigIsSet_ = true;
}

bool LivePlatformInfo::authConfigIsSet() const
{
    return authConfigIsSet_;
}

void LivePlatformInfo::unsetauthConfig()
{
    authConfigIsSet_ = false;
}

std::vector<StandardPlatformApiConfig>& LivePlatformInfo::getCallbackConfig()
{
    return callbackConfig_;
}

void LivePlatformInfo::setCallbackConfig(const std::vector<StandardPlatformApiConfig>& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool LivePlatformInfo::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void LivePlatformInfo::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}



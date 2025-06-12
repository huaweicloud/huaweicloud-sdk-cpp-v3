

#include "huaweicloud/metastudio/v1/model/ShowLivePlatformResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLivePlatformResponse::ShowLivePlatformResponse()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    accessTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authorizationInfoIsSet_ = false;
    authConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowLivePlatformResponse::~ShowLivePlatformResponse() = default;

void ShowLivePlatformResponse::validate()
{
}

web::json::value ShowLivePlatformResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowLivePlatformResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowLivePlatformResponse::getPlatformId() const
{
    return platformId_;
}

void ShowLivePlatformResponse::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool ShowLivePlatformResponse::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void ShowLivePlatformResponse::unsetplatformId()
{
    platformIdIsSet_ = false;
}

AccessTypeEnum ShowLivePlatformResponse::getAccessType() const
{
    return accessType_;
}

void ShowLivePlatformResponse::setAccessType(const AccessTypeEnum& value)
{
    accessType_ = value;
    accessTypeIsSet_ = true;
}

bool ShowLivePlatformResponse::accessTypeIsSet() const
{
    return accessTypeIsSet_;
}

void ShowLivePlatformResponse::unsetaccessType()
{
    accessTypeIsSet_ = false;
}

std::string ShowLivePlatformResponse::getName() const
{
    return name_;
}

void ShowLivePlatformResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowLivePlatformResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowLivePlatformResponse::unsetname()
{
    nameIsSet_ = false;
}

PlatformAuthorizationInfo ShowLivePlatformResponse::getAuthorizationInfo() const
{
    return authorizationInfo_;
}

void ShowLivePlatformResponse::setAuthorizationInfo(const PlatformAuthorizationInfo& value)
{
    authorizationInfo_ = value;
    authorizationInfoIsSet_ = true;
}

bool ShowLivePlatformResponse::authorizationInfoIsSet() const
{
    return authorizationInfoIsSet_;
}

void ShowLivePlatformResponse::unsetauthorizationInfo()
{
    authorizationInfoIsSet_ = false;
}

CustomPlatformAuthConfig ShowLivePlatformResponse::getAuthConfig() const
{
    return authConfig_;
}

void ShowLivePlatformResponse::setAuthConfig(const CustomPlatformAuthConfig& value)
{
    authConfig_ = value;
    authConfigIsSet_ = true;
}

bool ShowLivePlatformResponse::authConfigIsSet() const
{
    return authConfigIsSet_;
}

void ShowLivePlatformResponse::unsetauthConfig()
{
    authConfigIsSet_ = false;
}

std::vector<StandardPlatformApiConfig>& ShowLivePlatformResponse::getCallbackConfig()
{
    return callbackConfig_;
}

void ShowLivePlatformResponse::setCallbackConfig(const std::vector<StandardPlatformApiConfig>& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool ShowLivePlatformResponse::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void ShowLivePlatformResponse::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

std::string ShowLivePlatformResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowLivePlatformResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowLivePlatformResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowLivePlatformResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



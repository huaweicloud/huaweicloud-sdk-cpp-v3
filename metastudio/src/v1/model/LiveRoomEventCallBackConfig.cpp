

#include "huaweicloud/metastudio/v1/model/LiveRoomEventCallBackConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveRoomEventCallBackConfig::LiveRoomEventCallBackConfig()
{
    liveEventTypeCallbackUrl_ = "";
    liveEventTypeCallbackUrlIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    callbackEventTypeIsSet_ = false;
    isInheritancePlatformCallback_ = false;
    isInheritancePlatformCallbackIsSet_ = false;
}

LiveRoomEventCallBackConfig::~LiveRoomEventCallBackConfig() = default;

void LiveRoomEventCallBackConfig::validate()
{
}

web::json::value LiveRoomEventCallBackConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(liveEventTypeCallbackUrlIsSet_) {
        val[utility::conversions::to_string_t("live_event_type_callback_url")] = ModelBase::toJson(liveEventTypeCallbackUrl_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(callbackEventTypeIsSet_) {
        val[utility::conversions::to_string_t("callback_event_type")] = ModelBase::toJson(callbackEventType_);
    }
    if(isInheritancePlatformCallbackIsSet_) {
        val[utility::conversions::to_string_t("is_inheritance_platform_callback")] = ModelBase::toJson(isInheritancePlatformCallback_);
    }

    return val;
}
bool LiveRoomEventCallBackConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("live_event_type_callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_type_callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventTypeCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_event_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_inheritance_platform_callback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_inheritance_platform_callback"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsInheritancePlatformCallback(refVal);
        }
    }
    return ok;
}


std::string LiveRoomEventCallBackConfig::getLiveEventTypeCallbackUrl() const
{
    return liveEventTypeCallbackUrl_;
}

void LiveRoomEventCallBackConfig::setLiveEventTypeCallbackUrl(const std::string& value)
{
    liveEventTypeCallbackUrl_ = value;
    liveEventTypeCallbackUrlIsSet_ = true;
}

bool LiveRoomEventCallBackConfig::liveEventTypeCallbackUrlIsSet() const
{
    return liveEventTypeCallbackUrlIsSet_;
}

void LiveRoomEventCallBackConfig::unsetliveEventTypeCallbackUrl()
{
    liveEventTypeCallbackUrlIsSet_ = false;
}

std::string LiveRoomEventCallBackConfig::getAuthType() const
{
    return authType_;
}

void LiveRoomEventCallBackConfig::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool LiveRoomEventCallBackConfig::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void LiveRoomEventCallBackConfig::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string LiveRoomEventCallBackConfig::getKey() const
{
    return key_;
}

void LiveRoomEventCallBackConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool LiveRoomEventCallBackConfig::keyIsSet() const
{
    return keyIsSet_;
}

void LiveRoomEventCallBackConfig::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& LiveRoomEventCallBackConfig::getCallbackEventType()
{
    return callbackEventType_;
}

void LiveRoomEventCallBackConfig::setCallbackEventType(const std::vector<std::string>& value)
{
    callbackEventType_ = value;
    callbackEventTypeIsSet_ = true;
}

bool LiveRoomEventCallBackConfig::callbackEventTypeIsSet() const
{
    return callbackEventTypeIsSet_;
}

void LiveRoomEventCallBackConfig::unsetcallbackEventType()
{
    callbackEventTypeIsSet_ = false;
}

bool LiveRoomEventCallBackConfig::isIsInheritancePlatformCallback() const
{
    return isInheritancePlatformCallback_;
}

void LiveRoomEventCallBackConfig::setIsInheritancePlatformCallback(bool value)
{
    isInheritancePlatformCallback_ = value;
    isInheritancePlatformCallbackIsSet_ = true;
}

bool LiveRoomEventCallBackConfig::isInheritancePlatformCallbackIsSet() const
{
    return isInheritancePlatformCallbackIsSet_;
}

void LiveRoomEventCallBackConfig::unsetisInheritancePlatformCallback()
{
    isInheritancePlatformCallbackIsSet_ = false;
}

}
}
}
}
}



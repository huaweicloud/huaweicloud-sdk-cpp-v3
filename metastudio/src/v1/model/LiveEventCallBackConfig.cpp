

#include "huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveEventCallBackConfig::LiveEventCallBackConfig()
{
    liveEventTypeCallbackUrl_ = "";
    liveEventTypeCallbackUrlIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    callbackEventTypeIsSet_ = false;
}

LiveEventCallBackConfig::~LiveEventCallBackConfig() = default;

void LiveEventCallBackConfig::validate()
{
}

web::json::value LiveEventCallBackConfig::toJson() const
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

    return val;
}
bool LiveEventCallBackConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string LiveEventCallBackConfig::getLiveEventTypeCallbackUrl() const
{
    return liveEventTypeCallbackUrl_;
}

void LiveEventCallBackConfig::setLiveEventTypeCallbackUrl(const std::string& value)
{
    liveEventTypeCallbackUrl_ = value;
    liveEventTypeCallbackUrlIsSet_ = true;
}

bool LiveEventCallBackConfig::liveEventTypeCallbackUrlIsSet() const
{
    return liveEventTypeCallbackUrlIsSet_;
}

void LiveEventCallBackConfig::unsetliveEventTypeCallbackUrl()
{
    liveEventTypeCallbackUrlIsSet_ = false;
}

std::string LiveEventCallBackConfig::getAuthType() const
{
    return authType_;
}

void LiveEventCallBackConfig::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool LiveEventCallBackConfig::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void LiveEventCallBackConfig::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string LiveEventCallBackConfig::getKey() const
{
    return key_;
}

void LiveEventCallBackConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool LiveEventCallBackConfig::keyIsSet() const
{
    return keyIsSet_;
}

void LiveEventCallBackConfig::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& LiveEventCallBackConfig::getCallbackEventType()
{
    return callbackEventType_;
}

void LiveEventCallBackConfig::setCallbackEventType(const std::vector<std::string>& value)
{
    callbackEventType_ = value;
    callbackEventTypeIsSet_ = true;
}

bool LiveEventCallBackConfig::callbackEventTypeIsSet() const
{
    return callbackEventTypeIsSet_;
}

void LiveEventCallBackConfig::unsetcallbackEventType()
{
    callbackEventTypeIsSet_ = false;
}

}
}
}
}
}



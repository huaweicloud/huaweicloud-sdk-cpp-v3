

#include "huaweicloud/metastudio/v1/model/CallBackConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CallBackConfig::CallBackConfig()
{
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

CallBackConfig::~CallBackConfig() = default;

void CallBackConfig::validate()
{
}

web::json::value CallBackConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool CallBackConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
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
    return ok;
}


std::string CallBackConfig::getCallbackUrl() const
{
    return callbackUrl_;
}

void CallBackConfig::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool CallBackConfig::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void CallBackConfig::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string CallBackConfig::getAuthType() const
{
    return authType_;
}

void CallBackConfig::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool CallBackConfig::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void CallBackConfig::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string CallBackConfig::getKey() const
{
    return key_;
}

void CallBackConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CallBackConfig::keyIsSet() const
{
    return keyIsSet_;
}

void CallBackConfig::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}



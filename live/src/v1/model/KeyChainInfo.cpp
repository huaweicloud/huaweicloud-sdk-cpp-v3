

#include "huaweicloud/live/v1/model/KeyChainInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




KeyChainInfo::KeyChainInfo()
{
    key_ = "";
    keyIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

KeyChainInfo::~KeyChainInfo() = default;

void KeyChainInfo::validate()
{
}

web::json::value KeyChainInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool KeyChainInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    return ok;
}


std::string KeyChainInfo::getKey() const
{
    return key_;
}

void KeyChainInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool KeyChainInfo::keyIsSet() const
{
    return keyIsSet_;
}

void KeyChainInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::string KeyChainInfo::getAuthType() const
{
    return authType_;
}

void KeyChainInfo::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool KeyChainInfo::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void KeyChainInfo::unsetauthType()
{
    authTypeIsSet_ = false;
}

int32_t KeyChainInfo::getTimeout() const
{
    return timeout_;
}

void KeyChainInfo::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool KeyChainInfo::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void KeyChainInfo::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/live/v1/model/ModifyDelayConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyDelayConfig::ModifyDelayConfig()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    delay_ = 0;
    delayIsSet_ = false;
}

ModifyDelayConfig::~ModifyDelayConfig() = default;

void ModifyDelayConfig::validate()
{
}

web::json::value ModifyDelayConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool ModifyDelayConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


std::string ModifyDelayConfig::getPlayDomain() const
{
    return playDomain_;
}

void ModifyDelayConfig::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ModifyDelayConfig::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ModifyDelayConfig::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string ModifyDelayConfig::getApp() const
{
    return app_;
}

void ModifyDelayConfig::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ModifyDelayConfig::appIsSet() const
{
    return appIsSet_;
}

void ModifyDelayConfig::unsetapp()
{
    appIsSet_ = false;
}

int32_t ModifyDelayConfig::getDelay() const
{
    return delay_;
}

void ModifyDelayConfig::setDelay(int32_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool ModifyDelayConfig::delayIsSet() const
{
    return delayIsSet_;
}

void ModifyDelayConfig::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}



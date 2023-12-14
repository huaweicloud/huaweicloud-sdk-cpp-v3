

#include "huaweicloud/live/v1/model/DelayConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DelayConfig::DelayConfig()
{
    app_ = "";
    appIsSet_ = false;
    delay_ = 0;
    delayIsSet_ = false;
}

DelayConfig::~DelayConfig() = default;

void DelayConfig::validate()
{
}

web::json::value DelayConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool DelayConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DelayConfig::getApp() const
{
    return app_;
}

void DelayConfig::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool DelayConfig::appIsSet() const
{
    return appIsSet_;
}

void DelayConfig::unsetapp()
{
    appIsSet_ = false;
}

int32_t DelayConfig::getDelay() const
{
    return delay_;
}

void DelayConfig::setDelay(int32_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool DelayConfig::delayIsSet() const
{
    return delayIsSet_;
}

void DelayConfig::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}



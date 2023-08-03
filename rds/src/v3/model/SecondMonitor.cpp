

#include "huaweicloud/rds/v3/model/SecondMonitor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SecondMonitor::SecondMonitor()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

SecondMonitor::~SecondMonitor() = default;

void SecondMonitor::validate()
{
}

web::json::value SecondMonitor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}

bool SecondMonitor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}

bool SecondMonitor::isSwitchOption() const
{
    return switchOption_;
}

void SecondMonitor::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool SecondMonitor::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void SecondMonitor::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t SecondMonitor::getInterval() const
{
    return interval_;
}

void SecondMonitor::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool SecondMonitor::intervalIsSet() const
{
    return intervalIsSet_;
}

void SecondMonitor::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}



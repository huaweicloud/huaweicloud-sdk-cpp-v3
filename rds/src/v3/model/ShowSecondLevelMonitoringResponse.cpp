

#include "huaweicloud/rds/v3/model/ShowSecondLevelMonitoringResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSecondLevelMonitoringResponse::ShowSecondLevelMonitoringResponse()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowSecondLevelMonitoringResponse::~ShowSecondLevelMonitoringResponse() = default;

void ShowSecondLevelMonitoringResponse::validate()
{
}

web::json::value ShowSecondLevelMonitoringResponse::toJson() const
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
bool ShowSecondLevelMonitoringResponse::fromJson(const web::json::value& val)
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


bool ShowSecondLevelMonitoringResponse::isSwitchOption() const
{
    return switchOption_;
}

void ShowSecondLevelMonitoringResponse::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ShowSecondLevelMonitoringResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ShowSecondLevelMonitoringResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ShowSecondLevelMonitoringResponse::getInterval() const
{
    return interval_;
}

void ShowSecondLevelMonitoringResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowSecondLevelMonitoringResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowSecondLevelMonitoringResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}



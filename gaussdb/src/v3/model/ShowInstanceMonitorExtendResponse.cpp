

#include "huaweicloud/gaussdb/v3/model/ShowInstanceMonitorExtendResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceMonitorExtendResponse::ShowInstanceMonitorExtendResponse()
{
    monitorSwitch_ = false;
    monitorSwitchIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    allow_ = false;
    allowIsSet_ = false;
}

ShowInstanceMonitorExtendResponse::~ShowInstanceMonitorExtendResponse() = default;

void ShowInstanceMonitorExtendResponse::validate()
{
}

web::json::value ShowInstanceMonitorExtendResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(monitorSwitchIsSet_) {
        val[utility::conversions::to_string_t("monitor_switch")] = ModelBase::toJson(monitorSwitch_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(allowIsSet_) {
        val[utility::conversions::to_string_t("allow")] = ModelBase::toJson(allow_);
    }

    return val;
}
bool ShowInstanceMonitorExtendResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("monitor_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("monitor_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMonitorSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllow(refVal);
        }
    }
    return ok;
}


bool ShowInstanceMonitorExtendResponse::isMonitorSwitch() const
{
    return monitorSwitch_;
}

void ShowInstanceMonitorExtendResponse::setMonitorSwitch(bool value)
{
    monitorSwitch_ = value;
    monitorSwitchIsSet_ = true;
}

bool ShowInstanceMonitorExtendResponse::monitorSwitchIsSet() const
{
    return monitorSwitchIsSet_;
}

void ShowInstanceMonitorExtendResponse::unsetmonitorSwitch()
{
    monitorSwitchIsSet_ = false;
}

int32_t ShowInstanceMonitorExtendResponse::getPeriod() const
{
    return period_;
}

void ShowInstanceMonitorExtendResponse::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowInstanceMonitorExtendResponse::periodIsSet() const
{
    return periodIsSet_;
}

void ShowInstanceMonitorExtendResponse::unsetperiod()
{
    periodIsSet_ = false;
}

bool ShowInstanceMonitorExtendResponse::isAllow() const
{
    return allow_;
}

void ShowInstanceMonitorExtendResponse::setAllow(bool value)
{
    allow_ = value;
    allowIsSet_ = true;
}

bool ShowInstanceMonitorExtendResponse::allowIsSet() const
{
    return allowIsSet_;
}

void ShowInstanceMonitorExtendResponse::unsetallow()
{
    allowIsSet_ = false;
}

}
}
}
}
}



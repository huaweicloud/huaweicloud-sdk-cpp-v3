

#include "huaweicloud/gaussdb/v3/model/TaurusModifyInstanceMonitorRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusModifyInstanceMonitorRequestBody::TaurusModifyInstanceMonitorRequestBody()
{
    monitorSwitch_ = false;
    monitorSwitchIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
}

TaurusModifyInstanceMonitorRequestBody::~TaurusModifyInstanceMonitorRequestBody() = default;

void TaurusModifyInstanceMonitorRequestBody::validate()
{
}

web::json::value TaurusModifyInstanceMonitorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(monitorSwitchIsSet_) {
        val[utility::conversions::to_string_t("monitor_switch")] = ModelBase::toJson(monitorSwitch_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}

bool TaurusModifyInstanceMonitorRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}

bool TaurusModifyInstanceMonitorRequestBody::isMonitorSwitch() const
{
    return monitorSwitch_;
}

void TaurusModifyInstanceMonitorRequestBody::setMonitorSwitch(bool value)
{
    monitorSwitch_ = value;
    monitorSwitchIsSet_ = true;
}

bool TaurusModifyInstanceMonitorRequestBody::monitorSwitchIsSet() const
{
    return monitorSwitchIsSet_;
}

void TaurusModifyInstanceMonitorRequestBody::unsetmonitorSwitch()
{
    monitorSwitchIsSet_ = false;
}

int32_t TaurusModifyInstanceMonitorRequestBody::getPeriod() const
{
    return period_;
}

void TaurusModifyInstanceMonitorRequestBody::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool TaurusModifyInstanceMonitorRequestBody::periodIsSet() const
{
    return periodIsSet_;
}

void TaurusModifyInstanceMonitorRequestBody::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}



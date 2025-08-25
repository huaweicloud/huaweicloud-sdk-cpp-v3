

#include "huaweicloud/cce/v3/model/ClusterOps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterOps::ClusterOps()
{
    alarmIsSet_ = false;
}

ClusterOps::~ClusterOps() = default;

void ClusterOps::validate()
{
}

web::json::value ClusterOps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmIsSet_) {
        val[utility::conversions::to_string_t("alarm")] = ModelBase::toJson(alarm_);
    }

    return val;
}
bool ClusterOps::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm"));
        if(!fieldValue.is_null())
        {
            AlarmInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarm(refVal);
        }
    }
    return ok;
}


AlarmInfo ClusterOps::getAlarm() const
{
    return alarm_;
}

void ClusterOps::setAlarm(const AlarmInfo& value)
{
    alarm_ = value;
    alarmIsSet_ = true;
}

bool ClusterOps::alarmIsSet() const
{
    return alarmIsSet_;
}

void ClusterOps::unsetalarm()
{
    alarmIsSet_ = false;
}

}
}
}
}
}



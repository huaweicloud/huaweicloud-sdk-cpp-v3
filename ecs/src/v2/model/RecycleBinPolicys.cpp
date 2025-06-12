

#include "huaweicloud/ecs/v2/model/RecycleBinPolicys.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RecycleBinPolicys::RecycleBinPolicys()
{
    recycleThresholdDay_ = 0;
    recycleThresholdDayIsSet_ = false;
    retentionHour_ = 0;
    retentionHourIsSet_ = false;
}

RecycleBinPolicys::~RecycleBinPolicys() = default;

void RecycleBinPolicys::validate()
{
}

web::json::value RecycleBinPolicys::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recycleThresholdDayIsSet_) {
        val[utility::conversions::to_string_t("recycle_threshold_day")] = ModelBase::toJson(recycleThresholdDay_);
    }
    if(retentionHourIsSet_) {
        val[utility::conversions::to_string_t("retention_hour")] = ModelBase::toJson(retentionHour_);
    }

    return val;
}
bool RecycleBinPolicys::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recycle_threshold_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_threshold_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleThresholdDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_hour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_hour"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionHour(refVal);
        }
    }
    return ok;
}


int32_t RecycleBinPolicys::getRecycleThresholdDay() const
{
    return recycleThresholdDay_;
}

void RecycleBinPolicys::setRecycleThresholdDay(int32_t value)
{
    recycleThresholdDay_ = value;
    recycleThresholdDayIsSet_ = true;
}

bool RecycleBinPolicys::recycleThresholdDayIsSet() const
{
    return recycleThresholdDayIsSet_;
}

void RecycleBinPolicys::unsetrecycleThresholdDay()
{
    recycleThresholdDayIsSet_ = false;
}

int32_t RecycleBinPolicys::getRetentionHour() const
{
    return retentionHour_;
}

void RecycleBinPolicys::setRetentionHour(int32_t value)
{
    retentionHour_ = value;
    retentionHourIsSet_ = true;
}

bool RecycleBinPolicys::retentionHourIsSet() const
{
    return retentionHourIsSet_;
}

void RecycleBinPolicys::unsetretentionHour()
{
    retentionHourIsSet_ = false;
}

}
}
}
}
}



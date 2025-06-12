

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinPolicyOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinPolicyOption::UpdateRecycleBinPolicyOption()
{
    retentionHour_ = 0;
    retentionHourIsSet_ = false;
    recycleThresholdDay_ = 0;
    recycleThresholdDayIsSet_ = false;
}

UpdateRecycleBinPolicyOption::~UpdateRecycleBinPolicyOption() = default;

void UpdateRecycleBinPolicyOption::validate()
{
}

web::json::value UpdateRecycleBinPolicyOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionHourIsSet_) {
        val[utility::conversions::to_string_t("retention_hour")] = ModelBase::toJson(retentionHour_);
    }
    if(recycleThresholdDayIsSet_) {
        val[utility::conversions::to_string_t("recycle_threshold_day")] = ModelBase::toJson(recycleThresholdDay_);
    }

    return val;
}
bool UpdateRecycleBinPolicyOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_hour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_hour"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionHour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recycle_threshold_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_threshold_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleThresholdDay(refVal);
        }
    }
    return ok;
}


int32_t UpdateRecycleBinPolicyOption::getRetentionHour() const
{
    return retentionHour_;
}

void UpdateRecycleBinPolicyOption::setRetentionHour(int32_t value)
{
    retentionHour_ = value;
    retentionHourIsSet_ = true;
}

bool UpdateRecycleBinPolicyOption::retentionHourIsSet() const
{
    return retentionHourIsSet_;
}

void UpdateRecycleBinPolicyOption::unsetretentionHour()
{
    retentionHourIsSet_ = false;
}

int32_t UpdateRecycleBinPolicyOption::getRecycleThresholdDay() const
{
    return recycleThresholdDay_;
}

void UpdateRecycleBinPolicyOption::setRecycleThresholdDay(int32_t value)
{
    recycleThresholdDay_ = value;
    recycleThresholdDayIsSet_ = true;
}

bool UpdateRecycleBinPolicyOption::recycleThresholdDayIsSet() const
{
    return recycleThresholdDayIsSet_;
}

void UpdateRecycleBinPolicyOption::unsetrecycleThresholdDay()
{
    recycleThresholdDayIsSet_ = false;
}

}
}
}
}
}



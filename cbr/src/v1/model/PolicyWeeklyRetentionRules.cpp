

#include "huaweicloud/cbr/v1/model/PolicyWeeklyRetentionRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyWeeklyRetentionRules::PolicyWeeklyRetentionRules()
{
    daysOfWeekIsSet_ = false;
    retentionDurationPeriods_ = 0;
    retentionDurationPeriodsIsSet_ = false;
}

PolicyWeeklyRetentionRules::~PolicyWeeklyRetentionRules() = default;

void PolicyWeeklyRetentionRules::validate()
{
}

web::json::value PolicyWeeklyRetentionRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }
    if(retentionDurationPeriodsIsSet_) {
        val[utility::conversions::to_string_t("retention_duration_periods")] = ModelBase::toJson(retentionDurationPeriods_);
    }

    return val;
}
bool PolicyWeeklyRetentionRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("days_of_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_week"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfWeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_duration_periods"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_duration_periods"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDurationPeriods(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PolicyWeeklyRetentionRules::getDaysOfWeek()
{
    return daysOfWeek_;
}

void PolicyWeeklyRetentionRules::setDaysOfWeek(const std::vector<std::string>& value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool PolicyWeeklyRetentionRules::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void PolicyWeeklyRetentionRules::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

int32_t PolicyWeeklyRetentionRules::getRetentionDurationPeriods() const
{
    return retentionDurationPeriods_;
}

void PolicyWeeklyRetentionRules::setRetentionDurationPeriods(int32_t value)
{
    retentionDurationPeriods_ = value;
    retentionDurationPeriodsIsSet_ = true;
}

bool PolicyWeeklyRetentionRules::retentionDurationPeriodsIsSet() const
{
    return retentionDurationPeriodsIsSet_;
}

void PolicyWeeklyRetentionRules::unsetretentionDurationPeriods()
{
    retentionDurationPeriodsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cbr/v1/model/PolicyMonthlyRetentionRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyMonthlyRetentionRules::PolicyMonthlyRetentionRules()
{
    retentionType_ = "";
    retentionTypeIsSet_ = false;
    retentionWeeksIsSet_ = false;
    daysOfWeekIsSet_ = false;
    daysOfMonthIsSet_ = false;
    retentionDurationPeriods_ = 0;
    retentionDurationPeriodsIsSet_ = false;
}

PolicyMonthlyRetentionRules::~PolicyMonthlyRetentionRules() = default;

void PolicyMonthlyRetentionRules::validate()
{
}

web::json::value PolicyMonthlyRetentionRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionTypeIsSet_) {
        val[utility::conversions::to_string_t("retention_type")] = ModelBase::toJson(retentionType_);
    }
    if(retentionWeeksIsSet_) {
        val[utility::conversions::to_string_t("retention_weeks")] = ModelBase::toJson(retentionWeeks_);
    }
    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }
    if(daysOfMonthIsSet_) {
        val[utility::conversions::to_string_t("days_of_month")] = ModelBase::toJson(daysOfMonth_);
    }
    if(retentionDurationPeriodsIsSet_) {
        val[utility::conversions::to_string_t("retention_duration_periods")] = ModelBase::toJson(retentionDurationPeriods_);
    }

    return val;
}
bool PolicyMonthlyRetentionRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_weeks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_weeks"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionWeeks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days_of_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_week"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfWeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days_of_month"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_month"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfMonth(refVal);
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


std::string PolicyMonthlyRetentionRules::getRetentionType() const
{
    return retentionType_;
}

void PolicyMonthlyRetentionRules::setRetentionType(const std::string& value)
{
    retentionType_ = value;
    retentionTypeIsSet_ = true;
}

bool PolicyMonthlyRetentionRules::retentionTypeIsSet() const
{
    return retentionTypeIsSet_;
}

void PolicyMonthlyRetentionRules::unsetretentionType()
{
    retentionTypeIsSet_ = false;
}

std::vector<std::string>& PolicyMonthlyRetentionRules::getRetentionWeeks()
{
    return retentionWeeks_;
}

void PolicyMonthlyRetentionRules::setRetentionWeeks(const std::vector<std::string>& value)
{
    retentionWeeks_ = value;
    retentionWeeksIsSet_ = true;
}

bool PolicyMonthlyRetentionRules::retentionWeeksIsSet() const
{
    return retentionWeeksIsSet_;
}

void PolicyMonthlyRetentionRules::unsetretentionWeeks()
{
    retentionWeeksIsSet_ = false;
}

std::vector<std::string>& PolicyMonthlyRetentionRules::getDaysOfWeek()
{
    return daysOfWeek_;
}

void PolicyMonthlyRetentionRules::setDaysOfWeek(const std::vector<std::string>& value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool PolicyMonthlyRetentionRules::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void PolicyMonthlyRetentionRules::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

std::vector<int32_t>& PolicyMonthlyRetentionRules::getDaysOfMonth()
{
    return daysOfMonth_;
}

void PolicyMonthlyRetentionRules::setDaysOfMonth(std::vector<int32_t> value)
{
    daysOfMonth_ = value;
    daysOfMonthIsSet_ = true;
}

bool PolicyMonthlyRetentionRules::daysOfMonthIsSet() const
{
    return daysOfMonthIsSet_;
}

void PolicyMonthlyRetentionRules::unsetdaysOfMonth()
{
    daysOfMonthIsSet_ = false;
}

int32_t PolicyMonthlyRetentionRules::getRetentionDurationPeriods() const
{
    return retentionDurationPeriods_;
}

void PolicyMonthlyRetentionRules::setRetentionDurationPeriods(int32_t value)
{
    retentionDurationPeriods_ = value;
    retentionDurationPeriodsIsSet_ = true;
}

bool PolicyMonthlyRetentionRules::retentionDurationPeriodsIsSet() const
{
    return retentionDurationPeriodsIsSet_;
}

void PolicyMonthlyRetentionRules::unsetretentionDurationPeriods()
{
    retentionDurationPeriodsIsSet_ = false;
}

}
}
}
}
}



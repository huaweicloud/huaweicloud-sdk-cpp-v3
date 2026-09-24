

#include "huaweicloud/cbr/v1/model/PolicyYearlyRetentionRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyYearlyRetentionRules::PolicyYearlyRetentionRules()
{
    retentionType_ = "";
    retentionTypeIsSet_ = false;
    retentionMonthsIsSet_ = false;
    retentionWeeksIsSet_ = false;
    daysOfMonthIsSet_ = false;
    daysOfWeekIsSet_ = false;
    retentionDurationPeriods_ = 0;
    retentionDurationPeriodsIsSet_ = false;
}

PolicyYearlyRetentionRules::~PolicyYearlyRetentionRules() = default;

void PolicyYearlyRetentionRules::validate()
{
}

web::json::value PolicyYearlyRetentionRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionTypeIsSet_) {
        val[utility::conversions::to_string_t("retention_type")] = ModelBase::toJson(retentionType_);
    }
    if(retentionMonthsIsSet_) {
        val[utility::conversions::to_string_t("retention_months")] = ModelBase::toJson(retentionMonths_);
    }
    if(retentionWeeksIsSet_) {
        val[utility::conversions::to_string_t("retention_weeks")] = ModelBase::toJson(retentionWeeks_);
    }
    if(daysOfMonthIsSet_) {
        val[utility::conversions::to_string_t("days_of_month")] = ModelBase::toJson(daysOfMonth_);
    }
    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }
    if(retentionDurationPeriodsIsSet_) {
        val[utility::conversions::to_string_t("retention_duration_periods")] = ModelBase::toJson(retentionDurationPeriods_);
    }

    return val;
}
bool PolicyYearlyRetentionRules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("retention_months"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_months"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionMonths(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("days_of_month"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_month"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfMonth(refVal);
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


std::string PolicyYearlyRetentionRules::getRetentionType() const
{
    return retentionType_;
}

void PolicyYearlyRetentionRules::setRetentionType(const std::string& value)
{
    retentionType_ = value;
    retentionTypeIsSet_ = true;
}

bool PolicyYearlyRetentionRules::retentionTypeIsSet() const
{
    return retentionTypeIsSet_;
}

void PolicyYearlyRetentionRules::unsetretentionType()
{
    retentionTypeIsSet_ = false;
}

std::vector<std::string>& PolicyYearlyRetentionRules::getRetentionMonths()
{
    return retentionMonths_;
}

void PolicyYearlyRetentionRules::setRetentionMonths(const std::vector<std::string>& value)
{
    retentionMonths_ = value;
    retentionMonthsIsSet_ = true;
}

bool PolicyYearlyRetentionRules::retentionMonthsIsSet() const
{
    return retentionMonthsIsSet_;
}

void PolicyYearlyRetentionRules::unsetretentionMonths()
{
    retentionMonthsIsSet_ = false;
}

std::vector<std::string>& PolicyYearlyRetentionRules::getRetentionWeeks()
{
    return retentionWeeks_;
}

void PolicyYearlyRetentionRules::setRetentionWeeks(const std::vector<std::string>& value)
{
    retentionWeeks_ = value;
    retentionWeeksIsSet_ = true;
}

bool PolicyYearlyRetentionRules::retentionWeeksIsSet() const
{
    return retentionWeeksIsSet_;
}

void PolicyYearlyRetentionRules::unsetretentionWeeks()
{
    retentionWeeksIsSet_ = false;
}

std::vector<int32_t>& PolicyYearlyRetentionRules::getDaysOfMonth()
{
    return daysOfMonth_;
}

void PolicyYearlyRetentionRules::setDaysOfMonth(std::vector<int32_t> value)
{
    daysOfMonth_ = value;
    daysOfMonthIsSet_ = true;
}

bool PolicyYearlyRetentionRules::daysOfMonthIsSet() const
{
    return daysOfMonthIsSet_;
}

void PolicyYearlyRetentionRules::unsetdaysOfMonth()
{
    daysOfMonthIsSet_ = false;
}

std::vector<std::string>& PolicyYearlyRetentionRules::getDaysOfWeek()
{
    return daysOfWeek_;
}

void PolicyYearlyRetentionRules::setDaysOfWeek(const std::vector<std::string>& value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool PolicyYearlyRetentionRules::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void PolicyYearlyRetentionRules::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

int32_t PolicyYearlyRetentionRules::getRetentionDurationPeriods() const
{
    return retentionDurationPeriods_;
}

void PolicyYearlyRetentionRules::setRetentionDurationPeriods(int32_t value)
{
    retentionDurationPeriods_ = value;
    retentionDurationPeriodsIsSet_ = true;
}

bool PolicyYearlyRetentionRules::retentionDurationPeriodsIsSet() const
{
    return retentionDurationPeriodsIsSet_;
}

void PolicyYearlyRetentionRules::unsetretentionDurationPeriods()
{
    retentionDurationPeriodsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cbr/v1/model/PolicyAdvancedRetentionRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyAdvancedRetentionRules::PolicyAdvancedRetentionRules()
{
    weeklyRetentionRulesIsSet_ = false;
    monthlyRetentionRulesIsSet_ = false;
    yearlyRetentionRulesIsSet_ = false;
}

PolicyAdvancedRetentionRules::~PolicyAdvancedRetentionRules() = default;

void PolicyAdvancedRetentionRules::validate()
{
}

web::json::value PolicyAdvancedRetentionRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weeklyRetentionRulesIsSet_) {
        val[utility::conversions::to_string_t("weekly_retention_rules")] = ModelBase::toJson(weeklyRetentionRules_);
    }
    if(monthlyRetentionRulesIsSet_) {
        val[utility::conversions::to_string_t("monthly_retention_rules")] = ModelBase::toJson(monthlyRetentionRules_);
    }
    if(yearlyRetentionRulesIsSet_) {
        val[utility::conversions::to_string_t("yearly_retention_rules")] = ModelBase::toJson(yearlyRetentionRules_);
    }

    return val;
}
bool PolicyAdvancedRetentionRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("weekly_retention_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weekly_retention_rules"));
        if(!fieldValue.is_null())
        {
            PolicyWeeklyRetentionRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeeklyRetentionRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("monthly_retention_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("monthly_retention_rules"));
        if(!fieldValue.is_null())
        {
            PolicyMonthlyRetentionRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMonthlyRetentionRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yearly_retention_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yearly_retention_rules"));
        if(!fieldValue.is_null())
        {
            PolicyYearlyRetentionRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYearlyRetentionRules(refVal);
        }
    }
    return ok;
}


PolicyWeeklyRetentionRules PolicyAdvancedRetentionRules::getWeeklyRetentionRules() const
{
    return weeklyRetentionRules_;
}

void PolicyAdvancedRetentionRules::setWeeklyRetentionRules(const PolicyWeeklyRetentionRules& value)
{
    weeklyRetentionRules_ = value;
    weeklyRetentionRulesIsSet_ = true;
}

bool PolicyAdvancedRetentionRules::weeklyRetentionRulesIsSet() const
{
    return weeklyRetentionRulesIsSet_;
}

void PolicyAdvancedRetentionRules::unsetweeklyRetentionRules()
{
    weeklyRetentionRulesIsSet_ = false;
}

PolicyMonthlyRetentionRules PolicyAdvancedRetentionRules::getMonthlyRetentionRules() const
{
    return monthlyRetentionRules_;
}

void PolicyAdvancedRetentionRules::setMonthlyRetentionRules(const PolicyMonthlyRetentionRules& value)
{
    monthlyRetentionRules_ = value;
    monthlyRetentionRulesIsSet_ = true;
}

bool PolicyAdvancedRetentionRules::monthlyRetentionRulesIsSet() const
{
    return monthlyRetentionRulesIsSet_;
}

void PolicyAdvancedRetentionRules::unsetmonthlyRetentionRules()
{
    monthlyRetentionRulesIsSet_ = false;
}

PolicyYearlyRetentionRules PolicyAdvancedRetentionRules::getYearlyRetentionRules() const
{
    return yearlyRetentionRules_;
}

void PolicyAdvancedRetentionRules::setYearlyRetentionRules(const PolicyYearlyRetentionRules& value)
{
    yearlyRetentionRules_ = value;
    yearlyRetentionRulesIsSet_ = true;
}

bool PolicyAdvancedRetentionRules::yearlyRetentionRulesIsSet() const
{
    return yearlyRetentionRulesIsSet_;
}

void PolicyAdvancedRetentionRules::unsetyearlyRetentionRules()
{
    yearlyRetentionRulesIsSet_ = false;
}

}
}
}
}
}



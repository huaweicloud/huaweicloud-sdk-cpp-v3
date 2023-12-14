

#include "huaweicloud/lts/v2/model/CreateSqlAlarmRuleFrequency.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSqlAlarmRuleFrequency::CreateSqlAlarmRuleFrequency()
{
    type_ = "";
    typeIsSet_ = false;
    cronExpr_ = "";
    cronExprIsSet_ = false;
    hourOfDay_ = 0;
    hourOfDayIsSet_ = false;
    dayOfWeek_ = 0;
    dayOfWeekIsSet_ = false;
    fixedRate_ = 0;
    fixedRateIsSet_ = false;
    fixedRateUnit_ = "";
    fixedRateUnitIsSet_ = false;
}

CreateSqlAlarmRuleFrequency::~CreateSqlAlarmRuleFrequency() = default;

void CreateSqlAlarmRuleFrequency::validate()
{
}

web::json::value CreateSqlAlarmRuleFrequency::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(cronExprIsSet_) {
        val[utility::conversions::to_string_t("cron_expr")] = ModelBase::toJson(cronExpr_);
    }
    if(hourOfDayIsSet_) {
        val[utility::conversions::to_string_t("hour_of_day")] = ModelBase::toJson(hourOfDay_);
    }
    if(dayOfWeekIsSet_) {
        val[utility::conversions::to_string_t("day_of_week")] = ModelBase::toJson(dayOfWeek_);
    }
    if(fixedRateIsSet_) {
        val[utility::conversions::to_string_t("fixed_rate")] = ModelBase::toJson(fixedRate_);
    }
    if(fixedRateUnitIsSet_) {
        val[utility::conversions::to_string_t("fixed_rate_unit")] = ModelBase::toJson(fixedRateUnit_);
    }

    return val;
}
bool CreateSqlAlarmRuleFrequency::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cron_expr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cron_expr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCronExpr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hour_of_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hour_of_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHourOfDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("day_of_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("day_of_week"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDayOfWeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_rate_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_rate_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedRateUnit(refVal);
        }
    }
    return ok;
}


std::string CreateSqlAlarmRuleFrequency::getType() const
{
    return type_;
}

void CreateSqlAlarmRuleFrequency::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::typeIsSet() const
{
    return typeIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateSqlAlarmRuleFrequency::getCronExpr() const
{
    return cronExpr_;
}

void CreateSqlAlarmRuleFrequency::setCronExpr(const std::string& value)
{
    cronExpr_ = value;
    cronExprIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::cronExprIsSet() const
{
    return cronExprIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsetcronExpr()
{
    cronExprIsSet_ = false;
}

int32_t CreateSqlAlarmRuleFrequency::getHourOfDay() const
{
    return hourOfDay_;
}

void CreateSqlAlarmRuleFrequency::setHourOfDay(int32_t value)
{
    hourOfDay_ = value;
    hourOfDayIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::hourOfDayIsSet() const
{
    return hourOfDayIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsethourOfDay()
{
    hourOfDayIsSet_ = false;
}

int32_t CreateSqlAlarmRuleFrequency::getDayOfWeek() const
{
    return dayOfWeek_;
}

void CreateSqlAlarmRuleFrequency::setDayOfWeek(int32_t value)
{
    dayOfWeek_ = value;
    dayOfWeekIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::dayOfWeekIsSet() const
{
    return dayOfWeekIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsetdayOfWeek()
{
    dayOfWeekIsSet_ = false;
}

int32_t CreateSqlAlarmRuleFrequency::getFixedRate() const
{
    return fixedRate_;
}

void CreateSqlAlarmRuleFrequency::setFixedRate(int32_t value)
{
    fixedRate_ = value;
    fixedRateIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::fixedRateIsSet() const
{
    return fixedRateIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsetfixedRate()
{
    fixedRateIsSet_ = false;
}

std::string CreateSqlAlarmRuleFrequency::getFixedRateUnit() const
{
    return fixedRateUnit_;
}

void CreateSqlAlarmRuleFrequency::setFixedRateUnit(const std::string& value)
{
    fixedRateUnit_ = value;
    fixedRateUnitIsSet_ = true;
}

bool CreateSqlAlarmRuleFrequency::fixedRateUnitIsSet() const
{
    return fixedRateUnitIsSet_;
}

void CreateSqlAlarmRuleFrequency::unsetfixedRateUnit()
{
    fixedRateUnitIsSet_ = false;
}

}
}
}
}
}



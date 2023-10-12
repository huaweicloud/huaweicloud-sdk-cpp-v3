

#include "huaweicloud/lts/v2/model/Frequency.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Frequency::Frequency()
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

Frequency::~Frequency() = default;

void Frequency::validate()
{
}

web::json::value Frequency::toJson() const
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
bool Frequency::fromJson(const web::json::value& val)
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


std::string Frequency::getType() const
{
    return type_;
}

void Frequency::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Frequency::typeIsSet() const
{
    return typeIsSet_;
}

void Frequency::unsettype()
{
    typeIsSet_ = false;
}

std::string Frequency::getCronExpr() const
{
    return cronExpr_;
}

void Frequency::setCronExpr(const std::string& value)
{
    cronExpr_ = value;
    cronExprIsSet_ = true;
}

bool Frequency::cronExprIsSet() const
{
    return cronExprIsSet_;
}

void Frequency::unsetcronExpr()
{
    cronExprIsSet_ = false;
}

int32_t Frequency::getHourOfDay() const
{
    return hourOfDay_;
}

void Frequency::setHourOfDay(int32_t value)
{
    hourOfDay_ = value;
    hourOfDayIsSet_ = true;
}

bool Frequency::hourOfDayIsSet() const
{
    return hourOfDayIsSet_;
}

void Frequency::unsethourOfDay()
{
    hourOfDayIsSet_ = false;
}

int32_t Frequency::getDayOfWeek() const
{
    return dayOfWeek_;
}

void Frequency::setDayOfWeek(int32_t value)
{
    dayOfWeek_ = value;
    dayOfWeekIsSet_ = true;
}

bool Frequency::dayOfWeekIsSet() const
{
    return dayOfWeekIsSet_;
}

void Frequency::unsetdayOfWeek()
{
    dayOfWeekIsSet_ = false;
}

int32_t Frequency::getFixedRate() const
{
    return fixedRate_;
}

void Frequency::setFixedRate(int32_t value)
{
    fixedRate_ = value;
    fixedRateIsSet_ = true;
}

bool Frequency::fixedRateIsSet() const
{
    return fixedRateIsSet_;
}

void Frequency::unsetfixedRate()
{
    fixedRateIsSet_ = false;
}

std::string Frequency::getFixedRateUnit() const
{
    return fixedRateUnit_;
}

void Frequency::setFixedRateUnit(const std::string& value)
{
    fixedRateUnit_ = value;
    fixedRateUnitIsSet_ = true;
}

bool Frequency::fixedRateUnitIsSet() const
{
    return fixedRateUnitIsSet_;
}

void Frequency::unsetfixedRateUnit()
{
    fixedRateUnitIsSet_ = false;
}

}
}
}
}
}



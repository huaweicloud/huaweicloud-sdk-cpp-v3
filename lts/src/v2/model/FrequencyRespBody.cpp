

#include "huaweicloud/lts/v2/model/FrequencyRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




FrequencyRespBody::FrequencyRespBody()
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

FrequencyRespBody::~FrequencyRespBody() = default;

void FrequencyRespBody::validate()
{
}

web::json::value FrequencyRespBody::toJson() const
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
bool FrequencyRespBody::fromJson(const web::json::value& val)
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


std::string FrequencyRespBody::getType() const
{
    return type_;
}

void FrequencyRespBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FrequencyRespBody::typeIsSet() const
{
    return typeIsSet_;
}

void FrequencyRespBody::unsettype()
{
    typeIsSet_ = false;
}

std::string FrequencyRespBody::getCronExpr() const
{
    return cronExpr_;
}

void FrequencyRespBody::setCronExpr(const std::string& value)
{
    cronExpr_ = value;
    cronExprIsSet_ = true;
}

bool FrequencyRespBody::cronExprIsSet() const
{
    return cronExprIsSet_;
}

void FrequencyRespBody::unsetcronExpr()
{
    cronExprIsSet_ = false;
}

int32_t FrequencyRespBody::getHourOfDay() const
{
    return hourOfDay_;
}

void FrequencyRespBody::setHourOfDay(int32_t value)
{
    hourOfDay_ = value;
    hourOfDayIsSet_ = true;
}

bool FrequencyRespBody::hourOfDayIsSet() const
{
    return hourOfDayIsSet_;
}

void FrequencyRespBody::unsethourOfDay()
{
    hourOfDayIsSet_ = false;
}

int32_t FrequencyRespBody::getDayOfWeek() const
{
    return dayOfWeek_;
}

void FrequencyRespBody::setDayOfWeek(int32_t value)
{
    dayOfWeek_ = value;
    dayOfWeekIsSet_ = true;
}

bool FrequencyRespBody::dayOfWeekIsSet() const
{
    return dayOfWeekIsSet_;
}

void FrequencyRespBody::unsetdayOfWeek()
{
    dayOfWeekIsSet_ = false;
}

int32_t FrequencyRespBody::getFixedRate() const
{
    return fixedRate_;
}

void FrequencyRespBody::setFixedRate(int32_t value)
{
    fixedRate_ = value;
    fixedRateIsSet_ = true;
}

bool FrequencyRespBody::fixedRateIsSet() const
{
    return fixedRateIsSet_;
}

void FrequencyRespBody::unsetfixedRate()
{
    fixedRateIsSet_ = false;
}

std::string FrequencyRespBody::getFixedRateUnit() const
{
    return fixedRateUnit_;
}

void FrequencyRespBody::setFixedRateUnit(const std::string& value)
{
    fixedRateUnit_ = value;
    fixedRateUnitIsSet_ = true;
}

bool FrequencyRespBody::fixedRateUnitIsSet() const
{
    return fixedRateUnitIsSet_;
}

void FrequencyRespBody::unsetfixedRateUnit()
{
    fixedRateUnitIsSet_ = false;
}

}
}
}
}
}



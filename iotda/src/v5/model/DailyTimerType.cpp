

#include "huaweicloud/iotda/v5/model/DailyTimerType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DailyTimerType::DailyTimerType()
{
    time_ = "";
    timeIsSet_ = false;
    daysOfWeek_ = "";
    daysOfWeekIsSet_ = false;
}

DailyTimerType::~DailyTimerType() = default;

void DailyTimerType::validate()
{
}

web::json::value DailyTimerType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }

    return val;
}
bool DailyTimerType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days_of_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_week"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfWeek(refVal);
        }
    }
    return ok;
}


std::string DailyTimerType::getTime() const
{
    return time_;
}

void DailyTimerType::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool DailyTimerType::timeIsSet() const
{
    return timeIsSet_;
}

void DailyTimerType::unsettime()
{
    timeIsSet_ = false;
}

std::string DailyTimerType::getDaysOfWeek() const
{
    return daysOfWeek_;
}

void DailyTimerType::setDaysOfWeek(const std::string& value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool DailyTimerType::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void DailyTimerType::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

}
}
}
}
}



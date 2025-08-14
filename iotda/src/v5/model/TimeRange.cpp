

#include "huaweicloud/iotda/v5/model/TimeRange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TimeRange::TimeRange()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    daysOfWeek_ = "";
    daysOfWeekIsSet_ = false;
}

TimeRange::~TimeRange() = default;

void TimeRange::validate()
{
}

web::json::value TimeRange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }

    return val;
}
bool TimeRange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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


std::string TimeRange::getStartTime() const
{
    return startTime_;
}

void TimeRange::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TimeRange::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TimeRange::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TimeRange::getEndTime() const
{
    return endTime_;
}

void TimeRange::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TimeRange::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TimeRange::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TimeRange::getDaysOfWeek() const
{
    return daysOfWeek_;
}

void TimeRange::setDaysOfWeek(const std::string& value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool TimeRange::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void TimeRange::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

}
}
}
}
}



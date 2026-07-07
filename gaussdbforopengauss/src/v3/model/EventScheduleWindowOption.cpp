

#include "huaweicloud/gaussdbforopengauss/v3/model/EventScheduleWindowOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EventScheduleWindowOption::EventScheduleWindowOption()
{
    plannedDay_ = "";
    plannedDayIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

EventScheduleWindowOption::~EventScheduleWindowOption() = default;

void EventScheduleWindowOption::validate()
{
}

web::json::value EventScheduleWindowOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plannedDayIsSet_) {
        val[utility::conversions::to_string_t("planned_day")] = ModelBase::toJson(plannedDay_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool EventScheduleWindowOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("planned_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planned_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlannedDay(refVal);
        }
    }
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
    return ok;
}


std::string EventScheduleWindowOption::getPlannedDay() const
{
    return plannedDay_;
}

void EventScheduleWindowOption::setPlannedDay(const std::string& value)
{
    plannedDay_ = value;
    plannedDayIsSet_ = true;
}

bool EventScheduleWindowOption::plannedDayIsSet() const
{
    return plannedDayIsSet_;
}

void EventScheduleWindowOption::unsetplannedDay()
{
    plannedDayIsSet_ = false;
}

std::string EventScheduleWindowOption::getStartTime() const
{
    return startTime_;
}

void EventScheduleWindowOption::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EventScheduleWindowOption::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EventScheduleWindowOption::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EventScheduleWindowOption::getEndTime() const
{
    return endTime_;
}

void EventScheduleWindowOption::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EventScheduleWindowOption::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EventScheduleWindowOption::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/EventScheduleWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EventScheduleWindow::EventScheduleWindow()
{
    plannedDay_ = "";
    plannedDayIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

EventScheduleWindow::~EventScheduleWindow() = default;

void EventScheduleWindow::validate()
{
}

web::json::value EventScheduleWindow::toJson() const
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
bool EventScheduleWindow::fromJson(const web::json::value& val)
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


std::string EventScheduleWindow::getPlannedDay() const
{
    return plannedDay_;
}

void EventScheduleWindow::setPlannedDay(const std::string& value)
{
    plannedDay_ = value;
    plannedDayIsSet_ = true;
}

bool EventScheduleWindow::plannedDayIsSet() const
{
    return plannedDayIsSet_;
}

void EventScheduleWindow::unsetplannedDay()
{
    plannedDayIsSet_ = false;
}

std::string EventScheduleWindow::getStartTime() const
{
    return startTime_;
}

void EventScheduleWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EventScheduleWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EventScheduleWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EventScheduleWindow::getEndTime() const
{
    return endTime_;
}

void EventScheduleWindow::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EventScheduleWindow::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EventScheduleWindow::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



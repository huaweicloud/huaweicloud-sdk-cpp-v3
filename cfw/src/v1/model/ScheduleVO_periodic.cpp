

#include "huaweicloud/cfw/v1/model/ScheduleVO_periodic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScheduleVO_periodic::ScheduleVO_periodic()
{
    type_ = 0;
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    weekMaskIsSet_ = false;
    startWeek_ = 0;
    startWeekIsSet_ = false;
    endWeek_ = 0;
    endWeekIsSet_ = false;
}

ScheduleVO_periodic::~ScheduleVO_periodic() = default;

void ScheduleVO_periodic::validate()
{
}

web::json::value ScheduleVO_periodic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(weekMaskIsSet_) {
        val[utility::conversions::to_string_t("week_mask")] = ModelBase::toJson(weekMask_);
    }
    if(startWeekIsSet_) {
        val[utility::conversions::to_string_t("start_week")] = ModelBase::toJson(startWeek_);
    }
    if(endWeekIsSet_) {
        val[utility::conversions::to_string_t("end_week")] = ModelBase::toJson(endWeek_);
    }

    return val;
}
bool ScheduleVO_periodic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("week_mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("week_mask"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeekMask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_week"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartWeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_week"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndWeek(refVal);
        }
    }
    return ok;
}


int32_t ScheduleVO_periodic::getType() const
{
    return type_;
}

void ScheduleVO_periodic::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduleVO_periodic::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduleVO_periodic::unsettype()
{
    typeIsSet_ = false;
}

std::string ScheduleVO_periodic::getStartTime() const
{
    return startTime_;
}

void ScheduleVO_periodic::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleVO_periodic::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleVO_periodic::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleVO_periodic::getEndTime() const
{
    return endTime_;
}

void ScheduleVO_periodic::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleVO_periodic::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleVO_periodic::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<int32_t>& ScheduleVO_periodic::getWeekMask()
{
    return weekMask_;
}

void ScheduleVO_periodic::setWeekMask(std::vector<int32_t> value)
{
    weekMask_ = value;
    weekMaskIsSet_ = true;
}

bool ScheduleVO_periodic::weekMaskIsSet() const
{
    return weekMaskIsSet_;
}

void ScheduleVO_periodic::unsetweekMask()
{
    weekMaskIsSet_ = false;
}

int32_t ScheduleVO_periodic::getStartWeek() const
{
    return startWeek_;
}

void ScheduleVO_periodic::setStartWeek(int32_t value)
{
    startWeek_ = value;
    startWeekIsSet_ = true;
}

bool ScheduleVO_periodic::startWeekIsSet() const
{
    return startWeekIsSet_;
}

void ScheduleVO_periodic::unsetstartWeek()
{
    startWeekIsSet_ = false;
}

int32_t ScheduleVO_periodic::getEndWeek() const
{
    return endWeek_;
}

void ScheduleVO_periodic::setEndWeek(int32_t value)
{
    endWeek_ = value;
    endWeekIsSet_ = true;
}

bool ScheduleVO_periodic::endWeekIsSet() const
{
    return endWeekIsSet_;
}

void ScheduleVO_periodic::unsetendWeek()
{
    endWeekIsSet_ = false;
}

}
}
}
}
}



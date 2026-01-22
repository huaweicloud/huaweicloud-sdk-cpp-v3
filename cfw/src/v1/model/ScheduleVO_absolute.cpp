

#include "huaweicloud/cfw/v1/model/ScheduleVO_absolute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScheduleVO_absolute::ScheduleVO_absolute()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ScheduleVO_absolute::~ScheduleVO_absolute() = default;

void ScheduleVO_absolute::validate()
{
}

web::json::value ScheduleVO_absolute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ScheduleVO_absolute::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ScheduleVO_absolute::getStartTime() const
{
    return startTime_;
}

void ScheduleVO_absolute::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleVO_absolute::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleVO_absolute::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleVO_absolute::getEndTime() const
{
    return endTime_;
}

void ScheduleVO_absolute::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleVO_absolute::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleVO_absolute::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



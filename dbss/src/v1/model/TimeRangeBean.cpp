

#include "huaweicloud/dbss/v1/model/TimeRangeBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TimeRangeBean::TimeRangeBean()
{
    endTime_ = "";
    endTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    timeRange_ = "";
    timeRangeIsSet_ = false;
}

TimeRangeBean::~TimeRangeBean() = default;

void TimeRangeBean::validate()
{
}

web::json::value TimeRangeBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }

    return val;
}
bool TimeRangeBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    return ok;
}


std::string TimeRangeBean::getEndTime() const
{
    return endTime_;
}

void TimeRangeBean::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TimeRangeBean::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TimeRangeBean::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TimeRangeBean::getStartTime() const
{
    return startTime_;
}

void TimeRangeBean::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TimeRangeBean::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TimeRangeBean::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TimeRangeBean::getTimeRange() const
{
    return timeRange_;
}

void TimeRangeBean::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool TimeRangeBean::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void TimeRangeBean::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

}
}
}
}
}



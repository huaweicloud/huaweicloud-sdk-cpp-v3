

#include "huaweicloud/dbss/v1/model/Duration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




Duration::Duration()
{
    endTime_ = "";
    endTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    timeRange_ = "";
    timeRangeIsSet_ = false;
}

Duration::~Duration() = default;

void Duration::validate()
{
}

web::json::value Duration::toJson() const
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
bool Duration::fromJson(const web::json::value& val)
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


std::string Duration::getEndTime() const
{
    return endTime_;
}

void Duration::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Duration::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Duration::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string Duration::getStartTime() const
{
    return startTime_;
}

void Duration::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Duration::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Duration::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string Duration::getTimeRange() const
{
    return timeRange_;
}

void Duration::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool Duration::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void Duration::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

}
}
}
}
}



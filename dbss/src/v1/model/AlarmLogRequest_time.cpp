

#include "huaweicloud/dbss/v1/model/AlarmLogRequest_time.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AlarmLogRequest_time::AlarmLogRequest_time()
{
    timeRange_ = "";
    timeRangeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

AlarmLogRequest_time::~AlarmLogRequest_time() = default;

void AlarmLogRequest_time::validate()
{
}

web::json::value AlarmLogRequest_time::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool AlarmLogRequest_time::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
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


std::string AlarmLogRequest_time::getTimeRange() const
{
    return timeRange_;
}

void AlarmLogRequest_time::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool AlarmLogRequest_time::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void AlarmLogRequest_time::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

std::string AlarmLogRequest_time::getStartTime() const
{
    return startTime_;
}

void AlarmLogRequest_time::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AlarmLogRequest_time::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AlarmLogRequest_time::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AlarmLogRequest_time::getEndTime() const
{
    return endTime_;
}

void AlarmLogRequest_time::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AlarmLogRequest_time::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AlarmLogRequest_time::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/TaskPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TaskPolicy::TaskPolicy()
{
    scheduleTime_ = "";
    scheduleTimeIsSet_ = false;
    retryCount_ = 0;
    retryCountIsSet_ = false;
    retryInterval_ = 0;
    retryIntervalIsSet_ = false;
}

TaskPolicy::~TaskPolicy() = default;

void TaskPolicy::validate()
{
}

web::json::value TaskPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleTimeIsSet_) {
        val[utility::conversions::to_string_t("schedule_time")] = ModelBase::toJson(scheduleTime_);
    }
    if(retryCountIsSet_) {
        val[utility::conversions::to_string_t("retry_count")] = ModelBase::toJson(retryCount_);
    }
    if(retryIntervalIsSet_) {
        val[utility::conversions::to_string_t("retry_interval")] = ModelBase::toJson(retryInterval_);
    }

    return val;
}
bool TaskPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryInterval(refVal);
        }
    }
    return ok;
}


std::string TaskPolicy::getScheduleTime() const
{
    return scheduleTime_;
}

void TaskPolicy::setScheduleTime(const std::string& value)
{
    scheduleTime_ = value;
    scheduleTimeIsSet_ = true;
}

bool TaskPolicy::scheduleTimeIsSet() const
{
    return scheduleTimeIsSet_;
}

void TaskPolicy::unsetscheduleTime()
{
    scheduleTimeIsSet_ = false;
}

int32_t TaskPolicy::getRetryCount() const
{
    return retryCount_;
}

void TaskPolicy::setRetryCount(int32_t value)
{
    retryCount_ = value;
    retryCountIsSet_ = true;
}

bool TaskPolicy::retryCountIsSet() const
{
    return retryCountIsSet_;
}

void TaskPolicy::unsetretryCount()
{
    retryCountIsSet_ = false;
}

int32_t TaskPolicy::getRetryInterval() const
{
    return retryInterval_;
}

void TaskPolicy::setRetryInterval(int32_t value)
{
    retryInterval_ = value;
    retryIntervalIsSet_ = true;
}

bool TaskPolicy::retryIntervalIsSet() const
{
    return retryIntervalIsSet_;
}

void TaskPolicy::unsetretryInterval()
{
    retryIntervalIsSet_ = false;
}

}
}
}
}
}



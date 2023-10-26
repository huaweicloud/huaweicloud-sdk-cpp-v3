

#include "huaweicloud/antiddos/v1/model/DailyLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




DailyLog::DailyLog()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    triggerBps_ = 0;
    triggerBpsIsSet_ = false;
    triggerPps_ = 0;
    triggerPpsIsSet_ = false;
    triggerHttpPps_ = 0;
    triggerHttpPpsIsSet_ = false;
}

DailyLog::~DailyLog() = default;

void DailyLog::validate()
{
}

web::json::value DailyLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(triggerBpsIsSet_) {
        val[utility::conversions::to_string_t("trigger_bps")] = ModelBase::toJson(triggerBps_);
    }
    if(triggerPpsIsSet_) {
        val[utility::conversions::to_string_t("trigger_pps")] = ModelBase::toJson(triggerPps_);
    }
    if(triggerHttpPpsIsSet_) {
        val[utility::conversions::to_string_t("trigger_http_pps")] = ModelBase::toJson(triggerHttpPps_);
    }

    return val;
}
bool DailyLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_bps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_pps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_http_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_http_pps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerHttpPps(refVal);
        }
    }
    return ok;
}


int64_t DailyLog::getStartTime() const
{
    return startTime_;
}

void DailyLog::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DailyLog::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DailyLog::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DailyLog::getEndTime() const
{
    return endTime_;
}

void DailyLog::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DailyLog::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DailyLog::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t DailyLog::getStatus() const
{
    return status_;
}

void DailyLog::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DailyLog::statusIsSet() const
{
    return statusIsSet_;
}

void DailyLog::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DailyLog::getTriggerBps() const
{
    return triggerBps_;
}

void DailyLog::setTriggerBps(int32_t value)
{
    triggerBps_ = value;
    triggerBpsIsSet_ = true;
}

bool DailyLog::triggerBpsIsSet() const
{
    return triggerBpsIsSet_;
}

void DailyLog::unsettriggerBps()
{
    triggerBpsIsSet_ = false;
}

int32_t DailyLog::getTriggerPps() const
{
    return triggerPps_;
}

void DailyLog::setTriggerPps(int32_t value)
{
    triggerPps_ = value;
    triggerPpsIsSet_ = true;
}

bool DailyLog::triggerPpsIsSet() const
{
    return triggerPpsIsSet_;
}

void DailyLog::unsettriggerPps()
{
    triggerPpsIsSet_ = false;
}

int32_t DailyLog::getTriggerHttpPps() const
{
    return triggerHttpPps_;
}

void DailyLog::setTriggerHttpPps(int32_t value)
{
    triggerHttpPps_ = value;
    triggerHttpPpsIsSet_ = true;
}

bool DailyLog::triggerHttpPpsIsSet() const
{
    return triggerHttpPpsIsSet_;
}

void DailyLog::unsettriggerHttpPps()
{
    triggerHttpPpsIsSet_ = false;
}

}
}
}
}
}



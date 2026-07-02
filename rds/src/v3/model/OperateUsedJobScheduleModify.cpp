

#include "huaweicloud/rds/v3/model/OperateUsedJobScheduleModify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OperateUsedJobScheduleModify::OperateUsedJobScheduleModify()
{
    id_ = "";
    idIsSet_ = false;
    jobScheduleType_ = "";
    jobScheduleTypeIsSet_ = false;
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    userDefined_ = false;
    userDefinedIsSet_ = false;
    oneTimeOccurrenceIsSet_ = false;
    frequencyIsSet_ = false;
    dailyFrequencyIsSet_ = false;
    durationIsSet_ = false;
}

OperateUsedJobScheduleModify::~OperateUsedJobScheduleModify() = default;

void OperateUsedJobScheduleModify::validate()
{
}

web::json::value OperateUsedJobScheduleModify::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobScheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("job_schedule_type")] = ModelBase::toJson(jobScheduleType_);
    }
    if(scheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("schedule_type")] = ModelBase::toJson(scheduleType_);
    }
    if(userDefinedIsSet_) {
        val[utility::conversions::to_string_t("user_defined")] = ModelBase::toJson(userDefined_);
    }
    if(oneTimeOccurrenceIsSet_) {
        val[utility::conversions::to_string_t("one_time_occurrence")] = ModelBase::toJson(oneTimeOccurrence_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(dailyFrequencyIsSet_) {
        val[utility::conversions::to_string_t("daily_frequency")] = ModelBase::toJson(dailyFrequency_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool OperateUsedJobScheduleModify::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobScheduleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_defined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefined(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("one_time_occurrence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("one_time_occurrence"));
        if(!fieldValue.is_null())
        {
            JobScheduleOneTimeOccurrenceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOneTimeOccurrence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            JobScheduleFrequencyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_frequency"));
        if(!fieldValue.is_null())
        {
            JobScheduleDailyFrequencyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            JobScheduleDurationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string OperateUsedJobScheduleModify::getId() const
{
    return id_;
}

void OperateUsedJobScheduleModify::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperateUsedJobScheduleModify::idIsSet() const
{
    return idIsSet_;
}

void OperateUsedJobScheduleModify::unsetid()
{
    idIsSet_ = false;
}

std::string OperateUsedJobScheduleModify::getJobScheduleType() const
{
    return jobScheduleType_;
}

void OperateUsedJobScheduleModify::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool OperateUsedJobScheduleModify::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void OperateUsedJobScheduleModify::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

std::string OperateUsedJobScheduleModify::getScheduleType() const
{
    return scheduleType_;
}

void OperateUsedJobScheduleModify::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool OperateUsedJobScheduleModify::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void OperateUsedJobScheduleModify::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

bool OperateUsedJobScheduleModify::isUserDefined() const
{
    return userDefined_;
}

void OperateUsedJobScheduleModify::setUserDefined(bool value)
{
    userDefined_ = value;
    userDefinedIsSet_ = true;
}

bool OperateUsedJobScheduleModify::userDefinedIsSet() const
{
    return userDefinedIsSet_;
}

void OperateUsedJobScheduleModify::unsetuserDefined()
{
    userDefinedIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo OperateUsedJobScheduleModify::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void OperateUsedJobScheduleModify::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool OperateUsedJobScheduleModify::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void OperateUsedJobScheduleModify::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo OperateUsedJobScheduleModify::getFrequency() const
{
    return frequency_;
}

void OperateUsedJobScheduleModify::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool OperateUsedJobScheduleModify::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void OperateUsedJobScheduleModify::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo OperateUsedJobScheduleModify::getDailyFrequency() const
{
    return dailyFrequency_;
}

void OperateUsedJobScheduleModify::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool OperateUsedJobScheduleModify::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void OperateUsedJobScheduleModify::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo OperateUsedJobScheduleModify::getDuration() const
{
    return duration_;
}

void OperateUsedJobScheduleModify::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OperateUsedJobScheduleModify::durationIsSet() const
{
    return durationIsSet_;
}

void OperateUsedJobScheduleModify::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/JobScheduleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




JobScheduleInfo::JobScheduleInfo()
{
    id_ = "";
    idIsSet_ = false;
    userDefined_ = false;
    userDefinedIsSet_ = false;
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    jobScheduleType_ = "";
    jobScheduleTypeIsSet_ = false;
    oneTimeOccurrenceIsSet_ = false;
    frequencyIsSet_ = false;
    dailyFrequencyIsSet_ = false;
    durationIsSet_ = false;
}

JobScheduleInfo::~JobScheduleInfo() = default;

void JobScheduleInfo::validate()
{
}

web::json::value JobScheduleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userDefinedIsSet_) {
        val[utility::conversions::to_string_t("user_defined")] = ModelBase::toJson(userDefined_);
    }
    if(scheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("schedule_type")] = ModelBase::toJson(scheduleType_);
    }
    if(jobScheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("job_schedule_type")] = ModelBase::toJson(jobScheduleType_);
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
bool JobScheduleInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_defined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefined(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobScheduleType(refVal);
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


std::string JobScheduleInfo::getId() const
{
    return id_;
}

void JobScheduleInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobScheduleInfo::idIsSet() const
{
    return idIsSet_;
}

void JobScheduleInfo::unsetid()
{
    idIsSet_ = false;
}

bool JobScheduleInfo::isUserDefined() const
{
    return userDefined_;
}

void JobScheduleInfo::setUserDefined(bool value)
{
    userDefined_ = value;
    userDefinedIsSet_ = true;
}

bool JobScheduleInfo::userDefinedIsSet() const
{
    return userDefinedIsSet_;
}

void JobScheduleInfo::unsetuserDefined()
{
    userDefinedIsSet_ = false;
}

std::string JobScheduleInfo::getScheduleType() const
{
    return scheduleType_;
}

void JobScheduleInfo::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool JobScheduleInfo::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void JobScheduleInfo::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string JobScheduleInfo::getJobScheduleType() const
{
    return jobScheduleType_;
}

void JobScheduleInfo::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool JobScheduleInfo::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void JobScheduleInfo::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo JobScheduleInfo::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void JobScheduleInfo::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool JobScheduleInfo::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void JobScheduleInfo::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo JobScheduleInfo::getFrequency() const
{
    return frequency_;
}

void JobScheduleInfo::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool JobScheduleInfo::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void JobScheduleInfo::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo JobScheduleInfo::getDailyFrequency() const
{
    return dailyFrequency_;
}

void JobScheduleInfo::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool JobScheduleInfo::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void JobScheduleInfo::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo JobScheduleInfo::getDuration() const
{
    return duration_;
}

void JobScheduleInfo::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool JobScheduleInfo::durationIsSet() const
{
    return durationIsSet_;
}

void JobScheduleInfo::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



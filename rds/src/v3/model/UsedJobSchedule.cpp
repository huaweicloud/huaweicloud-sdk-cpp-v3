

#include "huaweicloud/rds/v3/model/UsedJobSchedule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UsedJobSchedule::UsedJobSchedule()
{
    id_ = "";
    idIsSet_ = false;
    jobScheduleType_ = "";
    jobScheduleTypeIsSet_ = false;
    oneTimeOccurrenceIsSet_ = false;
    frequencyIsSet_ = false;
    dailyFrequencyIsSet_ = false;
    durationIsSet_ = false;
}

UsedJobSchedule::~UsedJobSchedule() = default;

void UsedJobSchedule::validate()
{
}

web::json::value UsedJobSchedule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
bool UsedJobSchedule::fromJson(const web::json::value& val)
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


std::string UsedJobSchedule::getId() const
{
    return id_;
}

void UsedJobSchedule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UsedJobSchedule::idIsSet() const
{
    return idIsSet_;
}

void UsedJobSchedule::unsetid()
{
    idIsSet_ = false;
}

std::string UsedJobSchedule::getJobScheduleType() const
{
    return jobScheduleType_;
}

void UsedJobSchedule::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool UsedJobSchedule::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void UsedJobSchedule::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo UsedJobSchedule::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void UsedJobSchedule::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool UsedJobSchedule::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void UsedJobSchedule::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo UsedJobSchedule::getFrequency() const
{
    return frequency_;
}

void UsedJobSchedule::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool UsedJobSchedule::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void UsedJobSchedule::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo UsedJobSchedule::getDailyFrequency() const
{
    return dailyFrequency_;
}

void UsedJobSchedule::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool UsedJobSchedule::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void UsedJobSchedule::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo UsedJobSchedule::getDuration() const
{
    return duration_;
}

void UsedJobSchedule::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool UsedJobSchedule::durationIsSet() const
{
    return durationIsSet_;
}

void UsedJobSchedule::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



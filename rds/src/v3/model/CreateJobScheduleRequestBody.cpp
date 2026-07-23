

#include "huaweicloud/rds/v3/model/CreateJobScheduleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateJobScheduleRequestBody::CreateJobScheduleRequestBody()
{
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    jobScheduleType_ = "";
    jobScheduleTypeIsSet_ = false;
    oneTimeOccurrenceIsSet_ = false;
    frequencyIsSet_ = false;
    dailyFrequencyIsSet_ = false;
    durationIsSet_ = false;
}

CreateJobScheduleRequestBody::~CreateJobScheduleRequestBody() = default;

void CreateJobScheduleRequestBody::validate()
{
}

web::json::value CreateJobScheduleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreateJobScheduleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateJobScheduleRequestBody::getScheduleType() const
{
    return scheduleType_;
}

void CreateJobScheduleRequestBody::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool CreateJobScheduleRequestBody::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void CreateJobScheduleRequestBody::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string CreateJobScheduleRequestBody::getJobScheduleType() const
{
    return jobScheduleType_;
}

void CreateJobScheduleRequestBody::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool CreateJobScheduleRequestBody::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void CreateJobScheduleRequestBody::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo CreateJobScheduleRequestBody::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void CreateJobScheduleRequestBody::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool CreateJobScheduleRequestBody::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void CreateJobScheduleRequestBody::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo CreateJobScheduleRequestBody::getFrequency() const
{
    return frequency_;
}

void CreateJobScheduleRequestBody::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool CreateJobScheduleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void CreateJobScheduleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo CreateJobScheduleRequestBody::getDailyFrequency() const
{
    return dailyFrequency_;
}

void CreateJobScheduleRequestBody::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool CreateJobScheduleRequestBody::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void CreateJobScheduleRequestBody::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo CreateJobScheduleRequestBody::getDuration() const
{
    return duration_;
}

void CreateJobScheduleRequestBody::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CreateJobScheduleRequestBody::durationIsSet() const
{
    return durationIsSet_;
}

void CreateJobScheduleRequestBody::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



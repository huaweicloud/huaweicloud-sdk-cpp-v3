

#include "huaweicloud/rds/v3/model/ModifyJobScheduleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyJobScheduleRequestBody::ModifyJobScheduleRequestBody()
{
    jobScheduleType_ = "";
    jobScheduleTypeIsSet_ = false;
    oneTimeOccurrenceIsSet_ = false;
    frequencyIsSet_ = false;
    dailyFrequencyIsSet_ = false;
    durationIsSet_ = false;
}

ModifyJobScheduleRequestBody::~ModifyJobScheduleRequestBody() = default;

void ModifyJobScheduleRequestBody::validate()
{
}

web::json::value ModifyJobScheduleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ModifyJobScheduleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ModifyJobScheduleRequestBody::getJobScheduleType() const
{
    return jobScheduleType_;
}

void ModifyJobScheduleRequestBody::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool ModifyJobScheduleRequestBody::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void ModifyJobScheduleRequestBody::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo ModifyJobScheduleRequestBody::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void ModifyJobScheduleRequestBody::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool ModifyJobScheduleRequestBody::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void ModifyJobScheduleRequestBody::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo ModifyJobScheduleRequestBody::getFrequency() const
{
    return frequency_;
}

void ModifyJobScheduleRequestBody::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool ModifyJobScheduleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void ModifyJobScheduleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo ModifyJobScheduleRequestBody::getDailyFrequency() const
{
    return dailyFrequency_;
}

void ModifyJobScheduleRequestBody::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool ModifyJobScheduleRequestBody::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void ModifyJobScheduleRequestBody::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo ModifyJobScheduleRequestBody::getDuration() const
{
    return duration_;
}

void ModifyJobScheduleRequestBody::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ModifyJobScheduleRequestBody::durationIsSet() const
{
    return durationIsSet_;
}

void ModifyJobScheduleRequestBody::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



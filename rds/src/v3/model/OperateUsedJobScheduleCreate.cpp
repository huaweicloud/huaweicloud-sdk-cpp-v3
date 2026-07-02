

#include "huaweicloud/rds/v3/model/OperateUsedJobScheduleCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OperateUsedJobScheduleCreate::OperateUsedJobScheduleCreate()
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

OperateUsedJobScheduleCreate::~OperateUsedJobScheduleCreate() = default;

void OperateUsedJobScheduleCreate::validate()
{
}

web::json::value OperateUsedJobScheduleCreate::toJson() const
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
bool OperateUsedJobScheduleCreate::fromJson(const web::json::value& val)
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


std::string OperateUsedJobScheduleCreate::getId() const
{
    return id_;
}

void OperateUsedJobScheduleCreate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::idIsSet() const
{
    return idIsSet_;
}

void OperateUsedJobScheduleCreate::unsetid()
{
    idIsSet_ = false;
}

std::string OperateUsedJobScheduleCreate::getJobScheduleType() const
{
    return jobScheduleType_;
}

void OperateUsedJobScheduleCreate::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void OperateUsedJobScheduleCreate::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo OperateUsedJobScheduleCreate::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void OperateUsedJobScheduleCreate::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void OperateUsedJobScheduleCreate::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo OperateUsedJobScheduleCreate::getFrequency() const
{
    return frequency_;
}

void OperateUsedJobScheduleCreate::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void OperateUsedJobScheduleCreate::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo OperateUsedJobScheduleCreate::getDailyFrequency() const
{
    return dailyFrequency_;
}

void OperateUsedJobScheduleCreate::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void OperateUsedJobScheduleCreate::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo OperateUsedJobScheduleCreate::getDuration() const
{
    return duration_;
}

void OperateUsedJobScheduleCreate::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OperateUsedJobScheduleCreate::durationIsSet() const
{
    return durationIsSet_;
}

void OperateUsedJobScheduleCreate::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



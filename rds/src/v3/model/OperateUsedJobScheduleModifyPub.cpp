

#include "huaweicloud/rds/v3/model/OperateUsedJobScheduleModifyPub.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OperateUsedJobScheduleModifyPub::OperateUsedJobScheduleModifyPub()
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

OperateUsedJobScheduleModifyPub::~OperateUsedJobScheduleModifyPub() = default;

void OperateUsedJobScheduleModifyPub::validate()
{
}

web::json::value OperateUsedJobScheduleModifyPub::toJson() const
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
bool OperateUsedJobScheduleModifyPub::fromJson(const web::json::value& val)
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


std::string OperateUsedJobScheduleModifyPub::getId() const
{
    return id_;
}

void OperateUsedJobScheduleModifyPub::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::idIsSet() const
{
    return idIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetid()
{
    idIsSet_ = false;
}

std::string OperateUsedJobScheduleModifyPub::getJobScheduleType() const
{
    return jobScheduleType_;
}

void OperateUsedJobScheduleModifyPub::setJobScheduleType(const std::string& value)
{
    jobScheduleType_ = value;
    jobScheduleTypeIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::jobScheduleTypeIsSet() const
{
    return jobScheduleTypeIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetjobScheduleType()
{
    jobScheduleTypeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo OperateUsedJobScheduleModifyPub::getOneTimeOccurrence() const
{
    return oneTimeOccurrence_;
}

void OperateUsedJobScheduleModifyPub::setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value)
{
    oneTimeOccurrence_ = value;
    oneTimeOccurrenceIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::oneTimeOccurrenceIsSet() const
{
    return oneTimeOccurrenceIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetoneTimeOccurrence()
{
    oneTimeOccurrenceIsSet_ = false;
}

JobScheduleFrequencyInfo OperateUsedJobScheduleModifyPub::getFrequency() const
{
    return frequency_;
}

void OperateUsedJobScheduleModifyPub::setFrequency(const JobScheduleFrequencyInfo& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetfrequency()
{
    frequencyIsSet_ = false;
}

JobScheduleDailyFrequencyInfo OperateUsedJobScheduleModifyPub::getDailyFrequency() const
{
    return dailyFrequency_;
}

void OperateUsedJobScheduleModifyPub::setDailyFrequency(const JobScheduleDailyFrequencyInfo& value)
{
    dailyFrequency_ = value;
    dailyFrequencyIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::dailyFrequencyIsSet() const
{
    return dailyFrequencyIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetdailyFrequency()
{
    dailyFrequencyIsSet_ = false;
}

JobScheduleDurationInfo OperateUsedJobScheduleModifyPub::getDuration() const
{
    return duration_;
}

void OperateUsedJobScheduleModifyPub::setDuration(const JobScheduleDurationInfo& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OperateUsedJobScheduleModifyPub::durationIsSet() const
{
    return durationIsSet_;
}

void OperateUsedJobScheduleModifyPub::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



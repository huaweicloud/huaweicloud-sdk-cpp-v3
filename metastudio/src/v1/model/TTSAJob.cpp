

#include "huaweicloud/metastudio/v1/model/TTSAJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TTSAJob::TTSAJob()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    contentDuration_ = 0.0f;
    contentDurationIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
}

TTSAJob::~TTSAJob() = default;

void TTSAJob::validate()
{
}

web::json::value TTSAJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(contentDurationIsSet_) {
        val[utility::conversions::to_string_t("content_duration")] = ModelBase::toJson(contentDuration_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }

    return val;
}
bool TTSAJob::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    return ok;
}


std::string TTSAJob::getJobId() const
{
    return jobId_;
}

void TTSAJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TTSAJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TTSAJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TTSAJob::getState() const
{
    return state_;
}

void TTSAJob::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TTSAJob::stateIsSet() const
{
    return stateIsSet_;
}

void TTSAJob::unsetstate()
{
    stateIsSet_ = false;
}

std::string TTSAJob::getStartTime() const
{
    return startTime_;
}

void TTSAJob::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TTSAJob::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TTSAJob::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TTSAJob::getEndTime() const
{
    return endTime_;
}

void TTSAJob::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TTSAJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TTSAJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

float TTSAJob::getContentDuration() const
{
    return contentDuration_;
}

void TTSAJob::setContentDuration(float value)
{
    contentDuration_ = value;
    contentDurationIsSet_ = true;
}

bool TTSAJob::contentDurationIsSet() const
{
    return contentDurationIsSet_;
}

void TTSAJob::unsetcontentDuration()
{
    contentDurationIsSet_ = false;
}

std::string TTSAJob::getJobType() const
{
    return jobType_;
}

void TTSAJob::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool TTSAJob::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void TTSAJob::unsetjobType()
{
    jobTypeIsSet_ = false;
}

}
}
}
}
}



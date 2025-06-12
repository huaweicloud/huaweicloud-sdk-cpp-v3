

#include "huaweicloud/metastudio/v1/model/DigitalHumanModelingJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DigitalHumanModelingJobInfo::DigitalHumanModelingJobInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorInfoIsSet_ = false;
}

DigitalHumanModelingJobInfo::~DigitalHumanModelingJobInfo() = default;

void DigitalHumanModelingJobInfo::validate()
{
}

web::json::value DigitalHumanModelingJobInfo::toJson() const
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
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }

    return val;
}
bool DigitalHumanModelingJobInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    return ok;
}


std::string DigitalHumanModelingJobInfo::getJobId() const
{
    return jobId_;
}

void DigitalHumanModelingJobInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DigitalHumanModelingJobInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DigitalHumanModelingJobInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DigitalHumanModelingJobInfo::getState() const
{
    return state_;
}

void DigitalHumanModelingJobInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool DigitalHumanModelingJobInfo::stateIsSet() const
{
    return stateIsSet_;
}

void DigitalHumanModelingJobInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string DigitalHumanModelingJobInfo::getStartTime() const
{
    return startTime_;
}

void DigitalHumanModelingJobInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DigitalHumanModelingJobInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DigitalHumanModelingJobInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string DigitalHumanModelingJobInfo::getEndTime() const
{
    return endTime_;
}

void DigitalHumanModelingJobInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DigitalHumanModelingJobInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DigitalHumanModelingJobInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse DigitalHumanModelingJobInfo::getErrorInfo() const
{
    return errorInfo_;
}

void DigitalHumanModelingJobInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool DigitalHumanModelingJobInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void DigitalHumanModelingJobInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}



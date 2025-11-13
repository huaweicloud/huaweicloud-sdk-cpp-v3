

#include "huaweicloud/metastudio/v1/model/ShowShortJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowShortJobResponse::ShowShortJobResponse()
{
    jobTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    stateIsSet_ = false;
    jobFailedCode_ = "";
    jobFailedCodeIsSet_ = false;
    jobFailedReason_ = "";
    jobFailedReasonIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    lastupdateTime_ = 0L;
    lastupdateTimeIsSet_ = false;
    assessResultIsSet_ = false;
}

ShowShortJobResponse::~ShowShortJobResponse() = default;

void ShowShortJobResponse::validate()
{
}

web::json::value ShowShortJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(jobFailedCodeIsSet_) {
        val[utility::conversions::to_string_t("job_failed_code")] = ModelBase::toJson(jobFailedCode_);
    }
    if(jobFailedReasonIsSet_) {
        val[utility::conversions::to_string_t("job_failed_reason")] = ModelBase::toJson(jobFailedReason_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }
    if(assessResultIsSet_) {
        val[utility::conversions::to_string_t("assess_result")] = ModelBase::toJson(assessResult_);
    }

    return val;
}
bool ShowShortJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            ShortJobType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
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
            JobState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_failed_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_failed_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFailedCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assess_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assess_result"));
        if(!fieldValue.is_null())
        {
            AssessResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssessResult(refVal);
        }
    }
    return ok;
}


ShortJobType ShowShortJobResponse::getJobType() const
{
    return jobType_;
}

void ShowShortJobResponse::setJobType(const ShortJobType& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowShortJobResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowShortJobResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowShortJobResponse::getJobId() const
{
    return jobId_;
}

void ShowShortJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowShortJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowShortJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

JobState ShowShortJobResponse::getState() const
{
    return state_;
}

void ShowShortJobResponse::setState(const JobState& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowShortJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowShortJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowShortJobResponse::getJobFailedCode() const
{
    return jobFailedCode_;
}

void ShowShortJobResponse::setJobFailedCode(const std::string& value)
{
    jobFailedCode_ = value;
    jobFailedCodeIsSet_ = true;
}

bool ShowShortJobResponse::jobFailedCodeIsSet() const
{
    return jobFailedCodeIsSet_;
}

void ShowShortJobResponse::unsetjobFailedCode()
{
    jobFailedCodeIsSet_ = false;
}

std::string ShowShortJobResponse::getJobFailedReason() const
{
    return jobFailedReason_;
}

void ShowShortJobResponse::setJobFailedReason(const std::string& value)
{
    jobFailedReason_ = value;
    jobFailedReasonIsSet_ = true;
}

bool ShowShortJobResponse::jobFailedReasonIsSet() const
{
    return jobFailedReasonIsSet_;
}

void ShowShortJobResponse::unsetjobFailedReason()
{
    jobFailedReasonIsSet_ = false;
}

int64_t ShowShortJobResponse::getCreateTime() const
{
    return createTime_;
}

void ShowShortJobResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowShortJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowShortJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowShortJobResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void ShowShortJobResponse::setLastupdateTime(int64_t value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool ShowShortJobResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void ShowShortJobResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

AssessResult ShowShortJobResponse::getAssessResult() const
{
    return assessResult_;
}

void ShowShortJobResponse::setAssessResult(const AssessResult& value)
{
    assessResult_ = value;
    assessResultIsSet_ = true;
}

bool ShowShortJobResponse::assessResultIsSet() const
{
    return assessResultIsSet_;
}

void ShowShortJobResponse::unsetassessResult()
{
    assessResultIsSet_ = false;
}

}
}
}
}
}



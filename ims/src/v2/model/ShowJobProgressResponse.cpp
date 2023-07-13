

#include "huaweicloud/ims/v2/model/ShowJobProgressResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowJobProgressResponse::ShowJobProgressResponse()
{
    status_ = "";
    statusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    entitiesIsSet_ = false;
}

ShowJobProgressResponse::~ShowJobProgressResponse() = default;

void ShowJobProgressResponse::validate()
{
}

web::json::value ShowJobProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }

    return val;
}

bool ShowJobProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            JobProgressEntities refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    return ok;
}

std::string ShowJobProgressResponse::getStatus() const
{
    return status_;
}

void ShowJobProgressResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobProgressResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobProgressResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowJobProgressResponse::getJobId() const
{
    return jobId_;
}

void ShowJobProgressResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobProgressResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobProgressResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobProgressResponse::getJobType() const
{
    return jobType_;
}

void ShowJobProgressResponse::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowJobProgressResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowJobProgressResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowJobProgressResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowJobProgressResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowJobProgressResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowJobProgressResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowJobProgressResponse::getEndTime() const
{
    return endTime_;
}

void ShowJobProgressResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowJobProgressResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowJobProgressResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowJobProgressResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowJobProgressResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowJobProgressResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowJobProgressResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowJobProgressResponse::getFailReason() const
{
    return failReason_;
}

void ShowJobProgressResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ShowJobProgressResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ShowJobProgressResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

JobProgressEntities ShowJobProgressResponse::getEntities() const
{
    return entities_;
}

void ShowJobProgressResponse::setEntities(const JobProgressEntities& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ShowJobProgressResponse::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ShowJobProgressResponse::unsetentities()
{
    entitiesIsSet_ = false;
}

}
}
}
}
}



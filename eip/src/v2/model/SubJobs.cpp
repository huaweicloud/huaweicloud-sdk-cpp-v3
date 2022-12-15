

#include "huaweicloud/eip/v2/model/SubJobs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




SubJobs::SubJobs()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    entitiesIsSet_ = false;
}

SubJobs::~SubJobs() = default;

void SubJobs::validate()
{
}

web::json::value SubJobs::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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

bool SubJobs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
            SubJobs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    return ok;
}


std::string SubJobs::getJobId() const
{
    return jobId_;
}

void SubJobs::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubJobs::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubJobs::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SubJobs::getJobType() const
{
    return jobType_;
}

void SubJobs::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool SubJobs::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void SubJobs::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string SubJobs::getBeginTime() const
{
    return beginTime_;
}

void SubJobs::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SubJobs::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SubJobs::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SubJobs::getEndTime() const
{
    return endTime_;
}

void SubJobs::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SubJobs::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SubJobs::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SubJobs::getStatus() const
{
    return status_;
}

void SubJobs::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubJobs::statusIsSet() const
{
    return statusIsSet_;
}

void SubJobs::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SubJobs::getErrorCode() const
{
    return errorCode_;
}

void SubJobs::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SubJobs::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SubJobs::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string SubJobs::getFailReason() const
{
    return failReason_;
}

void SubJobs::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool SubJobs::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void SubJobs::unsetfailReason()
{
    failReasonIsSet_ = false;
}

SubJobs SubJobs::getEntities() const
{
    return entities_;
}

void SubJobs::setEntities(const SubJobs& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool SubJobs::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void SubJobs::unsetentities()
{
    entitiesIsSet_ = false;
}

}
}
}
}
}



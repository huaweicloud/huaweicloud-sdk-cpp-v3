

#include "huaweicloud/evs/v2/model/SubJob.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SubJob::SubJob()
{
    status_ = "";
    statusIsSet_ = false;
    entitiesIsSet_ = false;
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
}

SubJob::~SubJob() = default;

void SubJob::validate()
{
}

web::json::value SubJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
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

    return val;
}

bool SubJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            SubJobEntities refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
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
    return ok;
}

std::string SubJob::getStatus() const
{
    return status_;
}

void SubJob::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubJob::statusIsSet() const
{
    return statusIsSet_;
}

void SubJob::unsetstatus()
{
    statusIsSet_ = false;
}

SubJobEntities SubJob::getEntities() const
{
    return entities_;
}

void SubJob::setEntities(const SubJobEntities& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool SubJob::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void SubJob::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string SubJob::getJobId() const
{
    return jobId_;
}

void SubJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SubJob::getJobType() const
{
    return jobType_;
}

void SubJob::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool SubJob::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void SubJob::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string SubJob::getBeginTime() const
{
    return beginTime_;
}

void SubJob::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SubJob::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SubJob::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SubJob::getEndTime() const
{
    return endTime_;
}

void SubJob::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SubJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SubJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SubJob::getErrorCode() const
{
    return errorCode_;
}

void SubJob::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SubJob::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SubJob::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string SubJob::getFailReason() const
{
    return failReason_;
}

void SubJob::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool SubJob::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void SubJob::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}



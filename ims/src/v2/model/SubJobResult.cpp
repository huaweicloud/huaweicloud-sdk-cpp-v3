

#include "huaweicloud/ims/v2/model/SubJobResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




SubJobResult::SubJobResult()
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

SubJobResult::~SubJobResult() = default;

void SubJobResult::validate()
{
}

web::json::value SubJobResult::toJson() const
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

bool SubJobResult::fromJson(const web::json::value& val)
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
            SubJobEntities refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    return ok;
}

std::string SubJobResult::getStatus() const
{
    return status_;
}

void SubJobResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubJobResult::statusIsSet() const
{
    return statusIsSet_;
}

void SubJobResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SubJobResult::getJobId() const
{
    return jobId_;
}

void SubJobResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubJobResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubJobResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SubJobResult::getJobType() const
{
    return jobType_;
}

void SubJobResult::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool SubJobResult::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void SubJobResult::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string SubJobResult::getBeginTime() const
{
    return beginTime_;
}

void SubJobResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SubJobResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SubJobResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SubJobResult::getEndTime() const
{
    return endTime_;
}

void SubJobResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SubJobResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SubJobResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SubJobResult::getErrorCode() const
{
    return errorCode_;
}

void SubJobResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SubJobResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SubJobResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string SubJobResult::getFailReason() const
{
    return failReason_;
}

void SubJobResult::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool SubJobResult::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void SubJobResult::unsetfailReason()
{
    failReasonIsSet_ = false;
}

SubJobEntities SubJobResult::getEntities() const
{
    return entities_;
}

void SubJobResult::setEntities(const SubJobEntities& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool SubJobResult::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void SubJobResult::unsetentities()
{
    entitiesIsSet_ = false;
}

}
}
}
}
}



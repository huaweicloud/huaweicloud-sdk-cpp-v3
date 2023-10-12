

#include "huaweicloud/sdrs/v1/model/SubJobParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




SubJobParams::SubJobParams()
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

SubJobParams::~SubJobParams() = default;

void SubJobParams::validate()
{
}

web::json::value SubJobParams::toJson() const
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
bool SubJobParams::fromJson(const web::json::value& val)
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


std::string SubJobParams::getStatus() const
{
    return status_;
}

void SubJobParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubJobParams::statusIsSet() const
{
    return statusIsSet_;
}

void SubJobParams::unsetstatus()
{
    statusIsSet_ = false;
}

SubJobEntities SubJobParams::getEntities() const
{
    return entities_;
}

void SubJobParams::setEntities(const SubJobEntities& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool SubJobParams::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void SubJobParams::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string SubJobParams::getJobId() const
{
    return jobId_;
}

void SubJobParams::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubJobParams::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubJobParams::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SubJobParams::getJobType() const
{
    return jobType_;
}

void SubJobParams::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool SubJobParams::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void SubJobParams::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string SubJobParams::getBeginTime() const
{
    return beginTime_;
}

void SubJobParams::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SubJobParams::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SubJobParams::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SubJobParams::getEndTime() const
{
    return endTime_;
}

void SubJobParams::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SubJobParams::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SubJobParams::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SubJobParams::getErrorCode() const
{
    return errorCode_;
}

void SubJobParams::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SubJobParams::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SubJobParams::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string SubJobParams::getFailReason() const
{
    return failReason_;
}

void SubJobParams::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool SubJobParams::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void SubJobParams::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}



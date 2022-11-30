

#include "huaweicloud/sdrs/v1/model/FailureJobParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




FailureJobParams::FailureJobParams()
{
    jobType_ = "";
    jobTypeIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    failureStatus_ = "";
    failureStatusIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

FailureJobParams::~FailureJobParams() = default;

void FailureJobParams::validate()
{
}

web::json::value FailureJobParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(failureStatusIsSet_) {
        val[utility::conversions::to_string_t("failure_status")] = ModelBase::toJson(failureStatus_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}

bool FailureJobParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string FailureJobParams::getJobType() const
{
    return jobType_;
}

void FailureJobParams::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool FailureJobParams::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void FailureJobParams::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string FailureJobParams::getJobStatus() const
{
    return jobStatus_;
}

void FailureJobParams::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool FailureJobParams::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void FailureJobParams::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string FailureJobParams::getBeginTime() const
{
    return beginTime_;
}

void FailureJobParams::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FailureJobParams::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FailureJobParams::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string FailureJobParams::getJobId() const
{
    return jobId_;
}

void FailureJobParams::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool FailureJobParams::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void FailureJobParams::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string FailureJobParams::getFailureStatus() const
{
    return failureStatus_;
}

void FailureJobParams::setFailureStatus(const std::string& value)
{
    failureStatus_ = value;
    failureStatusIsSet_ = true;
}

bool FailureJobParams::failureStatusIsSet() const
{
    return failureStatusIsSet_;
}

void FailureJobParams::unsetfailureStatus()
{
    failureStatusIsSet_ = false;
}

std::string FailureJobParams::getResourceId() const
{
    return resourceId_;
}

void FailureJobParams::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool FailureJobParams::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void FailureJobParams::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string FailureJobParams::getResourceName() const
{
    return resourceName_;
}

void FailureJobParams::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool FailureJobParams::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void FailureJobParams::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string FailureJobParams::getErrorCode() const
{
    return errorCode_;
}

void FailureJobParams::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool FailureJobParams::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void FailureJobParams::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string FailureJobParams::getFailReason() const
{
    return failReason_;
}

void FailureJobParams::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool FailureJobParams::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void FailureJobParams::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string FailureJobParams::getResourceType() const
{
    return resourceType_;
}

void FailureJobParams::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool FailureJobParams::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void FailureJobParams::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}



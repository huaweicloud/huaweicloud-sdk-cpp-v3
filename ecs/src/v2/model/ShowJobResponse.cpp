

#include "huaweicloud/ecs/v2/model/ShowJobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowJobResponse::ShowJobResponse()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    entitiesIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobResponse::~ShowJobResponse() = default;

void ShowJobResponse::validate()
{
}

web::json::value ShowJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool ShowJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            JobEntities refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    return ok;
}


std::string ShowJobResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowJobResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowJobResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowJobResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowJobResponse::getCode() const
{
    return code_;
}

void ShowJobResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowJobResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowJobResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ShowJobResponse::getEndTime() const
{
    return endTime_;
}

void ShowJobResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowJobResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowJobResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

JobEntities ShowJobResponse::getEntities() const
{
    return entities_;
}

void ShowJobResponse::setEntities(const JobEntities& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ShowJobResponse::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ShowJobResponse::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string ShowJobResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowJobResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowJobResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowJobResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowJobResponse::getFailReason() const
{
    return failReason_;
}

void ShowJobResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ShowJobResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ShowJobResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string ShowJobResponse::getJobId() const
{
    return jobId_;
}

void ShowJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobResponse::getJobType() const
{
    return jobType_;
}

void ShowJobResponse::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowJobResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowJobResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowJobResponse::getMessage() const
{
    return message_;
}

void ShowJobResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowJobResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowJobResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowJobResponse::getStatus() const
{
    return status_;
}

void ShowJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



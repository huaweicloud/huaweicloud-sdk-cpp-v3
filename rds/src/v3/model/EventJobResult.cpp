

#include "huaweicloud/rds/v3/model/EventJobResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EventJobResult::EventJobResult()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

EventJobResult::~EventJobResult() = default;

void EventJobResult::validate()
{
}

web::json::value EventJobResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool EventJobResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::string EventJobResult::getId() const
{
    return id_;
}

void EventJobResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EventJobResult::idIsSet() const
{
    return idIsSet_;
}

void EventJobResult::unsetid()
{
    idIsSet_ = false;
}

std::string EventJobResult::getInstanceId() const
{
    return instanceId_;
}

void EventJobResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EventJobResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EventJobResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string EventJobResult::getJobId() const
{
    return jobId_;
}

void EventJobResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool EventJobResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void EventJobResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string EventJobResult::getErrorCode() const
{
    return errorCode_;
}

void EventJobResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool EventJobResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void EventJobResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string EventJobResult::getErrorMsg() const
{
    return errorMsg_;
}

void EventJobResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool EventJobResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void EventJobResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

bool EventJobResult::isSuccess() const
{
    return success_;
}

void EventJobResult::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool EventJobResult::successIsSet() const
{
    return successIsSet_;
}

void EventJobResult::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}



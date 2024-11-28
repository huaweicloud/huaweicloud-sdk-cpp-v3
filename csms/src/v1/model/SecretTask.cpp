

#include "huaweicloud/csms/v1/model/SecretTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




SecretTask::SecretTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    rotationFuncUrn_ = "";
    rotationFuncUrnIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    attemptNums_ = 0;
    attemptNumsIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    taskTime_ = 0L;
    taskTimeIsSet_ = false;
    taskErrorCode_ = "";
    taskErrorCodeIsSet_ = false;
    taskErrorMsg_ = "";
    taskErrorMsgIsSet_ = false;
}

SecretTask::~SecretTask() = default;

void SecretTask::validate()
{
}

web::json::value SecretTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(rotationFuncUrnIsSet_) {
        val[utility::conversions::to_string_t("rotation_func_urn")] = ModelBase::toJson(rotationFuncUrn_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(attemptNumsIsSet_) {
        val[utility::conversions::to_string_t("attempt_nums")] = ModelBase::toJson(attemptNums_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(taskTimeIsSet_) {
        val[utility::conversions::to_string_t("task_time")] = ModelBase::toJson(taskTime_);
    }
    if(taskErrorCodeIsSet_) {
        val[utility::conversions::to_string_t("task_error_code")] = ModelBase::toJson(taskErrorCode_);
    }
    if(taskErrorMsgIsSet_) {
        val[utility::conversions::to_string_t("task_error_msg")] = ModelBase::toJson(taskErrorMsg_);
    }

    return val;
}
bool SecretTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attempt_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attempt_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttemptNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskErrorMsg(refVal);
        }
    }
    return ok;
}


std::string SecretTask::getTaskId() const
{
    return taskId_;
}

void SecretTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SecretTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SecretTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SecretTask::getSecretName() const
{
    return secretName_;
}

void SecretTask::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool SecretTask::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void SecretTask::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string SecretTask::getRotationFuncUrn() const
{
    return rotationFuncUrn_;
}

void SecretTask::setRotationFuncUrn(const std::string& value)
{
    rotationFuncUrn_ = value;
    rotationFuncUrnIsSet_ = true;
}

bool SecretTask::rotationFuncUrnIsSet() const
{
    return rotationFuncUrnIsSet_;
}

void SecretTask::unsetrotationFuncUrn()
{
    rotationFuncUrnIsSet_ = false;
}

std::string SecretTask::getTaskStatus() const
{
    return taskStatus_;
}

void SecretTask::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool SecretTask::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void SecretTask::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

int32_t SecretTask::getAttemptNums() const
{
    return attemptNums_;
}

void SecretTask::setAttemptNums(int32_t value)
{
    attemptNums_ = value;
    attemptNumsIsSet_ = true;
}

bool SecretTask::attemptNumsIsSet() const
{
    return attemptNumsIsSet_;
}

void SecretTask::unsetattemptNums()
{
    attemptNumsIsSet_ = false;
}

std::string SecretTask::getOperateType() const
{
    return operateType_;
}

void SecretTask::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool SecretTask::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void SecretTask::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

int64_t SecretTask::getTaskTime() const
{
    return taskTime_;
}

void SecretTask::setTaskTime(int64_t value)
{
    taskTime_ = value;
    taskTimeIsSet_ = true;
}

bool SecretTask::taskTimeIsSet() const
{
    return taskTimeIsSet_;
}

void SecretTask::unsettaskTime()
{
    taskTimeIsSet_ = false;
}

std::string SecretTask::getTaskErrorCode() const
{
    return taskErrorCode_;
}

void SecretTask::setTaskErrorCode(const std::string& value)
{
    taskErrorCode_ = value;
    taskErrorCodeIsSet_ = true;
}

bool SecretTask::taskErrorCodeIsSet() const
{
    return taskErrorCodeIsSet_;
}

void SecretTask::unsettaskErrorCode()
{
    taskErrorCodeIsSet_ = false;
}

std::string SecretTask::getTaskErrorMsg() const
{
    return taskErrorMsg_;
}

void SecretTask::setTaskErrorMsg(const std::string& value)
{
    taskErrorMsg_ = value;
    taskErrorMsgIsSet_ = true;
}

bool SecretTask::taskErrorMsgIsSet() const
{
    return taskErrorMsgIsSet_;
}

void SecretTask::unsettaskErrorMsg()
{
    taskErrorMsgIsSet_ = false;
}

}
}
}
}
}



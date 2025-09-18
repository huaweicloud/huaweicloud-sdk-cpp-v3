

#include "huaweicloud/codeartsdeploy/v2/model/StateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StateInfo::StateInfo()
{
    status_ = "";
    statusIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    step_ = "";
    stepIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    stepStateIsSet_ = false;
}

StateInfo::~StateInfo() = default;

void StateInfo::validate()
{
}

web::json::value StateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(stepStateIsSet_) {
        val[utility::conversions::to_string_t("step_state")] = ModelBase::toJson(stepState_);
    }

    return val;
}
bool StateInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_state"));
        if(!fieldValue.is_null())
        {
            std::vector<StepInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepState(refVal);
        }
    }
    return ok;
}


std::string StateInfo::getStatus() const
{
    return status_;
}

void StateInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StateInfo::statusIsSet() const
{
    return statusIsSet_;
}

void StateInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StateInfo::getNickName() const
{
    return nickName_;
}

void StateInfo::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool StateInfo::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void StateInfo::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string StateInfo::getRecordId() const
{
    return recordId_;
}

void StateInfo::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool StateInfo::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void StateInfo::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string StateInfo::getTaskId() const
{
    return taskId_;
}

void StateInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StateInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StateInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string StateInfo::getStep() const
{
    return step_;
}

void StateInfo::setStep(const std::string& value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool StateInfo::stepIsSet() const
{
    return stepIsSet_;
}

void StateInfo::unsetstep()
{
    stepIsSet_ = false;
}

std::string StateInfo::getStartTime() const
{
    return startTime_;
}

void StateInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StateInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StateInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string StateInfo::getEndTime() const
{
    return endTime_;
}

void StateInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StateInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StateInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string StateInfo::getExecutor() const
{
    return executor_;
}

void StateInfo::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool StateInfo::executorIsSet() const
{
    return executorIsSet_;
}

void StateInfo::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string StateInfo::getTaskName() const
{
    return taskName_;
}

void StateInfo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool StateInfo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void StateInfo::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::vector<StepInfo>& StateInfo::getStepState()
{
    return stepState_;
}

void StateInfo::setStepState(const std::vector<StepInfo>& value)
{
    stepState_ = value;
    stepStateIsSet_ = true;
}

bool StateInfo::stepStateIsSet() const
{
    return stepStateIsSet_;
}

void StateInfo::unsetstepState()
{
    stepStateIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/mpc/v1/model/AnimatedGraphicsTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AnimatedGraphicsTask::AnimatedGraphicsTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    outputParamIsSet_ = false;
}

AnimatedGraphicsTask::~AnimatedGraphicsTask() = default;

void AnimatedGraphicsTask::validate()
{
}

web::json::value AnimatedGraphicsTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputParamIsSet_) {
        val[utility::conversions::to_string_t("output_param")] = ModelBase::toJson(outputParam_);
    }

    return val;
}
bool AnimatedGraphicsTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_param"));
        if(!fieldValue.is_null())
        {
            AnimatedGraphicsOutputParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParam(refVal);
        }
    }
    return ok;
}


std::string AnimatedGraphicsTask::getTaskId() const
{
    return taskId_;
}

void AnimatedGraphicsTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool AnimatedGraphicsTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void AnimatedGraphicsTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string AnimatedGraphicsTask::getStatus() const
{
    return status_;
}

void AnimatedGraphicsTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AnimatedGraphicsTask::statusIsSet() const
{
    return statusIsSet_;
}

void AnimatedGraphicsTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AnimatedGraphicsTask::getCreateTime() const
{
    return createTime_;
}

void AnimatedGraphicsTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AnimatedGraphicsTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AnimatedGraphicsTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AnimatedGraphicsTask::getStartTime() const
{
    return startTime_;
}

void AnimatedGraphicsTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AnimatedGraphicsTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AnimatedGraphicsTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AnimatedGraphicsTask::getEndTime() const
{
    return endTime_;
}

void AnimatedGraphicsTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AnimatedGraphicsTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AnimatedGraphicsTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string AnimatedGraphicsTask::getErrorCode() const
{
    return errorCode_;
}

void AnimatedGraphicsTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AnimatedGraphicsTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AnimatedGraphicsTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string AnimatedGraphicsTask::getDescription() const
{
    return description_;
}

void AnimatedGraphicsTask::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AnimatedGraphicsTask::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AnimatedGraphicsTask::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AnimatedGraphicsTask::getUserData() const
{
    return userData_;
}

void AnimatedGraphicsTask::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool AnimatedGraphicsTask::userDataIsSet() const
{
    return userDataIsSet_;
}

void AnimatedGraphicsTask::unsetuserData()
{
    userDataIsSet_ = false;
}

ObsObjInfo AnimatedGraphicsTask::getInput() const
{
    return input_;
}

void AnimatedGraphicsTask::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool AnimatedGraphicsTask::inputIsSet() const
{
    return inputIsSet_;
}

void AnimatedGraphicsTask::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo AnimatedGraphicsTask::getOutput() const
{
    return output_;
}

void AnimatedGraphicsTask::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool AnimatedGraphicsTask::outputIsSet() const
{
    return outputIsSet_;
}

void AnimatedGraphicsTask::unsetoutput()
{
    outputIsSet_ = false;
}

AnimatedGraphicsOutputParam AnimatedGraphicsTask::getOutputParam() const
{
    return outputParam_;
}

void AnimatedGraphicsTask::setOutputParam(const AnimatedGraphicsOutputParam& value)
{
    outputParam_ = value;
    outputParamIsSet_ = true;
}

bool AnimatedGraphicsTask::outputParamIsSet() const
{
    return outputParamIsSet_;
}

void AnimatedGraphicsTask::unsetoutputParam()
{
    outputParamIsSet_ = false;
}

}
}
}
}
}



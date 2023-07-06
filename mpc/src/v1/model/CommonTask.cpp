

#include "huaweicloud/mpc/v1/model/CommonTask.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CommonTask::CommonTask()
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
}

CommonTask::~CommonTask() = default;

void CommonTask::validate()
{
}

web::json::value CommonTask::toJson() const
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

    return val;
}

bool CommonTask::fromJson(const web::json::value& val)
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
    return ok;
}

std::string CommonTask::getTaskId() const
{
    return taskId_;
}

void CommonTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CommonTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CommonTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CommonTask::getStatus() const
{
    return status_;
}

void CommonTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CommonTask::statusIsSet() const
{
    return statusIsSet_;
}

void CommonTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CommonTask::getCreateTime() const
{
    return createTime_;
}

void CommonTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CommonTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CommonTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CommonTask::getStartTime() const
{
    return startTime_;
}

void CommonTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CommonTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CommonTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CommonTask::getEndTime() const
{
    return endTime_;
}

void CommonTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CommonTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CommonTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CommonTask::getErrorCode() const
{
    return errorCode_;
}

void CommonTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CommonTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CommonTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CommonTask::getDescription() const
{
    return description_;
}

void CommonTask::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommonTask::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommonTask::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommonTask::getUserData() const
{
    return userData_;
}

void CommonTask::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CommonTask::userDataIsSet() const
{
    return userDataIsSet_;
}

void CommonTask::unsetuserData()
{
    userDataIsSet_ = false;
}

ObsObjInfo CommonTask::getInput() const
{
    return input_;
}

void CommonTask::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CommonTask::inputIsSet() const
{
    return inputIsSet_;
}

void CommonTask::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CommonTask::getOutput() const
{
    return output_;
}

void CommonTask::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CommonTask::outputIsSet() const
{
    return outputIsSet_;
}

void CommonTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}



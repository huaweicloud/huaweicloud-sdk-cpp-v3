

#include "huaweicloud/vod/v1/model/ShowTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTaskDetailResponse::ShowTaskDetailResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    workflowTaskIsSet_ = false;
    editMediaTaskIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
}

ShowTaskDetailResponse::~ShowTaskDetailResponse() = default;

void ShowTaskDetailResponse::validate()
{
}

web::json::value ShowTaskDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
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
    if(workflowTaskIsSet_) {
        val[utility::conversions::to_string_t("workflow_task")] = ModelBase::toJson(workflowTask_);
    }
    if(editMediaTaskIsSet_) {
        val[utility::conversions::to_string_t("edit_media_task")] = ModelBase::toJson(editMediaTask_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }

    return val;
}
bool ShowTaskDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workflow_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_task"));
        if(!fieldValue.is_null())
        {
            WorkflowTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edit_media_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_media_task"));
        if(!fieldValue.is_null())
        {
            EditMediaTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditMediaTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailResponse::getTaskId() const
{
    return taskId_;
}

void ShowTaskDetailResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDetailResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDetailResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTaskDetailResponse::getTaskType() const
{
    return taskType_;
}

void ShowTaskDetailResponse::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ShowTaskDetailResponse::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ShowTaskDetailResponse::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getStatus() const
{
    return status_;
}

void ShowTaskDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowTaskDetailResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowTaskDetailResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowTaskDetailResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowTaskDetailResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ShowTaskDetailResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ShowTaskDetailResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ShowTaskDetailResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowTaskDetailResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowTaskDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowTaskDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getStartTime() const
{
    return startTime_;
}

void ShowTaskDetailResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTaskDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTaskDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getEndTime() const
{
    return endTime_;
}

void ShowTaskDetailResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTaskDetailResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTaskDetailResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

WorkflowTask ShowTaskDetailResponse::getWorkflowTask() const
{
    return workflowTask_;
}

void ShowTaskDetailResponse::setWorkflowTask(const WorkflowTask& value)
{
    workflowTask_ = value;
    workflowTaskIsSet_ = true;
}

bool ShowTaskDetailResponse::workflowTaskIsSet() const
{
    return workflowTaskIsSet_;
}

void ShowTaskDetailResponse::unsetworkflowTask()
{
    workflowTaskIsSet_ = false;
}

EditMediaTask ShowTaskDetailResponse::getEditMediaTask() const
{
    return editMediaTask_;
}

void ShowTaskDetailResponse::setEditMediaTask(const EditMediaTask& value)
{
    editMediaTask_ = value;
    editMediaTaskIsSet_ = true;
}

bool ShowTaskDetailResponse::editMediaTaskIsSet() const
{
    return editMediaTaskIsSet_;
}

void ShowTaskDetailResponse::unseteditMediaTask()
{
    editMediaTaskIsSet_ = false;
}

std::string ShowTaskDetailResponse::getSessionContext() const
{
    return sessionContext_;
}

void ShowTaskDetailResponse::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool ShowTaskDetailResponse::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void ShowTaskDetailResponse::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCallbackUrl() const
{
    return callbackUrl_;
}

void ShowTaskDetailResponse::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool ShowTaskDetailResponse::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void ShowTaskDetailResponse::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

}
}
}
}
}



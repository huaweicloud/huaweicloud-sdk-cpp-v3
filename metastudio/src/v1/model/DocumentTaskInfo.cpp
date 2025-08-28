

#include "huaweicloud/metastudio/v1/model/DocumentTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DocumentTaskInfo::DocumentTaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    taskProcess_ = "";
    taskProcessIsSet_ = false;
    taskResult_ = "";
    taskResultIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

DocumentTaskInfo::~DocumentTaskInfo() = default;

void DocumentTaskInfo::validate()
{
}

web::json::value DocumentTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(taskProcessIsSet_) {
        val[utility::conversions::to_string_t("task_process")] = ModelBase::toJson(taskProcess_);
    }
    if(taskResultIsSet_) {
        val[utility::conversions::to_string_t("task_result")] = ModelBase::toJson(taskResult_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool DocumentTaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string DocumentTaskInfo::getTaskId() const
{
    return taskId_;
}

void DocumentTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DocumentTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DocumentTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string DocumentTaskInfo::getTaskStatus() const
{
    return taskStatus_;
}

void DocumentTaskInfo::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool DocumentTaskInfo::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void DocumentTaskInfo::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string DocumentTaskInfo::getTaskProcess() const
{
    return taskProcess_;
}

void DocumentTaskInfo::setTaskProcess(const std::string& value)
{
    taskProcess_ = value;
    taskProcessIsSet_ = true;
}

bool DocumentTaskInfo::taskProcessIsSet() const
{
    return taskProcessIsSet_;
}

void DocumentTaskInfo::unsettaskProcess()
{
    taskProcessIsSet_ = false;
}

std::string DocumentTaskInfo::getTaskResult() const
{
    return taskResult_;
}

void DocumentTaskInfo::setTaskResult(const std::string& value)
{
    taskResult_ = value;
    taskResultIsSet_ = true;
}

bool DocumentTaskInfo::taskResultIsSet() const
{
    return taskResultIsSet_;
}

void DocumentTaskInfo::unsettaskResult()
{
    taskResultIsSet_ = false;
}

std::string DocumentTaskInfo::getFailReason() const
{
    return failReason_;
}

void DocumentTaskInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool DocumentTaskInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void DocumentTaskInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string DocumentTaskInfo::getCreateTime() const
{
    return createTime_;
}

void DocumentTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DocumentTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DocumentTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DocumentTaskInfo::getBeginTime() const
{
    return beginTime_;
}

void DocumentTaskInfo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool DocumentTaskInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void DocumentTaskInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string DocumentTaskInfo::getEndTime() const
{
    return endTime_;
}

void DocumentTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DocumentTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DocumentTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DocumentTaskInfo::getUpdateTime() const
{
    return updateTime_;
}

void DocumentTaskInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DocumentTaskInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DocumentTaskInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



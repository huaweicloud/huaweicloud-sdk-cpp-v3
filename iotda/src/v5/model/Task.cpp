

#include "huaweicloud/iotda/v5/model/Task.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




Task::Task()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    taskMode_ = "";
    taskModeIsSet_ = false;
    taskExtInfoIsSet_ = false;
    targetsIsSet_ = false;
    targetsFilterIsSet_ = false;
    documentIsSet_ = false;
    taskPolicyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusDesc_ = "";
    statusDescIsSet_ = false;
    taskProgressIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

Task::~Task() = default;

void Task::validate()
{
}

web::json::value Task::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(taskModeIsSet_) {
        val[utility::conversions::to_string_t("task_mode")] = ModelBase::toJson(taskMode_);
    }
    if(taskExtInfoIsSet_) {
        val[utility::conversions::to_string_t("task_ext_info")] = ModelBase::toJson(taskExtInfo_);
    }
    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }
    if(targetsFilterIsSet_) {
        val[utility::conversions::to_string_t("targets_filter")] = ModelBase::toJson(targetsFilter_);
    }
    if(documentIsSet_) {
        val[utility::conversions::to_string_t("document")] = ModelBase::toJson(document_);
    }
    if(taskPolicyIsSet_) {
        val[utility::conversions::to_string_t("task_policy")] = ModelBase::toJson(taskPolicy_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusDescIsSet_) {
        val[utility::conversions::to_string_t("status_desc")] = ModelBase::toJson(statusDesc_);
    }
    if(taskProgressIsSet_) {
        val[utility::conversions::to_string_t("task_progress")] = ModelBase::toJson(taskProgress_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool Task::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ext_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ext_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskExtInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targets_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets_filter"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetsFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocument(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_policy"));
        if(!fieldValue.is_null())
        {
            TaskPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskPolicy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_progress"));
        if(!fieldValue.is_null())
        {
            TaskProgress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskProgress(refVal);
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
    return ok;
}


std::string Task::getTaskId() const
{
    return taskId_;
}

void Task::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool Task::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void Task::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string Task::getTaskName() const
{
    return taskName_;
}

void Task::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool Task::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void Task::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string Task::getTaskType() const
{
    return taskType_;
}

void Task::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool Task::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void Task::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string Task::getTaskMode() const
{
    return taskMode_;
}

void Task::setTaskMode(const std::string& value)
{
    taskMode_ = value;
    taskModeIsSet_ = true;
}

bool Task::taskModeIsSet() const
{
    return taskModeIsSet_;
}

void Task::unsettaskMode()
{
    taskModeIsSet_ = false;
}

Object Task::getTaskExtInfo() const
{
    return taskExtInfo_;
}

void Task::setTaskExtInfo(const Object& value)
{
    taskExtInfo_ = value;
    taskExtInfoIsSet_ = true;
}

bool Task::taskExtInfoIsSet() const
{
    return taskExtInfoIsSet_;
}

void Task::unsettaskExtInfo()
{
    taskExtInfoIsSet_ = false;
}

std::vector<std::string>& Task::getTargets()
{
    return targets_;
}

void Task::setTargets(const std::vector<std::string>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool Task::targetsIsSet() const
{
    return targetsIsSet_;
}

void Task::unsettargets()
{
    targetsIsSet_ = false;
}

std::map<std::string, Object>& Task::getTargetsFilter()
{
    return targetsFilter_;
}

void Task::setTargetsFilter(const std::map<std::string, Object>& value)
{
    targetsFilter_ = value;
    targetsFilterIsSet_ = true;
}

bool Task::targetsFilterIsSet() const
{
    return targetsFilterIsSet_;
}

void Task::unsettargetsFilter()
{
    targetsFilterIsSet_ = false;
}

Object Task::getDocument() const
{
    return document_;
}

void Task::setDocument(const Object& value)
{
    document_ = value;
    documentIsSet_ = true;
}

bool Task::documentIsSet() const
{
    return documentIsSet_;
}

void Task::unsetdocument()
{
    documentIsSet_ = false;
}

TaskPolicy Task::getTaskPolicy() const
{
    return taskPolicy_;
}

void Task::setTaskPolicy(const TaskPolicy& value)
{
    taskPolicy_ = value;
    taskPolicyIsSet_ = true;
}

bool Task::taskPolicyIsSet() const
{
    return taskPolicyIsSet_;
}

void Task::unsettaskPolicy()
{
    taskPolicyIsSet_ = false;
}

std::string Task::getStatus() const
{
    return status_;
}

void Task::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Task::statusIsSet() const
{
    return statusIsSet_;
}

void Task::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Task::getStatusDesc() const
{
    return statusDesc_;
}

void Task::setStatusDesc(const std::string& value)
{
    statusDesc_ = value;
    statusDescIsSet_ = true;
}

bool Task::statusDescIsSet() const
{
    return statusDescIsSet_;
}

void Task::unsetstatusDesc()
{
    statusDescIsSet_ = false;
}

TaskProgress Task::getTaskProgress() const
{
    return taskProgress_;
}

void Task::setTaskProgress(const TaskProgress& value)
{
    taskProgress_ = value;
    taskProgressIsSet_ = true;
}

bool Task::taskProgressIsSet() const
{
    return taskProgressIsSet_;
}

void Task::unsettaskProgress()
{
    taskProgressIsSet_ = false;
}

std::string Task::getCreateTime() const
{
    return createTime_;
}

void Task::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Task::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Task::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}



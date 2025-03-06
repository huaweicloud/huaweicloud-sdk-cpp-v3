

#include "huaweicloud/gaussdbforopengauss/v3/model/ScheduleTaskDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ScheduleTaskDetail::ScheduleTaskDetail()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    taskContentIsSet_ = false;
}

ScheduleTaskDetail::~ScheduleTaskDetail() = default;

void ScheduleTaskDetail::validate()
{
}

web::json::value ScheduleTaskDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
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
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(taskContentIsSet_) {
        val[utility::conversions::to_string_t("task_content")] = ModelBase::toJson(taskContent_);
    }

    return val;
}
bool ScheduleTaskDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_content"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskContent(refVal);
        }
    }
    return ok;
}


std::string ScheduleTaskDetail::getTaskId() const
{
    return taskId_;
}

void ScheduleTaskDetail::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ScheduleTaskDetail::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ScheduleTaskDetail::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ScheduleTaskDetail::getTaskName() const
{
    return taskName_;
}

void ScheduleTaskDetail::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ScheduleTaskDetail::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ScheduleTaskDetail::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ScheduleTaskDetail::getStatus() const
{
    return status_;
}

void ScheduleTaskDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ScheduleTaskDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ScheduleTaskDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ScheduleTaskDetail::getCreateTime() const
{
    return createTime_;
}

void ScheduleTaskDetail::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduleTaskDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduleTaskDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduleTaskDetail::getStartTime() const
{
    return startTime_;
}

void ScheduleTaskDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleTaskDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleTaskDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleTaskDetail::getInstanceId() const
{
    return instanceId_;
}

void ScheduleTaskDetail::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleTaskDetail::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleTaskDetail::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleTaskDetail::getInstanceName() const
{
    return instanceName_;
}

void ScheduleTaskDetail::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleTaskDetail::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleTaskDetail::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

Object ScheduleTaskDetail::getTaskContent() const
{
    return taskContent_;
}

void ScheduleTaskDetail::setTaskContent(const Object& value)
{
    taskContent_ = value;
    taskContentIsSet_ = true;
}

bool ScheduleTaskDetail::taskContentIsSet() const
{
    return taskContentIsSet_;
}

void ScheduleTaskDetail::unsettaskContent()
{
    taskContentIsSet_ = false;
}

}
}
}
}
}



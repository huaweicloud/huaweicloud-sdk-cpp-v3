

#include "huaweicloud/iotdm/v5/model/InstanceTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




InstanceTask::InstanceTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusDetail_ = "";
    statusDetailIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    targetConfigIsSet_ = false;
    operateWindowIsSet_ = false;
}

InstanceTask::~InstanceTask() = default;

void InstanceTask::validate()
{
}

web::json::value InstanceTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusDetailIsSet_) {
        val[utility::conversions::to_string_t("status_detail")] = ModelBase::toJson(statusDetail_);
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
    if(targetConfigIsSet_) {
        val[utility::conversions::to_string_t("target_config")] = ModelBase::toJson(targetConfig_);
    }
    if(operateWindowIsSet_) {
        val[utility::conversions::to_string_t("operate_window")] = ModelBase::toJson(operateWindow_);
    }

    return val;
}
bool InstanceTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDetail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_config"));
        if(!fieldValue.is_null())
        {
            TargetConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_window"));
        if(!fieldValue.is_null())
        {
            OperateWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateWindow(refVal);
        }
    }
    return ok;
}


std::string InstanceTask::getTaskId() const
{
    return taskId_;
}

void InstanceTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool InstanceTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void InstanceTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string InstanceTask::getType() const
{
    return type_;
}

void InstanceTask::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceTask::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceTask::unsettype()
{
    typeIsSet_ = false;
}

std::string InstanceTask::getStatus() const
{
    return status_;
}

void InstanceTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceTask::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceTask::getStatusDetail() const
{
    return statusDetail_;
}

void InstanceTask::setStatusDetail(const std::string& value)
{
    statusDetail_ = value;
    statusDetailIsSet_ = true;
}

bool InstanceTask::statusDetailIsSet() const
{
    return statusDetailIsSet_;
}

void InstanceTask::unsetstatusDetail()
{
    statusDetailIsSet_ = false;
}

std::string InstanceTask::getCreateTime() const
{
    return createTime_;
}

void InstanceTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InstanceTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InstanceTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InstanceTask::getStartTime() const
{
    return startTime_;
}

void InstanceTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool InstanceTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void InstanceTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string InstanceTask::getEndTime() const
{
    return endTime_;
}

void InstanceTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool InstanceTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void InstanceTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

TargetConfig InstanceTask::getTargetConfig() const
{
    return targetConfig_;
}

void InstanceTask::setTargetConfig(const TargetConfig& value)
{
    targetConfig_ = value;
    targetConfigIsSet_ = true;
}

bool InstanceTask::targetConfigIsSet() const
{
    return targetConfigIsSet_;
}

void InstanceTask::unsettargetConfig()
{
    targetConfigIsSet_ = false;
}

OperateWindow InstanceTask::getOperateWindow() const
{
    return operateWindow_;
}

void InstanceTask::setOperateWindow(const OperateWindow& value)
{
    operateWindow_ = value;
    operateWindowIsSet_ = true;
}

bool InstanceTask::operateWindowIsSet() const
{
    return operateWindowIsSet_;
}

void InstanceTask::unsetoperateWindow()
{
    operateWindowIsSet_ = false;
}

}
}
}
}
}



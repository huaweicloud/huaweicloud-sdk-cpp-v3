

#include "huaweicloud/gaussdb/v3/model/ScheduledTaskV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScheduledTaskV3::ScheduledTaskV3()
{
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    proxyName_ = "";
    proxyNameIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    targetConfigIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskOrder_ = 0;
    taskOrderIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
}

ScheduledTaskV3::~ScheduledTaskV3() = default;

void ScheduledTaskV3::validate()
{
}

web::json::value ScheduledTaskV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(targetConfigIsSet_) {
        val[utility::conversions::to_string_t("target_config")] = ModelBase::toJson(targetConfig_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskOrderIsSet_) {
        val[utility::conversions::to_string_t("task_order")] = ModelBase::toJson(taskOrder_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }

    return val;
}
bool ScheduledTaskV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_config"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskOrder(refVal);
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
    return ok;
}


utility::datetime ScheduledTaskV3::getCreateTime() const
{
    return createTime_;
}

void ScheduledTaskV3::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduledTaskV3::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduledTaskV3::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduledTaskV3::getDatastoreType() const
{
    return datastoreType_;
}

void ScheduledTaskV3::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ScheduledTaskV3::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ScheduledTaskV3::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

utility::datetime ScheduledTaskV3::getEndTime() const
{
    return endTime_;
}

void ScheduledTaskV3::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduledTaskV3::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduledTaskV3::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ScheduledTaskV3::getInstanceId() const
{
    return instanceId_;
}

void ScheduledTaskV3::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduledTaskV3::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduledTaskV3::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduledTaskV3::getInstanceName() const
{
    return instanceName_;
}

void ScheduledTaskV3::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduledTaskV3::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduledTaskV3::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduledTaskV3::getInstanceStatus() const
{
    return instanceStatus_;
}

void ScheduledTaskV3::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ScheduledTaskV3::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ScheduledTaskV3::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ScheduledTaskV3::getProjectId() const
{
    return projectId_;
}

void ScheduledTaskV3::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ScheduledTaskV3::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ScheduledTaskV3::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ScheduledTaskV3::getProxyId() const
{
    return proxyId_;
}

void ScheduledTaskV3::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ScheduledTaskV3::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ScheduledTaskV3::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ScheduledTaskV3::getProxyName() const
{
    return proxyName_;
}

void ScheduledTaskV3::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool ScheduledTaskV3::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void ScheduledTaskV3::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

utility::datetime ScheduledTaskV3::getStartTime() const
{
    return startTime_;
}

void ScheduledTaskV3::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduledTaskV3::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduledTaskV3::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::map<std::string, std::string>& ScheduledTaskV3::getTargetConfig()
{
    return targetConfig_;
}

void ScheduledTaskV3::setTargetConfig(const std::map<std::string, std::string>& value)
{
    targetConfig_ = value;
    targetConfigIsSet_ = true;
}

bool ScheduledTaskV3::targetConfigIsSet() const
{
    return targetConfigIsSet_;
}

void ScheduledTaskV3::unsettargetConfig()
{
    targetConfigIsSet_ = false;
}

std::string ScheduledTaskV3::getTaskId() const
{
    return taskId_;
}

void ScheduledTaskV3::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ScheduledTaskV3::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ScheduledTaskV3::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ScheduledTaskV3::getTaskName() const
{
    return taskName_;
}

void ScheduledTaskV3::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ScheduledTaskV3::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ScheduledTaskV3::unsettaskName()
{
    taskNameIsSet_ = false;
}

int32_t ScheduledTaskV3::getTaskOrder() const
{
    return taskOrder_;
}

void ScheduledTaskV3::setTaskOrder(int32_t value)
{
    taskOrder_ = value;
    taskOrderIsSet_ = true;
}

bool ScheduledTaskV3::taskOrderIsSet() const
{
    return taskOrderIsSet_;
}

void ScheduledTaskV3::unsettaskOrder()
{
    taskOrderIsSet_ = false;
}

std::string ScheduledTaskV3::getTaskStatus() const
{
    return taskStatus_;
}

void ScheduledTaskV3::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ScheduledTaskV3::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ScheduledTaskV3::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

}
}
}
}
}



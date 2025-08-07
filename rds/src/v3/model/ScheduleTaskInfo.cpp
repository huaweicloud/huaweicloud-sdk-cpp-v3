

#include "huaweicloud/rds/v3/model/ScheduleTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ScheduleTaskInfo::ScheduleTaskInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    targetConfigIsSet_ = false;
}

ScheduleTaskInfo::~ScheduleTaskInfo() = default;

void ScheduleTaskInfo::validate()
{
}

web::json::value ScheduleTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(targetConfigIsSet_) {
        val[utility::conversions::to_string_t("target_config")] = ModelBase::toJson(targetConfig_);
    }

    return val;
}
bool ScheduleTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
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
    return ok;
}


std::string ScheduleTaskInfo::getId() const
{
    return id_;
}

void ScheduleTaskInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScheduleTaskInfo::idIsSet() const
{
    return idIsSet_;
}

void ScheduleTaskInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ScheduleTaskInfo::getName() const
{
    return name_;
}

void ScheduleTaskInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScheduleTaskInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ScheduleTaskInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ScheduleTaskInfo::getInstanceId() const
{
    return instanceId_;
}

void ScheduleTaskInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleTaskInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleTaskInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleTaskInfo::getInstanceName() const
{
    return instanceName_;
}

void ScheduleTaskInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleTaskInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleTaskInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduleTaskInfo::getInstanceStatus() const
{
    return instanceStatus_;
}

void ScheduleTaskInfo::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ScheduleTaskInfo::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ScheduleTaskInfo::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ScheduleTaskInfo::getProjectId() const
{
    return projectId_;
}

void ScheduleTaskInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ScheduleTaskInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ScheduleTaskInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ScheduleTaskInfo::getCreateTime() const
{
    return createTime_;
}

void ScheduleTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduleTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduleTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduleTaskInfo::getStartTime() const
{
    return startTime_;
}

void ScheduleTaskInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleTaskInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleTaskInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleTaskInfo::getEndTime() const
{
    return endTime_;
}

void ScheduleTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ScheduleTaskInfo::getOrder() const
{
    return order_;
}

void ScheduleTaskInfo::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ScheduleTaskInfo::orderIsSet() const
{
    return orderIsSet_;
}

void ScheduleTaskInfo::unsetorder()
{
    orderIsSet_ = false;
}

std::string ScheduleTaskInfo::getStatus() const
{
    return status_;
}

void ScheduleTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ScheduleTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ScheduleTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ScheduleTaskInfo::getDatastoreType() const
{
    return datastoreType_;
}

void ScheduleTaskInfo::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ScheduleTaskInfo::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ScheduleTaskInfo::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ScheduleTaskInfo::getVolumeType() const
{
    return volumeType_;
}

void ScheduleTaskInfo::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool ScheduleTaskInfo::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void ScheduleTaskInfo::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

TargetConfig ScheduleTaskInfo::getTargetConfig() const
{
    return targetConfig_;
}

void ScheduleTaskInfo::setTargetConfig(const TargetConfig& value)
{
    targetConfig_ = value;
    targetConfigIsSet_ = true;
}

bool ScheduleTaskInfo::targetConfigIsSet() const
{
    return targetConfigIsSet_;
}

void ScheduleTaskInfo::unsettargetConfig()
{
    targetConfigIsSet_ = false;
}

}
}
}
}
}



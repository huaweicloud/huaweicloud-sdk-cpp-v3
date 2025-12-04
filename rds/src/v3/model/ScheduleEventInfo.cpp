

#include "huaweicloud/rds/v3/model/ScheduleEventInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ScheduleEventInfo::ScheduleEventInfo()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    impact_ = "";
    impactIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    executeTime_ = "";
    executeTimeIsSet_ = false;
    latestExecutionTime_ = "";
    latestExecutionTimeIsSet_ = false;
}

ScheduleEventInfo::~ScheduleEventInfo() = default;

void ScheduleEventInfo::validate()
{
}

web::json::value ScheduleEventInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(impactIsSet_) {
        val[utility::conversions::to_string_t("impact")] = ModelBase::toJson(impact_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(executeTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_time")] = ModelBase::toJson(executeTime_);
    }
    if(latestExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("latest_execution_time")] = ModelBase::toJson(latestExecutionTime_);
    }

    return val;
}
bool ScheduleEventInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("impact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("impact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImpact(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_execution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestExecutionTime(refVal);
        }
    }
    return ok;
}


std::string ScheduleEventInfo::getId() const
{
    return id_;
}

void ScheduleEventInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScheduleEventInfo::idIsSet() const
{
    return idIsSet_;
}

void ScheduleEventInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ScheduleEventInfo::getInstanceId() const
{
    return instanceId_;
}

void ScheduleEventInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleEventInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleEventInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleEventInfo::getInstanceName() const
{
    return instanceName_;
}

void ScheduleEventInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleEventInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleEventInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduleEventInfo::getDbType() const
{
    return dbType_;
}

void ScheduleEventInfo::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ScheduleEventInfo::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ScheduleEventInfo::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string ScheduleEventInfo::getCreatedTime() const
{
    return createdTime_;
}

void ScheduleEventInfo::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ScheduleEventInfo::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ScheduleEventInfo::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ScheduleEventInfo::getUpdateTime() const
{
    return updateTime_;
}

void ScheduleEventInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ScheduleEventInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ScheduleEventInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ScheduleEventInfo::getType() const
{
    return type_;
}

void ScheduleEventInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduleEventInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduleEventInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ScheduleEventInfo::getImpact() const
{
    return impact_;
}

void ScheduleEventInfo::setImpact(const std::string& value)
{
    impact_ = value;
    impactIsSet_ = true;
}

bool ScheduleEventInfo::impactIsSet() const
{
    return impactIsSet_;
}

void ScheduleEventInfo::unsetimpact()
{
    impactIsSet_ = false;
}

std::string ScheduleEventInfo::getStatus() const
{
    return status_;
}

void ScheduleEventInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ScheduleEventInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ScheduleEventInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ScheduleEventInfo::getReason() const
{
    return reason_;
}

void ScheduleEventInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ScheduleEventInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ScheduleEventInfo::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ScheduleEventInfo::getLevel() const
{
    return level_;
}

void ScheduleEventInfo::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ScheduleEventInfo::levelIsSet() const
{
    return levelIsSet_;
}

void ScheduleEventInfo::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ScheduleEventInfo::getExecuteTime() const
{
    return executeTime_;
}

void ScheduleEventInfo::setExecuteTime(const std::string& value)
{
    executeTime_ = value;
    executeTimeIsSet_ = true;
}

bool ScheduleEventInfo::executeTimeIsSet() const
{
    return executeTimeIsSet_;
}

void ScheduleEventInfo::unsetexecuteTime()
{
    executeTimeIsSet_ = false;
}

std::string ScheduleEventInfo::getLatestExecutionTime() const
{
    return latestExecutionTime_;
}

void ScheduleEventInfo::setLatestExecutionTime(const std::string& value)
{
    latestExecutionTime_ = value;
    latestExecutionTimeIsSet_ = true;
}

bool ScheduleEventInfo::latestExecutionTimeIsSet() const
{
    return latestExecutionTimeIsSet_;
}

void ScheduleEventInfo::unsetlatestExecutionTime()
{
    latestExecutionTimeIsSet_ = false;
}

}
}
}
}
}



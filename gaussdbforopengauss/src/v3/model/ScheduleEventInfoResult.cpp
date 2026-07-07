

#include "huaweicloud/gaussdbforopengauss/v3/model/ScheduleEventInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ScheduleEventInfoResult::ScheduleEventInfoResult()
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
    executionTimeWindowIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    executeTime_ = "";
    executeTimeIsSet_ = false;
    latestExecutionTime_ = "";
    latestExecutionTimeIsSet_ = false;
}

ScheduleEventInfoResult::~ScheduleEventInfoResult() = default;

void ScheduleEventInfoResult::validate()
{
}

web::json::value ScheduleEventInfoResult::toJson() const
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
    if(executionTimeWindowIsSet_) {
        val[utility::conversions::to_string_t("execution_time_window")] = ModelBase::toJson(executionTimeWindow_);
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
bool ScheduleEventInfoResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("execution_time_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time_window"));
        if(!fieldValue.is_null())
        {
            ExecuteWindowResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTimeWindow(refVal);
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


std::string ScheduleEventInfoResult::getId() const
{
    return id_;
}

void ScheduleEventInfoResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScheduleEventInfoResult::idIsSet() const
{
    return idIsSet_;
}

void ScheduleEventInfoResult::unsetid()
{
    idIsSet_ = false;
}

std::string ScheduleEventInfoResult::getInstanceId() const
{
    return instanceId_;
}

void ScheduleEventInfoResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleEventInfoResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleEventInfoResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleEventInfoResult::getInstanceName() const
{
    return instanceName_;
}

void ScheduleEventInfoResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleEventInfoResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleEventInfoResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduleEventInfoResult::getDbType() const
{
    return dbType_;
}

void ScheduleEventInfoResult::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ScheduleEventInfoResult::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ScheduleEventInfoResult::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string ScheduleEventInfoResult::getCreatedTime() const
{
    return createdTime_;
}

void ScheduleEventInfoResult::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ScheduleEventInfoResult::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ScheduleEventInfoResult::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ScheduleEventInfoResult::getUpdateTime() const
{
    return updateTime_;
}

void ScheduleEventInfoResult::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ScheduleEventInfoResult::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ScheduleEventInfoResult::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ScheduleEventInfoResult::getType() const
{
    return type_;
}

void ScheduleEventInfoResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduleEventInfoResult::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduleEventInfoResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ScheduleEventInfoResult::getImpact() const
{
    return impact_;
}

void ScheduleEventInfoResult::setImpact(const std::string& value)
{
    impact_ = value;
    impactIsSet_ = true;
}

bool ScheduleEventInfoResult::impactIsSet() const
{
    return impactIsSet_;
}

void ScheduleEventInfoResult::unsetimpact()
{
    impactIsSet_ = false;
}

std::string ScheduleEventInfoResult::getStatus() const
{
    return status_;
}

void ScheduleEventInfoResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ScheduleEventInfoResult::statusIsSet() const
{
    return statusIsSet_;
}

void ScheduleEventInfoResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ScheduleEventInfoResult::getReason() const
{
    return reason_;
}

void ScheduleEventInfoResult::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ScheduleEventInfoResult::reasonIsSet() const
{
    return reasonIsSet_;
}

void ScheduleEventInfoResult::unsetreason()
{
    reasonIsSet_ = false;
}

ExecuteWindowResult ScheduleEventInfoResult::getExecutionTimeWindow() const
{
    return executionTimeWindow_;
}

void ScheduleEventInfoResult::setExecutionTimeWindow(const ExecuteWindowResult& value)
{
    executionTimeWindow_ = value;
    executionTimeWindowIsSet_ = true;
}

bool ScheduleEventInfoResult::executionTimeWindowIsSet() const
{
    return executionTimeWindowIsSet_;
}

void ScheduleEventInfoResult::unsetexecutionTimeWindow()
{
    executionTimeWindowIsSet_ = false;
}

std::string ScheduleEventInfoResult::getLevel() const
{
    return level_;
}

void ScheduleEventInfoResult::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ScheduleEventInfoResult::levelIsSet() const
{
    return levelIsSet_;
}

void ScheduleEventInfoResult::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ScheduleEventInfoResult::getExecuteTime() const
{
    return executeTime_;
}

void ScheduleEventInfoResult::setExecuteTime(const std::string& value)
{
    executeTime_ = value;
    executeTimeIsSet_ = true;
}

bool ScheduleEventInfoResult::executeTimeIsSet() const
{
    return executeTimeIsSet_;
}

void ScheduleEventInfoResult::unsetexecuteTime()
{
    executeTimeIsSet_ = false;
}

std::string ScheduleEventInfoResult::getLatestExecutionTime() const
{
    return latestExecutionTime_;
}

void ScheduleEventInfoResult::setLatestExecutionTime(const std::string& value)
{
    latestExecutionTime_ = value;
    latestExecutionTimeIsSet_ = true;
}

bool ScheduleEventInfoResult::latestExecutionTimeIsSet() const
{
    return latestExecutionTimeIsSet_;
}

void ScheduleEventInfoResult::unsetlatestExecutionTime()
{
    latestExecutionTimeIsSet_ = false;
}

}
}
}
}
}



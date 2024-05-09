

#include "huaweicloud/gaussdb/v3/model/DbConfigCheckRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DbConfigCheckRequestV3::DbConfigCheckRequestV3()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    dbConfigsIsSet_ = false;
    tableReplConfigIsSet_ = false;
}

DbConfigCheckRequestV3::~DbConfigCheckRequestV3() = default;

void DbConfigCheckRequestV3::validate()
{
}

web::json::value DbConfigCheckRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceNodeIdIsSet_) {
        val[utility::conversions::to_string_t("source_node_id")] = ModelBase::toJson(sourceNodeId_);
    }
    if(sourceDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("source_database_name")] = ModelBase::toJson(sourceDatabaseName_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(dbConfigsIsSet_) {
        val[utility::conversions::to_string_t("db_configs")] = ModelBase::toJson(dbConfigs_);
    }
    if(tableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("table_repl_config")] = ModelBase::toJson(tableReplConfig_);
    }

    return val;
}
bool DbConfigCheckRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDatabaseName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<DbConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_repl_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_repl_config"));
        if(!fieldValue.is_null())
        {
            TableReplConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableReplConfig(refVal);
        }
    }
    return ok;
}


std::string DbConfigCheckRequestV3::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void DbConfigCheckRequestV3::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool DbConfigCheckRequestV3::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void DbConfigCheckRequestV3::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string DbConfigCheckRequestV3::getSourceNodeId() const
{
    return sourceNodeId_;
}

void DbConfigCheckRequestV3::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool DbConfigCheckRequestV3::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void DbConfigCheckRequestV3::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string DbConfigCheckRequestV3::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void DbConfigCheckRequestV3::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool DbConfigCheckRequestV3::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void DbConfigCheckRequestV3::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::string DbConfigCheckRequestV3::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void DbConfigCheckRequestV3::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool DbConfigCheckRequestV3::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void DbConfigCheckRequestV3::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

std::string DbConfigCheckRequestV3::getTaskName() const
{
    return taskName_;
}

void DbConfigCheckRequestV3::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool DbConfigCheckRequestV3::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void DbConfigCheckRequestV3::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::vector<DbConfig>& DbConfigCheckRequestV3::getDbConfigs()
{
    return dbConfigs_;
}

void DbConfigCheckRequestV3::setDbConfigs(const std::vector<DbConfig>& value)
{
    dbConfigs_ = value;
    dbConfigsIsSet_ = true;
}

bool DbConfigCheckRequestV3::dbConfigsIsSet() const
{
    return dbConfigsIsSet_;
}

void DbConfigCheckRequestV3::unsetdbConfigs()
{
    dbConfigsIsSet_ = false;
}

TableReplConfig DbConfigCheckRequestV3::getTableReplConfig() const
{
    return tableReplConfig_;
}

void DbConfigCheckRequestV3::setTableReplConfig(const TableReplConfig& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool DbConfigCheckRequestV3::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void DbConfigCheckRequestV3::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

}
}
}
}
}



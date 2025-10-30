

#include "huaweicloud/gaussdb/v3/model/ModifyDataSyncConfigRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyDataSyncConfigRequestV3::ModifyDataSyncConfigRequestV3()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    dbConfigsIsSet_ = false;
    tablesConfigsIsSet_ = false;
    tableReplConfigIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    isInstanceLevelSync_ = "";
    isInstanceLevelSyncIsSet_ = false;
    databaseReplScope_ = "";
    databaseReplScopeIsSet_ = false;
    isSupportRegExp_ = "";
    isSupportRegExpIsSet_ = false;
}

ModifyDataSyncConfigRequestV3::~ModifyDataSyncConfigRequestV3() = default;

void ModifyDataSyncConfigRequestV3::validate()
{
}

web::json::value ModifyDataSyncConfigRequestV3::toJson() const
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
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(dbConfigsIsSet_) {
        val[utility::conversions::to_string_t("db_configs")] = ModelBase::toJson(dbConfigs_);
    }
    if(tablesConfigsIsSet_) {
        val[utility::conversions::to_string_t("tables_configs")] = ModelBase::toJson(tablesConfigs_);
    }
    if(tableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("table_repl_config")] = ModelBase::toJson(tableReplConfig_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(isInstanceLevelSyncIsSet_) {
        val[utility::conversions::to_string_t("is_instance_level_sync")] = ModelBase::toJson(isInstanceLevelSync_);
    }
    if(databaseReplScopeIsSet_) {
        val[utility::conversions::to_string_t("database_repl_scope")] = ModelBase::toJson(databaseReplScope_);
    }
    if(isSupportRegExpIsSet_) {
        val[utility::conversions::to_string_t("is_support_reg_exp")] = ModelBase::toJson(isSupportRegExp_);
    }

    return val;
}
bool ModifyDataSyncConfigRequestV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tables_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<TablesConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTablesConfigs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_instance_level_sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_instance_level_sync"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsInstanceLevelSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_repl_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_repl_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseReplScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_reg_exp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_reg_exp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportRegExp(refVal);
        }
    }
    return ok;
}


std::string ModifyDataSyncConfigRequestV3::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ModifyDataSyncConfigRequestV3::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getSourceNodeId() const
{
    return sourceNodeId_;
}

void ModifyDataSyncConfigRequestV3::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void ModifyDataSyncConfigRequestV3::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getTaskName() const
{
    return taskName_;
}

void ModifyDataSyncConfigRequestV3::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::vector<DbConfig>& ModifyDataSyncConfigRequestV3::getDbConfigs()
{
    return dbConfigs_;
}

void ModifyDataSyncConfigRequestV3::setDbConfigs(const std::vector<DbConfig>& value)
{
    dbConfigs_ = value;
    dbConfigsIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::dbConfigsIsSet() const
{
    return dbConfigsIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetdbConfigs()
{
    dbConfigsIsSet_ = false;
}

std::vector<TablesConfig>& ModifyDataSyncConfigRequestV3::getTablesConfigs()
{
    return tablesConfigs_;
}

void ModifyDataSyncConfigRequestV3::setTablesConfigs(const std::vector<TablesConfig>& value)
{
    tablesConfigs_ = value;
    tablesConfigsIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::tablesConfigsIsSet() const
{
    return tablesConfigsIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsettablesConfigs()
{
    tablesConfigsIsSet_ = false;
}

TableReplConfig ModifyDataSyncConfigRequestV3::getTableReplConfig() const
{
    return tableReplConfig_;
}

void ModifyDataSyncConfigRequestV3::setTableReplConfig(const TableReplConfig& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void ModifyDataSyncConfigRequestV3::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getIsInstanceLevelSync() const
{
    return isInstanceLevelSync_;
}

void ModifyDataSyncConfigRequestV3::setIsInstanceLevelSync(const std::string& value)
{
    isInstanceLevelSync_ = value;
    isInstanceLevelSyncIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::isInstanceLevelSyncIsSet() const
{
    return isInstanceLevelSyncIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetisInstanceLevelSync()
{
    isInstanceLevelSyncIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getDatabaseReplScope() const
{
    return databaseReplScope_;
}

void ModifyDataSyncConfigRequestV3::setDatabaseReplScope(const std::string& value)
{
    databaseReplScope_ = value;
    databaseReplScopeIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::databaseReplScopeIsSet() const
{
    return databaseReplScopeIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetdatabaseReplScope()
{
    databaseReplScopeIsSet_ = false;
}

std::string ModifyDataSyncConfigRequestV3::getIsSupportRegExp() const
{
    return isSupportRegExp_;
}

void ModifyDataSyncConfigRequestV3::setIsSupportRegExp(const std::string& value)
{
    isSupportRegExp_ = value;
    isSupportRegExpIsSet_ = true;
}

bool ModifyDataSyncConfigRequestV3::isSupportRegExpIsSet() const
{
    return isSupportRegExpIsSet_;
}

void ModifyDataSyncConfigRequestV3::unsetisSupportRegExp()
{
    isSupportRegExpIsSet_ = false;
}

}
}
}
}
}



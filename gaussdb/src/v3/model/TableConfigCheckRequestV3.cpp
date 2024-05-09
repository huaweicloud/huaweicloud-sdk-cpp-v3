

#include "huaweicloud/gaussdb/v3/model/TableConfigCheckRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TableConfigCheckRequestV3::TableConfigCheckRequestV3()
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
}

TableConfigCheckRequestV3::~TableConfigCheckRequestV3() = default;

void TableConfigCheckRequestV3::validate()
{
}

web::json::value TableConfigCheckRequestV3::toJson() const
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

    return val;
}
bool TableConfigCheckRequestV3::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TableConfigCheckRequestV3::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void TableConfigCheckRequestV3::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool TableConfigCheckRequestV3::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void TableConfigCheckRequestV3::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string TableConfigCheckRequestV3::getSourceNodeId() const
{
    return sourceNodeId_;
}

void TableConfigCheckRequestV3::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool TableConfigCheckRequestV3::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void TableConfigCheckRequestV3::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string TableConfigCheckRequestV3::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void TableConfigCheckRequestV3::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool TableConfigCheckRequestV3::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void TableConfigCheckRequestV3::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::string TableConfigCheckRequestV3::getTaskName() const
{
    return taskName_;
}

void TableConfigCheckRequestV3::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool TableConfigCheckRequestV3::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void TableConfigCheckRequestV3::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::vector<DbConfig>& TableConfigCheckRequestV3::getDbConfigs()
{
    return dbConfigs_;
}

void TableConfigCheckRequestV3::setDbConfigs(const std::vector<DbConfig>& value)
{
    dbConfigs_ = value;
    dbConfigsIsSet_ = true;
}

bool TableConfigCheckRequestV3::dbConfigsIsSet() const
{
    return dbConfigsIsSet_;
}

void TableConfigCheckRequestV3::unsetdbConfigs()
{
    dbConfigsIsSet_ = false;
}

std::vector<TablesConfig>& TableConfigCheckRequestV3::getTablesConfigs()
{
    return tablesConfigs_;
}

void TableConfigCheckRequestV3::setTablesConfigs(const std::vector<TablesConfig>& value)
{
    tablesConfigs_ = value;
    tablesConfigsIsSet_ = true;
}

bool TableConfigCheckRequestV3::tablesConfigsIsSet() const
{
    return tablesConfigsIsSet_;
}

void TableConfigCheckRequestV3::unsettablesConfigs()
{
    tablesConfigsIsSet_ = false;
}

TableReplConfig TableConfigCheckRequestV3::getTableReplConfig() const
{
    return tableReplConfig_;
}

void TableConfigCheckRequestV3::setTableReplConfig(const TableReplConfig& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool TableConfigCheckRequestV3::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void TableConfigCheckRequestV3::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

}
}
}
}
}



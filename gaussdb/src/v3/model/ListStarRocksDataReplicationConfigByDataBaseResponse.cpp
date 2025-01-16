

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataReplicationConfigByDataBaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataReplicationConfigByDataBaseResponse::ListStarRocksDataReplicationConfigByDataBaseResponse()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    databaseInfoIsSet_ = false;
    tableInfosIsSet_ = false;
    tableReplConfigIsSet_ = false;
    newTableReplConfigIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    isTablesChange_ = false;
    isTablesChangeIsSet_ = false;
    lastErrorOfAlterTable_ = "";
    lastErrorOfAlterTableIsSet_ = false;
}

ListStarRocksDataReplicationConfigByDataBaseResponse::~ListStarRocksDataReplicationConfigByDataBaseResponse() = default;

void ListStarRocksDataReplicationConfigByDataBaseResponse::validate()
{
}

web::json::value ListStarRocksDataReplicationConfigByDataBaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceNodeIdIsSet_) {
        val[utility::conversions::to_string_t("source_node_id")] = ModelBase::toJson(sourceNodeId_);
    }
    if(databaseInfoIsSet_) {
        val[utility::conversions::to_string_t("database_info")] = ModelBase::toJson(databaseInfo_);
    }
    if(tableInfosIsSet_) {
        val[utility::conversions::to_string_t("table_infos")] = ModelBase::toJson(tableInfos_);
    }
    if(tableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("table_repl_config")] = ModelBase::toJson(tableReplConfig_);
    }
    if(newTableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("new_table_repl_config")] = ModelBase::toJson(newTableReplConfig_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(isTablesChangeIsSet_) {
        val[utility::conversions::to_string_t("is_tables_change")] = ModelBase::toJson(isTablesChange_);
    }
    if(lastErrorOfAlterTableIsSet_) {
        val[utility::conversions::to_string_t("last_error_of_alter_table")] = ModelBase::toJson(lastErrorOfAlterTable_);
    }

    return val;
}
bool ListStarRocksDataReplicationConfigByDataBaseResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_info"));
        if(!fieldValue.is_null())
        {
            DataBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TableConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableInfos(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_table_repl_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_table_repl_config"));
        if(!fieldValue.is_null())
        {
            TableReplConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewTableReplConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_tables_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_tables_change"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTablesChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_error_of_alter_table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_error_of_alter_table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastErrorOfAlterTable(refVal);
        }
    }
    return ok;
}


std::string ListStarRocksDataReplicationConfigByDataBaseResponse::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigByDataBaseResponse::getSourceNodeId() const
{
    return sourceNodeId_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

DataBaseInfo ListStarRocksDataReplicationConfigByDataBaseResponse::getDatabaseInfo() const
{
    return databaseInfo_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setDatabaseInfo(const DataBaseInfo& value)
{
    databaseInfo_ = value;
    databaseInfoIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::databaseInfoIsSet() const
{
    return databaseInfoIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetdatabaseInfo()
{
    databaseInfoIsSet_ = false;
}

std::vector<TableConfigCheckResult>& ListStarRocksDataReplicationConfigByDataBaseResponse::getTableInfos()
{
    return tableInfos_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setTableInfos(const std::vector<TableConfigCheckResult>& value)
{
    tableInfos_ = value;
    tableInfosIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::tableInfosIsSet() const
{
    return tableInfosIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsettableInfos()
{
    tableInfosIsSet_ = false;
}

TableReplConfig ListStarRocksDataReplicationConfigByDataBaseResponse::getTableReplConfig() const
{
    return tableReplConfig_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setTableReplConfig(const TableReplConfig& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

TableReplConfig ListStarRocksDataReplicationConfigByDataBaseResponse::getNewTableReplConfig() const
{
    return newTableReplConfig_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setNewTableReplConfig(const TableReplConfig& value)
{
    newTableReplConfig_ = value;
    newTableReplConfigIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::newTableReplConfigIsSet() const
{
    return newTableReplConfigIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetnewTableReplConfig()
{
    newTableReplConfigIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigByDataBaseResponse::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::isIsTablesChange() const
{
    return isTablesChange_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setIsTablesChange(bool value)
{
    isTablesChange_ = value;
    isTablesChangeIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::isTablesChangeIsSet() const
{
    return isTablesChangeIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetisTablesChange()
{
    isTablesChangeIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigByDataBaseResponse::getLastErrorOfAlterTable() const
{
    return lastErrorOfAlterTable_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::setLastErrorOfAlterTable(const std::string& value)
{
    lastErrorOfAlterTable_ = value;
    lastErrorOfAlterTableIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigByDataBaseResponse::lastErrorOfAlterTableIsSet() const
{
    return lastErrorOfAlterTableIsSet_;
}

void ListStarRocksDataReplicationConfigByDataBaseResponse::unsetlastErrorOfAlterTable()
{
    lastErrorOfAlterTableIsSet_ = false;
}

}
}
}
}
}



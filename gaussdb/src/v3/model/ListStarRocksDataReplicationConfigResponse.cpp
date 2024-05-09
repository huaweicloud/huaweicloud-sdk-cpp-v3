

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataReplicationConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataReplicationConfigResponse::ListStarRocksDataReplicationConfigResponse()
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

ListStarRocksDataReplicationConfigResponse::~ListStarRocksDataReplicationConfigResponse() = default;

void ListStarRocksDataReplicationConfigResponse::validate()
{
}

web::json::value ListStarRocksDataReplicationConfigResponse::toJson() const
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
bool ListStarRocksDataReplicationConfigResponse::fromJson(const web::json::value& val)
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


std::string ListStarRocksDataReplicationConfigResponse::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListStarRocksDataReplicationConfigResponse::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigResponse::getSourceNodeId() const
{
    return sourceNodeId_;
}

void ListStarRocksDataReplicationConfigResponse::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

DataBaseInfo ListStarRocksDataReplicationConfigResponse::getDatabaseInfo() const
{
    return databaseInfo_;
}

void ListStarRocksDataReplicationConfigResponse::setDatabaseInfo(const DataBaseInfo& value)
{
    databaseInfo_ = value;
    databaseInfoIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::databaseInfoIsSet() const
{
    return databaseInfoIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetdatabaseInfo()
{
    databaseInfoIsSet_ = false;
}

std::vector<TableConfigCheckResult>& ListStarRocksDataReplicationConfigResponse::getTableInfos()
{
    return tableInfos_;
}

void ListStarRocksDataReplicationConfigResponse::setTableInfos(const std::vector<TableConfigCheckResult>& value)
{
    tableInfos_ = value;
    tableInfosIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::tableInfosIsSet() const
{
    return tableInfosIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsettableInfos()
{
    tableInfosIsSet_ = false;
}

TableReplConfig ListStarRocksDataReplicationConfigResponse::getTableReplConfig() const
{
    return tableReplConfig_;
}

void ListStarRocksDataReplicationConfigResponse::setTableReplConfig(const TableReplConfig& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

TableReplConfig ListStarRocksDataReplicationConfigResponse::getNewTableReplConfig() const
{
    return newTableReplConfig_;
}

void ListStarRocksDataReplicationConfigResponse::setNewTableReplConfig(const TableReplConfig& value)
{
    newTableReplConfig_ = value;
    newTableReplConfigIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::newTableReplConfigIsSet() const
{
    return newTableReplConfigIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetnewTableReplConfig()
{
    newTableReplConfigIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigResponse::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void ListStarRocksDataReplicationConfigResponse::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

bool ListStarRocksDataReplicationConfigResponse::isIsTablesChange() const
{
    return isTablesChange_;
}

void ListStarRocksDataReplicationConfigResponse::setIsTablesChange(bool value)
{
    isTablesChange_ = value;
    isTablesChangeIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::isTablesChangeIsSet() const
{
    return isTablesChangeIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetisTablesChange()
{
    isTablesChangeIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigResponse::getLastErrorOfAlterTable() const
{
    return lastErrorOfAlterTable_;
}

void ListStarRocksDataReplicationConfigResponse::setLastErrorOfAlterTable(const std::string& value)
{
    lastErrorOfAlterTable_ = value;
    lastErrorOfAlterTableIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigResponse::lastErrorOfAlterTableIsSet() const
{
    return lastErrorOfAlterTableIsSet_;
}

void ListStarRocksDataReplicationConfigResponse::unsetlastErrorOfAlterTable()
{
    lastErrorOfAlterTableIsSet_ = false;
}

}
}
}
}
}



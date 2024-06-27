

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseReplicationConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseReplicationConfigResponse::ListClickHouseDataBaseReplicationConfigResponse()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    databaseInfoIsSet_ = false;
    tableInfosIsSet_ = false;
    tableReplConfigIsSet_ = false;
    isTablesChange_ = false;
    isTablesChangeIsSet_ = false;
    newTableReplConfigIsSet_ = false;
    lastErrorOfAlterTable_ = "";
    lastErrorOfAlterTableIsSet_ = false;
}

ListClickHouseDataBaseReplicationConfigResponse::~ListClickHouseDataBaseReplicationConfigResponse() = default;

void ListClickHouseDataBaseReplicationConfigResponse::validate()
{
}

web::json::value ListClickHouseDataBaseReplicationConfigResponse::toJson() const
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
    if(isTablesChangeIsSet_) {
        val[utility::conversions::to_string_t("is_tables_change")] = ModelBase::toJson(isTablesChange_);
    }
    if(newTableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("new_table_repl_config")] = ModelBase::toJson(newTableReplConfig_);
    }
    if(lastErrorOfAlterTableIsSet_) {
        val[utility::conversions::to_string_t("last_error_of_alter_table")] = ModelBase::toJson(lastErrorOfAlterTable_);
    }

    return val;
}
bool ListClickHouseDataBaseReplicationConfigResponse::fromJson(const web::json::value& val)
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
            ChDatabaseConfigResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseTableConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_repl_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_repl_config"));
        if(!fieldValue.is_null())
        {
            ChDatabaseTableReplConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableReplConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_table_repl_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_table_repl_config"));
        if(!fieldValue.is_null())
        {
            ChDatabaseTableReplConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewTableReplConfig(refVal);
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


std::string ListClickHouseDataBaseReplicationConfigResponse::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationConfigResponse::getSourceNodeId() const
{
    return sourceNodeId_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

ChDatabaseConfigResponse ListClickHouseDataBaseReplicationConfigResponse::getDatabaseInfo() const
{
    return databaseInfo_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setDatabaseInfo(const ChDatabaseConfigResponse& value)
{
    databaseInfo_ = value;
    databaseInfoIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::databaseInfoIsSet() const
{
    return databaseInfoIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetdatabaseInfo()
{
    databaseInfoIsSet_ = false;
}

std::vector<ChDatabaseTableConfigCheckResult>& ListClickHouseDataBaseReplicationConfigResponse::getTableInfos()
{
    return tableInfos_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setTableInfos(const std::vector<ChDatabaseTableConfigCheckResult>& value)
{
    tableInfos_ = value;
    tableInfosIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::tableInfosIsSet() const
{
    return tableInfosIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsettableInfos()
{
    tableInfosIsSet_ = false;
}

ChDatabaseTableReplConfigInfo ListClickHouseDataBaseReplicationConfigResponse::getTableReplConfig() const
{
    return tableReplConfig_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setTableReplConfig(const ChDatabaseTableReplConfigInfo& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

bool ListClickHouseDataBaseReplicationConfigResponse::isIsTablesChange() const
{
    return isTablesChange_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setIsTablesChange(bool value)
{
    isTablesChange_ = value;
    isTablesChangeIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::isTablesChangeIsSet() const
{
    return isTablesChangeIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetisTablesChange()
{
    isTablesChangeIsSet_ = false;
}

ChDatabaseTableReplConfigInfo ListClickHouseDataBaseReplicationConfigResponse::getNewTableReplConfig() const
{
    return newTableReplConfig_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setNewTableReplConfig(const ChDatabaseTableReplConfigInfo& value)
{
    newTableReplConfig_ = value;
    newTableReplConfigIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::newTableReplConfigIsSet() const
{
    return newTableReplConfigIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetnewTableReplConfig()
{
    newTableReplConfigIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationConfigResponse::getLastErrorOfAlterTable() const
{
    return lastErrorOfAlterTable_;
}

void ListClickHouseDataBaseReplicationConfigResponse::setLastErrorOfAlterTable(const std::string& value)
{
    lastErrorOfAlterTable_ = value;
    lastErrorOfAlterTableIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigResponse::lastErrorOfAlterTableIsSet() const
{
    return lastErrorOfAlterTableIsSet_;
}

void ListClickHouseDataBaseReplicationConfigResponse::unsetlastErrorOfAlterTable()
{
    lastErrorOfAlterTableIsSet_ = false;
}

}
}
}
}
}



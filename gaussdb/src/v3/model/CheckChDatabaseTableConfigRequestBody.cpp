

#include "huaweicloud/gaussdb/v3/model/CheckChDatabaseTableConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckChDatabaseTableConfigRequestBody::CheckChDatabaseTableConfigRequestBody()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    dbConfigsIsSet_ = false;
    tablesConfigsIsSet_ = false;
    tableReplConfigIsSet_ = false;
}

CheckChDatabaseTableConfigRequestBody::~CheckChDatabaseTableConfigRequestBody() = default;

void CheckChDatabaseTableConfigRequestBody::validate()
{
}

web::json::value CheckChDatabaseTableConfigRequestBody::toJson() const
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
bool CheckChDatabaseTableConfigRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseConfigsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseTablesConfigsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTablesConfigs(refVal);
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
    return ok;
}


std::string CheckChDatabaseTableConfigRequestBody::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void CheckChDatabaseTableConfigRequestBody::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string CheckChDatabaseTableConfigRequestBody::getSourceNodeId() const
{
    return sourceNodeId_;
}

void CheckChDatabaseTableConfigRequestBody::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string CheckChDatabaseTableConfigRequestBody::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void CheckChDatabaseTableConfigRequestBody::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::vector<ChDatabaseConfigsInfo>& CheckChDatabaseTableConfigRequestBody::getDbConfigs()
{
    return dbConfigs_;
}

void CheckChDatabaseTableConfigRequestBody::setDbConfigs(const std::vector<ChDatabaseConfigsInfo>& value)
{
    dbConfigs_ = value;
    dbConfigsIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::dbConfigsIsSet() const
{
    return dbConfigsIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsetdbConfigs()
{
    dbConfigsIsSet_ = false;
}

std::vector<ChDatabaseTablesConfigsInfo>& CheckChDatabaseTableConfigRequestBody::getTablesConfigs()
{
    return tablesConfigs_;
}

void CheckChDatabaseTableConfigRequestBody::setTablesConfigs(const std::vector<ChDatabaseTablesConfigsInfo>& value)
{
    tablesConfigs_ = value;
    tablesConfigsIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::tablesConfigsIsSet() const
{
    return tablesConfigsIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsettablesConfigs()
{
    tablesConfigsIsSet_ = false;
}

ChDatabaseTableReplConfigInfo CheckChDatabaseTableConfigRequestBody::getTableReplConfig() const
{
    return tableReplConfig_;
}

void CheckChDatabaseTableConfigRequestBody::setTableReplConfig(const ChDatabaseTableReplConfigInfo& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool CheckChDatabaseTableConfigRequestBody::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void CheckChDatabaseTableConfigRequestBody::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

}
}
}
}
}



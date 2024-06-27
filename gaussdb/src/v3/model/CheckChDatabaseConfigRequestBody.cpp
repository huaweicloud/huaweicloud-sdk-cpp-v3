

#include "huaweicloud/gaussdb/v3/model/CheckChDatabaseConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckChDatabaseConfigRequestBody::CheckChDatabaseConfigRequestBody()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    dbConfigsIsSet_ = false;
    tableReplConfigIsSet_ = false;
}

CheckChDatabaseConfigRequestBody::~CheckChDatabaseConfigRequestBody() = default;

void CheckChDatabaseConfigRequestBody::validate()
{
}

web::json::value CheckChDatabaseConfigRequestBody::toJson() const
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
    if(tableReplConfigIsSet_) {
        val[utility::conversions::to_string_t("table_repl_config")] = ModelBase::toJson(tableReplConfig_);
    }

    return val;
}
bool CheckChDatabaseConfigRequestBody::fromJson(const web::json::value& val)
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


std::string CheckChDatabaseConfigRequestBody::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void CheckChDatabaseConfigRequestBody::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool CheckChDatabaseConfigRequestBody::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void CheckChDatabaseConfigRequestBody::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string CheckChDatabaseConfigRequestBody::getSourceNodeId() const
{
    return sourceNodeId_;
}

void CheckChDatabaseConfigRequestBody::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool CheckChDatabaseConfigRequestBody::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void CheckChDatabaseConfigRequestBody::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string CheckChDatabaseConfigRequestBody::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void CheckChDatabaseConfigRequestBody::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool CheckChDatabaseConfigRequestBody::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void CheckChDatabaseConfigRequestBody::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::vector<ChDatabaseConfigsInfo>& CheckChDatabaseConfigRequestBody::getDbConfigs()
{
    return dbConfigs_;
}

void CheckChDatabaseConfigRequestBody::setDbConfigs(const std::vector<ChDatabaseConfigsInfo>& value)
{
    dbConfigs_ = value;
    dbConfigsIsSet_ = true;
}

bool CheckChDatabaseConfigRequestBody::dbConfigsIsSet() const
{
    return dbConfigsIsSet_;
}

void CheckChDatabaseConfigRequestBody::unsetdbConfigs()
{
    dbConfigsIsSet_ = false;
}

ChDatabaseTableReplConfigInfo CheckChDatabaseConfigRequestBody::getTableReplConfig() const
{
    return tableReplConfig_;
}

void CheckChDatabaseConfigRequestBody::setTableReplConfig(const ChDatabaseTableReplConfigInfo& value)
{
    tableReplConfig_ = value;
    tableReplConfigIsSet_ = true;
}

bool CheckChDatabaseConfigRequestBody::tableReplConfigIsSet() const
{
    return tableReplConfigIsSet_;
}

void CheckChDatabaseConfigRequestBody::unsettableReplConfig()
{
    tableReplConfigIsSet_ = false;
}

}
}
}
}
}



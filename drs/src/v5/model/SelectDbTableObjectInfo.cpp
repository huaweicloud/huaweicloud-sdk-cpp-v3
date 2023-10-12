

#include "huaweicloud/drs/v5/model/SelectDbTableObjectInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SelectDbTableObjectInfo::SelectDbTableObjectInfo()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

SelectDbTableObjectInfo::~SelectDbTableObjectInfo() = default;

void SelectDbTableObjectInfo::validate()
{
}

web::json::value SelectDbTableObjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool SelectDbTableObjectInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    return ok;
}


std::string SelectDbTableObjectInfo::getDbName() const
{
    return dbName_;
}

void SelectDbTableObjectInfo::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SelectDbTableObjectInfo::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SelectDbTableObjectInfo::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string SelectDbTableObjectInfo::getSchemaName() const
{
    return schemaName_;
}

void SelectDbTableObjectInfo::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool SelectDbTableObjectInfo::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void SelectDbTableObjectInfo::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string SelectDbTableObjectInfo::getTableName() const
{
    return tableName_;
}

void SelectDbTableObjectInfo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool SelectDbTableObjectInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void SelectDbTableObjectInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



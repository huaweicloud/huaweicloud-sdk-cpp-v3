

#include "huaweicloud/gaussdbforopengauss/v3/model/RestoreTableListDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestoreTableListDetail::RestoreTableListDetail()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    newDbName_ = "";
    newDbNameIsSet_ = false;
    newSchemaName_ = "";
    newSchemaNameIsSet_ = false;
    newTableName_ = "";
    newTableNameIsSet_ = false;
}

RestoreTableListDetail::~RestoreTableListDetail() = default;

void RestoreTableListDetail::validate()
{
}

web::json::value RestoreTableListDetail::toJson() const
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
    if(newDbNameIsSet_) {
        val[utility::conversions::to_string_t("new_db_name")] = ModelBase::toJson(newDbName_);
    }
    if(newSchemaNameIsSet_) {
        val[utility::conversions::to_string_t("new_schema_name")] = ModelBase::toJson(newSchemaName_);
    }
    if(newTableNameIsSet_) {
        val[utility::conversions::to_string_t("new_table_name")] = ModelBase::toJson(newTableName_);
    }

    return val;
}
bool RestoreTableListDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("new_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewTableName(refVal);
        }
    }
    return ok;
}


std::string RestoreTableListDetail::getDbName() const
{
    return dbName_;
}

void RestoreTableListDetail::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RestoreTableListDetail::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RestoreTableListDetail::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string RestoreTableListDetail::getSchemaName() const
{
    return schemaName_;
}

void RestoreTableListDetail::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool RestoreTableListDetail::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void RestoreTableListDetail::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string RestoreTableListDetail::getTableName() const
{
    return tableName_;
}

void RestoreTableListDetail::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool RestoreTableListDetail::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void RestoreTableListDetail::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string RestoreTableListDetail::getNewDbName() const
{
    return newDbName_;
}

void RestoreTableListDetail::setNewDbName(const std::string& value)
{
    newDbName_ = value;
    newDbNameIsSet_ = true;
}

bool RestoreTableListDetail::newDbNameIsSet() const
{
    return newDbNameIsSet_;
}

void RestoreTableListDetail::unsetnewDbName()
{
    newDbNameIsSet_ = false;
}

std::string RestoreTableListDetail::getNewSchemaName() const
{
    return newSchemaName_;
}

void RestoreTableListDetail::setNewSchemaName(const std::string& value)
{
    newSchemaName_ = value;
    newSchemaNameIsSet_ = true;
}

bool RestoreTableListDetail::newSchemaNameIsSet() const
{
    return newSchemaNameIsSet_;
}

void RestoreTableListDetail::unsetnewSchemaName()
{
    newSchemaNameIsSet_ = false;
}

std::string RestoreTableListDetail::getNewTableName() const
{
    return newTableName_;
}

void RestoreTableListDetail::setNewTableName(const std::string& value)
{
    newTableName_ = value;
    newTableNameIsSet_ = true;
}

bool RestoreTableListDetail::newTableNameIsSet() const
{
    return newTableNameIsSet_;
}

void RestoreTableListDetail::unsetnewTableName()
{
    newTableNameIsSet_ = false;
}

}
}
}
}
}



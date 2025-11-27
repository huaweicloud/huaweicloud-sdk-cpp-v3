

#include "huaweicloud/rds/v3/model/Table.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Table::Table()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

Table::~Table() = default;

void Table::validate()
{
}

web::json::value Table::toJson() const
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
bool Table::fromJson(const web::json::value& val)
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


std::string Table::getDbName() const
{
    return dbName_;
}

void Table::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool Table::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void Table::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string Table::getSchemaName() const
{
    return schemaName_;
}

void Table::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool Table::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void Table::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string Table::getTableName() const
{
    return tableName_;
}

void Table::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Table::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Table::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



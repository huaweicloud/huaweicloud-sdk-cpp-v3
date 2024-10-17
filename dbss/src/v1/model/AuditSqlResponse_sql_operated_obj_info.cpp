

#include "huaweicloud/dbss/v1/model/AuditSqlResponse_sql_operated_obj_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSqlResponse_sql_operated_obj_info::AuditSqlResponse_sql_operated_obj_info()
{
    columnName_ = "";
    columnNameIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    sysName_ = "";
    sysNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

AuditSqlResponse_sql_operated_obj_info::~AuditSqlResponse_sql_operated_obj_info() = default;

void AuditSqlResponse_sql_operated_obj_info::validate()
{
}

web::json::value AuditSqlResponse_sql_operated_obj_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(sqlTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_type")] = ModelBase::toJson(sqlType_);
    }
    if(sysNameIsSet_) {
        val[utility::conversions::to_string_t("sys_name")] = ModelBase::toJson(sysName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool AuditSqlResponse_sql_operated_obj_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysName(refVal);
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


std::string AuditSqlResponse_sql_operated_obj_info::getColumnName() const
{
    return columnName_;
}

void AuditSqlResponse_sql_operated_obj_info::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string AuditSqlResponse_sql_operated_obj_info::getObjectType() const
{
    return objectType_;
}

void AuditSqlResponse_sql_operated_obj_info::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string AuditSqlResponse_sql_operated_obj_info::getSchemaName() const
{
    return schemaName_;
}

void AuditSqlResponse_sql_operated_obj_info::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string AuditSqlResponse_sql_operated_obj_info::getSqlType() const
{
    return sqlType_;
}

void AuditSqlResponse_sql_operated_obj_info::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

std::string AuditSqlResponse_sql_operated_obj_info::getSysName() const
{
    return sysName_;
}

void AuditSqlResponse_sql_operated_obj_info::setSysName(const std::string& value)
{
    sysName_ = value;
    sysNameIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::sysNameIsSet() const
{
    return sysNameIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsetsysName()
{
    sysNameIsSet_ = false;
}

std::string AuditSqlResponse_sql_operated_obj_info::getTableName() const
{
    return tableName_;
}

void AuditSqlResponse_sql_operated_obj_info::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool AuditSqlResponse_sql_operated_obj_info::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void AuditSqlResponse_sql_operated_obj_info::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



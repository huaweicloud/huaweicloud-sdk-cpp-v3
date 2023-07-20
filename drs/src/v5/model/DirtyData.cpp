

#include "huaweicloud/drs/v5/model/DirtyData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DirtyData::DirtyData()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    errorSql_ = "";
    errorSqlIsSet_ = false;
    errorTime_ = "";
    errorTimeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DirtyData::~DirtyData() = default;

void DirtyData::validate()
{
}

web::json::value DirtyData::toJson() const
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
    if(errorSqlIsSet_) {
        val[utility::conversions::to_string_t("error_sql")] = ModelBase::toJson(errorSql_);
    }
    if(errorTimeIsSet_) {
        val[utility::conversions::to_string_t("error_time")] = ModelBase::toJson(errorTime_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool DirtyData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string DirtyData::getDbName() const
{
    return dbName_;
}

void DirtyData::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DirtyData::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DirtyData::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DirtyData::getSchemaName() const
{
    return schemaName_;
}

void DirtyData::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DirtyData::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DirtyData::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string DirtyData::getTableName() const
{
    return tableName_;
}

void DirtyData::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DirtyData::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DirtyData::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string DirtyData::getErrorSql() const
{
    return errorSql_;
}

void DirtyData::setErrorSql(const std::string& value)
{
    errorSql_ = value;
    errorSqlIsSet_ = true;
}

bool DirtyData::errorSqlIsSet() const
{
    return errorSqlIsSet_;
}

void DirtyData::unseterrorSql()
{
    errorSqlIsSet_ = false;
}

std::string DirtyData::getErrorTime() const
{
    return errorTime_;
}

void DirtyData::setErrorTime(const std::string& value)
{
    errorTime_ = value;
    errorTimeIsSet_ = true;
}

bool DirtyData::errorTimeIsSet() const
{
    return errorTimeIsSet_;
}

void DirtyData::unseterrorTime()
{
    errorTimeIsSet_ = false;
}

std::string DirtyData::getErrorMsg() const
{
    return errorMsg_;
}

void DirtyData::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DirtyData::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DirtyData::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}



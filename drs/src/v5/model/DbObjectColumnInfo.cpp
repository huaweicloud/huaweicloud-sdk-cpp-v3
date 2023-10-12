

#include "huaweicloud/drs/v5/model/DbObjectColumnInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbObjectColumnInfo::DbObjectColumnInfo()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    columnInfosIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

DbObjectColumnInfo::~DbObjectColumnInfo() = default;

void DbObjectColumnInfo::validate()
{
}

web::json::value DbObjectColumnInfo::toJson() const
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
    if(columnInfosIsSet_) {
        val[utility::conversions::to_string_t("column_infos")] = ModelBase::toJson(columnInfos_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool DbObjectColumnInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("column_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string DbObjectColumnInfo::getDbName() const
{
    return dbName_;
}

void DbObjectColumnInfo::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DbObjectColumnInfo::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DbObjectColumnInfo::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DbObjectColumnInfo::getSchemaName() const
{
    return schemaName_;
}

void DbObjectColumnInfo::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DbObjectColumnInfo::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DbObjectColumnInfo::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string DbObjectColumnInfo::getTableName() const
{
    return tableName_;
}

void DbObjectColumnInfo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DbObjectColumnInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DbObjectColumnInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<QueryColumnInfo>& DbObjectColumnInfo::getColumnInfos()
{
    return columnInfos_;
}

void DbObjectColumnInfo::setColumnInfos(const std::vector<QueryColumnInfo>& value)
{
    columnInfos_ = value;
    columnInfosIsSet_ = true;
}

bool DbObjectColumnInfo::columnInfosIsSet() const
{
    return columnInfosIsSet_;
}

void DbObjectColumnInfo::unsetcolumnInfos()
{
    columnInfosIsSet_ = false;
}

int32_t DbObjectColumnInfo::getTotalCount() const
{
    return totalCount_;
}

void DbObjectColumnInfo::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool DbObjectColumnInfo::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void DbObjectColumnInfo::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



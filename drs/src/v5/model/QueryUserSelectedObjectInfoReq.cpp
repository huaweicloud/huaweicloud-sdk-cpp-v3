

#include "huaweicloud/drs/v5/model/QueryUserSelectedObjectInfoReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryUserSelectedObjectInfoReq::QueryUserSelectedObjectInfoReq()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    hasColumnInfo_ = false;
    hasColumnInfoIsSet_ = false;
}

QueryUserSelectedObjectInfoReq::~QueryUserSelectedObjectInfoReq() = default;

void QueryUserSelectedObjectInfoReq::validate()
{
}

web::json::value QueryUserSelectedObjectInfoReq::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(hasColumnInfoIsSet_) {
        val[utility::conversions::to_string_t("has_column_info")] = ModelBase::toJson(hasColumnInfo_);
    }

    return val;
}

bool QueryUserSelectedObjectInfoReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_column_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_column_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasColumnInfo(refVal);
        }
    }
    return ok;
}

std::string QueryUserSelectedObjectInfoReq::getDbName() const
{
    return dbName_;
}

void QueryUserSelectedObjectInfoReq::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string QueryUserSelectedObjectInfoReq::getSchemaName() const
{
    return schemaName_;
}

void QueryUserSelectedObjectInfoReq::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string QueryUserSelectedObjectInfoReq::getTableName() const
{
    return tableName_;
}

void QueryUserSelectedObjectInfoReq::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsettableName()
{
    tableNameIsSet_ = false;
}

int32_t QueryUserSelectedObjectInfoReq::getOffset() const
{
    return offset_;
}

void QueryUserSelectedObjectInfoReq::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t QueryUserSelectedObjectInfoReq::getLimit() const
{
    return limit_;
}

void QueryUserSelectedObjectInfoReq::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::limitIsSet() const
{
    return limitIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsetlimit()
{
    limitIsSet_ = false;
}

bool QueryUserSelectedObjectInfoReq::isHasColumnInfo() const
{
    return hasColumnInfo_;
}

void QueryUserSelectedObjectInfoReq::setHasColumnInfo(bool value)
{
    hasColumnInfo_ = value;
    hasColumnInfoIsSet_ = true;
}

bool QueryUserSelectedObjectInfoReq::hasColumnInfoIsSet() const
{
    return hasColumnInfoIsSet_;
}

void QueryUserSelectedObjectInfoReq::unsethasColumnInfo()
{
    hasColumnInfoIsSet_ = false;
}

}
}
}
}
}



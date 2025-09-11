

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemaTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseSchemaTablesRequest::ListDatabaseSchemaTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableNameKeyword_ = "";
    tableNameKeywordIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDatabaseSchemaTablesRequest::~ListDatabaseSchemaTablesRequest() = default;

void ListDatabaseSchemaTablesRequest::validate()
{
}

web::json::value ListDatabaseSchemaTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameKeywordIsSet_) {
        val[utility::conversions::to_string_t("table_name_keyword")] = ModelBase::toJson(tableNameKeyword_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDatabaseSchemaTablesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("table_name_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name_keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNameKeyword(refVal);
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
    return ok;
}


std::string ListDatabaseSchemaTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseSchemaTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDatabaseSchemaTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseSchemaTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseSchemaTablesRequest::getDbName() const
{
    return dbName_;
}

void ListDatabaseSchemaTablesRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListDatabaseSchemaTablesRequest::getSchemaName() const
{
    return schemaName_;
}

void ListDatabaseSchemaTablesRequest::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ListDatabaseSchemaTablesRequest::getTableNameKeyword() const
{
    return tableNameKeyword_;
}

void ListDatabaseSchemaTablesRequest::setTableNameKeyword(const std::string& value)
{
    tableNameKeyword_ = value;
    tableNameKeywordIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::tableNameKeywordIsSet() const
{
    return tableNameKeywordIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsettableNameKeyword()
{
    tableNameKeywordIsSet_ = false;
}

int32_t ListDatabaseSchemaTablesRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseSchemaTablesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseSchemaTablesRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseSchemaTablesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseSchemaTablesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseSchemaTablesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



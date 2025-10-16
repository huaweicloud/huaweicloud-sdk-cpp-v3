

#include "huaweicloud/rds/v3/model/PublicationTableInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PublicationTableInfoResponse::PublicationTableInfoResponse()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    columnsIsSet_ = false;
    primaryKeyIsSet_ = false;
    filterStatement_ = "";
    filterStatementIsSet_ = false;
    filterIsSet_ = false;
    articlePropertiesIsSet_ = false;
}

PublicationTableInfoResponse::~PublicationTableInfoResponse() = default;

void PublicationTableInfoResponse::validate()
{
}

web::json::value PublicationTableInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(columnsIsSet_) {
        val[utility::conversions::to_string_t("columns")] = ModelBase::toJson(columns_);
    }
    if(primaryKeyIsSet_) {
        val[utility::conversions::to_string_t("primary_key")] = ModelBase::toJson(primaryKey_);
    }
    if(filterStatementIsSet_) {
        val[utility::conversions::to_string_t("filter_statement")] = ModelBase::toJson(filterStatement_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(articlePropertiesIsSet_) {
        val[utility::conversions::to_string_t("article_properties")] = ModelBase::toJson(articleProperties_);
    }

    return val;
}
bool PublicationTableInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("columns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_key"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            PublicationTableFilterInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("article_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("article_properties"));
        if(!fieldValue.is_null())
        {
            ArticlePropertiesResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArticleProperties(refVal);
        }
    }
    return ok;
}


std::string PublicationTableInfoResponse::getTableName() const
{
    return tableName_;
}

void PublicationTableInfoResponse::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool PublicationTableInfoResponse::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void PublicationTableInfoResponse::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string PublicationTableInfoResponse::getSchema() const
{
    return schema_;
}

void PublicationTableInfoResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool PublicationTableInfoResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void PublicationTableInfoResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<std::string>& PublicationTableInfoResponse::getColumns()
{
    return columns_;
}

void PublicationTableInfoResponse::setColumns(const std::vector<std::string>& value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool PublicationTableInfoResponse::columnsIsSet() const
{
    return columnsIsSet_;
}

void PublicationTableInfoResponse::unsetcolumns()
{
    columnsIsSet_ = false;
}

std::vector<std::string>& PublicationTableInfoResponse::getPrimaryKey()
{
    return primaryKey_;
}

void PublicationTableInfoResponse::setPrimaryKey(const std::vector<std::string>& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool PublicationTableInfoResponse::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void PublicationTableInfoResponse::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

std::string PublicationTableInfoResponse::getFilterStatement() const
{
    return filterStatement_;
}

void PublicationTableInfoResponse::setFilterStatement(const std::string& value)
{
    filterStatement_ = value;
    filterStatementIsSet_ = true;
}

bool PublicationTableInfoResponse::filterStatementIsSet() const
{
    return filterStatementIsSet_;
}

void PublicationTableInfoResponse::unsetfilterStatement()
{
    filterStatementIsSet_ = false;
}

PublicationTableFilterInfoResponse PublicationTableInfoResponse::getFilter() const
{
    return filter_;
}

void PublicationTableInfoResponse::setFilter(const PublicationTableFilterInfoResponse& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool PublicationTableInfoResponse::filterIsSet() const
{
    return filterIsSet_;
}

void PublicationTableInfoResponse::unsetfilter()
{
    filterIsSet_ = false;
}

ArticlePropertiesResponse PublicationTableInfoResponse::getArticleProperties() const
{
    return articleProperties_;
}

void PublicationTableInfoResponse::setArticleProperties(const ArticlePropertiesResponse& value)
{
    articleProperties_ = value;
    articlePropertiesIsSet_ = true;
}

bool PublicationTableInfoResponse::articlePropertiesIsSet() const
{
    return articlePropertiesIsSet_;
}

void PublicationTableInfoResponse::unsetarticleProperties()
{
    articlePropertiesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/PublicationTableInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PublicationTableInfoRequest::PublicationTableInfoRequest()
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

PublicationTableInfoRequest::~PublicationTableInfoRequest() = default;

void PublicationTableInfoRequest::validate()
{
}

web::json::value PublicationTableInfoRequest::toJson() const
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
bool PublicationTableInfoRequest::fromJson(const web::json::value& val)
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
            PublicationTableFilterInfoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("article_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("article_properties"));
        if(!fieldValue.is_null())
        {
            ArticlePropertiesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArticleProperties(refVal);
        }
    }
    return ok;
}


std::string PublicationTableInfoRequest::getTableName() const
{
    return tableName_;
}

void PublicationTableInfoRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool PublicationTableInfoRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void PublicationTableInfoRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string PublicationTableInfoRequest::getSchema() const
{
    return schema_;
}

void PublicationTableInfoRequest::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool PublicationTableInfoRequest::schemaIsSet() const
{
    return schemaIsSet_;
}

void PublicationTableInfoRequest::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<std::string>& PublicationTableInfoRequest::getColumns()
{
    return columns_;
}

void PublicationTableInfoRequest::setColumns(const std::vector<std::string>& value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool PublicationTableInfoRequest::columnsIsSet() const
{
    return columnsIsSet_;
}

void PublicationTableInfoRequest::unsetcolumns()
{
    columnsIsSet_ = false;
}

std::vector<std::string>& PublicationTableInfoRequest::getPrimaryKey()
{
    return primaryKey_;
}

void PublicationTableInfoRequest::setPrimaryKey(const std::vector<std::string>& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool PublicationTableInfoRequest::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void PublicationTableInfoRequest::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

std::string PublicationTableInfoRequest::getFilterStatement() const
{
    return filterStatement_;
}

void PublicationTableInfoRequest::setFilterStatement(const std::string& value)
{
    filterStatement_ = value;
    filterStatementIsSet_ = true;
}

bool PublicationTableInfoRequest::filterStatementIsSet() const
{
    return filterStatementIsSet_;
}

void PublicationTableInfoRequest::unsetfilterStatement()
{
    filterStatementIsSet_ = false;
}

PublicationTableFilterInfoRequest PublicationTableInfoRequest::getFilter() const
{
    return filter_;
}

void PublicationTableInfoRequest::setFilter(const PublicationTableFilterInfoRequest& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool PublicationTableInfoRequest::filterIsSet() const
{
    return filterIsSet_;
}

void PublicationTableInfoRequest::unsetfilter()
{
    filterIsSet_ = false;
}

ArticlePropertiesRequest PublicationTableInfoRequest::getArticleProperties() const
{
    return articleProperties_;
}

void PublicationTableInfoRequest::setArticleProperties(const ArticlePropertiesRequest& value)
{
    articleProperties_ = value;
    articlePropertiesIsSet_ = true;
}

bool PublicationTableInfoRequest::articlePropertiesIsSet() const
{
    return articlePropertiesIsSet_;
}

void PublicationTableInfoRequest::unsetarticleProperties()
{
    articlePropertiesIsSet_ = false;
}

}
}
}
}
}



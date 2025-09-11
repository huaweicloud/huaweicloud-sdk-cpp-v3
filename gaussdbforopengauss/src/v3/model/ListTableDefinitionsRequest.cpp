

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableDefinitionsRequest::ListTableDefinitionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

ListTableDefinitionsRequest::~ListTableDefinitionsRequest() = default;

void ListTableDefinitionsRequest::validate()
{
}

web::json::value ListTableDefinitionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool ListTableDefinitionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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


std::string ListTableDefinitionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTableDefinitionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTableDefinitionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTableDefinitionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTableDefinitionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTableDefinitionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTableDefinitionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTableDefinitionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTableDefinitionsRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListTableDefinitionsRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListTableDefinitionsRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListTableDefinitionsRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListTableDefinitionsRequest::getSchemaName() const
{
    return schemaName_;
}

void ListTableDefinitionsRequest::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListTableDefinitionsRequest::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListTableDefinitionsRequest::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ListTableDefinitionsRequest::getTableName() const
{
    return tableName_;
}

void ListTableDefinitionsRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ListTableDefinitionsRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ListTableDefinitionsRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



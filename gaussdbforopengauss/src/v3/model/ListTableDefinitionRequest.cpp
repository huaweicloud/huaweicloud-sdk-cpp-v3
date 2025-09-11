

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableDefinitionRequest::ListTableDefinitionRequest()
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

ListTableDefinitionRequest::~ListTableDefinitionRequest() = default;

void ListTableDefinitionRequest::validate()
{
}

web::json::value ListTableDefinitionRequest::toJson() const
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
bool ListTableDefinitionRequest::fromJson(const web::json::value& val)
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


std::string ListTableDefinitionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTableDefinitionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTableDefinitionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTableDefinitionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTableDefinitionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTableDefinitionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTableDefinitionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTableDefinitionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTableDefinitionRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListTableDefinitionRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListTableDefinitionRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListTableDefinitionRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListTableDefinitionRequest::getSchemaName() const
{
    return schemaName_;
}

void ListTableDefinitionRequest::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListTableDefinitionRequest::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListTableDefinitionRequest::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ListTableDefinitionRequest::getTableName() const
{
    return tableName_;
}

void ListTableDefinitionRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ListTableDefinitionRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ListTableDefinitionRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



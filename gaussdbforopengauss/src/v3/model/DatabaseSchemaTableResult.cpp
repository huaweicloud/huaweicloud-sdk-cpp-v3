

#include "huaweicloud/gaussdbforopengauss/v3/model/DatabaseSchemaTableResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatabaseSchemaTableResult::DatabaseSchemaTableResult()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
}

DatabaseSchemaTableResult::~DatabaseSchemaTableResult() = default;

void DatabaseSchemaTableResult::validate()
{
}

web::json::value DatabaseSchemaTableResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }

    return val;
}
bool DatabaseSchemaTableResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    return ok;
}


std::string DatabaseSchemaTableResult::getTableName() const
{
    return tableName_;
}

void DatabaseSchemaTableResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DatabaseSchemaTableResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DatabaseSchemaTableResult::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string DatabaseSchemaTableResult::getSchemaName() const
{
    return schemaName_;
}

void DatabaseSchemaTableResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DatabaseSchemaTableResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DatabaseSchemaTableResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdbforopengauss/v3/model/SchemaTableDefinitionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SchemaTableDefinitionResult::SchemaTableDefinitionResult()
{
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableDefinition_ = "";
    tableDefinitionIsSet_ = false;
}

SchemaTableDefinitionResult::~SchemaTableDefinitionResult() = default;

void SchemaTableDefinitionResult::validate()
{
}

web::json::value SchemaTableDefinitionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableDefinitionIsSet_) {
        val[utility::conversions::to_string_t("table_definition")] = ModelBase::toJson(tableDefinition_);
    }

    return val;
}
bool SchemaTableDefinitionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableDefinition(refVal);
        }
    }
    return ok;
}


std::string SchemaTableDefinitionResult::getSchemaName() const
{
    return schemaName_;
}

void SchemaTableDefinitionResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool SchemaTableDefinitionResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void SchemaTableDefinitionResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string SchemaTableDefinitionResult::getTableDefinition() const
{
    return tableDefinition_;
}

void SchemaTableDefinitionResult::setTableDefinition(const std::string& value)
{
    tableDefinition_ = value;
    tableDefinitionIsSet_ = true;
}

bool SchemaTableDefinitionResult::tableDefinitionIsSet() const
{
    return tableDefinitionIsSet_;
}

void SchemaTableDefinitionResult::unsettableDefinition()
{
    tableDefinitionIsSet_ = false;
}

}
}
}
}
}



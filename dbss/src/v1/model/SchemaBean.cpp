

#include "huaweicloud/dbss/v1/model/SchemaBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SchemaBean::SchemaBean()
{
    column_ = "";
    columnIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    table_ = "";
    tableIsSet_ = false;
}

SchemaBean::~SchemaBean() = default;

void SchemaBean::validate()
{
}

web::json::value SchemaBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnIsSet_) {
        val[utility::conversions::to_string_t("column")] = ModelBase::toJson(column_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }

    return val;
}
bool SchemaBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    return ok;
}


std::string SchemaBean::getColumn() const
{
    return column_;
}

void SchemaBean::setColumn(const std::string& value)
{
    column_ = value;
    columnIsSet_ = true;
}

bool SchemaBean::columnIsSet() const
{
    return columnIsSet_;
}

void SchemaBean::unsetcolumn()
{
    columnIsSet_ = false;
}

std::string SchemaBean::getSchema() const
{
    return schema_;
}

void SchemaBean::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool SchemaBean::schemaIsSet() const
{
    return schemaIsSet_;
}

void SchemaBean::unsetschema()
{
    schemaIsSet_ = false;
}

std::string SchemaBean::getTable() const
{
    return table_;
}

void SchemaBean::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool SchemaBean::tableIsSet() const
{
    return tableIsSet_;
}

void SchemaBean::unsettable()
{
    tableIsSet_ = false;
}

}
}
}
}
}



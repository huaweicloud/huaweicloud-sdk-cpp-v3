

#include "huaweicloud/dbss/v1/model/RuleRiskInfoBean_schemas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleRiskInfoBean_schemas::RuleRiskInfoBean_schemas()
{
    schema_ = "";
    schemaIsSet_ = false;
    table_ = "";
    tableIsSet_ = false;
    column_ = "";
    columnIsSet_ = false;
}

RuleRiskInfoBean_schemas::~RuleRiskInfoBean_schemas() = default;

void RuleRiskInfoBean_schemas::validate()
{
}

web::json::value RuleRiskInfoBean_schemas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }
    if(columnIsSet_) {
        val[utility::conversions::to_string_t("column")] = ModelBase::toJson(column_);
    }

    return val;
}
bool RuleRiskInfoBean_schemas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("column"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumn(refVal);
        }
    }
    return ok;
}


std::string RuleRiskInfoBean_schemas::getSchema() const
{
    return schema_;
}

void RuleRiskInfoBean_schemas::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool RuleRiskInfoBean_schemas::schemaIsSet() const
{
    return schemaIsSet_;
}

void RuleRiskInfoBean_schemas::unsetschema()
{
    schemaIsSet_ = false;
}

std::string RuleRiskInfoBean_schemas::getTable() const
{
    return table_;
}

void RuleRiskInfoBean_schemas::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool RuleRiskInfoBean_schemas::tableIsSet() const
{
    return tableIsSet_;
}

void RuleRiskInfoBean_schemas::unsettable()
{
    tableIsSet_ = false;
}

std::string RuleRiskInfoBean_schemas::getColumn() const
{
    return column_;
}

void RuleRiskInfoBean_schemas::setColumn(const std::string& value)
{
    column_ = value;
    columnIsSet_ = true;
}

bool RuleRiskInfoBean_schemas::columnIsSet() const
{
    return columnIsSet_;
}

void RuleRiskInfoBean_schemas::unsetcolumn()
{
    columnIsSet_ = false;
}

}
}
}
}
}



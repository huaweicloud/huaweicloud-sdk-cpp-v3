

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreSchema.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreSchema::PostgreSQLRestoreSchema()
{
    schema_ = "";
    schemaIsSet_ = false;
    tablesIsSet_ = false;
}

PostgreSQLRestoreSchema::~PostgreSQLRestoreSchema() = default;

void PostgreSQLRestoreSchema::validate()
{
}

web::json::value PostgreSQLRestoreSchema::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool PostgreSQLRestoreSchema::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLRestoreTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLRestoreSchema::getSchema() const
{
    return schema_;
}

void PostgreSQLRestoreSchema::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool PostgreSQLRestoreSchema::schemaIsSet() const
{
    return schemaIsSet_;
}

void PostgreSQLRestoreSchema::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<PostgreSQLRestoreTable>& PostgreSQLRestoreSchema::getTables()
{
    return tables_;
}

void PostgreSQLRestoreSchema::setTables(const std::vector<PostgreSQLRestoreTable>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool PostgreSQLRestoreSchema::tablesIsSet() const
{
    return tablesIsSet_;
}

void PostgreSQLRestoreSchema::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}



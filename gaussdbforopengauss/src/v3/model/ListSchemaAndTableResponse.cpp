

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSchemaAndTableResponse::ListSchemaAndTableResponse()
{
    databaseTablesIsSet_ = false;
}

ListSchemaAndTableResponse::~ListSchemaAndTableResponse() = default;

void ListSchemaAndTableResponse::validate()
{
}

web::json::value ListSchemaAndTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseTablesIsSet_) {
        val[utility::conversions::to_string_t("database_tables")] = ModelBase::toJson(databaseTables_);
    }

    return val;
}
bool ListSchemaAndTableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseSchemaTableResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseTables(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseSchemaTableResult>& ListSchemaAndTableResponse::getDatabaseTables()
{
    return databaseTables_;
}

void ListSchemaAndTableResponse::setDatabaseTables(const std::vector<DatabaseSchemaTableResult>& value)
{
    databaseTables_ = value;
    databaseTablesIsSet_ = true;
}

bool ListSchemaAndTableResponse::databaseTablesIsSet() const
{
    return databaseTablesIsSet_;
}

void ListSchemaAndTableResponse::unsetdatabaseTables()
{
    databaseTablesIsSet_ = false;
}

}
}
}
}
}



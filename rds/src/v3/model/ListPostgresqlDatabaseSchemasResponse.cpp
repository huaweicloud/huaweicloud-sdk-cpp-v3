

#include "huaweicloud/rds/v3/model/ListPostgresqlDatabaseSchemasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlDatabaseSchemasResponse::ListPostgresqlDatabaseSchemasResponse()
{
    databaseSchemasIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPostgresqlDatabaseSchemasResponse::~ListPostgresqlDatabaseSchemasResponse() = default;

void ListPostgresqlDatabaseSchemasResponse::validate()
{
}

web::json::value ListPostgresqlDatabaseSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseSchemasIsSet_) {
        val[utility::conversions::to_string_t("database_schemas")] = ModelBase::toJson(databaseSchemas_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListPostgresqlDatabaseSchemasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlDatabaseForListSchema> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseSchemas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<PostgresqlDatabaseForListSchema>& ListPostgresqlDatabaseSchemasResponse::getDatabaseSchemas()
{
    return databaseSchemas_;
}

void ListPostgresqlDatabaseSchemasResponse::setDatabaseSchemas(const std::vector<PostgresqlDatabaseForListSchema>& value)
{
    databaseSchemas_ = value;
    databaseSchemasIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasResponse::databaseSchemasIsSet() const
{
    return databaseSchemasIsSet_;
}

void ListPostgresqlDatabaseSchemasResponse::unsetdatabaseSchemas()
{
    databaseSchemasIsSet_ = false;
}

int32_t ListPostgresqlDatabaseSchemasResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPostgresqlDatabaseSchemasResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPostgresqlDatabaseSchemasResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



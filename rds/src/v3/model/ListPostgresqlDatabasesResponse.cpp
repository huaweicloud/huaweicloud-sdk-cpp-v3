

#include "huaweicloud/rds/v3/model/ListPostgresqlDatabasesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlDatabasesResponse::ListPostgresqlDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPostgresqlDatabasesResponse::~ListPostgresqlDatabasesResponse() = default;

void ListPostgresqlDatabasesResponse::validate()
{
}

web::json::value ListPostgresqlDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListPostgresqlDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlListDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
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

std::vector<PostgresqlListDatabase>& ListPostgresqlDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListPostgresqlDatabasesResponse::setDatabases(const std::vector<PostgresqlListDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListPostgresqlDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListPostgresqlDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListPostgresqlDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPostgresqlDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPostgresqlDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPostgresqlDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



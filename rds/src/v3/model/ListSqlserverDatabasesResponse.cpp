

#include "huaweicloud/rds/v3/model/ListSqlserverDatabasesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlserverDatabasesResponse::ListSqlserverDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSqlserverDatabasesResponse::~ListSqlserverDatabasesResponse() = default;

void ListSqlserverDatabasesResponse::validate()
{
}

web::json::value ListSqlserverDatabasesResponse::toJson() const
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

bool ListSqlserverDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlserverDatabaseForDetail> refVal;
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

std::vector<SqlserverDatabaseForDetail>& ListSqlserverDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListSqlserverDatabasesResponse::setDatabases(const std::vector<SqlserverDatabaseForDetail>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListSqlserverDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListSqlserverDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListSqlserverDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSqlserverDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSqlserverDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSqlserverDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



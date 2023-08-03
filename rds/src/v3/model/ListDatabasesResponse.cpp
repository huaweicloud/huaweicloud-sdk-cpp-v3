

#include "huaweicloud/rds/v3/model/ListDatabasesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDatabasesResponse::ListDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabasesResponse::~ListDatabasesResponse() = default;

void ListDatabasesResponse::validate()
{
}

web::json::value ListDatabasesResponse::toJson() const
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

bool ListDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseForCreation> refVal;
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

std::vector<DatabaseForCreation>& ListDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListDatabasesResponse::setDatabases(const std::vector<DatabaseForCreation>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ListAuthorizedDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuthorizedDatabasesResponse::ListAuthorizedDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListAuthorizedDatabasesResponse::~ListAuthorizedDatabasesResponse() = default;

void ListAuthorizedDatabasesResponse::validate()
{
}

web::json::value ListAuthorizedDatabasesResponse::toJson() const
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
bool ListAuthorizedDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseWithPrivilege> refVal;
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


std::vector<DatabaseWithPrivilege>& ListAuthorizedDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListAuthorizedDatabasesResponse::setDatabases(const std::vector<DatabaseWithPrivilege>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListAuthorizedDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListAuthorizedDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListAuthorizedDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAuthorizedDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAuthorizedDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAuthorizedDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



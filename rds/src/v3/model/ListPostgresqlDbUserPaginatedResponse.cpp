

#include "huaweicloud/rds/v3/model/ListPostgresqlDbUserPaginatedResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlDbUserPaginatedResponse::ListPostgresqlDbUserPaginatedResponse()
{
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPostgresqlDbUserPaginatedResponse::~ListPostgresqlDbUserPaginatedResponse() = default;

void ListPostgresqlDbUserPaginatedResponse::validate()
{
}

web::json::value ListPostgresqlDbUserPaginatedResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListPostgresqlDbUserPaginatedResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlUserForList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
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

std::vector<PostgresqlUserForList>& ListPostgresqlDbUserPaginatedResponse::getUsers()
{
    return users_;
}

void ListPostgresqlDbUserPaginatedResponse::setUsers(const std::vector<PostgresqlUserForList>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListPostgresqlDbUserPaginatedResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListPostgresqlDbUserPaginatedResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPostgresqlDbUserPaginatedResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPostgresqlDbUserPaginatedResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



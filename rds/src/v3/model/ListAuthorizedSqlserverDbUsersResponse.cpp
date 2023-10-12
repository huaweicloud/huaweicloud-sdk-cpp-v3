

#include "huaweicloud/rds/v3/model/ListAuthorizedSqlserverDbUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuthorizedSqlserverDbUsersResponse::ListAuthorizedSqlserverDbUsersResponse()
{
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListAuthorizedSqlserverDbUsersResponse::~ListAuthorizedSqlserverDbUsersResponse() = default;

void ListAuthorizedSqlserverDbUsersResponse::validate()
{
}

web::json::value ListAuthorizedSqlserverDbUsersResponse::toJson() const
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
bool ListAuthorizedSqlserverDbUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserWithPrivilege> refVal;
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


std::vector<UserWithPrivilege>& ListAuthorizedSqlserverDbUsersResponse::getUsers()
{
    return users_;
}

void ListAuthorizedSqlserverDbUsersResponse::setUsers(const std::vector<UserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListAuthorizedSqlserverDbUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListAuthorizedSqlserverDbUsersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAuthorizedSqlserverDbUsersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAuthorizedSqlserverDbUsersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ListSqlserverDbUsersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlserverDbUsersResponse::ListSqlserverDbUsersResponse()
{
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSqlserverDbUsersResponse::~ListSqlserverDbUsersResponse() = default;

void ListSqlserverDbUsersResponse::validate()
{
}

web::json::value ListSqlserverDbUsersResponse::toJson() const
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

bool ListSqlserverDbUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserForList> refVal;
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

std::vector<UserForList>& ListSqlserverDbUsersResponse::getUsers()
{
    return users_;
}

void ListSqlserverDbUsersResponse::setUsers(const std::vector<UserForList>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListSqlserverDbUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListSqlserverDbUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListSqlserverDbUsersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSqlserverDbUsersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSqlserverDbUsersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSqlserverDbUsersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/csms/v1/model/ListUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListUsersResponse::ListUsersResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    usersIsSet_ = false;
}

ListUsersResponse::~ListUsersResponse() = default;

void ListUsersResponse::validate()
{
}

web::json::value ListUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ListUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UsersDetailsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


int64_t ListUsersResponse::getTotal() const
{
    return total_;
}

void ListUsersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListUsersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListUsersResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<UsersDetailsResult>& ListUsersResponse::getUsers()
{
    return users_;
}

void ListUsersResponse::setUsers(const std::vector<UsersDetailsResult>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}



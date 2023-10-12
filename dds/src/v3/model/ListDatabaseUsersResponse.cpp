

#include "huaweicloud/dds/v3/model/ListDatabaseUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListDatabaseUsersResponse::ListDatabaseUsersResponse()
{
    users_ = "";
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseUsersResponse::~ListDatabaseUsersResponse() = default;

void ListDatabaseUsersResponse::validate()
{
}

web::json::value ListDatabaseUsersResponse::toJson() const
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
bool ListDatabaseUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ListDatabaseUsersResponse::getUsers() const
{
    return users_;
}

void ListDatabaseUsersResponse::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListDatabaseUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListDatabaseUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListDatabaseUsersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseUsersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseUsersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseUsersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseUserResponse::ListGaussMySqlDatabaseUserResponse()
{
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlDatabaseUserResponse::~ListGaussMySqlDatabaseUserResponse() = default;

void ListGaussMySqlDatabaseUserResponse::validate()
{
}

web::json::value ListGaussMySqlDatabaseUserResponse::toJson() const
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

bool ListGaussMySqlDatabaseUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGaussMySqlDatabaseUser> refVal;
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

std::vector<ListGaussMySqlDatabaseUser>& ListGaussMySqlDatabaseUserResponse::getUsers()
{
    return users_;
}

void ListGaussMySqlDatabaseUserResponse::setUsers(const std::vector<ListGaussMySqlDatabaseUser>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListGaussMySqlDatabaseUserResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseUserResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlDatabaseUserResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlDatabaseUserResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



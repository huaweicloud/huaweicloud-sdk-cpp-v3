

#include "huaweicloud/identitycenterstore/v1/model/ListUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListUsersResponse::ListUsersResponse()
{
    pageInfoIsSet_ = false;
    usersIsSet_ = false;
}

ListUsersResponse::~ListUsersResponse() = default;

void ListUsersResponse::validate()
{
}

web::json::value ListUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ListUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


PageInfoDto ListUsersResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListUsersResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListUsersResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListUsersResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<UserDto>& ListUsersResponse::getUsers()
{
    return users_;
}

void ListUsersResponse::setUsers(const std::vector<UserDto>& value)
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



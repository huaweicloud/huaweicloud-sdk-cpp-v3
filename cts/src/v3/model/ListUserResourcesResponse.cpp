

#include "huaweicloud/cts/v3/model/ListUserResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListUserResourcesResponse::ListUserResourcesResponse()
{
    usersIsSet_ = false;
}

ListUserResourcesResponse::~ListUserResourcesResponse() = default;

void ListUserResourcesResponse::validate()
{
}

web::json::value ListUserResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ListUserResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<UserResource>& ListUserResourcesResponse::getUsers()
{
    return users_;
}

void ListUserResourcesResponse::setUsers(const std::vector<UserResource>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListUserResourcesResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListUserResourcesResponse::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}



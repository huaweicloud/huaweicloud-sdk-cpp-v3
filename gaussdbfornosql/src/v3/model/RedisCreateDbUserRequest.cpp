

#include "huaweicloud/gaussdbfornosql/v3/model/RedisCreateDbUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisCreateDbUserRequest::RedisCreateDbUserRequest()
{
    usersIsSet_ = false;
}

RedisCreateDbUserRequest::~RedisCreateDbUserRequest() = default;

void RedisCreateDbUserRequest::validate()
{
}

web::json::value RedisCreateDbUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RedisCreateDbUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RedisUserForCreation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<RedisUserForCreation>& RedisCreateDbUserRequest::getUsers()
{
    return users_;
}

void RedisCreateDbUserRequest::setUsers(const std::vector<RedisUserForCreation>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RedisCreateDbUserRequest::usersIsSet() const
{
    return usersIsSet_;
}

void RedisCreateDbUserRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdbfornosql/v3/model/RedisModifyDBUserPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisModifyDBUserPrivilegeRequest::RedisModifyDBUserPrivilegeRequest()
{
    usersIsSet_ = false;
}

RedisModifyDBUserPrivilegeRequest::~RedisModifyDBUserPrivilegeRequest() = default;

void RedisModifyDBUserPrivilegeRequest::validate()
{
}

web::json::value RedisModifyDBUserPrivilegeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RedisModifyDBUserPrivilegeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RedisModifyDbUserPrivilegeRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<RedisModifyDbUserPrivilegeRequestBody>& RedisModifyDBUserPrivilegeRequest::getUsers()
{
    return users_;
}

void RedisModifyDBUserPrivilegeRequest::setUsers(const std::vector<RedisModifyDbUserPrivilegeRequestBody>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RedisModifyDBUserPrivilegeRequest::usersIsSet() const
{
    return usersIsSet_;
}

void RedisModifyDBUserPrivilegeRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}



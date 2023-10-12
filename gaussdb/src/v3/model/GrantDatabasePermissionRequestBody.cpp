

#include "huaweicloud/gaussdb/v3/model/GrantDatabasePermissionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GrantDatabasePermissionRequestBody::GrantDatabasePermissionRequestBody()
{
    usersIsSet_ = false;
}

GrantDatabasePermissionRequestBody::~GrantDatabasePermissionRequestBody() = default;

void GrantDatabasePermissionRequestBody::validate()
{
}

web::json::value GrantDatabasePermissionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool GrantDatabasePermissionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<GrantDatabasePermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<GrantDatabasePermission>& GrantDatabasePermissionRequestBody::getUsers()
{
    return users_;
}

void GrantDatabasePermissionRequestBody::setUsers(const std::vector<GrantDatabasePermission>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool GrantDatabasePermissionRequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void GrantDatabasePermissionRequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}



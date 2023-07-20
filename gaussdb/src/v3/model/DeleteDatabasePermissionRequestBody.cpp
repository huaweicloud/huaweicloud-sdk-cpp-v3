

#include "huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDatabasePermissionRequestBody::DeleteDatabasePermissionRequestBody()
{
    usersIsSet_ = false;
}

DeleteDatabasePermissionRequestBody::~DeleteDatabasePermissionRequestBody() = default;

void DeleteDatabasePermissionRequestBody::validate()
{
}

web::json::value DeleteDatabasePermissionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}

bool DeleteDatabasePermissionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteDatabasePermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::vector<DeleteDatabasePermission>& DeleteDatabasePermissionRequestBody::getUsers()
{
    return users_;
}

void DeleteDatabasePermissionRequestBody::setUsers(const std::vector<DeleteDatabasePermission>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool DeleteDatabasePermissionRequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void DeleteDatabasePermissionRequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/DatabaseUserRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseUserRoleRequest::DatabaseUserRoleRequest()
{
    user_ = "";
    userIsSet_ = false;
    rolesIsSet_ = false;
}

DatabaseUserRoleRequest::~DatabaseUserRoleRequest() = default;

void DatabaseUserRoleRequest::validate()
{
}

web::json::value DatabaseUserRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool DatabaseUserRoleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string DatabaseUserRoleRequest::getUser() const
{
    return user_;
}

void DatabaseUserRoleRequest::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool DatabaseUserRoleRequest::userIsSet() const
{
    return userIsSet_;
}

void DatabaseUserRoleRequest::unsetuser()
{
    userIsSet_ = false;
}

std::vector<std::string>& DatabaseUserRoleRequest::getRoles()
{
    return roles_;
}

void DatabaseUserRoleRequest::setRoles(const std::vector<std::string>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool DatabaseUserRoleRequest::rolesIsSet() const
{
    return rolesIsSet_;
}

void DatabaseUserRoleRequest::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}



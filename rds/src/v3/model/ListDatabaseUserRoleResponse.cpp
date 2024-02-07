

#include "huaweicloud/rds/v3/model/ListDatabaseUserRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDatabaseUserRoleResponse::ListDatabaseUserRoleResponse()
{
    rolesIsSet_ = false;
}

ListDatabaseUserRoleResponse::~ListDatabaseUserRoleResponse() = default;

void ListDatabaseUserRoleResponse::validate()
{
}

web::json::value ListDatabaseUserRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool ListDatabaseUserRoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& ListDatabaseUserRoleResponse::getRoles()
{
    return roles_;
}

void ListDatabaseUserRoleResponse::setRoles(const std::vector<std::string>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ListDatabaseUserRoleResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void ListDatabaseUserRoleResponse::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}



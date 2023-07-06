

#include "huaweicloud/drs/v5/model/UserMigrationRole.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UserMigrationRole::UserMigrationRole()
{
    role_ = "";
    roleIsSet_ = false;
}

UserMigrationRole::~UserMigrationRole() = default;

void UserMigrationRole::validate()
{
}

web::json::value UserMigrationRole::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}

bool UserMigrationRole::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}

std::string UserMigrationRole::getRole() const
{
    return role_;
}

void UserMigrationRole::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool UserMigrationRole::roleIsSet() const
{
    return roleIsSet_;
}

void UserMigrationRole::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}



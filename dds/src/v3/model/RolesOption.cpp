

#include "huaweicloud/dds/v3/model/RolesOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RolesOption::RolesOption()
{
    roleDbName_ = "";
    roleDbNameIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
}

RolesOption::~RolesOption() = default;

void RolesOption::validate()
{
}

web::json::value RolesOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleDbNameIsSet_) {
        val[utility::conversions::to_string_t("role_db_name")] = ModelBase::toJson(roleDbName_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }

    return val;
}

bool RolesOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    return ok;
}

std::string RolesOption::getRoleDbName() const
{
    return roleDbName_;
}

void RolesOption::setRoleDbName(const std::string& value)
{
    roleDbName_ = value;
    roleDbNameIsSet_ = true;
}

bool RolesOption::roleDbNameIsSet() const
{
    return roleDbNameIsSet_;
}

void RolesOption::unsetroleDbName()
{
    roleDbNameIsSet_ = false;
}

std::string RolesOption::getRoleName() const
{
    return roleName_;
}

void RolesOption::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool RolesOption::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void RolesOption::unsetroleName()
{
    roleNameIsSet_ = false;
}

}
}
}
}
}



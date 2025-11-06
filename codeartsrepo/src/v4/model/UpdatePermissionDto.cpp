

#include "huaweicloud/codeartsrepo/v4/model/UpdatePermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdatePermissionDto::UpdatePermissionDto()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    permissionsIsSet_ = false;
}

UpdatePermissionDto::~UpdatePermissionDto() = default;

void UpdatePermissionDto::validate()
{
}

web::json::value UpdatePermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }

    return val;
}
bool UpdatePermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdatePermissionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    return ok;
}


std::string UpdatePermissionDto::getRoleId() const
{
    return roleId_;
}

void UpdatePermissionDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UpdatePermissionDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UpdatePermissionDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string UpdatePermissionDto::getRoleName() const
{
    return roleName_;
}

void UpdatePermissionDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool UpdatePermissionDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void UpdatePermissionDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::vector<UpdatePermissionDetail>& UpdatePermissionDto::getPermissions()
{
    return permissions_;
}

void UpdatePermissionDto::setPermissions(const std::vector<UpdatePermissionDetail>& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool UpdatePermissionDto::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void UpdatePermissionDto::unsetpermissions()
{
    permissionsIsSet_ = false;
}

}
}
}
}
}



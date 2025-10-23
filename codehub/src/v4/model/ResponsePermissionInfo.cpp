

#include "huaweicloud/codehub/v4/model/ResponsePermissionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ResponsePermissionInfo::ResponsePermissionInfo()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleNameCn_ = "";
    roleNameCnIsSet_ = false;
    resourcePermissionsIsSet_ = false;
}

ResponsePermissionInfo::~ResponsePermissionInfo() = default;

void ResponsePermissionInfo::validate()
{
}

web::json::value ResponsePermissionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleNameCnIsSet_) {
        val[utility::conversions::to_string_t("role_name_cn")] = ModelBase::toJson(roleNameCn_);
    }
    if(resourcePermissionsIsSet_) {
        val[utility::conversions::to_string_t("resource_permissions")] = ModelBase::toJson(resourcePermissions_);
    }

    return val;
}
bool ResponsePermissionInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_permissions"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePermissions(refVal);
        }
    }
    return ok;
}


std::string ResponsePermissionInfo::getRoleId() const
{
    return roleId_;
}

void ResponsePermissionInfo::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ResponsePermissionInfo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ResponsePermissionInfo::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ResponsePermissionInfo::getRoleName() const
{
    return roleName_;
}

void ResponsePermissionInfo::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ResponsePermissionInfo::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ResponsePermissionInfo::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string ResponsePermissionInfo::getRoleNameCn() const
{
    return roleNameCn_;
}

void ResponsePermissionInfo::setRoleNameCn(const std::string& value)
{
    roleNameCn_ = value;
    roleNameCnIsSet_ = true;
}

bool ResponsePermissionInfo::roleNameCnIsSet() const
{
    return roleNameCnIsSet_;
}

void ResponsePermissionInfo::unsetroleNameCn()
{
    roleNameCnIsSet_ = false;
}

std::map<std::string, Object>& ResponsePermissionInfo::getResourcePermissions()
{
    return resourcePermissions_;
}

void ResponsePermissionInfo::setResourcePermissions(const std::map<std::string, Object>& value)
{
    resourcePermissions_ = value;
    resourcePermissionsIsSet_ = true;
}

bool ResponsePermissionInfo::resourcePermissionsIsSet() const
{
    return resourcePermissionsIsSet_;
}

void ResponsePermissionInfo::unsetresourcePermissions()
{
    resourcePermissionsIsSet_ = false;
}

}
}
}
}
}



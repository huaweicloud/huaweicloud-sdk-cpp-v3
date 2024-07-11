

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentPermissionV2Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentPermissionV2Body::EnvironmentPermissionV2Body()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    permissionName_ = "";
    permissionNameIsSet_ = false;
    permissionValue_ = false;
    permissionValueIsSet_ = false;
}

EnvironmentPermissionV2Body::~EnvironmentPermissionV2Body() = default;

void EnvironmentPermissionV2Body::validate()
{
}

web::json::value EnvironmentPermissionV2Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(permissionNameIsSet_) {
        val[utility::conversions::to_string_t("permission_name")] = ModelBase::toJson(permissionName_);
    }
    if(permissionValueIsSet_) {
        val[utility::conversions::to_string_t("permission_value")] = ModelBase::toJson(permissionValue_);
    }

    return val;
}
bool EnvironmentPermissionV2Body::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_value"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionValue(refVal);
        }
    }
    return ok;
}


std::string EnvironmentPermissionV2Body::getRoleId() const
{
    return roleId_;
}

void EnvironmentPermissionV2Body::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool EnvironmentPermissionV2Body::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void EnvironmentPermissionV2Body::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string EnvironmentPermissionV2Body::getPermissionName() const
{
    return permissionName_;
}

void EnvironmentPermissionV2Body::setPermissionName(const std::string& value)
{
    permissionName_ = value;
    permissionNameIsSet_ = true;
}

bool EnvironmentPermissionV2Body::permissionNameIsSet() const
{
    return permissionNameIsSet_;
}

void EnvironmentPermissionV2Body::unsetpermissionName()
{
    permissionNameIsSet_ = false;
}

bool EnvironmentPermissionV2Body::isPermissionValue() const
{
    return permissionValue_;
}

void EnvironmentPermissionV2Body::setPermissionValue(bool value)
{
    permissionValue_ = value;
    permissionValueIsSet_ = true;
}

bool EnvironmentPermissionV2Body::permissionValueIsSet() const
{
    return permissionValueIsSet_;
}

void EnvironmentPermissionV2Body::unsetpermissionValue()
{
    permissionValueIsSet_ = false;
}

}
}
}
}
}



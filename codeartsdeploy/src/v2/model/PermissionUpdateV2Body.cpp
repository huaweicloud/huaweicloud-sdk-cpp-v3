

#include "huaweicloud/codeartsdeploy/v2/model/PermissionUpdateV2Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




PermissionUpdateV2Body::PermissionUpdateV2Body()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    permissionName_ = "";
    permissionNameIsSet_ = false;
    permissionValue_ = false;
    permissionValueIsSet_ = false;
}

PermissionUpdateV2Body::~PermissionUpdateV2Body() = default;

void PermissionUpdateV2Body::validate()
{
}

web::json::value PermissionUpdateV2Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
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
bool PermissionUpdateV2Body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
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


std::string PermissionUpdateV2Body::getProjectId() const
{
    return projectId_;
}

void PermissionUpdateV2Body::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PermissionUpdateV2Body::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PermissionUpdateV2Body::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PermissionUpdateV2Body::getRoleId() const
{
    return roleId_;
}

void PermissionUpdateV2Body::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool PermissionUpdateV2Body::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void PermissionUpdateV2Body::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string PermissionUpdateV2Body::getPermissionName() const
{
    return permissionName_;
}

void PermissionUpdateV2Body::setPermissionName(const std::string& value)
{
    permissionName_ = value;
    permissionNameIsSet_ = true;
}

bool PermissionUpdateV2Body::permissionNameIsSet() const
{
    return permissionNameIsSet_;
}

void PermissionUpdateV2Body::unsetpermissionName()
{
    permissionNameIsSet_ = false;
}

bool PermissionUpdateV2Body::isPermissionValue() const
{
    return permissionValue_;
}

void PermissionUpdateV2Body::setPermissionValue(bool value)
{
    permissionValue_ = value;
    permissionValueIsSet_ = true;
}

bool PermissionUpdateV2Body::permissionValueIsSet() const
{
    return permissionValueIsSet_;
}

void PermissionUpdateV2Body::unsetpermissionValue()
{
    permissionValueIsSet_ = false;
}

}
}
}
}
}



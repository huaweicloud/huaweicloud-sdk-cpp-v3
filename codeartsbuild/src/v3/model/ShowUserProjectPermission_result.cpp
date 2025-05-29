

#include "huaweicloud/codeartsbuild/v3/model/ShowUserProjectPermission_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserProjectPermission_result::ShowUserProjectPermission_result()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    createPermission_ = false;
    createPermissionIsSet_ = false;
    modifyPermission_ = false;
    modifyPermissionIsSet_ = false;
    groupPermission_ = false;
    groupPermissionIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
}

ShowUserProjectPermission_result::~ShowUserProjectPermission_result() = default;

void ShowUserProjectPermission_result::validate()
{
}

web::json::value ShowUserProjectPermission_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createPermissionIsSet_) {
        val[utility::conversions::to_string_t("create_permission")] = ModelBase::toJson(createPermission_);
    }
    if(modifyPermissionIsSet_) {
        val[utility::conversions::to_string_t("modify_permission")] = ModelBase::toJson(modifyPermission_);
    }
    if(groupPermissionIsSet_) {
        val[utility::conversions::to_string_t("group_permission")] = ModelBase::toJson(groupPermission_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }

    return val;
}
bool ShowUserProjectPermission_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatePermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupPermission(refVal);
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


std::string ShowUserProjectPermission_result::getProjectId() const
{
    return projectId_;
}

void ShowUserProjectPermission_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowUserProjectPermission_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowUserProjectPermission_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ShowUserProjectPermission_result::isCreatePermission() const
{
    return createPermission_;
}

void ShowUserProjectPermission_result::setCreatePermission(bool value)
{
    createPermission_ = value;
    createPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::createPermissionIsSet() const
{
    return createPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetcreatePermission()
{
    createPermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isModifyPermission() const
{
    return modifyPermission_;
}

void ShowUserProjectPermission_result::setModifyPermission(bool value)
{
    modifyPermission_ = value;
    modifyPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::modifyPermissionIsSet() const
{
    return modifyPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetmodifyPermission()
{
    modifyPermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isGroupPermission() const
{
    return groupPermission_;
}

void ShowUserProjectPermission_result::setGroupPermission(bool value)
{
    groupPermission_ = value;
    groupPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::groupPermissionIsSet() const
{
    return groupPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetgroupPermission()
{
    groupPermissionIsSet_ = false;
}

std::string ShowUserProjectPermission_result::getRoleId() const
{
    return roleId_;
}

void ShowUserProjectPermission_result::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowUserProjectPermission_result::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowUserProjectPermission_result::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ShowUserProjectPermission_result::getRoleName() const
{
    return roleName_;
}

void ShowUserProjectPermission_result::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ShowUserProjectPermission_result::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ShowUserProjectPermission_result::unsetroleName()
{
    roleNameIsSet_ = false;
}

}
}
}
}
}



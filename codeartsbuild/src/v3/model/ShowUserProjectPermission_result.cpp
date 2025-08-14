

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
    deletePermission_ = false;
    deletePermissionIsSet_ = false;
    viewPermission_ = false;
    viewPermissionIsSet_ = false;
    executePermission_ = false;
    executePermissionIsSet_ = false;
    copyPermission_ = false;
    copyPermissionIsSet_ = false;
    forbiddenPermission_ = false;
    forbiddenPermissionIsSet_ = false;
    managerPermission_ = false;
    managerPermissionIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleIdsIsSet_ = false;
    roleNamesIsSet_ = false;
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
    if(deletePermissionIsSet_) {
        val[utility::conversions::to_string_t("delete_permission")] = ModelBase::toJson(deletePermission_);
    }
    if(viewPermissionIsSet_) {
        val[utility::conversions::to_string_t("view_permission")] = ModelBase::toJson(viewPermission_);
    }
    if(executePermissionIsSet_) {
        val[utility::conversions::to_string_t("execute_permission")] = ModelBase::toJson(executePermission_);
    }
    if(copyPermissionIsSet_) {
        val[utility::conversions::to_string_t("copy_permission")] = ModelBase::toJson(copyPermission_);
    }
    if(forbiddenPermissionIsSet_) {
        val[utility::conversions::to_string_t("forbidden_permission")] = ModelBase::toJson(forbiddenPermission_);
    }
    if(managerPermissionIsSet_) {
        val[utility::conversions::to_string_t("manager_permission")] = ModelBase::toJson(managerPermission_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleIdsIsSet_) {
        val[utility::conversions::to_string_t("role_ids")] = ModelBase::toJson(roleIds_);
    }
    if(roleNamesIsSet_) {
        val[utility::conversions::to_string_t("role_names")] = ModelBase::toJson(roleNames_);
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
    if(val.has_field(utility::conversions::to_string_t("delete_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletePermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutePermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("copy_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("copy_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCopyPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manager_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manager_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagerPermission(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNames(refVal);
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

bool ShowUserProjectPermission_result::isDeletePermission() const
{
    return deletePermission_;
}

void ShowUserProjectPermission_result::setDeletePermission(bool value)
{
    deletePermission_ = value;
    deletePermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::deletePermissionIsSet() const
{
    return deletePermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetdeletePermission()
{
    deletePermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isViewPermission() const
{
    return viewPermission_;
}

void ShowUserProjectPermission_result::setViewPermission(bool value)
{
    viewPermission_ = value;
    viewPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::viewPermissionIsSet() const
{
    return viewPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetviewPermission()
{
    viewPermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isExecutePermission() const
{
    return executePermission_;
}

void ShowUserProjectPermission_result::setExecutePermission(bool value)
{
    executePermission_ = value;
    executePermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::executePermissionIsSet() const
{
    return executePermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetexecutePermission()
{
    executePermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isCopyPermission() const
{
    return copyPermission_;
}

void ShowUserProjectPermission_result::setCopyPermission(bool value)
{
    copyPermission_ = value;
    copyPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::copyPermissionIsSet() const
{
    return copyPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetcopyPermission()
{
    copyPermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isForbiddenPermission() const
{
    return forbiddenPermission_;
}

void ShowUserProjectPermission_result::setForbiddenPermission(bool value)
{
    forbiddenPermission_ = value;
    forbiddenPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::forbiddenPermissionIsSet() const
{
    return forbiddenPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetforbiddenPermission()
{
    forbiddenPermissionIsSet_ = false;
}

bool ShowUserProjectPermission_result::isManagerPermission() const
{
    return managerPermission_;
}

void ShowUserProjectPermission_result::setManagerPermission(bool value)
{
    managerPermission_ = value;
    managerPermissionIsSet_ = true;
}

bool ShowUserProjectPermission_result::managerPermissionIsSet() const
{
    return managerPermissionIsSet_;
}

void ShowUserProjectPermission_result::unsetmanagerPermission()
{
    managerPermissionIsSet_ = false;
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

std::vector<std::string>& ShowUserProjectPermission_result::getRoleIds()
{
    return roleIds_;
}

void ShowUserProjectPermission_result::setRoleIds(const std::vector<std::string>& value)
{
    roleIds_ = value;
    roleIdsIsSet_ = true;
}

bool ShowUserProjectPermission_result::roleIdsIsSet() const
{
    return roleIdsIsSet_;
}

void ShowUserProjectPermission_result::unsetroleIds()
{
    roleIdsIsSet_ = false;
}

std::vector<std::string>& ShowUserProjectPermission_result::getRoleNames()
{
    return roleNames_;
}

void ShowUserProjectPermission_result::setRoleNames(const std::vector<std::string>& value)
{
    roleNames_ = value;
    roleNamesIsSet_ = true;
}

bool ShowUserProjectPermission_result::roleNamesIsSet() const
{
    return roleNamesIsSet_;
}

void ShowUserProjectPermission_result::unsetroleNames()
{
    roleNamesIsSet_ = false;
}

}
}
}
}
}



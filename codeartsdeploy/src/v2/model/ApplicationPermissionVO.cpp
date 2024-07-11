

#include "huaweicloud/codeartsdeploy/v2/model/ApplicationPermissionVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ApplicationPermissionVO::ApplicationPermissionVO()
{
    canModify_ = false;
    canModifyIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canView_ = false;
    canViewIsSet_ = false;
    canExecute_ = false;
    canExecuteIsSet_ = false;
    canCopy_ = false;
    canCopyIsSet_ = false;
    canManage_ = false;
    canManageIsSet_ = false;
    canCreateEnv_ = false;
    canCreateEnvIsSet_ = false;
    canDisable_ = false;
    canDisableIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleType_ = "";
    roleTypeIsSet_ = false;
}

ApplicationPermissionVO::~ApplicationPermissionVO() = default;

void ApplicationPermissionVO::validate()
{
}

web::json::value ApplicationPermissionVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canModifyIsSet_) {
        val[utility::conversions::to_string_t("can_modify")] = ModelBase::toJson(canModify_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canViewIsSet_) {
        val[utility::conversions::to_string_t("can_view")] = ModelBase::toJson(canView_);
    }
    if(canExecuteIsSet_) {
        val[utility::conversions::to_string_t("can_execute")] = ModelBase::toJson(canExecute_);
    }
    if(canCopyIsSet_) {
        val[utility::conversions::to_string_t("can_copy")] = ModelBase::toJson(canCopy_);
    }
    if(canManageIsSet_) {
        val[utility::conversions::to_string_t("can_manage")] = ModelBase::toJson(canManage_);
    }
    if(canCreateEnvIsSet_) {
        val[utility::conversions::to_string_t("can_create_env")] = ModelBase::toJson(canCreateEnv_);
    }
    if(canDisableIsSet_) {
        val[utility::conversions::to_string_t("can_disable")] = ModelBase::toJson(canDisable_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }

    return val;
}
bool ApplicationPermissionVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_manage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_manage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanManage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_create_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_create_env"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCreateEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleType(refVal);
        }
    }
    return ok;
}


bool ApplicationPermissionVO::isCanModify() const
{
    return canModify_;
}

void ApplicationPermissionVO::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool ApplicationPermissionVO::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void ApplicationPermissionVO::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool ApplicationPermissionVO::isCanDelete() const
{
    return canDelete_;
}

void ApplicationPermissionVO::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool ApplicationPermissionVO::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void ApplicationPermissionVO::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool ApplicationPermissionVO::isCanView() const
{
    return canView_;
}

void ApplicationPermissionVO::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool ApplicationPermissionVO::canViewIsSet() const
{
    return canViewIsSet_;
}

void ApplicationPermissionVO::unsetcanView()
{
    canViewIsSet_ = false;
}

bool ApplicationPermissionVO::isCanExecute() const
{
    return canExecute_;
}

void ApplicationPermissionVO::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool ApplicationPermissionVO::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void ApplicationPermissionVO::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool ApplicationPermissionVO::isCanCopy() const
{
    return canCopy_;
}

void ApplicationPermissionVO::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool ApplicationPermissionVO::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void ApplicationPermissionVO::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool ApplicationPermissionVO::isCanManage() const
{
    return canManage_;
}

void ApplicationPermissionVO::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool ApplicationPermissionVO::canManageIsSet() const
{
    return canManageIsSet_;
}

void ApplicationPermissionVO::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool ApplicationPermissionVO::isCanCreateEnv() const
{
    return canCreateEnv_;
}

void ApplicationPermissionVO::setCanCreateEnv(bool value)
{
    canCreateEnv_ = value;
    canCreateEnvIsSet_ = true;
}

bool ApplicationPermissionVO::canCreateEnvIsSet() const
{
    return canCreateEnvIsSet_;
}

void ApplicationPermissionVO::unsetcanCreateEnv()
{
    canCreateEnvIsSet_ = false;
}

bool ApplicationPermissionVO::isCanDisable() const
{
    return canDisable_;
}

void ApplicationPermissionVO::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool ApplicationPermissionVO::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void ApplicationPermissionVO::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

std::string ApplicationPermissionVO::getName() const
{
    return name_;
}

void ApplicationPermissionVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicationPermissionVO::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicationPermissionVO::unsetname()
{
    nameIsSet_ = false;
}

std::string ApplicationPermissionVO::getRegion() const
{
    return region_;
}

void ApplicationPermissionVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ApplicationPermissionVO::regionIsSet() const
{
    return regionIsSet_;
}

void ApplicationPermissionVO::unsetregion()
{
    regionIsSet_ = false;
}

std::string ApplicationPermissionVO::getRoleId() const
{
    return roleId_;
}

void ApplicationPermissionVO::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ApplicationPermissionVO::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ApplicationPermissionVO::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ApplicationPermissionVO::getRoleType() const
{
    return roleType_;
}

void ApplicationPermissionVO::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool ApplicationPermissionVO::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void ApplicationPermissionVO::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}



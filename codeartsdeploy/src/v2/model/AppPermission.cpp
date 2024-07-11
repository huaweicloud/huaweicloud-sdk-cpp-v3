

#include "huaweicloud/codeartsdeploy/v2/model/AppPermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppPermission::AppPermission()
{
    devRoleId_ = "";
    devRoleIdIsSet_ = false;
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
}

AppPermission::~AppPermission() = default;

void AppPermission::validate()
{
}

web::json::value AppPermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devRoleIdIsSet_) {
        val[utility::conversions::to_string_t("dev_role_id")] = ModelBase::toJson(devRoleId_);
    }
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

    return val;
}
bool AppPermission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dev_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dev_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevRoleId(refVal);
        }
    }
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
    return ok;
}


std::string AppPermission::getDevRoleId() const
{
    return devRoleId_;
}

void AppPermission::setDevRoleId(const std::string& value)
{
    devRoleId_ = value;
    devRoleIdIsSet_ = true;
}

bool AppPermission::devRoleIdIsSet() const
{
    return devRoleIdIsSet_;
}

void AppPermission::unsetdevRoleId()
{
    devRoleIdIsSet_ = false;
}

bool AppPermission::isCanModify() const
{
    return canModify_;
}

void AppPermission::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool AppPermission::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void AppPermission::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool AppPermission::isCanDelete() const
{
    return canDelete_;
}

void AppPermission::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool AppPermission::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void AppPermission::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool AppPermission::isCanView() const
{
    return canView_;
}

void AppPermission::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool AppPermission::canViewIsSet() const
{
    return canViewIsSet_;
}

void AppPermission::unsetcanView()
{
    canViewIsSet_ = false;
}

bool AppPermission::isCanExecute() const
{
    return canExecute_;
}

void AppPermission::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool AppPermission::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void AppPermission::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool AppPermission::isCanCopy() const
{
    return canCopy_;
}

void AppPermission::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool AppPermission::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void AppPermission::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool AppPermission::isCanManage() const
{
    return canManage_;
}

void AppPermission::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool AppPermission::canManageIsSet() const
{
    return canManageIsSet_;
}

void AppPermission::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool AppPermission::isCanCreateEnv() const
{
    return canCreateEnv_;
}

void AppPermission::setCanCreateEnv(bool value)
{
    canCreateEnv_ = value;
    canCreateEnvIsSet_ = true;
}

bool AppPermission::canCreateEnvIsSet() const
{
    return canCreateEnvIsSet_;
}

void AppPermission::unsetcanCreateEnv()
{
    canCreateEnvIsSet_ = false;
}

bool AppPermission::isCanDisable() const
{
    return canDisable_;
}

void AppPermission::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool AppPermission::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void AppPermission::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

}
}
}
}
}



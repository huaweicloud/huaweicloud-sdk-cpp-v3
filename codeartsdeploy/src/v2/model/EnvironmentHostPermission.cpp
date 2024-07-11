

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentHostPermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentHostPermission::EnvironmentHostPermission()
{
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canDeploy_ = false;
    canDeployIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canManage_ = false;
    canManageIsSet_ = false;
    canView_ = false;
    canViewIsSet_ = false;
}

EnvironmentHostPermission::~EnvironmentHostPermission() = default;

void EnvironmentHostPermission::validate()
{
}

web::json::value EnvironmentHostPermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canDeployIsSet_) {
        val[utility::conversions::to_string_t("can_deploy")] = ModelBase::toJson(canDeploy_);
    }
    if(canEditIsSet_) {
        val[utility::conversions::to_string_t("can_edit")] = ModelBase::toJson(canEdit_);
    }
    if(canManageIsSet_) {
        val[utility::conversions::to_string_t("can_manage")] = ModelBase::toJson(canManage_);
    }
    if(canViewIsSet_) {
        val[utility::conversions::to_string_t("can_view")] = ModelBase::toJson(canView_);
    }

    return val;
}
bool EnvironmentHostPermission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_deploy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_deploy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDeploy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_edit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_edit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEdit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanView(refVal);
        }
    }
    return ok;
}


bool EnvironmentHostPermission::isCanDelete() const
{
    return canDelete_;
}

void EnvironmentHostPermission::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool EnvironmentHostPermission::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void EnvironmentHostPermission::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool EnvironmentHostPermission::isCanDeploy() const
{
    return canDeploy_;
}

void EnvironmentHostPermission::setCanDeploy(bool value)
{
    canDeploy_ = value;
    canDeployIsSet_ = true;
}

bool EnvironmentHostPermission::canDeployIsSet() const
{
    return canDeployIsSet_;
}

void EnvironmentHostPermission::unsetcanDeploy()
{
    canDeployIsSet_ = false;
}

bool EnvironmentHostPermission::isCanEdit() const
{
    return canEdit_;
}

void EnvironmentHostPermission::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool EnvironmentHostPermission::canEditIsSet() const
{
    return canEditIsSet_;
}

void EnvironmentHostPermission::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool EnvironmentHostPermission::isCanManage() const
{
    return canManage_;
}

void EnvironmentHostPermission::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool EnvironmentHostPermission::canManageIsSet() const
{
    return canManageIsSet_;
}

void EnvironmentHostPermission::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool EnvironmentHostPermission::isCanView() const
{
    return canView_;
}

void EnvironmentHostPermission::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool EnvironmentHostPermission::canViewIsSet() const
{
    return canViewIsSet_;
}

void EnvironmentHostPermission::unsetcanView()
{
    canViewIsSet_ = false;
}

}
}
}
}
}



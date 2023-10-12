

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentPermissionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentPermissionDetail::EnvironmentPermissionDetail()
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

EnvironmentPermissionDetail::~EnvironmentPermissionDetail() = default;

void EnvironmentPermissionDetail::validate()
{
}

web::json::value EnvironmentPermissionDetail::toJson() const
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
bool EnvironmentPermissionDetail::fromJson(const web::json::value& val)
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


bool EnvironmentPermissionDetail::isCanDelete() const
{
    return canDelete_;
}

void EnvironmentPermissionDetail::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool EnvironmentPermissionDetail::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void EnvironmentPermissionDetail::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool EnvironmentPermissionDetail::isCanDeploy() const
{
    return canDeploy_;
}

void EnvironmentPermissionDetail::setCanDeploy(bool value)
{
    canDeploy_ = value;
    canDeployIsSet_ = true;
}

bool EnvironmentPermissionDetail::canDeployIsSet() const
{
    return canDeployIsSet_;
}

void EnvironmentPermissionDetail::unsetcanDeploy()
{
    canDeployIsSet_ = false;
}

bool EnvironmentPermissionDetail::isCanEdit() const
{
    return canEdit_;
}

void EnvironmentPermissionDetail::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool EnvironmentPermissionDetail::canEditIsSet() const
{
    return canEditIsSet_;
}

void EnvironmentPermissionDetail::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool EnvironmentPermissionDetail::isCanManage() const
{
    return canManage_;
}

void EnvironmentPermissionDetail::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool EnvironmentPermissionDetail::canManageIsSet() const
{
    return canManageIsSet_;
}

void EnvironmentPermissionDetail::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool EnvironmentPermissionDetail::isCanView() const
{
    return canView_;
}

void EnvironmentPermissionDetail::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool EnvironmentPermissionDetail::canViewIsSet() const
{
    return canViewIsSet_;
}

void EnvironmentPermissionDetail::unsetcanView()
{
    canViewIsSet_ = false;
}

}
}
}
}
}



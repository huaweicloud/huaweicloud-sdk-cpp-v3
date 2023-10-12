

#include "huaweicloud/codeartsdeploy/v2/model/PermissionClusterDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




PermissionClusterDetail::PermissionClusterDetail()
{
    canView_ = false;
    canViewIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canAddHost_ = false;
    canAddHostIsSet_ = false;
    canManage_ = false;
    canManageIsSet_ = false;
}

PermissionClusterDetail::~PermissionClusterDetail() = default;

void PermissionClusterDetail::validate()
{
}

web::json::value PermissionClusterDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canViewIsSet_) {
        val[utility::conversions::to_string_t("can_view")] = ModelBase::toJson(canView_);
    }
    if(canEditIsSet_) {
        val[utility::conversions::to_string_t("can_edit")] = ModelBase::toJson(canEdit_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canAddHostIsSet_) {
        val[utility::conversions::to_string_t("can_add_host")] = ModelBase::toJson(canAddHost_);
    }
    if(canManageIsSet_) {
        val[utility::conversions::to_string_t("can_manage")] = ModelBase::toJson(canManage_);
    }

    return val;
}
bool PermissionClusterDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanView(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_add_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_add_host"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanAddHost(refVal);
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
    return ok;
}


bool PermissionClusterDetail::isCanView() const
{
    return canView_;
}

void PermissionClusterDetail::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool PermissionClusterDetail::canViewIsSet() const
{
    return canViewIsSet_;
}

void PermissionClusterDetail::unsetcanView()
{
    canViewIsSet_ = false;
}

bool PermissionClusterDetail::isCanEdit() const
{
    return canEdit_;
}

void PermissionClusterDetail::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool PermissionClusterDetail::canEditIsSet() const
{
    return canEditIsSet_;
}

void PermissionClusterDetail::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool PermissionClusterDetail::isCanDelete() const
{
    return canDelete_;
}

void PermissionClusterDetail::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool PermissionClusterDetail::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void PermissionClusterDetail::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool PermissionClusterDetail::isCanAddHost() const
{
    return canAddHost_;
}

void PermissionClusterDetail::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool PermissionClusterDetail::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void PermissionClusterDetail::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool PermissionClusterDetail::isCanManage() const
{
    return canManage_;
}

void PermissionClusterDetail::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool PermissionClusterDetail::canManageIsSet() const
{
    return canManageIsSet_;
}

void PermissionClusterDetail::unsetcanManage()
{
    canManageIsSet_ = false;
}

}
}
}
}
}



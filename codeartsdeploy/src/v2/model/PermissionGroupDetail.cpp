

#include "huaweicloud/codeartsdeploy/v2/model/PermissionGroupDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




PermissionGroupDetail::PermissionGroupDetail()
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

PermissionGroupDetail::~PermissionGroupDetail() = default;

void PermissionGroupDetail::validate()
{
}

web::json::value PermissionGroupDetail::toJson() const
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

bool PermissionGroupDetail::fromJson(const web::json::value& val)
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

bool PermissionGroupDetail::isCanView() const
{
    return canView_;
}

void PermissionGroupDetail::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool PermissionGroupDetail::canViewIsSet() const
{
    return canViewIsSet_;
}

void PermissionGroupDetail::unsetcanView()
{
    canViewIsSet_ = false;
}

bool PermissionGroupDetail::isCanEdit() const
{
    return canEdit_;
}

void PermissionGroupDetail::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool PermissionGroupDetail::canEditIsSet() const
{
    return canEditIsSet_;
}

void PermissionGroupDetail::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool PermissionGroupDetail::isCanDelete() const
{
    return canDelete_;
}

void PermissionGroupDetail::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool PermissionGroupDetail::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void PermissionGroupDetail::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool PermissionGroupDetail::isCanAddHost() const
{
    return canAddHost_;
}

void PermissionGroupDetail::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool PermissionGroupDetail::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void PermissionGroupDetail::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool PermissionGroupDetail::isCanManage() const
{
    return canManage_;
}

void PermissionGroupDetail::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool PermissionGroupDetail::canManageIsSet() const
{
    return canManageIsSet_;
}

void PermissionGroupDetail::unsetcanManage()
{
    canManageIsSet_ = false;
}

}
}
}
}
}



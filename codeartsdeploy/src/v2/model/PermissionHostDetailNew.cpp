

#include "huaweicloud/codeartsdeploy/v2/model/PermissionHostDetailNew.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




PermissionHostDetailNew::PermissionHostDetailNew()
{
    canView_ = false;
    canViewIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canAddHost_ = false;
    canAddHostIsSet_ = false;
    canCopy_ = false;
    canCopyIsSet_ = false;
}

PermissionHostDetailNew::~PermissionHostDetailNew() = default;

void PermissionHostDetailNew::validate()
{
}

web::json::value PermissionHostDetailNew::toJson() const
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
    if(canCopyIsSet_) {
        val[utility::conversions::to_string_t("can_copy")] = ModelBase::toJson(canCopy_);
    }

    return val;
}

bool PermissionHostDetailNew::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("can_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCopy(refVal);
        }
    }
    return ok;
}

bool PermissionHostDetailNew::isCanView() const
{
    return canView_;
}

void PermissionHostDetailNew::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool PermissionHostDetailNew::canViewIsSet() const
{
    return canViewIsSet_;
}

void PermissionHostDetailNew::unsetcanView()
{
    canViewIsSet_ = false;
}

bool PermissionHostDetailNew::isCanEdit() const
{
    return canEdit_;
}

void PermissionHostDetailNew::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool PermissionHostDetailNew::canEditIsSet() const
{
    return canEditIsSet_;
}

void PermissionHostDetailNew::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool PermissionHostDetailNew::isCanDelete() const
{
    return canDelete_;
}

void PermissionHostDetailNew::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool PermissionHostDetailNew::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void PermissionHostDetailNew::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool PermissionHostDetailNew::isCanAddHost() const
{
    return canAddHost_;
}

void PermissionHostDetailNew::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool PermissionHostDetailNew::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void PermissionHostDetailNew::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool PermissionHostDetailNew::isCanCopy() const
{
    return canCopy_;
}

void PermissionHostDetailNew::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool PermissionHostDetailNew::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void PermissionHostDetailNew::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

}
}
}
}
}



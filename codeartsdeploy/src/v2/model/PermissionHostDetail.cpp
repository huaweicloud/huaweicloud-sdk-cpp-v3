

#include "huaweicloud/codeartsdeploy/v2/model/PermissionHostDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




PermissionHostDetail::PermissionHostDetail()
{
    canView_ = false;
    canViewIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canAddHost_ = false;
    canAddHostIsSet_ = false;
    canConnectionTest_ = false;
    canConnectionTestIsSet_ = false;
}

PermissionHostDetail::~PermissionHostDetail() = default;

void PermissionHostDetail::validate()
{
}

web::json::value PermissionHostDetail::toJson() const
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
    if(canConnectionTestIsSet_) {
        val[utility::conversions::to_string_t("can_connection_test")] = ModelBase::toJson(canConnectionTest_);
    }

    return val;
}
bool PermissionHostDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("can_connection_test"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_connection_test"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanConnectionTest(refVal);
        }
    }
    return ok;
}


bool PermissionHostDetail::isCanView() const
{
    return canView_;
}

void PermissionHostDetail::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool PermissionHostDetail::canViewIsSet() const
{
    return canViewIsSet_;
}

void PermissionHostDetail::unsetcanView()
{
    canViewIsSet_ = false;
}

bool PermissionHostDetail::isCanEdit() const
{
    return canEdit_;
}

void PermissionHostDetail::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool PermissionHostDetail::canEditIsSet() const
{
    return canEditIsSet_;
}

void PermissionHostDetail::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool PermissionHostDetail::isCanDelete() const
{
    return canDelete_;
}

void PermissionHostDetail::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool PermissionHostDetail::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void PermissionHostDetail::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool PermissionHostDetail::isCanAddHost() const
{
    return canAddHost_;
}

void PermissionHostDetail::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool PermissionHostDetail::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void PermissionHostDetail::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool PermissionHostDetail::isCanConnectionTest() const
{
    return canConnectionTest_;
}

void PermissionHostDetail::setCanConnectionTest(bool value)
{
    canConnectionTest_ = value;
    canConnectionTestIsSet_ = true;
}

bool PermissionHostDetail::canConnectionTestIsSet() const
{
    return canConnectionTestIsSet_;
}

void PermissionHostDetail::unsetcanConnectionTest()
{
    canConnectionTestIsSet_ = false;
}

}
}
}
}
}



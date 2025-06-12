

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultProjectPermissionResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultProjectPermissionResponseBody_result::ShowDefaultProjectPermissionResponseBody_result()
{
    roleId_ = 0;
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    isManager_ = false;
    isManagerIsSet_ = false;
    isModify_ = false;
    isModifyIsSet_ = false;
    isView_ = false;
    isViewIsSet_ = false;
}

ShowDefaultProjectPermissionResponseBody_result::~ShowDefaultProjectPermissionResponseBody_result() = default;

void ShowDefaultProjectPermissionResponseBody_result::validate()
{
}

web::json::value ShowDefaultProjectPermissionResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(isCopyIsSet_) {
        val[utility::conversions::to_string_t("is_copy")] = ModelBase::toJson(isCopy_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(isManagerIsSet_) {
        val[utility::conversions::to_string_t("is_manager")] = ModelBase::toJson(isManager_);
    }
    if(isModifyIsSet_) {
        val[utility::conversions::to_string_t("is_modify")] = ModelBase::toJson(isModify_);
    }
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
    }

    return val;
}
bool ShowDefaultProjectPermissionResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("is_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_forbidden"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForbidden(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_manager"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsManager(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
        }
    }
    return ok;
}


int32_t ShowDefaultProjectPermissionResponseBody_result::getRoleId() const
{
    return roleId_;
}

void ShowDefaultProjectPermissionResponseBody_result::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ShowDefaultProjectPermissionResponseBody_result::getRoleName() const
{
    return roleName_;
}

void ShowDefaultProjectPermissionResponseBody_result::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetroleName()
{
    roleNameIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsCopy() const
{
    return isCopy_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsDelete() const
{
    return isDelete_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsExecute() const
{
    return isExecute_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsForbidden() const
{
    return isForbidden_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsManager() const
{
    return isManager_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsManager(bool value)
{
    isManager_ = value;
    isManagerIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isManagerIsSet() const
{
    return isManagerIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisManager()
{
    isManagerIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsModify() const
{
    return isModify_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool ShowDefaultProjectPermissionResponseBody_result::isIsView() const
{
    return isView_;
}

void ShowDefaultProjectPermissionResponseBody_result::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponseBody_result::isViewIsSet() const
{
    return isViewIsSet_;
}

void ShowDefaultProjectPermissionResponseBody_result::unsetisView()
{
    isViewIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsbuild/v3/model/JobRolePermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobRolePermission::JobRolePermission()
{
    id_ = 0;
    idIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    devucRoleId_ = "";
    devucRoleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    isModify_ = false;
    isModifyIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
    isView_ = false;
    isViewIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    isManager_ = false;
    isManagerIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

JobRolePermission::~JobRolePermission() = default;

void JobRolePermission::validate()
{
}

web::json::value JobRolePermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(devucRoleIdIsSet_) {
        val[utility::conversions::to_string_t("devuc_role_id")] = ModelBase::toJson(devucRoleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(isModifyIsSet_) {
        val[utility::conversions::to_string_t("is_modify")] = ModelBase::toJson(isModify_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(isCopyIsSet_) {
        val[utility::conversions::to_string_t("is_copy")] = ModelBase::toJson(isCopy_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(isManagerIsSet_) {
        val[utility::conversions::to_string_t("is_manager")] = ModelBase::toJson(isManager_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool JobRolePermission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devuc_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devuc_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevucRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModify(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCopy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t JobRolePermission::getId() const
{
    return id_;
}

void JobRolePermission::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobRolePermission::idIsSet() const
{
    return idIsSet_;
}

void JobRolePermission::unsetid()
{
    idIsSet_ = false;
}

int32_t JobRolePermission::getRoleId() const
{
    return roleId_;
}

void JobRolePermission::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool JobRolePermission::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void JobRolePermission::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string JobRolePermission::getDevucRoleId() const
{
    return devucRoleId_;
}

void JobRolePermission::setDevucRoleId(const std::string& value)
{
    devucRoleId_ = value;
    devucRoleIdIsSet_ = true;
}

bool JobRolePermission::devucRoleIdIsSet() const
{
    return devucRoleIdIsSet_;
}

void JobRolePermission::unsetdevucRoleId()
{
    devucRoleIdIsSet_ = false;
}

std::string JobRolePermission::getRoleName() const
{
    return roleName_;
}

void JobRolePermission::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool JobRolePermission::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void JobRolePermission::unsetroleName()
{
    roleNameIsSet_ = false;
}

bool JobRolePermission::isIsModify() const
{
    return isModify_;
}

void JobRolePermission::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool JobRolePermission::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void JobRolePermission::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool JobRolePermission::isIsDelete() const
{
    return isDelete_;
}

void JobRolePermission::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool JobRolePermission::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void JobRolePermission::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool JobRolePermission::isIsView() const
{
    return isView_;
}

void JobRolePermission::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool JobRolePermission::isViewIsSet() const
{
    return isViewIsSet_;
}

void JobRolePermission::unsetisView()
{
    isViewIsSet_ = false;
}

bool JobRolePermission::isIsExecute() const
{
    return isExecute_;
}

void JobRolePermission::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool JobRolePermission::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void JobRolePermission::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool JobRolePermission::isIsCopy() const
{
    return isCopy_;
}

void JobRolePermission::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool JobRolePermission::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void JobRolePermission::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool JobRolePermission::isIsForbidden() const
{
    return isForbidden_;
}

void JobRolePermission::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool JobRolePermission::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void JobRolePermission::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

bool JobRolePermission::isIsManager() const
{
    return isManager_;
}

void JobRolePermission::setIsManager(bool value)
{
    isManager_ = value;
    isManagerIsSet_ = true;
}

bool JobRolePermission::isManagerIsSet() const
{
    return isManagerIsSet_;
}

void JobRolePermission::unsetisManager()
{
    isManagerIsSet_ = false;
}

int32_t JobRolePermission::getCount() const
{
    return count_;
}

void JobRolePermission::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool JobRolePermission::countIsSet() const
{
    return countIsSet_;
}

void JobRolePermission::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}



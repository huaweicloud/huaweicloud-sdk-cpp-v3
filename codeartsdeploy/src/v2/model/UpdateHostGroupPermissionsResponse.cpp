

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostGroupPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostGroupPermissionsResponse::UpdateHostGroupPermissionsResponse()
{
    region_ = "";
    regionIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    devucRoleIdListIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
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
    canCopy_ = false;
    canCopyIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    roleType_ = "";
    roleTypeIsSet_ = false;
}

UpdateHostGroupPermissionsResponse::~UpdateHostGroupPermissionsResponse() = default;

void UpdateHostGroupPermissionsResponse::validate()
{
}

web::json::value UpdateHostGroupPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(devucRoleIdListIsSet_) {
        val[utility::conversions::to_string_t("devuc_role_id_list")] = ModelBase::toJson(devucRoleIdList_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
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
    if(canCopyIsSet_) {
        val[utility::conversions::to_string_t("can_copy")] = ModelBase::toJson(canCopy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }

    return val;
}
bool UpdateHostGroupPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("devuc_role_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devuc_role_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevucRoleIdList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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


std::string UpdateHostGroupPermissionsResponse::getRegion() const
{
    return region_;
}

void UpdateHostGroupPermissionsResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string UpdateHostGroupPermissionsResponse::getRoleId() const
{
    return roleId_;
}

void UpdateHostGroupPermissionsResponse::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::vector<std::string>& UpdateHostGroupPermissionsResponse::getDevucRoleIdList()
{
    return devucRoleIdList_;
}

void UpdateHostGroupPermissionsResponse::setDevucRoleIdList(const std::vector<std::string>& value)
{
    devucRoleIdList_ = value;
    devucRoleIdListIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::devucRoleIdListIsSet() const
{
    return devucRoleIdListIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetdevucRoleIdList()
{
    devucRoleIdListIsSet_ = false;
}

std::string UpdateHostGroupPermissionsResponse::getName() const
{
    return name_;
}

void UpdateHostGroupPermissionsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateHostGroupPermissionsResponse::getGroupId() const
{
    return groupId_;
}

void UpdateHostGroupPermissionsResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanView() const
{
    return canView_;
}

void UpdateHostGroupPermissionsResponse::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canViewIsSet() const
{
    return canViewIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanView()
{
    canViewIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanEdit() const
{
    return canEdit_;
}

void UpdateHostGroupPermissionsResponse::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canEditIsSet() const
{
    return canEditIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanDelete() const
{
    return canDelete_;
}

void UpdateHostGroupPermissionsResponse::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanAddHost() const
{
    return canAddHost_;
}

void UpdateHostGroupPermissionsResponse::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanManage() const
{
    return canManage_;
}

void UpdateHostGroupPermissionsResponse::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canManageIsSet() const
{
    return canManageIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool UpdateHostGroupPermissionsResponse::isCanCopy() const
{
    return canCopy_;
}

void UpdateHostGroupPermissionsResponse::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

utility::datetime UpdateHostGroupPermissionsResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateHostGroupPermissionsResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime UpdateHostGroupPermissionsResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateHostGroupPermissionsResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateHostGroupPermissionsResponse::getRoleType() const
{
    return roleType_;
}

void UpdateHostGroupPermissionsResponse::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool UpdateHostGroupPermissionsResponse::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void UpdateHostGroupPermissionsResponse::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}



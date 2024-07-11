

#include "huaweicloud/codeartsdeploy/v2/model/DevUcClusterPermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DevUcClusterPermission::DevUcClusterPermission()
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

DevUcClusterPermission::~DevUcClusterPermission() = default;

void DevUcClusterPermission::validate()
{
}

web::json::value DevUcClusterPermission::toJson() const
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
bool DevUcClusterPermission::fromJson(const web::json::value& val)
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


std::string DevUcClusterPermission::getRegion() const
{
    return region_;
}

void DevUcClusterPermission::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DevUcClusterPermission::regionIsSet() const
{
    return regionIsSet_;
}

void DevUcClusterPermission::unsetregion()
{
    regionIsSet_ = false;
}

std::string DevUcClusterPermission::getRoleId() const
{
    return roleId_;
}

void DevUcClusterPermission::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool DevUcClusterPermission::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void DevUcClusterPermission::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::vector<std::string>& DevUcClusterPermission::getDevucRoleIdList()
{
    return devucRoleIdList_;
}

void DevUcClusterPermission::setDevucRoleIdList(const std::vector<std::string>& value)
{
    devucRoleIdList_ = value;
    devucRoleIdListIsSet_ = true;
}

bool DevUcClusterPermission::devucRoleIdListIsSet() const
{
    return devucRoleIdListIsSet_;
}

void DevUcClusterPermission::unsetdevucRoleIdList()
{
    devucRoleIdListIsSet_ = false;
}

std::string DevUcClusterPermission::getName() const
{
    return name_;
}

void DevUcClusterPermission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DevUcClusterPermission::nameIsSet() const
{
    return nameIsSet_;
}

void DevUcClusterPermission::unsetname()
{
    nameIsSet_ = false;
}

std::string DevUcClusterPermission::getGroupId() const
{
    return groupId_;
}

void DevUcClusterPermission::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DevUcClusterPermission::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DevUcClusterPermission::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool DevUcClusterPermission::isCanView() const
{
    return canView_;
}

void DevUcClusterPermission::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool DevUcClusterPermission::canViewIsSet() const
{
    return canViewIsSet_;
}

void DevUcClusterPermission::unsetcanView()
{
    canViewIsSet_ = false;
}

bool DevUcClusterPermission::isCanEdit() const
{
    return canEdit_;
}

void DevUcClusterPermission::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool DevUcClusterPermission::canEditIsSet() const
{
    return canEditIsSet_;
}

void DevUcClusterPermission::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool DevUcClusterPermission::isCanDelete() const
{
    return canDelete_;
}

void DevUcClusterPermission::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool DevUcClusterPermission::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void DevUcClusterPermission::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool DevUcClusterPermission::isCanAddHost() const
{
    return canAddHost_;
}

void DevUcClusterPermission::setCanAddHost(bool value)
{
    canAddHost_ = value;
    canAddHostIsSet_ = true;
}

bool DevUcClusterPermission::canAddHostIsSet() const
{
    return canAddHostIsSet_;
}

void DevUcClusterPermission::unsetcanAddHost()
{
    canAddHostIsSet_ = false;
}

bool DevUcClusterPermission::isCanManage() const
{
    return canManage_;
}

void DevUcClusterPermission::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool DevUcClusterPermission::canManageIsSet() const
{
    return canManageIsSet_;
}

void DevUcClusterPermission::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool DevUcClusterPermission::isCanCopy() const
{
    return canCopy_;
}

void DevUcClusterPermission::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool DevUcClusterPermission::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void DevUcClusterPermission::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

utility::datetime DevUcClusterPermission::getCreateTime() const
{
    return createTime_;
}

void DevUcClusterPermission::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DevUcClusterPermission::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DevUcClusterPermission::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime DevUcClusterPermission::getUpdateTime() const
{
    return updateTime_;
}

void DevUcClusterPermission::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DevUcClusterPermission::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DevUcClusterPermission::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string DevUcClusterPermission::getRoleType() const
{
    return roleType_;
}

void DevUcClusterPermission::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool DevUcClusterPermission::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void DevUcClusterPermission::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}



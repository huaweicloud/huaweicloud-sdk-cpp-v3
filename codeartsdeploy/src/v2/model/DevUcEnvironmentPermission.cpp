

#include "huaweicloud/codeartsdeploy/v2/model/DevUcEnvironmentPermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DevUcEnvironmentPermission::DevUcEnvironmentPermission()
{
    id_ = 0;
    idIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    devucRoleIdListIsSet_ = false;
    roleType_ = "";
    roleTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    canView_ = false;
    canViewIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canDeploy_ = false;
    canDeployIsSet_ = false;
    canManage_ = false;
    canManageIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

DevUcEnvironmentPermission::~DevUcEnvironmentPermission() = default;

void DevUcEnvironmentPermission::validate()
{
}

web::json::value DevUcEnvironmentPermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(devucRoleIdListIsSet_) {
        val[utility::conversions::to_string_t("devuc_role_id_list")] = ModelBase::toJson(devucRoleIdList_);
    }
    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
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
    if(canDeployIsSet_) {
        val[utility::conversions::to_string_t("can_deploy")] = ModelBase::toJson(canDeploy_);
    }
    if(canManageIsSet_) {
        val[utility::conversions::to_string_t("can_manage")] = ModelBase::toJson(canManage_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool DevUcEnvironmentPermission::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_deploy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_deploy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDeploy(refVal);
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
    return ok;
}


int32_t DevUcEnvironmentPermission::getId() const
{
    return id_;
}

void DevUcEnvironmentPermission::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DevUcEnvironmentPermission::idIsSet() const
{
    return idIsSet_;
}

void DevUcEnvironmentPermission::unsetid()
{
    idIsSet_ = false;
}

std::string DevUcEnvironmentPermission::getRoleId() const
{
    return roleId_;
}

void DevUcEnvironmentPermission::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool DevUcEnvironmentPermission::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void DevUcEnvironmentPermission::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::vector<std::string>& DevUcEnvironmentPermission::getDevucRoleIdList()
{
    return devucRoleIdList_;
}

void DevUcEnvironmentPermission::setDevucRoleIdList(const std::vector<std::string>& value)
{
    devucRoleIdList_ = value;
    devucRoleIdListIsSet_ = true;
}

bool DevUcEnvironmentPermission::devucRoleIdListIsSet() const
{
    return devucRoleIdListIsSet_;
}

void DevUcEnvironmentPermission::unsetdevucRoleIdList()
{
    devucRoleIdListIsSet_ = false;
}

std::string DevUcEnvironmentPermission::getRoleType() const
{
    return roleType_;
}

void DevUcEnvironmentPermission::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool DevUcEnvironmentPermission::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void DevUcEnvironmentPermission::unsetroleType()
{
    roleTypeIsSet_ = false;
}

std::string DevUcEnvironmentPermission::getName() const
{
    return name_;
}

void DevUcEnvironmentPermission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DevUcEnvironmentPermission::nameIsSet() const
{
    return nameIsSet_;
}

void DevUcEnvironmentPermission::unsetname()
{
    nameIsSet_ = false;
}

std::string DevUcEnvironmentPermission::getRegion() const
{
    return region_;
}

void DevUcEnvironmentPermission::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DevUcEnvironmentPermission::regionIsSet() const
{
    return regionIsSet_;
}

void DevUcEnvironmentPermission::unsetregion()
{
    regionIsSet_ = false;
}

std::string DevUcEnvironmentPermission::getEnvironmentId() const
{
    return environmentId_;
}

void DevUcEnvironmentPermission::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool DevUcEnvironmentPermission::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void DevUcEnvironmentPermission::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

bool DevUcEnvironmentPermission::isCanView() const
{
    return canView_;
}

void DevUcEnvironmentPermission::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool DevUcEnvironmentPermission::canViewIsSet() const
{
    return canViewIsSet_;
}

void DevUcEnvironmentPermission::unsetcanView()
{
    canViewIsSet_ = false;
}

bool DevUcEnvironmentPermission::isCanEdit() const
{
    return canEdit_;
}

void DevUcEnvironmentPermission::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool DevUcEnvironmentPermission::canEditIsSet() const
{
    return canEditIsSet_;
}

void DevUcEnvironmentPermission::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool DevUcEnvironmentPermission::isCanDelete() const
{
    return canDelete_;
}

void DevUcEnvironmentPermission::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool DevUcEnvironmentPermission::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void DevUcEnvironmentPermission::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool DevUcEnvironmentPermission::isCanDeploy() const
{
    return canDeploy_;
}

void DevUcEnvironmentPermission::setCanDeploy(bool value)
{
    canDeploy_ = value;
    canDeployIsSet_ = true;
}

bool DevUcEnvironmentPermission::canDeployIsSet() const
{
    return canDeployIsSet_;
}

void DevUcEnvironmentPermission::unsetcanDeploy()
{
    canDeployIsSet_ = false;
}

bool DevUcEnvironmentPermission::isCanManage() const
{
    return canManage_;
}

void DevUcEnvironmentPermission::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool DevUcEnvironmentPermission::canManageIsSet() const
{
    return canManageIsSet_;
}

void DevUcEnvironmentPermission::unsetcanManage()
{
    canManageIsSet_ = false;
}

utility::datetime DevUcEnvironmentPermission::getCreateTime() const
{
    return createTime_;
}

void DevUcEnvironmentPermission::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DevUcEnvironmentPermission::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DevUcEnvironmentPermission::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime DevUcEnvironmentPermission::getUpdateTime() const
{
    return updateTime_;
}

void DevUcEnvironmentPermission::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DevUcEnvironmentPermission::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DevUcEnvironmentPermission::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



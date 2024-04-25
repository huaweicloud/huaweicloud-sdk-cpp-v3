

#include "huaweicloud/codeartsdeploy/v2/model/AppDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppDetailInfo::AppDetailInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isDisable_ = false;
    isDisableIsSet_ = false;
    createType_ = "";
    createTypeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    isCare_ = false;
    isCareIsSet_ = false;
    canModify_ = false;
    canModifyIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canView_ = false;
    canViewIsSet_ = false;
    canExecute_ = false;
    canExecuteIsSet_ = false;
    canCopy_ = false;
    canCopyIsSet_ = false;
    canManage_ = false;
    canManageIsSet_ = false;
    canCreateEnv_ = false;
    canCreateEnvIsSet_ = false;
    canDisable_ = false;
    canDisableIsSet_ = false;
    ownerTenantId_ = "";
    ownerTenantIdIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    createTenantId_ = "";
    createTenantIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    permissionLevel_ = "";
    permissionLevelIsSet_ = false;
    arrangeInfosIsSet_ = false;
}

AppDetailInfo::~AppDetailInfo() = default;

void AppDetailInfo::validate()
{
}

web::json::value AppDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
    }
    if(createTypeIsSet_) {
        val[utility::conversions::to_string_t("create_type")] = ModelBase::toJson(createType_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(isCareIsSet_) {
        val[utility::conversions::to_string_t("is_care")] = ModelBase::toJson(isCare_);
    }
    if(canModifyIsSet_) {
        val[utility::conversions::to_string_t("can_modify")] = ModelBase::toJson(canModify_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canViewIsSet_) {
        val[utility::conversions::to_string_t("can_view")] = ModelBase::toJson(canView_);
    }
    if(canExecuteIsSet_) {
        val[utility::conversions::to_string_t("can_execute")] = ModelBase::toJson(canExecute_);
    }
    if(canCopyIsSet_) {
        val[utility::conversions::to_string_t("can_copy")] = ModelBase::toJson(canCopy_);
    }
    if(canManageIsSet_) {
        val[utility::conversions::to_string_t("can_manage")] = ModelBase::toJson(canManage_);
    }
    if(canCreateEnvIsSet_) {
        val[utility::conversions::to_string_t("can_create_env")] = ModelBase::toJson(canCreateEnv_);
    }
    if(canDisableIsSet_) {
        val[utility::conversions::to_string_t("can_disable")] = ModelBase::toJson(canDisable_);
    }
    if(ownerTenantIdIsSet_) {
        val[utility::conversions::to_string_t("owner_tenant_id")] = ModelBase::toJson(ownerTenantId_);
    }
    if(createUserIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_id")] = ModelBase::toJson(createUserId_);
    }
    if(createTenantIdIsSet_) {
        val[utility::conversions::to_string_t("create_tenant_id")] = ModelBase::toJson(createTenantId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(permissionLevelIsSet_) {
        val[utility::conversions::to_string_t("permission_level")] = ModelBase::toJson(permissionLevel_);
    }
    if(arrangeInfosIsSet_) {
        val[utility::conversions::to_string_t("arrange_infos")] = ModelBase::toJson(arrangeInfos_);
    }

    return val;
}
bool AppDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_care"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_care"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCare(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanModify(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanExecute(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_manage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_manage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanManage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_create_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_create_env"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCreateEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrange_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrange_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskV2Info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrangeInfos(refVal);
        }
    }
    return ok;
}


std::string AppDetailInfo::getId() const
{
    return id_;
}

void AppDetailInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AppDetailInfo::idIsSet() const
{
    return idIsSet_;
}

void AppDetailInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AppDetailInfo::getName() const
{
    return name_;
}

void AppDetailInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AppDetailInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AppDetailInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AppDetailInfo::getRegion() const
{
    return region_;
}

void AppDetailInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AppDetailInfo::regionIsSet() const
{
    return regionIsSet_;
}

void AppDetailInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string AppDetailInfo::getDescription() const
{
    return description_;
}

void AppDetailInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AppDetailInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AppDetailInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool AppDetailInfo::isIsDisable() const
{
    return isDisable_;
}

void AppDetailInfo::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool AppDetailInfo::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void AppDetailInfo::unsetisDisable()
{
    isDisableIsSet_ = false;
}

std::string AppDetailInfo::getCreateType() const
{
    return createType_;
}

void AppDetailInfo::setCreateType(const std::string& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool AppDetailInfo::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void AppDetailInfo::unsetcreateType()
{
    createTypeIsSet_ = false;
}

std::string AppDetailInfo::getProjectId() const
{
    return projectId_;
}

void AppDetailInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AppDetailInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AppDetailInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AppDetailInfo::getProjectName() const
{
    return projectName_;
}

void AppDetailInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool AppDetailInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void AppDetailInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string AppDetailInfo::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void AppDetailInfo::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool AppDetailInfo::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void AppDetailInfo::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

bool AppDetailInfo::isIsCare() const
{
    return isCare_;
}

void AppDetailInfo::setIsCare(bool value)
{
    isCare_ = value;
    isCareIsSet_ = true;
}

bool AppDetailInfo::isCareIsSet() const
{
    return isCareIsSet_;
}

void AppDetailInfo::unsetisCare()
{
    isCareIsSet_ = false;
}

bool AppDetailInfo::isCanModify() const
{
    return canModify_;
}

void AppDetailInfo::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool AppDetailInfo::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void AppDetailInfo::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool AppDetailInfo::isCanDelete() const
{
    return canDelete_;
}

void AppDetailInfo::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool AppDetailInfo::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void AppDetailInfo::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool AppDetailInfo::isCanView() const
{
    return canView_;
}

void AppDetailInfo::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool AppDetailInfo::canViewIsSet() const
{
    return canViewIsSet_;
}

void AppDetailInfo::unsetcanView()
{
    canViewIsSet_ = false;
}

bool AppDetailInfo::isCanExecute() const
{
    return canExecute_;
}

void AppDetailInfo::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool AppDetailInfo::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void AppDetailInfo::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool AppDetailInfo::isCanCopy() const
{
    return canCopy_;
}

void AppDetailInfo::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool AppDetailInfo::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void AppDetailInfo::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool AppDetailInfo::isCanManage() const
{
    return canManage_;
}

void AppDetailInfo::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool AppDetailInfo::canManageIsSet() const
{
    return canManageIsSet_;
}

void AppDetailInfo::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool AppDetailInfo::isCanCreateEnv() const
{
    return canCreateEnv_;
}

void AppDetailInfo::setCanCreateEnv(bool value)
{
    canCreateEnv_ = value;
    canCreateEnvIsSet_ = true;
}

bool AppDetailInfo::canCreateEnvIsSet() const
{
    return canCreateEnvIsSet_;
}

void AppDetailInfo::unsetcanCreateEnv()
{
    canCreateEnvIsSet_ = false;
}

bool AppDetailInfo::isCanDisable() const
{
    return canDisable_;
}

void AppDetailInfo::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool AppDetailInfo::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void AppDetailInfo::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

std::string AppDetailInfo::getOwnerTenantId() const
{
    return ownerTenantId_;
}

void AppDetailInfo::setOwnerTenantId(const std::string& value)
{
    ownerTenantId_ = value;
    ownerTenantIdIsSet_ = true;
}

bool AppDetailInfo::ownerTenantIdIsSet() const
{
    return ownerTenantIdIsSet_;
}

void AppDetailInfo::unsetownerTenantId()
{
    ownerTenantIdIsSet_ = false;
}

std::string AppDetailInfo::getCreateUserId() const
{
    return createUserId_;
}

void AppDetailInfo::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool AppDetailInfo::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void AppDetailInfo::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string AppDetailInfo::getCreateTenantId() const
{
    return createTenantId_;
}

void AppDetailInfo::setCreateTenantId(const std::string& value)
{
    createTenantId_ = value;
    createTenantIdIsSet_ = true;
}

bool AppDetailInfo::createTenantIdIsSet() const
{
    return createTenantIdIsSet_;
}

void AppDetailInfo::unsetcreateTenantId()
{
    createTenantIdIsSet_ = false;
}

std::string AppDetailInfo::getCreateTime() const
{
    return createTime_;
}

void AppDetailInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AppDetailInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AppDetailInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AppDetailInfo::getUpdateTime() const
{
    return updateTime_;
}

void AppDetailInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AppDetailInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AppDetailInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AppDetailInfo::getPermissionLevel() const
{
    return permissionLevel_;
}

void AppDetailInfo::setPermissionLevel(const std::string& value)
{
    permissionLevel_ = value;
    permissionLevelIsSet_ = true;
}

bool AppDetailInfo::permissionLevelIsSet() const
{
    return permissionLevelIsSet_;
}

void AppDetailInfo::unsetpermissionLevel()
{
    permissionLevelIsSet_ = false;
}

std::vector<TaskV2Info>& AppDetailInfo::getArrangeInfos()
{
    return arrangeInfos_;
}

void AppDetailInfo::setArrangeInfos(const std::vector<TaskV2Info>& value)
{
    arrangeInfos_ = value;
    arrangeInfosIsSet_ = true;
}

bool AppDetailInfo::arrangeInfosIsSet() const
{
    return arrangeInfosIsSet_;
}

void AppDetailInfo::unsetarrangeInfos()
{
    arrangeInfosIsSet_ = false;
}

}
}
}
}
}



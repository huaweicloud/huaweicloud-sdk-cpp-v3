

#include "huaweicloud/codeartsdeploy/v2/model/TaskV2Info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskV2Info::TaskV2Info()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    stepsIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    deploySystem_ = "";
    deploySystemIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    isDefautPermission_ = false;
    isDefautPermissionIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
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
    appComponentListIsSet_ = false;
    releaseId_ = 0;
    releaseIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    isDisable_ = false;
    isDisableIsSet_ = false;
}

TaskV2Info::~TaskV2Info() = default;

void TaskV2Info::validate()
{
}

web::json::value TaskV2Info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(deploySystemIsSet_) {
        val[utility::conversions::to_string_t("deploy_system")] = ModelBase::toJson(deploySystem_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(isDefautPermissionIsSet_) {
        val[utility::conversions::to_string_t("is_defaut_permission")] = ModelBase::toJson(isDefautPermission_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
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
    if(appComponentListIsSet_) {
        val[utility::conversions::to_string_t("app_component_list")] = ModelBase::toJson(appComponentList_);
    }
    if(releaseIdIsSet_) {
        val[utility::conversions::to_string_t("release_id")] = ModelBase::toJson(releaseId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
    }

    return val;
}
bool TaskV2Info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Step> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploySystem(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_defaut_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_defaut_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefautPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_component_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_component_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AppComponentDao> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppComponentList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    return ok;
}


std::string TaskV2Info::getId() const
{
    return id_;
}

void TaskV2Info::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskV2Info::idIsSet() const
{
    return idIsSet_;
}

void TaskV2Info::unsetid()
{
    idIsSet_ = false;
}

std::string TaskV2Info::getName() const
{
    return name_;
}

void TaskV2Info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskV2Info::nameIsSet() const
{
    return nameIsSet_;
}

void TaskV2Info::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskV2Info::getState() const
{
    return state_;
}

void TaskV2Info::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaskV2Info::stateIsSet() const
{
    return stateIsSet_;
}

void TaskV2Info::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaskV2Info::getDescription() const
{
    return description_;
}

void TaskV2Info::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskV2Info::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskV2Info::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TaskV2Info::getOwner() const
{
    return owner_;
}

void TaskV2Info::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskV2Info::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskV2Info::unsetowner()
{
    ownerIsSet_ = false;
}

std::map<std::string, Step>& TaskV2Info::getSteps()
{
    return steps_;
}

void TaskV2Info::setSteps(const std::map<std::string, Step>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool TaskV2Info::stepsIsSet() const
{
    return stepsIsSet_;
}

void TaskV2Info::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string TaskV2Info::getProjectId() const
{
    return projectId_;
}

void TaskV2Info::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TaskV2Info::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TaskV2Info::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TaskV2Info::getProjectName() const
{
    return projectName_;
}

void TaskV2Info::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TaskV2Info::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TaskV2Info::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TaskV2Info::getDeploySystem() const
{
    return deploySystem_;
}

void TaskV2Info::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool TaskV2Info::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void TaskV2Info::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

std::string TaskV2Info::getCreateTime() const
{
    return createTime_;
}

void TaskV2Info::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskV2Info::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskV2Info::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskV2Info::getUpdateTime() const
{
    return updateTime_;
}

void TaskV2Info::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskV2Info::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskV2Info::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t TaskV2Info::getRoleId() const
{
    return roleId_;
}

void TaskV2Info::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool TaskV2Info::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void TaskV2Info::unsetroleId()
{
    roleIdIsSet_ = false;
}

bool TaskV2Info::isIsDefautPermission() const
{
    return isDefautPermission_;
}

void TaskV2Info::setIsDefautPermission(bool value)
{
    isDefautPermission_ = value;
    isDefautPermissionIsSet_ = true;
}

bool TaskV2Info::isDefautPermissionIsSet() const
{
    return isDefautPermissionIsSet_;
}

void TaskV2Info::unsetisDefautPermission()
{
    isDefautPermissionIsSet_ = false;
}

std::string TaskV2Info::getTemplateId() const
{
    return templateId_;
}

void TaskV2Info::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TaskV2Info::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TaskV2Info::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TaskV2Info::getNickName() const
{
    return nickName_;
}

void TaskV2Info::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool TaskV2Info::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void TaskV2Info::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string TaskV2Info::getOwnerId() const
{
    return ownerId_;
}

void TaskV2Info::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool TaskV2Info::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void TaskV2Info::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string TaskV2Info::getTenantId() const
{
    return tenantId_;
}

void TaskV2Info::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool TaskV2Info::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void TaskV2Info::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string TaskV2Info::getTenantName() const
{
    return tenantName_;
}

void TaskV2Info::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool TaskV2Info::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void TaskV2Info::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string TaskV2Info::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void TaskV2Info::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool TaskV2Info::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void TaskV2Info::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

bool TaskV2Info::isIsCare() const
{
    return isCare_;
}

void TaskV2Info::setIsCare(bool value)
{
    isCare_ = value;
    isCareIsSet_ = true;
}

bool TaskV2Info::isCareIsSet() const
{
    return isCareIsSet_;
}

void TaskV2Info::unsetisCare()
{
    isCareIsSet_ = false;
}

bool TaskV2Info::isCanModify() const
{
    return canModify_;
}

void TaskV2Info::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool TaskV2Info::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void TaskV2Info::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool TaskV2Info::isCanDelete() const
{
    return canDelete_;
}

void TaskV2Info::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool TaskV2Info::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void TaskV2Info::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool TaskV2Info::isCanView() const
{
    return canView_;
}

void TaskV2Info::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool TaskV2Info::canViewIsSet() const
{
    return canViewIsSet_;
}

void TaskV2Info::unsetcanView()
{
    canViewIsSet_ = false;
}

bool TaskV2Info::isCanExecute() const
{
    return canExecute_;
}

void TaskV2Info::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool TaskV2Info::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void TaskV2Info::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool TaskV2Info::isCanCopy() const
{
    return canCopy_;
}

void TaskV2Info::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool TaskV2Info::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void TaskV2Info::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool TaskV2Info::isCanManage() const
{
    return canManage_;
}

void TaskV2Info::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool TaskV2Info::canManageIsSet() const
{
    return canManageIsSet_;
}

void TaskV2Info::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool TaskV2Info::isCanCreateEnv() const
{
    return canCreateEnv_;
}

void TaskV2Info::setCanCreateEnv(bool value)
{
    canCreateEnv_ = value;
    canCreateEnvIsSet_ = true;
}

bool TaskV2Info::canCreateEnvIsSet() const
{
    return canCreateEnvIsSet_;
}

void TaskV2Info::unsetcanCreateEnv()
{
    canCreateEnvIsSet_ = false;
}

bool TaskV2Info::isCanDisable() const
{
    return canDisable_;
}

void TaskV2Info::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool TaskV2Info::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void TaskV2Info::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

std::vector<AppComponentDao>& TaskV2Info::getAppComponentList()
{
    return appComponentList_;
}

void TaskV2Info::setAppComponentList(const std::vector<AppComponentDao>& value)
{
    appComponentList_ = value;
    appComponentListIsSet_ = true;
}

bool TaskV2Info::appComponentListIsSet() const
{
    return appComponentListIsSet_;
}

void TaskV2Info::unsetappComponentList()
{
    appComponentListIsSet_ = false;
}

int32_t TaskV2Info::getReleaseId() const
{
    return releaseId_;
}

void TaskV2Info::setReleaseId(int32_t value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool TaskV2Info::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void TaskV2Info::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string TaskV2Info::getAppId() const
{
    return appId_;
}

void TaskV2Info::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool TaskV2Info::appIdIsSet() const
{
    return appIdIsSet_;
}

void TaskV2Info::unsetappId()
{
    appIdIsSet_ = false;
}

bool TaskV2Info::isIsDisable() const
{
    return isDisable_;
}

void TaskV2Info::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool TaskV2Info::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void TaskV2Info::unsetisDisable()
{
    isDisableIsSet_ = false;
}

}
}
}
}
}



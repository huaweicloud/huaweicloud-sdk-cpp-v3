

#include "huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowDeployTaskDetailResponse::ShowDeployTaskDetailResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
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
    state_ = "";
    stateIsSet_ = false;
    executionTime_ = "";
    executionTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isDefautPermission_ = false;
    isDefautPermissionIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
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
    appComponentListIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    releaseId_ = 0;
    releaseIdIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    executionState_ = "";
    executionStateIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorNickName_ = "";
    executorNickNameIsSet_ = false;
    stepsIsSet_ = false;
}

ShowDeployTaskDetailResponse::~ShowDeployTaskDetailResponse() = default;

void ShowDeployTaskDetailResponse::validate()
{
}

web::json::value ShowDeployTaskDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isDefautPermissionIsSet_) {
        val[utility::conversions::to_string_t("is_defaut_permission")] = ModelBase::toJson(isDefautPermission_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
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
    if(appComponentListIsSet_) {
        val[utility::conversions::to_string_t("app_component_list")] = ModelBase::toJson(appComponentList_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(releaseIdIsSet_) {
        val[utility::conversions::to_string_t("release_id")] = ModelBase::toJson(releaseId_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(executionStateIsSet_) {
        val[utility::conversions::to_string_t("execution_state")] = ModelBase::toJson(executionState_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNickNameIsSet_) {
        val[utility::conversions::to_string_t("executor_nick_name")] = ModelBase::toJson(executorNickName_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool ShowDeployTaskDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_component_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_component_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AppComponentDao> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppComponentList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorNickName(refVal);
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
    return ok;
}


std::string ShowDeployTaskDetailResponse::getTaskId() const
{
    return taskId_;
}

void ShowDeployTaskDetailResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getName() const
{
    return name_;
}

void ShowDeployTaskDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDeployTaskDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowDeployTaskDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getProjectName() const
{
    return projectName_;
}

void ShowDeployTaskDetailResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowDeployTaskDetailResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getDeploySystem() const
{
    return deploySystem_;
}

void ShowDeployTaskDetailResponse::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void ShowDeployTaskDetailResponse::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDeployTaskDetailResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowDeployTaskDetailResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowDeployTaskDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getState() const
{
    return state_;
}

void ShowDeployTaskDetailResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowDeployTaskDetailResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getExecutionTime() const
{
    return executionTime_;
}

void ShowDeployTaskDetailResponse::setExecutionTime(const std::string& value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void ShowDeployTaskDetailResponse::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getDescription() const
{
    return description_;
}

void ShowDeployTaskDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowDeployTaskDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isIsDefautPermission() const
{
    return isDefautPermission_;
}

void ShowDeployTaskDetailResponse::setIsDefautPermission(bool value)
{
    isDefautPermission_ = value;
    isDefautPermissionIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::isDefautPermissionIsSet() const
{
    return isDefautPermissionIsSet_;
}

void ShowDeployTaskDetailResponse::unsetisDefautPermission()
{
    isDefautPermissionIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getTemplateId() const
{
    return templateId_;
}

void ShowDeployTaskDetailResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getOwner() const
{
    return owner_;
}

void ShowDeployTaskDetailResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowDeployTaskDetailResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getNickName() const
{
    return nickName_;
}

void ShowDeployTaskDetailResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowDeployTaskDetailResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getOwnerId() const
{
    return ownerId_;
}

void ShowDeployTaskDetailResponse::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getTenantId() const
{
    return tenantId_;
}

void ShowDeployTaskDetailResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getTenantName() const
{
    return tenantName_;
}

void ShowDeployTaskDetailResponse::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ShowDeployTaskDetailResponse::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void ShowDeployTaskDetailResponse::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isIsCare() const
{
    return isCare_;
}

void ShowDeployTaskDetailResponse::setIsCare(bool value)
{
    isCare_ = value;
    isCareIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::isCareIsSet() const
{
    return isCareIsSet_;
}

void ShowDeployTaskDetailResponse::unsetisCare()
{
    isCareIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanModify() const
{
    return canModify_;
}

void ShowDeployTaskDetailResponse::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanDelete() const
{
    return canDelete_;
}

void ShowDeployTaskDetailResponse::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanView() const
{
    return canView_;
}

void ShowDeployTaskDetailResponse::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canViewIsSet() const
{
    return canViewIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanView()
{
    canViewIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanExecute() const
{
    return canExecute_;
}

void ShowDeployTaskDetailResponse::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanCopy() const
{
    return canCopy_;
}

void ShowDeployTaskDetailResponse::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool ShowDeployTaskDetailResponse::isCanManage() const
{
    return canManage_;
}

void ShowDeployTaskDetailResponse::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::canManageIsSet() const
{
    return canManageIsSet_;
}

void ShowDeployTaskDetailResponse::unsetcanManage()
{
    canManageIsSet_ = false;
}

std::vector<AppComponentDao>& ShowDeployTaskDetailResponse::getAppComponentList()
{
    return appComponentList_;
}

void ShowDeployTaskDetailResponse::setAppComponentList(const std::vector<AppComponentDao>& value)
{
    appComponentList_ = value;
    appComponentListIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::appComponentListIsSet() const
{
    return appComponentListIsSet_;
}

void ShowDeployTaskDetailResponse::unsetappComponentList()
{
    appComponentListIsSet_ = false;
}

int32_t ShowDeployTaskDetailResponse::getRoleId() const
{
    return roleId_;
}

void ShowDeployTaskDetailResponse::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getId() const
{
    return id_;
}

void ShowDeployTaskDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowDeployTaskDetailResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowDeployTaskDetailResponse::getReleaseId() const
{
    return releaseId_;
}

void ShowDeployTaskDetailResponse::setReleaseId(int32_t value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getDuration() const
{
    return duration_;
}

void ShowDeployTaskDetailResponse::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowDeployTaskDetailResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getExecutionState() const
{
    return executionState_;
}

void ShowDeployTaskDetailResponse::setExecutionState(const std::string& value)
{
    executionState_ = value;
    executionStateIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::executionStateIsSet() const
{
    return executionStateIsSet_;
}

void ShowDeployTaskDetailResponse::unsetexecutionState()
{
    executionStateIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getExecutorId() const
{
    return executorId_;
}

void ShowDeployTaskDetailResponse::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void ShowDeployTaskDetailResponse::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string ShowDeployTaskDetailResponse::getExecutorNickName() const
{
    return executorNickName_;
}

void ShowDeployTaskDetailResponse::setExecutorNickName(const std::string& value)
{
    executorNickName_ = value;
    executorNickNameIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::executorNickNameIsSet() const
{
    return executorNickNameIsSet_;
}

void ShowDeployTaskDetailResponse::unsetexecutorNickName()
{
    executorNickNameIsSet_ = false;
}

std::map<std::string, Step>& ShowDeployTaskDetailResponse::getSteps()
{
    return steps_;
}

void ShowDeployTaskDetailResponse::setSteps(const std::map<std::string, Step>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ShowDeployTaskDetailResponse::stepsIsSet() const
{
    return stepsIsSet_;
}

void ShowDeployTaskDetailResponse::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}



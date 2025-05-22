

#include "huaweicloud/codeartsdeploy/v2/model/TaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskInfo::TaskInfo()
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
    canDisable_ = false;
    canDisableIsSet_ = false;
    appComponentListIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    releaseId_ = 0;
    releaseIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    isDisable_ = false;
    isDisableIsSet_ = false;
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

TaskInfo::~TaskInfo() = default;

void TaskInfo::validate()
{
}

web::json::value TaskInfo::toJson() const
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
    if(canDisableIsSet_) {
        val[utility::conversions::to_string_t("can_disable")] = ModelBase::toJson(canDisable_);
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
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
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
bool TaskInfo::fromJson(const web::json::value& val)
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


std::string TaskInfo::getTaskId() const
{
    return taskId_;
}

void TaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TaskInfo::getName() const
{
    return name_;
}

void TaskInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskInfo::getProjectId() const
{
    return projectId_;
}

void TaskInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TaskInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TaskInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TaskInfo::getProjectName() const
{
    return projectName_;
}

void TaskInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TaskInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TaskInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TaskInfo::getDeploySystem() const
{
    return deploySystem_;
}

void TaskInfo::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool TaskInfo::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void TaskInfo::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

std::string TaskInfo::getCreateTime() const
{
    return createTime_;
}

void TaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskInfo::getUpdateTime() const
{
    return updateTime_;
}

void TaskInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TaskInfo::getState() const
{
    return state_;
}

void TaskInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaskInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TaskInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaskInfo::getExecutionTime() const
{
    return executionTime_;
}

void TaskInfo::setExecutionTime(const std::string& value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool TaskInfo::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void TaskInfo::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::string TaskInfo::getDescription() const
{
    return description_;
}

void TaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool TaskInfo::isIsDefautPermission() const
{
    return isDefautPermission_;
}

void TaskInfo::setIsDefautPermission(bool value)
{
    isDefautPermission_ = value;
    isDefautPermissionIsSet_ = true;
}

bool TaskInfo::isDefautPermissionIsSet() const
{
    return isDefautPermissionIsSet_;
}

void TaskInfo::unsetisDefautPermission()
{
    isDefautPermissionIsSet_ = false;
}

std::string TaskInfo::getTemplateId() const
{
    return templateId_;
}

void TaskInfo::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TaskInfo::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TaskInfo::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TaskInfo::getOwner() const
{
    return owner_;
}

void TaskInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TaskInfo::getNickName() const
{
    return nickName_;
}

void TaskInfo::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool TaskInfo::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void TaskInfo::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string TaskInfo::getOwnerId() const
{
    return ownerId_;
}

void TaskInfo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool TaskInfo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void TaskInfo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string TaskInfo::getTenantId() const
{
    return tenantId_;
}

void TaskInfo::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool TaskInfo::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void TaskInfo::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string TaskInfo::getTenantName() const
{
    return tenantName_;
}

void TaskInfo::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool TaskInfo::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void TaskInfo::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string TaskInfo::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void TaskInfo::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool TaskInfo::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void TaskInfo::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

bool TaskInfo::isIsCare() const
{
    return isCare_;
}

void TaskInfo::setIsCare(bool value)
{
    isCare_ = value;
    isCareIsSet_ = true;
}

bool TaskInfo::isCareIsSet() const
{
    return isCareIsSet_;
}

void TaskInfo::unsetisCare()
{
    isCareIsSet_ = false;
}

bool TaskInfo::isCanModify() const
{
    return canModify_;
}

void TaskInfo::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool TaskInfo::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void TaskInfo::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool TaskInfo::isCanDelete() const
{
    return canDelete_;
}

void TaskInfo::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool TaskInfo::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void TaskInfo::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool TaskInfo::isCanView() const
{
    return canView_;
}

void TaskInfo::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool TaskInfo::canViewIsSet() const
{
    return canViewIsSet_;
}

void TaskInfo::unsetcanView()
{
    canViewIsSet_ = false;
}

bool TaskInfo::isCanExecute() const
{
    return canExecute_;
}

void TaskInfo::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool TaskInfo::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void TaskInfo::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool TaskInfo::isCanCopy() const
{
    return canCopy_;
}

void TaskInfo::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool TaskInfo::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void TaskInfo::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool TaskInfo::isCanManage() const
{
    return canManage_;
}

void TaskInfo::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool TaskInfo::canManageIsSet() const
{
    return canManageIsSet_;
}

void TaskInfo::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool TaskInfo::isCanDisable() const
{
    return canDisable_;
}

void TaskInfo::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool TaskInfo::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void TaskInfo::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

std::vector<AppComponentDao>& TaskInfo::getAppComponentList()
{
    return appComponentList_;
}

void TaskInfo::setAppComponentList(const std::vector<AppComponentDao>& value)
{
    appComponentList_ = value;
    appComponentListIsSet_ = true;
}

bool TaskInfo::appComponentListIsSet() const
{
    return appComponentListIsSet_;
}

void TaskInfo::unsetappComponentList()
{
    appComponentListIsSet_ = false;
}

int32_t TaskInfo::getRoleId() const
{
    return roleId_;
}

void TaskInfo::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool TaskInfo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void TaskInfo::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string TaskInfo::getId() const
{
    return id_;
}

void TaskInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskInfo::idIsSet() const
{
    return idIsSet_;
}

void TaskInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t TaskInfo::getReleaseId() const
{
    return releaseId_;
}

void TaskInfo::setReleaseId(int32_t value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool TaskInfo::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void TaskInfo::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string TaskInfo::getAppId() const
{
    return appId_;
}

void TaskInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool TaskInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void TaskInfo::unsetappId()
{
    appIdIsSet_ = false;
}

bool TaskInfo::isIsDisable() const
{
    return isDisable_;
}

void TaskInfo::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool TaskInfo::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void TaskInfo::unsetisDisable()
{
    isDisableIsSet_ = false;
}

std::string TaskInfo::getDuration() const
{
    return duration_;
}

void TaskInfo::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool TaskInfo::durationIsSet() const
{
    return durationIsSet_;
}

void TaskInfo::unsetduration()
{
    durationIsSet_ = false;
}

std::string TaskInfo::getExecutionState() const
{
    return executionState_;
}

void TaskInfo::setExecutionState(const std::string& value)
{
    executionState_ = value;
    executionStateIsSet_ = true;
}

bool TaskInfo::executionStateIsSet() const
{
    return executionStateIsSet_;
}

void TaskInfo::unsetexecutionState()
{
    executionStateIsSet_ = false;
}

std::string TaskInfo::getExecutorId() const
{
    return executorId_;
}

void TaskInfo::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool TaskInfo::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void TaskInfo::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string TaskInfo::getExecutorNickName() const
{
    return executorNickName_;
}

void TaskInfo::setExecutorNickName(const std::string& value)
{
    executorNickName_ = value;
    executorNickNameIsSet_ = true;
}

bool TaskInfo::executorNickNameIsSet() const
{
    return executorNickNameIsSet_;
}

void TaskInfo::unsetexecutorNickName()
{
    executorNickNameIsSet_ = false;
}

std::map<std::string, Step>& TaskInfo::getSteps()
{
    return steps_;
}

void TaskInfo::setSteps(const std::map<std::string, Step>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool TaskInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void TaskInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}



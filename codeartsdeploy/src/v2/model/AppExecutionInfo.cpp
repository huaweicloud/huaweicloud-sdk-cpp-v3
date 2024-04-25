

#include "huaweicloud/codeartsdeploy/v2/model/AppExecutionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppExecutionInfo::AppExecutionInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    isDisable_ = false;
    isDisableIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
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
    deploySystem_ = "";
    deploySystemIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    createTenantId_ = "";
    createTenantIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    executionTime_ = "";
    executionTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    executionState_ = "";
    executionStateIsSet_ = false;
    releaseId_ = 0;
    releaseIdIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorNickName_ = "";
    executorNickNameIsSet_ = false;
    arrangeInfosIsSet_ = false;
}

AppExecutionInfo::~AppExecutionInfo() = default;

void AppExecutionInfo::validate()
{
}

web::json::value AppExecutionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
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
    if(deploySystemIsSet_) {
        val[utility::conversions::to_string_t("deploy_system")] = ModelBase::toJson(deploySystem_);
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
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(executionStateIsSet_) {
        val[utility::conversions::to_string_t("execution_state")] = ModelBase::toJson(executionState_);
    }
    if(releaseIdIsSet_) {
        val[utility::conversions::to_string_t("release_id")] = ModelBase::toJson(releaseId_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNickNameIsSet_) {
        val[utility::conversions::to_string_t("executor_nick_name")] = ModelBase::toJson(executorNickName_);
    }
    if(arrangeInfosIsSet_) {
        val[utility::conversions::to_string_t("arrange_infos")] = ModelBase::toJson(arrangeInfos_);
    }

    return val;
}
bool AppExecutionInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploySystem(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("arrange_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrange_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskBaseResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrangeInfos(refVal);
        }
    }
    return ok;
}


std::string AppExecutionInfo::getId() const
{
    return id_;
}

void AppExecutionInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AppExecutionInfo::idIsSet() const
{
    return idIsSet_;
}

void AppExecutionInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AppExecutionInfo::getName() const
{
    return name_;
}

void AppExecutionInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AppExecutionInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AppExecutionInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AppExecutionInfo::getDuration() const
{
    return duration_;
}

void AppExecutionInfo::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AppExecutionInfo::durationIsSet() const
{
    return durationIsSet_;
}

void AppExecutionInfo::unsetduration()
{
    durationIsSet_ = false;
}

bool AppExecutionInfo::isIsDisable() const
{
    return isDisable_;
}

void AppExecutionInfo::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool AppExecutionInfo::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void AppExecutionInfo::unsetisDisable()
{
    isDisableIsSet_ = false;
}

std::string AppExecutionInfo::getProjectId() const
{
    return projectId_;
}

void AppExecutionInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AppExecutionInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AppExecutionInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AppExecutionInfo::getProjectName() const
{
    return projectName_;
}

void AppExecutionInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool AppExecutionInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void AppExecutionInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

bool AppExecutionInfo::isIsCare() const
{
    return isCare_;
}

void AppExecutionInfo::setIsCare(bool value)
{
    isCare_ = value;
    isCareIsSet_ = true;
}

bool AppExecutionInfo::isCareIsSet() const
{
    return isCareIsSet_;
}

void AppExecutionInfo::unsetisCare()
{
    isCareIsSet_ = false;
}

bool AppExecutionInfo::isCanModify() const
{
    return canModify_;
}

void AppExecutionInfo::setCanModify(bool value)
{
    canModify_ = value;
    canModifyIsSet_ = true;
}

bool AppExecutionInfo::canModifyIsSet() const
{
    return canModifyIsSet_;
}

void AppExecutionInfo::unsetcanModify()
{
    canModifyIsSet_ = false;
}

bool AppExecutionInfo::isCanDelete() const
{
    return canDelete_;
}

void AppExecutionInfo::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool AppExecutionInfo::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void AppExecutionInfo::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool AppExecutionInfo::isCanView() const
{
    return canView_;
}

void AppExecutionInfo::setCanView(bool value)
{
    canView_ = value;
    canViewIsSet_ = true;
}

bool AppExecutionInfo::canViewIsSet() const
{
    return canViewIsSet_;
}

void AppExecutionInfo::unsetcanView()
{
    canViewIsSet_ = false;
}

bool AppExecutionInfo::isCanExecute() const
{
    return canExecute_;
}

void AppExecutionInfo::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool AppExecutionInfo::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void AppExecutionInfo::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool AppExecutionInfo::isCanCopy() const
{
    return canCopy_;
}

void AppExecutionInfo::setCanCopy(bool value)
{
    canCopy_ = value;
    canCopyIsSet_ = true;
}

bool AppExecutionInfo::canCopyIsSet() const
{
    return canCopyIsSet_;
}

void AppExecutionInfo::unsetcanCopy()
{
    canCopyIsSet_ = false;
}

bool AppExecutionInfo::isCanManage() const
{
    return canManage_;
}

void AppExecutionInfo::setCanManage(bool value)
{
    canManage_ = value;
    canManageIsSet_ = true;
}

bool AppExecutionInfo::canManageIsSet() const
{
    return canManageIsSet_;
}

void AppExecutionInfo::unsetcanManage()
{
    canManageIsSet_ = false;
}

bool AppExecutionInfo::isCanCreateEnv() const
{
    return canCreateEnv_;
}

void AppExecutionInfo::setCanCreateEnv(bool value)
{
    canCreateEnv_ = value;
    canCreateEnvIsSet_ = true;
}

bool AppExecutionInfo::canCreateEnvIsSet() const
{
    return canCreateEnvIsSet_;
}

void AppExecutionInfo::unsetcanCreateEnv()
{
    canCreateEnvIsSet_ = false;
}

bool AppExecutionInfo::isCanDisable() const
{
    return canDisable_;
}

void AppExecutionInfo::setCanDisable(bool value)
{
    canDisable_ = value;
    canDisableIsSet_ = true;
}

bool AppExecutionInfo::canDisableIsSet() const
{
    return canDisableIsSet_;
}

void AppExecutionInfo::unsetcanDisable()
{
    canDisableIsSet_ = false;
}

std::string AppExecutionInfo::getDeploySystem() const
{
    return deploySystem_;
}

void AppExecutionInfo::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool AppExecutionInfo::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void AppExecutionInfo::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

std::string AppExecutionInfo::getCreateUserId() const
{
    return createUserId_;
}

void AppExecutionInfo::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool AppExecutionInfo::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void AppExecutionInfo::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string AppExecutionInfo::getCreateTenantId() const
{
    return createTenantId_;
}

void AppExecutionInfo::setCreateTenantId(const std::string& value)
{
    createTenantId_ = value;
    createTenantIdIsSet_ = true;
}

bool AppExecutionInfo::createTenantIdIsSet() const
{
    return createTenantIdIsSet_;
}

void AppExecutionInfo::unsetcreateTenantId()
{
    createTenantIdIsSet_ = false;
}

std::string AppExecutionInfo::getCreateTime() const
{
    return createTime_;
}

void AppExecutionInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AppExecutionInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AppExecutionInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AppExecutionInfo::getUpdateTime() const
{
    return updateTime_;
}

void AppExecutionInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AppExecutionInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AppExecutionInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AppExecutionInfo::getExecutionTime() const
{
    return executionTime_;
}

void AppExecutionInfo::setExecutionTime(const std::string& value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool AppExecutionInfo::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void AppExecutionInfo::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::string AppExecutionInfo::getEndTime() const
{
    return endTime_;
}

void AppExecutionInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AppExecutionInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AppExecutionInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string AppExecutionInfo::getExecutionState() const
{
    return executionState_;
}

void AppExecutionInfo::setExecutionState(const std::string& value)
{
    executionState_ = value;
    executionStateIsSet_ = true;
}

bool AppExecutionInfo::executionStateIsSet() const
{
    return executionStateIsSet_;
}

void AppExecutionInfo::unsetexecutionState()
{
    executionStateIsSet_ = false;
}

int32_t AppExecutionInfo::getReleaseId() const
{
    return releaseId_;
}

void AppExecutionInfo::setReleaseId(int32_t value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool AppExecutionInfo::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void AppExecutionInfo::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string AppExecutionInfo::getExecutorId() const
{
    return executorId_;
}

void AppExecutionInfo::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool AppExecutionInfo::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void AppExecutionInfo::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string AppExecutionInfo::getExecutorNickName() const
{
    return executorNickName_;
}

void AppExecutionInfo::setExecutorNickName(const std::string& value)
{
    executorNickName_ = value;
    executorNickNameIsSet_ = true;
}

bool AppExecutionInfo::executorNickNameIsSet() const
{
    return executorNickNameIsSet_;
}

void AppExecutionInfo::unsetexecutorNickName()
{
    executorNickNameIsSet_ = false;
}

std::vector<TaskBaseResponseBody>& AppExecutionInfo::getArrangeInfos()
{
    return arrangeInfos_;
}

void AppExecutionInfo::setArrangeInfos(const std::vector<TaskBaseResponseBody>& value)
{
    arrangeInfos_ = value;
    arrangeInfosIsSet_ = true;
}

bool AppExecutionInfo::arrangeInfosIsSet() const
{
    return arrangeInfosIsSet_;
}

void AppExecutionInfo::unsetarrangeInfos()
{
    arrangeInfosIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartscheck/v2/model/TaskBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskBasicInfo::TaskBasicInfo()
{
    branchName_ = "";
    branchNameIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canExecute_ = false;
    canExecuteIsSet_ = false;
    canRead_ = false;
    canReadIsSet_ = false;
    configTemplateIsSet_ = false;
    configTemplateId_ = "";
    configTemplateIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isFollowed_ = false;
    isFollowedIsSet_ = false;
    jobResultIsSet_ = false;
    lastJobIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    repoUrl_ = "";
    repoUrlIsSet_ = false;
    ruleSetsIsSet_ = false;
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    taskGroupId_ = "";
    taskGroupIdIsSet_ = false;
}

TaskBasicInfo::~TaskBasicInfo() = default;

void TaskBasicInfo::validate()
{
}

web::json::value TaskBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branchName")] = ModelBase::toJson(branchName_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("canDelete")] = ModelBase::toJson(canDelete_);
    }
    if(canEditIsSet_) {
        val[utility::conversions::to_string_t("canEdit")] = ModelBase::toJson(canEdit_);
    }
    if(canExecuteIsSet_) {
        val[utility::conversions::to_string_t("canExecute")] = ModelBase::toJson(canExecute_);
    }
    if(canReadIsSet_) {
        val[utility::conversions::to_string_t("canRead")] = ModelBase::toJson(canRead_);
    }
    if(configTemplateIsSet_) {
        val[utility::conversions::to_string_t("configTemplate")] = ModelBase::toJson(configTemplate_);
    }
    if(configTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("configTemplateId")] = ModelBase::toJson(configTemplateId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isFollowedIsSet_) {
        val[utility::conversions::to_string_t("isFollowed")] = ModelBase::toJson(isFollowed_);
    }
    if(jobResultIsSet_) {
        val[utility::conversions::to_string_t("jobResult")] = ModelBase::toJson(jobResult_);
    }
    if(lastJobIsSet_) {
        val[utility::conversions::to_string_t("lastJob")] = ModelBase::toJson(lastJob_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastUpdateTime")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("projectName")] = ModelBase::toJson(projectName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(repoUrlIsSet_) {
        val[utility::conversions::to_string_t("repoUrl")] = ModelBase::toJson(repoUrl_);
    }
    if(ruleSetsIsSet_) {
        val[utility::conversions::to_string_t("ruleSets")] = ModelBase::toJson(ruleSets_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("ruleType")] = ModelBase::toJson(ruleType_);
    }
    if(taskGroupIdIsSet_) {
        val[utility::conversions::to_string_t("taskGroupId")] = ModelBase::toJson(taskGroupId_);
    }

    return val;
}
bool TaskBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branchName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branchName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canDelete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canDelete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canEdit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canEdit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEdit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canExecute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canExecute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canRead"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canRead"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configTemplate"));
        if(!fieldValue.is_null())
        {
            ConfigTemplateBasicInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configTemplateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configTemplateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isFollowed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isFollowed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFollowed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobResult"));
        if(!fieldValue.is_null())
        {
            JobResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastJob"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastJob"));
        if(!fieldValue.is_null())
        {
            JobBasicInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJob(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastUpdateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdateTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleSets"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigTemplateRuleSetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskGroupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskGroupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskGroupId(refVal);
        }
    }
    return ok;
}


std::string TaskBasicInfo::getBranchName() const
{
    return branchName_;
}

void TaskBasicInfo::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool TaskBasicInfo::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void TaskBasicInfo::unsetbranchName()
{
    branchNameIsSet_ = false;
}

bool TaskBasicInfo::isCanDelete() const
{
    return canDelete_;
}

void TaskBasicInfo::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool TaskBasicInfo::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void TaskBasicInfo::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool TaskBasicInfo::isCanEdit() const
{
    return canEdit_;
}

void TaskBasicInfo::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool TaskBasicInfo::canEditIsSet() const
{
    return canEditIsSet_;
}

void TaskBasicInfo::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool TaskBasicInfo::isCanExecute() const
{
    return canExecute_;
}

void TaskBasicInfo::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool TaskBasicInfo::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void TaskBasicInfo::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool TaskBasicInfo::isCanRead() const
{
    return canRead_;
}

void TaskBasicInfo::setCanRead(bool value)
{
    canRead_ = value;
    canReadIsSet_ = true;
}

bool TaskBasicInfo::canReadIsSet() const
{
    return canReadIsSet_;
}

void TaskBasicInfo::unsetcanRead()
{
    canReadIsSet_ = false;
}

ConfigTemplateBasicInfo TaskBasicInfo::getConfigTemplate() const
{
    return configTemplate_;
}

void TaskBasicInfo::setConfigTemplate(const ConfigTemplateBasicInfo& value)
{
    configTemplate_ = value;
    configTemplateIsSet_ = true;
}

bool TaskBasicInfo::configTemplateIsSet() const
{
    return configTemplateIsSet_;
}

void TaskBasicInfo::unsetconfigTemplate()
{
    configTemplateIsSet_ = false;
}

std::string TaskBasicInfo::getConfigTemplateId() const
{
    return configTemplateId_;
}

void TaskBasicInfo::setConfigTemplateId(const std::string& value)
{
    configTemplateId_ = value;
    configTemplateIdIsSet_ = true;
}

bool TaskBasicInfo::configTemplateIdIsSet() const
{
    return configTemplateIdIsSet_;
}

void TaskBasicInfo::unsetconfigTemplateId()
{
    configTemplateIdIsSet_ = false;
}

std::string TaskBasicInfo::getCreateTime() const
{
    return createTime_;
}

void TaskBasicInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskBasicInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskBasicInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskBasicInfo::getId() const
{
    return id_;
}

void TaskBasicInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskBasicInfo::idIsSet() const
{
    return idIsSet_;
}

void TaskBasicInfo::unsetid()
{
    idIsSet_ = false;
}

bool TaskBasicInfo::isIsFollowed() const
{
    return isFollowed_;
}

void TaskBasicInfo::setIsFollowed(bool value)
{
    isFollowed_ = value;
    isFollowedIsSet_ = true;
}

bool TaskBasicInfo::isFollowedIsSet() const
{
    return isFollowedIsSet_;
}

void TaskBasicInfo::unsetisFollowed()
{
    isFollowedIsSet_ = false;
}

JobResultInfo TaskBasicInfo::getJobResult() const
{
    return jobResult_;
}

void TaskBasicInfo::setJobResult(const JobResultInfo& value)
{
    jobResult_ = value;
    jobResultIsSet_ = true;
}

bool TaskBasicInfo::jobResultIsSet() const
{
    return jobResultIsSet_;
}

void TaskBasicInfo::unsetjobResult()
{
    jobResultIsSet_ = false;
}

JobBasicInfo TaskBasicInfo::getLastJob() const
{
    return lastJob_;
}

void TaskBasicInfo::setLastJob(const JobBasicInfo& value)
{
    lastJob_ = value;
    lastJobIsSet_ = true;
}

bool TaskBasicInfo::lastJobIsSet() const
{
    return lastJobIsSet_;
}

void TaskBasicInfo::unsetlastJob()
{
    lastJobIsSet_ = false;
}

std::string TaskBasicInfo::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void TaskBasicInfo::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool TaskBasicInfo::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void TaskBasicInfo::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string TaskBasicInfo::getName() const
{
    return name_;
}

void TaskBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskBasicInfo::getOwner() const
{
    return owner_;
}

void TaskBasicInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskBasicInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskBasicInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TaskBasicInfo::getProjectId() const
{
    return projectId_;
}

void TaskBasicInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TaskBasicInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TaskBasicInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TaskBasicInfo::getProjectName() const
{
    return projectName_;
}

void TaskBasicInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TaskBasicInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TaskBasicInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TaskBasicInfo::getRegion() const
{
    return region_;
}

void TaskBasicInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TaskBasicInfo::regionIsSet() const
{
    return regionIsSet_;
}

void TaskBasicInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string TaskBasicInfo::getRepoUrl() const
{
    return repoUrl_;
}

void TaskBasicInfo::setRepoUrl(const std::string& value)
{
    repoUrl_ = value;
    repoUrlIsSet_ = true;
}

bool TaskBasicInfo::repoUrlIsSet() const
{
    return repoUrlIsSet_;
}

void TaskBasicInfo::unsetrepoUrl()
{
    repoUrlIsSet_ = false;
}

std::vector<ConfigTemplateRuleSetInfo>& TaskBasicInfo::getRuleSets()
{
    return ruleSets_;
}

void TaskBasicInfo::setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value)
{
    ruleSets_ = value;
    ruleSetsIsSet_ = true;
}

bool TaskBasicInfo::ruleSetsIsSet() const
{
    return ruleSetsIsSet_;
}

void TaskBasicInfo::unsetruleSets()
{
    ruleSetsIsSet_ = false;
}

std::string TaskBasicInfo::getRuleType() const
{
    return ruleType_;
}

void TaskBasicInfo::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool TaskBasicInfo::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void TaskBasicInfo::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string TaskBasicInfo::getTaskGroupId() const
{
    return taskGroupId_;
}

void TaskBasicInfo::setTaskGroupId(const std::string& value)
{
    taskGroupId_ = value;
    taskGroupIdIsSet_ = true;
}

bool TaskBasicInfo::taskGroupIdIsSet() const
{
    return taskGroupIdIsSet_;
}

void TaskBasicInfo::unsettaskGroupId()
{
    taskGroupIdIsSet_ = false;
}

}
}
}
}
}



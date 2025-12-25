

#include "huaweicloud/codeartsartifact/v2/model/UpdateNotMavenRepoDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




UpdateNotMavenRepoDO::UpdateNotMavenRepoDO()
{
    repoName_ = "";
    repoNameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    repositoryIdsIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    deploymentPolicy_ = "";
    deploymentPolicyIsSet_ = false;
    autoCleanSnapshot_ = false;
    autoCleanSnapshotIsSet_ = false;
    snapshotAliveDays_ = "";
    snapshotAliveDaysIsSet_ = false;
    maxUniqueSnapshots_ = "";
    maxUniqueSnapshotsIsSet_ = false;
    allowAnonymous_ = false;
    allowAnonymousIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

UpdateNotMavenRepoDO::~UpdateNotMavenRepoDO() = default;

void UpdateNotMavenRepoDO::validate()
{
}

web::json::value UpdateNotMavenRepoDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(repositoryIdsIsSet_) {
        val[utility::conversions::to_string_t("repository_ids")] = ModelBase::toJson(repositoryIds_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includes_pattern")] = ModelBase::toJson(includesPattern_);
    }
    if(deploymentPolicyIsSet_) {
        val[utility::conversions::to_string_t("deployment_policy")] = ModelBase::toJson(deploymentPolicy_);
    }
    if(autoCleanSnapshotIsSet_) {
        val[utility::conversions::to_string_t("auto_clean_snapshot")] = ModelBase::toJson(autoCleanSnapshot_);
    }
    if(snapshotAliveDaysIsSet_) {
        val[utility::conversions::to_string_t("snapshot_alive_days")] = ModelBase::toJson(snapshotAliveDays_);
    }
    if(maxUniqueSnapshotsIsSet_) {
        val[utility::conversions::to_string_t("max_unique_snapshots")] = ModelBase::toJson(maxUniqueSnapshots_);
    }
    if(allowAnonymousIsSet_) {
        val[utility::conversions::to_string_t("allow_anonymous")] = ModelBase::toJson(allowAnonymous_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool UpdateNotMavenRepoDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includes_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includes_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludesPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_clean_snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_clean_snapshot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoCleanSnapshot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_alive_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_alive_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotAliveDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_unique_snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_unique_snapshots"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxUniqueSnapshots(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_anonymous"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_anonymous"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowAnonymous(refVal);
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
    return ok;
}


std::string UpdateNotMavenRepoDO::getRepoName() const
{
    return repoName_;
}

void UpdateNotMavenRepoDO::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool UpdateNotMavenRepoDO::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void UpdateNotMavenRepoDO::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getFormat() const
{
    return format_;
}

void UpdateNotMavenRepoDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool UpdateNotMavenRepoDO::formatIsSet() const
{
    return formatIsSet_;
}

void UpdateNotMavenRepoDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getDescription() const
{
    return description_;
}

void UpdateNotMavenRepoDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateNotMavenRepoDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateNotMavenRepoDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& UpdateNotMavenRepoDO::getRepositoryIds()
{
    return repositoryIds_;
}

void UpdateNotMavenRepoDO::setRepositoryIds(const std::vector<std::string>& value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool UpdateNotMavenRepoDO::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void UpdateNotMavenRepoDO::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getIncludesPattern() const
{
    return includesPattern_;
}

void UpdateNotMavenRepoDO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool UpdateNotMavenRepoDO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void UpdateNotMavenRepoDO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void UpdateNotMavenRepoDO::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool UpdateNotMavenRepoDO::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void UpdateNotMavenRepoDO::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

bool UpdateNotMavenRepoDO::isAutoCleanSnapshot() const
{
    return autoCleanSnapshot_;
}

void UpdateNotMavenRepoDO::setAutoCleanSnapshot(bool value)
{
    autoCleanSnapshot_ = value;
    autoCleanSnapshotIsSet_ = true;
}

bool UpdateNotMavenRepoDO::autoCleanSnapshotIsSet() const
{
    return autoCleanSnapshotIsSet_;
}

void UpdateNotMavenRepoDO::unsetautoCleanSnapshot()
{
    autoCleanSnapshotIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getSnapshotAliveDays() const
{
    return snapshotAliveDays_;
}

void UpdateNotMavenRepoDO::setSnapshotAliveDays(const std::string& value)
{
    snapshotAliveDays_ = value;
    snapshotAliveDaysIsSet_ = true;
}

bool UpdateNotMavenRepoDO::snapshotAliveDaysIsSet() const
{
    return snapshotAliveDaysIsSet_;
}

void UpdateNotMavenRepoDO::unsetsnapshotAliveDays()
{
    snapshotAliveDaysIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getMaxUniqueSnapshots() const
{
    return maxUniqueSnapshots_;
}

void UpdateNotMavenRepoDO::setMaxUniqueSnapshots(const std::string& value)
{
    maxUniqueSnapshots_ = value;
    maxUniqueSnapshotsIsSet_ = true;
}

bool UpdateNotMavenRepoDO::maxUniqueSnapshotsIsSet() const
{
    return maxUniqueSnapshotsIsSet_;
}

void UpdateNotMavenRepoDO::unsetmaxUniqueSnapshots()
{
    maxUniqueSnapshotsIsSet_ = false;
}

bool UpdateNotMavenRepoDO::isAllowAnonymous() const
{
    return allowAnonymous_;
}

void UpdateNotMavenRepoDO::setAllowAnonymous(bool value)
{
    allowAnonymous_ = value;
    allowAnonymousIsSet_ = true;
}

bool UpdateNotMavenRepoDO::allowAnonymousIsSet() const
{
    return allowAnonymousIsSet_;
}

void UpdateNotMavenRepoDO::unsetallowAnonymous()
{
    allowAnonymousIsSet_ = false;
}

std::string UpdateNotMavenRepoDO::getProjectId() const
{
    return projectId_;
}

void UpdateNotMavenRepoDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateNotMavenRepoDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateNotMavenRepoDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsartifact/v2/model/RepositoryDOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepositoryDOV5::RepositoryDOV5()
{
    status_ = "";
    statusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    createdUserId_ = "";
    createdUserIdIsSet_ = false;
    createdUserName_ = "";
    createdUserNameIsSet_ = false;
    modifiedUserId_ = "";
    modifiedUserIdIsSet_ = false;
    modifiedUserName_ = "";
    modifiedUserNameIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    release_ = "";
    releaseIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    excludesPattern_ = "";
    excludesPatternIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    npm_ = "";
    npmIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    repositories_ = "";
    repositoriesIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    proxy_ = "";
    proxyIsSet_ = false;
    scope_ = 0;
    scopeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    tabId_ = "";
    tabIdIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    snapshotStatus_ = "";
    snapshotStatusIsSet_ = false;
    releaseStatus_ = "";
    releaseStatusIsSet_ = false;
    repositoryIds_ = "";
    repositoryIdsIsSet_ = false;
    deploymentPolicy_ = "";
    deploymentPolicyIsSet_ = false;
    parentRepoName_ = "";
    parentRepoNameIsSet_ = false;
    remoteUrl_ = "";
    remoteUrlIsSet_ = false;
    remoteAuth_ = "";
    remoteAuthIsSet_ = false;
    pypiRegistryUrl_ = "";
    pypiRegistryUrlIsSet_ = false;
    defaultDeployRepository_ = "";
    defaultDeployRepositoryIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    nexuRepo_ = false;
    nexuRepoIsSet_ = false;
    migrateFlag_ = 0;
    migrateFlagIsSet_ = false;
}

RepositoryDOV5::~RepositoryDOV5() = default;

void RepositoryDOV5::validate()
{
}

web::json::value RepositoryDOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(createdUserIdIsSet_) {
        val[utility::conversions::to_string_t("created_user_id")] = ModelBase::toJson(createdUserId_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("created_user_name")] = ModelBase::toJson(createdUserName_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modified_user_id")] = ModelBase::toJson(modifiedUserId_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modified_user_name")] = ModelBase::toJson(modifiedUserName_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includes_pattern")] = ModelBase::toJson(includesPattern_);
    }
    if(excludesPatternIsSet_) {
        val[utility::conversions::to_string_t("excludes_pattern")] = ModelBase::toJson(excludesPattern_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("share_right")] = ModelBase::toJson(shareRight_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(npmIsSet_) {
        val[utility::conversions::to_string_t("npm")] = ModelBase::toJson(npm_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(repositoriesIsSet_) {
        val[utility::conversions::to_string_t("repositories")] = ModelBase::toJson(repositories_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(proxyIsSet_) {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(proxy_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(tabIdIsSet_) {
        val[utility::conversions::to_string_t("tab_id")] = ModelBase::toJson(tabId_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(snapshotStatusIsSet_) {
        val[utility::conversions::to_string_t("snapshot_status")] = ModelBase::toJson(snapshotStatus_);
    }
    if(releaseStatusIsSet_) {
        val[utility::conversions::to_string_t("release_status")] = ModelBase::toJson(releaseStatus_);
    }
    if(repositoryIdsIsSet_) {
        val[utility::conversions::to_string_t("repository_ids")] = ModelBase::toJson(repositoryIds_);
    }
    if(deploymentPolicyIsSet_) {
        val[utility::conversions::to_string_t("deployment_policy")] = ModelBase::toJson(deploymentPolicy_);
    }
    if(parentRepoNameIsSet_) {
        val[utility::conversions::to_string_t("parent_repo_name")] = ModelBase::toJson(parentRepoName_);
    }
    if(remoteUrlIsSet_) {
        val[utility::conversions::to_string_t("remote_url")] = ModelBase::toJson(remoteUrl_);
    }
    if(remoteAuthIsSet_) {
        val[utility::conversions::to_string_t("remote_auth")] = ModelBase::toJson(remoteAuth_);
    }
    if(pypiRegistryUrlIsSet_) {
        val[utility::conversions::to_string_t("pypi_registry_url")] = ModelBase::toJson(pypiRegistryUrl_);
    }
    if(defaultDeployRepositoryIsSet_) {
        val[utility::conversions::to_string_t("default_deploy_repository")] = ModelBase::toJson(defaultDeployRepository_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(nexuRepoIsSet_) {
        val[utility::conversions::to_string_t("nexu_repo")] = ModelBase::toJson(nexuRepo_);
    }
    if(migrateFlagIsSet_) {
        val[utility::conversions::to_string_t("migrate_flag")] = ModelBase::toJson(migrateFlag_);
    }

    return val;
}
bool RepositoryDOV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelease(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("excludes_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludes_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludesPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_right"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_right"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareRight(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tab_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tab_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTabId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_auth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pypi_registry_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pypi_registry_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPypiRegistryUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_deploy_repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_deploy_repository"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultDeployRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nexu_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nexu_repo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNexuRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrate_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrate_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrateFlag(refVal);
        }
    }
    return ok;
}


std::string RepositoryDOV5::getStatus() const
{
    return status_;
}

void RepositoryDOV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepositoryDOV5::statusIsSet() const
{
    return statusIsSet_;
}

void RepositoryDOV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepositoryDOV5::getDomainId() const
{
    return domainId_;
}

void RepositoryDOV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepositoryDOV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepositoryDOV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepositoryDOV5::getRegion() const
{
    return region_;
}

void RepositoryDOV5::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RepositoryDOV5::regionIsSet() const
{
    return regionIsSet_;
}

void RepositoryDOV5::unsetregion()
{
    regionIsSet_ = false;
}

std::string RepositoryDOV5::getCreatedTime() const
{
    return createdTime_;
}

void RepositoryDOV5::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool RepositoryDOV5::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void RepositoryDOV5::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string RepositoryDOV5::getModifiedTime() const
{
    return modifiedTime_;
}

void RepositoryDOV5::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool RepositoryDOV5::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void RepositoryDOV5::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string RepositoryDOV5::getCreatedUserId() const
{
    return createdUserId_;
}

void RepositoryDOV5::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool RepositoryDOV5::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void RepositoryDOV5::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string RepositoryDOV5::getCreatedUserName() const
{
    return createdUserName_;
}

void RepositoryDOV5::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool RepositoryDOV5::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void RepositoryDOV5::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string RepositoryDOV5::getModifiedUserId() const
{
    return modifiedUserId_;
}

void RepositoryDOV5::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool RepositoryDOV5::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void RepositoryDOV5::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string RepositoryDOV5::getModifiedUserName() const
{
    return modifiedUserName_;
}

void RepositoryDOV5::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool RepositoryDOV5::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void RepositoryDOV5::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string RepositoryDOV5::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryDOV5::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryDOV5::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryDOV5::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepositoryDOV5::getFormat() const
{
    return format_;
}

void RepositoryDOV5::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RepositoryDOV5::formatIsSet() const
{
    return formatIsSet_;
}

void RepositoryDOV5::unsetformat()
{
    formatIsSet_ = false;
}

std::string RepositoryDOV5::getType() const
{
    return type_;
}

void RepositoryDOV5::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RepositoryDOV5::typeIsSet() const
{
    return typeIsSet_;
}

void RepositoryDOV5::unsettype()
{
    typeIsSet_ = false;
}

std::string RepositoryDOV5::getDescription() const
{
    return description_;
}

void RepositoryDOV5::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryDOV5::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryDOV5::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryDOV5::getRelease() const
{
    return release_;
}

void RepositoryDOV5::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool RepositoryDOV5::releaseIsSet() const
{
    return releaseIsSet_;
}

void RepositoryDOV5::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string RepositoryDOV5::getSnapshot() const
{
    return snapshot_;
}

void RepositoryDOV5::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool RepositoryDOV5::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void RepositoryDOV5::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

std::string RepositoryDOV5::getIncludesPattern() const
{
    return includesPattern_;
}

void RepositoryDOV5::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool RepositoryDOV5::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void RepositoryDOV5::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string RepositoryDOV5::getExcludesPattern() const
{
    return excludesPattern_;
}

void RepositoryDOV5::setExcludesPattern(const std::string& value)
{
    excludesPattern_ = value;
    excludesPatternIsSet_ = true;
}

bool RepositoryDOV5::excludesPatternIsSet() const
{
    return excludesPatternIsSet_;
}

void RepositoryDOV5::unsetexcludesPattern()
{
    excludesPatternIsSet_ = false;
}

std::string RepositoryDOV5::getShareRight() const
{
    return shareRight_;
}

void RepositoryDOV5::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool RepositoryDOV5::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void RepositoryDOV5::unsetshareRight()
{
    shareRightIsSet_ = false;
}

std::string RepositoryDOV5::getProjectId() const
{
    return projectId_;
}

void RepositoryDOV5::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryDOV5::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryDOV5::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryDOV5::getName() const
{
    return name_;
}

void RepositoryDOV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryDOV5::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryDOV5::unsetname()
{
    nameIsSet_ = false;
}

bool RepositoryDOV5::isDisable() const
{
    return disable_;
}

void RepositoryDOV5::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool RepositoryDOV5::disableIsSet() const
{
    return disableIsSet_;
}

void RepositoryDOV5::unsetdisable()
{
    disableIsSet_ = false;
}

std::string RepositoryDOV5::getPolicy() const
{
    return policy_;
}

void RepositoryDOV5::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RepositoryDOV5::policyIsSet() const
{
    return policyIsSet_;
}

void RepositoryDOV5::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string RepositoryDOV5::getNpm() const
{
    return npm_;
}

void RepositoryDOV5::setNpm(const std::string& value)
{
    npm_ = value;
    npmIsSet_ = true;
}

bool RepositoryDOV5::npmIsSet() const
{
    return npmIsSet_;
}

void RepositoryDOV5::unsetnpm()
{
    npmIsSet_ = false;
}

std::string RepositoryDOV5::getUri() const
{
    return uri_;
}

void RepositoryDOV5::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool RepositoryDOV5::uriIsSet() const
{
    return uriIsSet_;
}

void RepositoryDOV5::unseturi()
{
    uriIsSet_ = false;
}

std::string RepositoryDOV5::getRepositories() const
{
    return repositories_;
}

void RepositoryDOV5::setRepositories(const std::string& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool RepositoryDOV5::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void RepositoryDOV5::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

std::string RepositoryDOV5::getUserName() const
{
    return userName_;
}

void RepositoryDOV5::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepositoryDOV5::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepositoryDOV5::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RepositoryDOV5::getPassword() const
{
    return password_;
}

void RepositoryDOV5::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RepositoryDOV5::passwordIsSet() const
{
    return passwordIsSet_;
}

void RepositoryDOV5::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string RepositoryDOV5::getProxy() const
{
    return proxy_;
}

void RepositoryDOV5::setProxy(const std::string& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool RepositoryDOV5::proxyIsSet() const
{
    return proxyIsSet_;
}

void RepositoryDOV5::unsetproxy()
{
    proxyIsSet_ = false;
}

int32_t RepositoryDOV5::getScope() const
{
    return scope_;
}

void RepositoryDOV5::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool RepositoryDOV5::scopeIsSet() const
{
    return scopeIsSet_;
}

void RepositoryDOV5::unsetscope()
{
    scopeIsSet_ = false;
}

std::string RepositoryDOV5::getUrl() const
{
    return url_;
}

void RepositoryDOV5::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RepositoryDOV5::urlIsSet() const
{
    return urlIsSet_;
}

void RepositoryDOV5::unseturl()
{
    urlIsSet_ = false;
}

std::string RepositoryDOV5::getTabId() const
{
    return tabId_;
}

void RepositoryDOV5::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool RepositoryDOV5::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void RepositoryDOV5::unsettabId()
{
    tabIdIsSet_ = false;
}

std::string RepositoryDOV5::getDisplayName() const
{
    return displayName_;
}

void RepositoryDOV5::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool RepositoryDOV5::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void RepositoryDOV5::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string RepositoryDOV5::getSnapshotStatus() const
{
    return snapshotStatus_;
}

void RepositoryDOV5::setSnapshotStatus(const std::string& value)
{
    snapshotStatus_ = value;
    snapshotStatusIsSet_ = true;
}

bool RepositoryDOV5::snapshotStatusIsSet() const
{
    return snapshotStatusIsSet_;
}

void RepositoryDOV5::unsetsnapshotStatus()
{
    snapshotStatusIsSet_ = false;
}

std::string RepositoryDOV5::getReleaseStatus() const
{
    return releaseStatus_;
}

void RepositoryDOV5::setReleaseStatus(const std::string& value)
{
    releaseStatus_ = value;
    releaseStatusIsSet_ = true;
}

bool RepositoryDOV5::releaseStatusIsSet() const
{
    return releaseStatusIsSet_;
}

void RepositoryDOV5::unsetreleaseStatus()
{
    releaseStatusIsSet_ = false;
}

std::string RepositoryDOV5::getRepositoryIds() const
{
    return repositoryIds_;
}

void RepositoryDOV5::setRepositoryIds(const std::string& value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool RepositoryDOV5::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void RepositoryDOV5::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

std::string RepositoryDOV5::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void RepositoryDOV5::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool RepositoryDOV5::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void RepositoryDOV5::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

std::string RepositoryDOV5::getParentRepoName() const
{
    return parentRepoName_;
}

void RepositoryDOV5::setParentRepoName(const std::string& value)
{
    parentRepoName_ = value;
    parentRepoNameIsSet_ = true;
}

bool RepositoryDOV5::parentRepoNameIsSet() const
{
    return parentRepoNameIsSet_;
}

void RepositoryDOV5::unsetparentRepoName()
{
    parentRepoNameIsSet_ = false;
}

std::string RepositoryDOV5::getRemoteUrl() const
{
    return remoteUrl_;
}

void RepositoryDOV5::setRemoteUrl(const std::string& value)
{
    remoteUrl_ = value;
    remoteUrlIsSet_ = true;
}

bool RepositoryDOV5::remoteUrlIsSet() const
{
    return remoteUrlIsSet_;
}

void RepositoryDOV5::unsetremoteUrl()
{
    remoteUrlIsSet_ = false;
}

std::string RepositoryDOV5::getRemoteAuth() const
{
    return remoteAuth_;
}

void RepositoryDOV5::setRemoteAuth(const std::string& value)
{
    remoteAuth_ = value;
    remoteAuthIsSet_ = true;
}

bool RepositoryDOV5::remoteAuthIsSet() const
{
    return remoteAuthIsSet_;
}

void RepositoryDOV5::unsetremoteAuth()
{
    remoteAuthIsSet_ = false;
}

std::string RepositoryDOV5::getPypiRegistryUrl() const
{
    return pypiRegistryUrl_;
}

void RepositoryDOV5::setPypiRegistryUrl(const std::string& value)
{
    pypiRegistryUrl_ = value;
    pypiRegistryUrlIsSet_ = true;
}

bool RepositoryDOV5::pypiRegistryUrlIsSet() const
{
    return pypiRegistryUrlIsSet_;
}

void RepositoryDOV5::unsetpypiRegistryUrl()
{
    pypiRegistryUrlIsSet_ = false;
}

std::string RepositoryDOV5::getDefaultDeployRepository() const
{
    return defaultDeployRepository_;
}

void RepositoryDOV5::setDefaultDeployRepository(const std::string& value)
{
    defaultDeployRepository_ = value;
    defaultDeployRepositoryIsSet_ = true;
}

bool RepositoryDOV5::defaultDeployRepositoryIsSet() const
{
    return defaultDeployRepositoryIsSet_;
}

void RepositoryDOV5::unsetdefaultDeployRepository()
{
    defaultDeployRepositoryIsSet_ = false;
}

std::string RepositoryDOV5::getPackageType() const
{
    return packageType_;
}

void RepositoryDOV5::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool RepositoryDOV5::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void RepositoryDOV5::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

bool RepositoryDOV5::isNexuRepo() const
{
    return nexuRepo_;
}

void RepositoryDOV5::setNexuRepo(bool value)
{
    nexuRepo_ = value;
    nexuRepoIsSet_ = true;
}

bool RepositoryDOV5::nexuRepoIsSet() const
{
    return nexuRepoIsSet_;
}

void RepositoryDOV5::unsetnexuRepo()
{
    nexuRepoIsSet_ = false;
}

int32_t RepositoryDOV5::getMigrateFlag() const
{
    return migrateFlag_;
}

void RepositoryDOV5::setMigrateFlag(int32_t value)
{
    migrateFlag_ = value;
    migrateFlagIsSet_ = true;
}

bool RepositoryDOV5::migrateFlagIsSet() const
{
    return migrateFlagIsSet_;
}

void RepositoryDOV5::unsetmigrateFlag()
{
    migrateFlagIsSet_ = false;
}

}
}
}
}
}



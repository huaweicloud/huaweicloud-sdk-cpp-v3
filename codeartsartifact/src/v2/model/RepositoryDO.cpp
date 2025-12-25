

#include "huaweicloud/codeartsartifact/v2/model/RepositoryDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepositoryDO::RepositoryDO()
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
    name_ = "";
    nameIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    tabId_ = "";
    tabIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
    release_ = "";
    releaseIsSet_ = false;
    npm_ = "";
    npmIsSet_ = false;
    snapshotStatus_ = "";
    snapshotStatusIsSet_ = false;
    releaseStatus_ = "";
    releaseStatusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    repositoryIdsIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    deploymentPolicy_ = "";
    deploymentPolicyIsSet_ = false;
    repositoriesIsSet_ = false;
    parentRepoName_ = "";
    parentRepoNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    remoteUrl_ = "";
    remoteUrlIsSet_ = false;
    defaultDeployRepository_ = "";
    defaultDeployRepositoryIsSet_ = false;
    remoteType_ = "";
    remoteTypeIsSet_ = false;
    proxy_ = "";
    proxyIsSet_ = false;
    allowAnonymous_ = false;
    allowAnonymousIsSet_ = false;
    autoCleanSnapshot_ = false;
    autoCleanSnapshotIsSet_ = false;
    snapshotAliveDays_ = "";
    snapshotAliveDaysIsSet_ = false;
    maxUniqueSnapshots_ = "";
    maxUniqueSnapshotsIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
    nexuRepo_ = false;
    nexuRepoIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
}

RepositoryDO::~RepositoryDO() = default;

void RepositoryDO::validate()
{
}

web::json::value RepositoryDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domainId")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("createdTime")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modifiedTime")] = ModelBase::toJson(modifiedTime_);
    }
    if(createdUserIdIsSet_) {
        val[utility::conversions::to_string_t("createdUserId")] = ModelBase::toJson(createdUserId_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("createdUserName")] = ModelBase::toJson(createdUserName_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserId")] = ModelBase::toJson(modifiedUserId_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserName")] = ModelBase::toJson(modifiedUserName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(tabIdIsSet_) {
        val[utility::conversions::to_string_t("tabId")] = ModelBase::toJson(tabId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repositoryName")] = ModelBase::toJson(repositoryName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }
    if(npmIsSet_) {
        val[utility::conversions::to_string_t("npm")] = ModelBase::toJson(npm_);
    }
    if(snapshotStatusIsSet_) {
        val[utility::conversions::to_string_t("snapshotStatus")] = ModelBase::toJson(snapshotStatus_);
    }
    if(releaseStatusIsSet_) {
        val[utility::conversions::to_string_t("releaseStatus")] = ModelBase::toJson(releaseStatus_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includesPattern")] = ModelBase::toJson(includesPattern_);
    }
    if(repositoryIdsIsSet_) {
        val[utility::conversions::to_string_t("repositoryIds")] = ModelBase::toJson(repositoryIds_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(deploymentPolicyIsSet_) {
        val[utility::conversions::to_string_t("deploymentPolicy")] = ModelBase::toJson(deploymentPolicy_);
    }
    if(repositoriesIsSet_) {
        val[utility::conversions::to_string_t("repositories")] = ModelBase::toJson(repositories_);
    }
    if(parentRepoNameIsSet_) {
        val[utility::conversions::to_string_t("parentRepoName")] = ModelBase::toJson(parentRepoName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(remoteUrlIsSet_) {
        val[utility::conversions::to_string_t("remoteUrl")] = ModelBase::toJson(remoteUrl_);
    }
    if(defaultDeployRepositoryIsSet_) {
        val[utility::conversions::to_string_t("defaultDeployRepository")] = ModelBase::toJson(defaultDeployRepository_);
    }
    if(remoteTypeIsSet_) {
        val[utility::conversions::to_string_t("remoteType")] = ModelBase::toJson(remoteType_);
    }
    if(proxyIsSet_) {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(proxy_);
    }
    if(allowAnonymousIsSet_) {
        val[utility::conversions::to_string_t("allowAnonymous")] = ModelBase::toJson(allowAnonymous_);
    }
    if(autoCleanSnapshotIsSet_) {
        val[utility::conversions::to_string_t("autoCleanSnapshot")] = ModelBase::toJson(autoCleanSnapshot_);
    }
    if(snapshotAliveDaysIsSet_) {
        val[utility::conversions::to_string_t("snapshotAliveDays")] = ModelBase::toJson(snapshotAliveDays_);
    }
    if(maxUniqueSnapshotsIsSet_) {
        val[utility::conversions::to_string_t("maxUniqueSnapshots")] = ModelBase::toJson(maxUniqueSnapshots_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("shareRight")] = ModelBase::toJson(shareRight_);
    }
    if(nexuRepoIsSet_) {
        val[utility::conversions::to_string_t("nexuRepo")] = ModelBase::toJson(nexuRepo_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("packageType")] = ModelBase::toJson(packageType_);
    }

    return val;
}
bool RepositoryDO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domainId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainId"));
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
    if(val.has_field(utility::conversions::to_string_t("createdTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdUserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdUserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedUserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedUserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tabId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tabId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTabId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("npm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshotStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshotStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("releaseStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("releaseStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("includesPattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includesPattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludesPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploymentPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploymentPolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentRepoName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentRepoName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
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
    if(val.has_field(utility::conversions::to_string_t("remoteUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultDeployRepository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultDeployRepository"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultDeployRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remoteType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allowAnonymous"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowAnonymous"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowAnonymous(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoCleanSnapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoCleanSnapshot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoCleanSnapshot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshotAliveDays"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshotAliveDays"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotAliveDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxUniqueSnapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxUniqueSnapshots"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxUniqueSnapshots(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shareRight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareRight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareRight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nexuRepo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nexuRepo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNexuRepo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("packageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
        }
    }
    return ok;
}


std::string RepositoryDO::getStatus() const
{
    return status_;
}

void RepositoryDO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepositoryDO::statusIsSet() const
{
    return statusIsSet_;
}

void RepositoryDO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepositoryDO::getDomainId() const
{
    return domainId_;
}

void RepositoryDO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepositoryDO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepositoryDO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepositoryDO::getRegion() const
{
    return region_;
}

void RepositoryDO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RepositoryDO::regionIsSet() const
{
    return regionIsSet_;
}

void RepositoryDO::unsetregion()
{
    regionIsSet_ = false;
}

std::string RepositoryDO::getCreatedTime() const
{
    return createdTime_;
}

void RepositoryDO::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool RepositoryDO::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void RepositoryDO::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string RepositoryDO::getModifiedTime() const
{
    return modifiedTime_;
}

void RepositoryDO::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool RepositoryDO::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void RepositoryDO::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string RepositoryDO::getCreatedUserId() const
{
    return createdUserId_;
}

void RepositoryDO::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool RepositoryDO::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void RepositoryDO::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string RepositoryDO::getCreatedUserName() const
{
    return createdUserName_;
}

void RepositoryDO::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool RepositoryDO::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void RepositoryDO::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string RepositoryDO::getModifiedUserId() const
{
    return modifiedUserId_;
}

void RepositoryDO::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool RepositoryDO::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void RepositoryDO::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string RepositoryDO::getModifiedUserName() const
{
    return modifiedUserName_;
}

void RepositoryDO::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool RepositoryDO::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void RepositoryDO::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string RepositoryDO::getName() const
{
    return name_;
}

void RepositoryDO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryDO::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryDO::unsetname()
{
    nameIsSet_ = false;
}

bool RepositoryDO::isDisable() const
{
    return disable_;
}

void RepositoryDO::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool RepositoryDO::disableIsSet() const
{
    return disableIsSet_;
}

void RepositoryDO::unsetdisable()
{
    disableIsSet_ = false;
}

std::string RepositoryDO::getFormat() const
{
    return format_;
}

void RepositoryDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RepositoryDO::formatIsSet() const
{
    return formatIsSet_;
}

void RepositoryDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string RepositoryDO::getType() const
{
    return type_;
}

void RepositoryDO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RepositoryDO::typeIsSet() const
{
    return typeIsSet_;
}

void RepositoryDO::unsettype()
{
    typeIsSet_ = false;
}

std::string RepositoryDO::getPolicy() const
{
    return policy_;
}

void RepositoryDO::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RepositoryDO::policyIsSet() const
{
    return policyIsSet_;
}

void RepositoryDO::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string RepositoryDO::getTabId() const
{
    return tabId_;
}

void RepositoryDO::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool RepositoryDO::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void RepositoryDO::unsettabId()
{
    tabIdIsSet_ = false;
}

std::string RepositoryDO::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryDO::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryDO::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryDO::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepositoryDO::getDisplayName() const
{
    return displayName_;
}

void RepositoryDO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool RepositoryDO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void RepositoryDO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string RepositoryDO::getDescription() const
{
    return description_;
}

void RepositoryDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryDO::getSnapshot() const
{
    return snapshot_;
}

void RepositoryDO::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool RepositoryDO::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void RepositoryDO::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

std::string RepositoryDO::getRelease() const
{
    return release_;
}

void RepositoryDO::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool RepositoryDO::releaseIsSet() const
{
    return releaseIsSet_;
}

void RepositoryDO::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string RepositoryDO::getNpm() const
{
    return npm_;
}

void RepositoryDO::setNpm(const std::string& value)
{
    npm_ = value;
    npmIsSet_ = true;
}

bool RepositoryDO::npmIsSet() const
{
    return npmIsSet_;
}

void RepositoryDO::unsetnpm()
{
    npmIsSet_ = false;
}

std::string RepositoryDO::getSnapshotStatus() const
{
    return snapshotStatus_;
}

void RepositoryDO::setSnapshotStatus(const std::string& value)
{
    snapshotStatus_ = value;
    snapshotStatusIsSet_ = true;
}

bool RepositoryDO::snapshotStatusIsSet() const
{
    return snapshotStatusIsSet_;
}

void RepositoryDO::unsetsnapshotStatus()
{
    snapshotStatusIsSet_ = false;
}

std::string RepositoryDO::getReleaseStatus() const
{
    return releaseStatus_;
}

void RepositoryDO::setReleaseStatus(const std::string& value)
{
    releaseStatus_ = value;
    releaseStatusIsSet_ = true;
}

bool RepositoryDO::releaseStatusIsSet() const
{
    return releaseStatusIsSet_;
}

void RepositoryDO::unsetreleaseStatus()
{
    releaseStatusIsSet_ = false;
}

std::string RepositoryDO::getProjectId() const
{
    return projectId_;
}

void RepositoryDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryDO::getIncludesPattern() const
{
    return includesPattern_;
}

void RepositoryDO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool RepositoryDO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void RepositoryDO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::vector<std::string>& RepositoryDO::getRepositoryIds()
{
    return repositoryIds_;
}

void RepositoryDO::setRepositoryIds(const std::vector<std::string>& value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool RepositoryDO::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void RepositoryDO::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

std::string RepositoryDO::getUri() const
{
    return uri_;
}

void RepositoryDO::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool RepositoryDO::uriIsSet() const
{
    return uriIsSet_;
}

void RepositoryDO::unseturi()
{
    uriIsSet_ = false;
}

std::string RepositoryDO::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void RepositoryDO::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool RepositoryDO::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void RepositoryDO::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

std::vector<std::string>& RepositoryDO::getRepositories()
{
    return repositories_;
}

void RepositoryDO::setRepositories(const std::vector<std::string>& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool RepositoryDO::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void RepositoryDO::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

std::string RepositoryDO::getParentRepoName() const
{
    return parentRepoName_;
}

void RepositoryDO::setParentRepoName(const std::string& value)
{
    parentRepoName_ = value;
    parentRepoNameIsSet_ = true;
}

bool RepositoryDO::parentRepoNameIsSet() const
{
    return parentRepoNameIsSet_;
}

void RepositoryDO::unsetparentRepoName()
{
    parentRepoNameIsSet_ = false;
}

std::string RepositoryDO::getUserName() const
{
    return userName_;
}

void RepositoryDO::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepositoryDO::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepositoryDO::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RepositoryDO::getPassword() const
{
    return password_;
}

void RepositoryDO::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RepositoryDO::passwordIsSet() const
{
    return passwordIsSet_;
}

void RepositoryDO::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string RepositoryDO::getRemoteUrl() const
{
    return remoteUrl_;
}

void RepositoryDO::setRemoteUrl(const std::string& value)
{
    remoteUrl_ = value;
    remoteUrlIsSet_ = true;
}

bool RepositoryDO::remoteUrlIsSet() const
{
    return remoteUrlIsSet_;
}

void RepositoryDO::unsetremoteUrl()
{
    remoteUrlIsSet_ = false;
}

std::string RepositoryDO::getDefaultDeployRepository() const
{
    return defaultDeployRepository_;
}

void RepositoryDO::setDefaultDeployRepository(const std::string& value)
{
    defaultDeployRepository_ = value;
    defaultDeployRepositoryIsSet_ = true;
}

bool RepositoryDO::defaultDeployRepositoryIsSet() const
{
    return defaultDeployRepositoryIsSet_;
}

void RepositoryDO::unsetdefaultDeployRepository()
{
    defaultDeployRepositoryIsSet_ = false;
}

std::string RepositoryDO::getRemoteType() const
{
    return remoteType_;
}

void RepositoryDO::setRemoteType(const std::string& value)
{
    remoteType_ = value;
    remoteTypeIsSet_ = true;
}

bool RepositoryDO::remoteTypeIsSet() const
{
    return remoteTypeIsSet_;
}

void RepositoryDO::unsetremoteType()
{
    remoteTypeIsSet_ = false;
}

std::string RepositoryDO::getProxy() const
{
    return proxy_;
}

void RepositoryDO::setProxy(const std::string& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool RepositoryDO::proxyIsSet() const
{
    return proxyIsSet_;
}

void RepositoryDO::unsetproxy()
{
    proxyIsSet_ = false;
}

bool RepositoryDO::isAllowAnonymous() const
{
    return allowAnonymous_;
}

void RepositoryDO::setAllowAnonymous(bool value)
{
    allowAnonymous_ = value;
    allowAnonymousIsSet_ = true;
}

bool RepositoryDO::allowAnonymousIsSet() const
{
    return allowAnonymousIsSet_;
}

void RepositoryDO::unsetallowAnonymous()
{
    allowAnonymousIsSet_ = false;
}

bool RepositoryDO::isAutoCleanSnapshot() const
{
    return autoCleanSnapshot_;
}

void RepositoryDO::setAutoCleanSnapshot(bool value)
{
    autoCleanSnapshot_ = value;
    autoCleanSnapshotIsSet_ = true;
}

bool RepositoryDO::autoCleanSnapshotIsSet() const
{
    return autoCleanSnapshotIsSet_;
}

void RepositoryDO::unsetautoCleanSnapshot()
{
    autoCleanSnapshotIsSet_ = false;
}

std::string RepositoryDO::getSnapshotAliveDays() const
{
    return snapshotAliveDays_;
}

void RepositoryDO::setSnapshotAliveDays(const std::string& value)
{
    snapshotAliveDays_ = value;
    snapshotAliveDaysIsSet_ = true;
}

bool RepositoryDO::snapshotAliveDaysIsSet() const
{
    return snapshotAliveDaysIsSet_;
}

void RepositoryDO::unsetsnapshotAliveDays()
{
    snapshotAliveDaysIsSet_ = false;
}

std::string RepositoryDO::getMaxUniqueSnapshots() const
{
    return maxUniqueSnapshots_;
}

void RepositoryDO::setMaxUniqueSnapshots(const std::string& value)
{
    maxUniqueSnapshots_ = value;
    maxUniqueSnapshotsIsSet_ = true;
}

bool RepositoryDO::maxUniqueSnapshotsIsSet() const
{
    return maxUniqueSnapshotsIsSet_;
}

void RepositoryDO::unsetmaxUniqueSnapshots()
{
    maxUniqueSnapshotsIsSet_ = false;
}

std::string RepositoryDO::getShareRight() const
{
    return shareRight_;
}

void RepositoryDO::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool RepositoryDO::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void RepositoryDO::unsetshareRight()
{
    shareRightIsSet_ = false;
}

bool RepositoryDO::isNexuRepo() const
{
    return nexuRepo_;
}

void RepositoryDO::setNexuRepo(bool value)
{
    nexuRepo_ = value;
    nexuRepoIsSet_ = true;
}

bool RepositoryDO::nexuRepoIsSet() const
{
    return nexuRepoIsSet_;
}

void RepositoryDO::unsetnexuRepo()
{
    nexuRepoIsSet_ = false;
}

std::string RepositoryDO::getUrl() const
{
    return url_;
}

void RepositoryDO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RepositoryDO::urlIsSet() const
{
    return urlIsSet_;
}

void RepositoryDO::unseturl()
{
    urlIsSet_ = false;
}

std::string RepositoryDO::getPackageType() const
{
    return packageType_;
}

void RepositoryDO::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool RepositoryDO::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void RepositoryDO::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

}
}
}
}
}



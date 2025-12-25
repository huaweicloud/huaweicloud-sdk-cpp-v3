

#include "huaweicloud/codeartsartifact/v2/model/RepositoryBuildVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepositoryBuildVO::RepositoryBuildVO()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
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

RepositoryBuildVO::~RepositoryBuildVO() = default;

void RepositoryBuildVO::validate()
{
}

web::json::value RepositoryBuildVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
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
bool RepositoryBuildVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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


std::string RepositoryBuildVO::getUsername() const
{
    return username_;
}

void RepositoryBuildVO::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RepositoryBuildVO::usernameIsSet() const
{
    return usernameIsSet_;
}

void RepositoryBuildVO::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RepositoryBuildVO::getPassword() const
{
    return password_;
}

void RepositoryBuildVO::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RepositoryBuildVO::passwordIsSet() const
{
    return passwordIsSet_;
}

void RepositoryBuildVO::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string RepositoryBuildVO::getStatus() const
{
    return status_;
}

void RepositoryBuildVO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepositoryBuildVO::statusIsSet() const
{
    return statusIsSet_;
}

void RepositoryBuildVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepositoryBuildVO::getDomainId() const
{
    return domainId_;
}

void RepositoryBuildVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepositoryBuildVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepositoryBuildVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepositoryBuildVO::getRegion() const
{
    return region_;
}

void RepositoryBuildVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RepositoryBuildVO::regionIsSet() const
{
    return regionIsSet_;
}

void RepositoryBuildVO::unsetregion()
{
    regionIsSet_ = false;
}

std::string RepositoryBuildVO::getCreatedTime() const
{
    return createdTime_;
}

void RepositoryBuildVO::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool RepositoryBuildVO::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void RepositoryBuildVO::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string RepositoryBuildVO::getModifiedTime() const
{
    return modifiedTime_;
}

void RepositoryBuildVO::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool RepositoryBuildVO::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void RepositoryBuildVO::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string RepositoryBuildVO::getCreatedUserId() const
{
    return createdUserId_;
}

void RepositoryBuildVO::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool RepositoryBuildVO::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void RepositoryBuildVO::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string RepositoryBuildVO::getCreatedUserName() const
{
    return createdUserName_;
}

void RepositoryBuildVO::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool RepositoryBuildVO::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void RepositoryBuildVO::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string RepositoryBuildVO::getModifiedUserId() const
{
    return modifiedUserId_;
}

void RepositoryBuildVO::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool RepositoryBuildVO::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void RepositoryBuildVO::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string RepositoryBuildVO::getModifiedUserName() const
{
    return modifiedUserName_;
}

void RepositoryBuildVO::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool RepositoryBuildVO::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void RepositoryBuildVO::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string RepositoryBuildVO::getName() const
{
    return name_;
}

void RepositoryBuildVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryBuildVO::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryBuildVO::unsetname()
{
    nameIsSet_ = false;
}

bool RepositoryBuildVO::isDisable() const
{
    return disable_;
}

void RepositoryBuildVO::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool RepositoryBuildVO::disableIsSet() const
{
    return disableIsSet_;
}

void RepositoryBuildVO::unsetdisable()
{
    disableIsSet_ = false;
}

std::string RepositoryBuildVO::getFormat() const
{
    return format_;
}

void RepositoryBuildVO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RepositoryBuildVO::formatIsSet() const
{
    return formatIsSet_;
}

void RepositoryBuildVO::unsetformat()
{
    formatIsSet_ = false;
}

std::string RepositoryBuildVO::getType() const
{
    return type_;
}

void RepositoryBuildVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RepositoryBuildVO::typeIsSet() const
{
    return typeIsSet_;
}

void RepositoryBuildVO::unsettype()
{
    typeIsSet_ = false;
}

std::string RepositoryBuildVO::getPolicy() const
{
    return policy_;
}

void RepositoryBuildVO::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RepositoryBuildVO::policyIsSet() const
{
    return policyIsSet_;
}

void RepositoryBuildVO::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string RepositoryBuildVO::getTabId() const
{
    return tabId_;
}

void RepositoryBuildVO::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool RepositoryBuildVO::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void RepositoryBuildVO::unsettabId()
{
    tabIdIsSet_ = false;
}

std::string RepositoryBuildVO::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryBuildVO::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryBuildVO::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryBuildVO::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepositoryBuildVO::getDisplayName() const
{
    return displayName_;
}

void RepositoryBuildVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool RepositoryBuildVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void RepositoryBuildVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string RepositoryBuildVO::getDescription() const
{
    return description_;
}

void RepositoryBuildVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryBuildVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryBuildVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryBuildVO::getSnapshot() const
{
    return snapshot_;
}

void RepositoryBuildVO::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool RepositoryBuildVO::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void RepositoryBuildVO::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

std::string RepositoryBuildVO::getRelease() const
{
    return release_;
}

void RepositoryBuildVO::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool RepositoryBuildVO::releaseIsSet() const
{
    return releaseIsSet_;
}

void RepositoryBuildVO::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string RepositoryBuildVO::getNpm() const
{
    return npm_;
}

void RepositoryBuildVO::setNpm(const std::string& value)
{
    npm_ = value;
    npmIsSet_ = true;
}

bool RepositoryBuildVO::npmIsSet() const
{
    return npmIsSet_;
}

void RepositoryBuildVO::unsetnpm()
{
    npmIsSet_ = false;
}

std::string RepositoryBuildVO::getSnapshotStatus() const
{
    return snapshotStatus_;
}

void RepositoryBuildVO::setSnapshotStatus(const std::string& value)
{
    snapshotStatus_ = value;
    snapshotStatusIsSet_ = true;
}

bool RepositoryBuildVO::snapshotStatusIsSet() const
{
    return snapshotStatusIsSet_;
}

void RepositoryBuildVO::unsetsnapshotStatus()
{
    snapshotStatusIsSet_ = false;
}

std::string RepositoryBuildVO::getReleaseStatus() const
{
    return releaseStatus_;
}

void RepositoryBuildVO::setReleaseStatus(const std::string& value)
{
    releaseStatus_ = value;
    releaseStatusIsSet_ = true;
}

bool RepositoryBuildVO::releaseStatusIsSet() const
{
    return releaseStatusIsSet_;
}

void RepositoryBuildVO::unsetreleaseStatus()
{
    releaseStatusIsSet_ = false;
}

std::string RepositoryBuildVO::getProjectId() const
{
    return projectId_;
}

void RepositoryBuildVO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryBuildVO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryBuildVO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryBuildVO::getIncludesPattern() const
{
    return includesPattern_;
}

void RepositoryBuildVO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool RepositoryBuildVO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void RepositoryBuildVO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::vector<std::string>& RepositoryBuildVO::getRepositoryIds()
{
    return repositoryIds_;
}

void RepositoryBuildVO::setRepositoryIds(const std::vector<std::string>& value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool RepositoryBuildVO::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void RepositoryBuildVO::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

std::string RepositoryBuildVO::getUri() const
{
    return uri_;
}

void RepositoryBuildVO::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool RepositoryBuildVO::uriIsSet() const
{
    return uriIsSet_;
}

void RepositoryBuildVO::unseturi()
{
    uriIsSet_ = false;
}

std::string RepositoryBuildVO::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void RepositoryBuildVO::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool RepositoryBuildVO::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void RepositoryBuildVO::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

std::vector<std::string>& RepositoryBuildVO::getRepositories()
{
    return repositories_;
}

void RepositoryBuildVO::setRepositories(const std::vector<std::string>& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool RepositoryBuildVO::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void RepositoryBuildVO::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

std::string RepositoryBuildVO::getParentRepoName() const
{
    return parentRepoName_;
}

void RepositoryBuildVO::setParentRepoName(const std::string& value)
{
    parentRepoName_ = value;
    parentRepoNameIsSet_ = true;
}

bool RepositoryBuildVO::parentRepoNameIsSet() const
{
    return parentRepoNameIsSet_;
}

void RepositoryBuildVO::unsetparentRepoName()
{
    parentRepoNameIsSet_ = false;
}

std::string RepositoryBuildVO::getUserName() const
{
    return userName_;
}

void RepositoryBuildVO::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepositoryBuildVO::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepositoryBuildVO::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RepositoryBuildVO::getRemoteUrl() const
{
    return remoteUrl_;
}

void RepositoryBuildVO::setRemoteUrl(const std::string& value)
{
    remoteUrl_ = value;
    remoteUrlIsSet_ = true;
}

bool RepositoryBuildVO::remoteUrlIsSet() const
{
    return remoteUrlIsSet_;
}

void RepositoryBuildVO::unsetremoteUrl()
{
    remoteUrlIsSet_ = false;
}

std::string RepositoryBuildVO::getDefaultDeployRepository() const
{
    return defaultDeployRepository_;
}

void RepositoryBuildVO::setDefaultDeployRepository(const std::string& value)
{
    defaultDeployRepository_ = value;
    defaultDeployRepositoryIsSet_ = true;
}

bool RepositoryBuildVO::defaultDeployRepositoryIsSet() const
{
    return defaultDeployRepositoryIsSet_;
}

void RepositoryBuildVO::unsetdefaultDeployRepository()
{
    defaultDeployRepositoryIsSet_ = false;
}

std::string RepositoryBuildVO::getRemoteType() const
{
    return remoteType_;
}

void RepositoryBuildVO::setRemoteType(const std::string& value)
{
    remoteType_ = value;
    remoteTypeIsSet_ = true;
}

bool RepositoryBuildVO::remoteTypeIsSet() const
{
    return remoteTypeIsSet_;
}

void RepositoryBuildVO::unsetremoteType()
{
    remoteTypeIsSet_ = false;
}

std::string RepositoryBuildVO::getProxy() const
{
    return proxy_;
}

void RepositoryBuildVO::setProxy(const std::string& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool RepositoryBuildVO::proxyIsSet() const
{
    return proxyIsSet_;
}

void RepositoryBuildVO::unsetproxy()
{
    proxyIsSet_ = false;
}

bool RepositoryBuildVO::isAllowAnonymous() const
{
    return allowAnonymous_;
}

void RepositoryBuildVO::setAllowAnonymous(bool value)
{
    allowAnonymous_ = value;
    allowAnonymousIsSet_ = true;
}

bool RepositoryBuildVO::allowAnonymousIsSet() const
{
    return allowAnonymousIsSet_;
}

void RepositoryBuildVO::unsetallowAnonymous()
{
    allowAnonymousIsSet_ = false;
}

bool RepositoryBuildVO::isAutoCleanSnapshot() const
{
    return autoCleanSnapshot_;
}

void RepositoryBuildVO::setAutoCleanSnapshot(bool value)
{
    autoCleanSnapshot_ = value;
    autoCleanSnapshotIsSet_ = true;
}

bool RepositoryBuildVO::autoCleanSnapshotIsSet() const
{
    return autoCleanSnapshotIsSet_;
}

void RepositoryBuildVO::unsetautoCleanSnapshot()
{
    autoCleanSnapshotIsSet_ = false;
}

std::string RepositoryBuildVO::getSnapshotAliveDays() const
{
    return snapshotAliveDays_;
}

void RepositoryBuildVO::setSnapshotAliveDays(const std::string& value)
{
    snapshotAliveDays_ = value;
    snapshotAliveDaysIsSet_ = true;
}

bool RepositoryBuildVO::snapshotAliveDaysIsSet() const
{
    return snapshotAliveDaysIsSet_;
}

void RepositoryBuildVO::unsetsnapshotAliveDays()
{
    snapshotAliveDaysIsSet_ = false;
}

std::string RepositoryBuildVO::getMaxUniqueSnapshots() const
{
    return maxUniqueSnapshots_;
}

void RepositoryBuildVO::setMaxUniqueSnapshots(const std::string& value)
{
    maxUniqueSnapshots_ = value;
    maxUniqueSnapshotsIsSet_ = true;
}

bool RepositoryBuildVO::maxUniqueSnapshotsIsSet() const
{
    return maxUniqueSnapshotsIsSet_;
}

void RepositoryBuildVO::unsetmaxUniqueSnapshots()
{
    maxUniqueSnapshotsIsSet_ = false;
}

std::string RepositoryBuildVO::getShareRight() const
{
    return shareRight_;
}

void RepositoryBuildVO::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool RepositoryBuildVO::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void RepositoryBuildVO::unsetshareRight()
{
    shareRightIsSet_ = false;
}

bool RepositoryBuildVO::isNexuRepo() const
{
    return nexuRepo_;
}

void RepositoryBuildVO::setNexuRepo(bool value)
{
    nexuRepo_ = value;
    nexuRepoIsSet_ = true;
}

bool RepositoryBuildVO::nexuRepoIsSet() const
{
    return nexuRepoIsSet_;
}

void RepositoryBuildVO::unsetnexuRepo()
{
    nexuRepoIsSet_ = false;
}

std::string RepositoryBuildVO::getUrl() const
{
    return url_;
}

void RepositoryBuildVO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RepositoryBuildVO::urlIsSet() const
{
    return urlIsSet_;
}

void RepositoryBuildVO::unseturl()
{
    urlIsSet_ = false;
}

std::string RepositoryBuildVO::getPackageType() const
{
    return packageType_;
}

void RepositoryBuildVO::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool RepositoryBuildVO::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void RepositoryBuildVO::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsartifact/v2/model/ShowProjectListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectListResult::ShowProjectListResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    createdUserId_ = "";
    createdUserIdIsSet_ = false;
    createdUserName_ = "";
    createdUserNameIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    modifiedUserId_ = "";
    modifiedUserIdIsSet_ = false;
    modifiedUserName_ = "";
    modifiedUserNameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    repoType_ = "";
    repoTypeIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    excludesPattern_ = "";
    excludesPatternIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    storageSummaryInfo_ = "";
    storageSummaryInfoIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
    deploymentPolicy_ = "";
    deploymentPolicyIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    tabId_ = "";
    tabIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
}

ShowProjectListResult::~ShowProjectListResult() = default;

void ShowProjectListResult::validate()
{
}

web::json::value ShowProjectListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("createdTime")] = ModelBase::toJson(createdTime_);
    }
    if(createdUserIdIsSet_) {
        val[utility::conversions::to_string_t("createdUserId")] = ModelBase::toJson(createdUserId_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("createdUserName")] = ModelBase::toJson(createdUserName_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modifiedTime")] = ModelBase::toJson(modifiedTime_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserId")] = ModelBase::toJson(modifiedUserId_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserName")] = ModelBase::toJson(modifiedUserName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(repoTypeIsSet_) {
        val[utility::conversions::to_string_t("repoType")] = ModelBase::toJson(repoType_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includesPattern")] = ModelBase::toJson(includesPattern_);
    }
    if(excludesPatternIsSet_) {
        val[utility::conversions::to_string_t("excludesPattern")] = ModelBase::toJson(excludesPattern_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(storageSummaryInfoIsSet_) {
        val[utility::conversions::to_string_t("storageSummaryInfo")] = ModelBase::toJson(storageSummaryInfo_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("shareRight")] = ModelBase::toJson(shareRight_);
    }
    if(deploymentPolicyIsSet_) {
        val[utility::conversions::to_string_t("deploymentPolicy")] = ModelBase::toJson(deploymentPolicy_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repositoryName")] = ModelBase::toJson(repositoryName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(tabIdIsSet_) {
        val[utility::conversions::to_string_t("tabId")] = ModelBase::toJson(tabId_);
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
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("packageType")] = ModelBase::toJson(packageType_);
    }

    return val;
}
bool ShowProjectListResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modifiedTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("excludesPattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludesPattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludesPattern(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("storageSummaryInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageSummaryInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSummaryInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("shareRight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareRight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareRight(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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


std::string ShowProjectListResult::getId() const
{
    return id_;
}

void ShowProjectListResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProjectListResult::idIsSet() const
{
    return idIsSet_;
}

void ShowProjectListResult::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProjectListResult::getName() const
{
    return name_;
}

void ShowProjectListResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProjectListResult::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProjectListResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProjectListResult::getDescription() const
{
    return description_;
}

void ShowProjectListResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProjectListResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProjectListResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowProjectListResult::getCreatedTime() const
{
    return createdTime_;
}

void ShowProjectListResult::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowProjectListResult::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowProjectListResult::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowProjectListResult::getCreatedUserId() const
{
    return createdUserId_;
}

void ShowProjectListResult::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool ShowProjectListResult::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void ShowProjectListResult::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string ShowProjectListResult::getCreatedUserName() const
{
    return createdUserName_;
}

void ShowProjectListResult::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool ShowProjectListResult::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void ShowProjectListResult::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string ShowProjectListResult::getModifiedTime() const
{
    return modifiedTime_;
}

void ShowProjectListResult::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool ShowProjectListResult::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void ShowProjectListResult::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string ShowProjectListResult::getModifiedUserId() const
{
    return modifiedUserId_;
}

void ShowProjectListResult::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool ShowProjectListResult::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void ShowProjectListResult::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string ShowProjectListResult::getModifiedUserName() const
{
    return modifiedUserName_;
}

void ShowProjectListResult::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool ShowProjectListResult::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void ShowProjectListResult::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string ShowProjectListResult::getFormat() const
{
    return format_;
}

void ShowProjectListResult::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ShowProjectListResult::formatIsSet() const
{
    return formatIsSet_;
}

void ShowProjectListResult::unsetformat()
{
    formatIsSet_ = false;
}

std::string ShowProjectListResult::getRepoType() const
{
    return repoType_;
}

void ShowProjectListResult::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool ShowProjectListResult::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void ShowProjectListResult::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

std::string ShowProjectListResult::getIncludesPattern() const
{
    return includesPattern_;
}

void ShowProjectListResult::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool ShowProjectListResult::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void ShowProjectListResult::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string ShowProjectListResult::getExcludesPattern() const
{
    return excludesPattern_;
}

void ShowProjectListResult::setExcludesPattern(const std::string& value)
{
    excludesPattern_ = value;
    excludesPatternIsSet_ = true;
}

bool ShowProjectListResult::excludesPatternIsSet() const
{
    return excludesPatternIsSet_;
}

void ShowProjectListResult::unsetexcludesPattern()
{
    excludesPatternIsSet_ = false;
}

std::string ShowProjectListResult::getUrl() const
{
    return url_;
}

void ShowProjectListResult::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowProjectListResult::urlIsSet() const
{
    return urlIsSet_;
}

void ShowProjectListResult::unseturl()
{
    urlIsSet_ = false;
}

std::string ShowProjectListResult::getStorageSummaryInfo() const
{
    return storageSummaryInfo_;
}

void ShowProjectListResult::setStorageSummaryInfo(const std::string& value)
{
    storageSummaryInfo_ = value;
    storageSummaryInfoIsSet_ = true;
}

bool ShowProjectListResult::storageSummaryInfoIsSet() const
{
    return storageSummaryInfoIsSet_;
}

void ShowProjectListResult::unsetstorageSummaryInfo()
{
    storageSummaryInfoIsSet_ = false;
}

std::string ShowProjectListResult::getProjectId() const
{
    return projectId_;
}

void ShowProjectListResult::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectListResult::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectListResult::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowProjectListResult::getShareRight() const
{
    return shareRight_;
}

void ShowProjectListResult::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool ShowProjectListResult::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void ShowProjectListResult::unsetshareRight()
{
    shareRightIsSet_ = false;
}

std::string ShowProjectListResult::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void ShowProjectListResult::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool ShowProjectListResult::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void ShowProjectListResult::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

std::string ShowProjectListResult::getRepositoryName() const
{
    return repositoryName_;
}

void ShowProjectListResult::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowProjectListResult::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowProjectListResult::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string ShowProjectListResult::getDisplayName() const
{
    return displayName_;
}

void ShowProjectListResult::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ShowProjectListResult::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ShowProjectListResult::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ShowProjectListResult::getPolicy() const
{
    return policy_;
}

void ShowProjectListResult::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowProjectListResult::policyIsSet() const
{
    return policyIsSet_;
}

void ShowProjectListResult::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ShowProjectListResult::getTabId() const
{
    return tabId_;
}

void ShowProjectListResult::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool ShowProjectListResult::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void ShowProjectListResult::unsettabId()
{
    tabIdIsSet_ = false;
}

std::string ShowProjectListResult::getStatus() const
{
    return status_;
}

void ShowProjectListResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectListResult::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectListResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowProjectListResult::getDomainId() const
{
    return domainId_;
}

void ShowProjectListResult::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowProjectListResult::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowProjectListResult::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowProjectListResult::getRegion() const
{
    return region_;
}

void ShowProjectListResult::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowProjectListResult::regionIsSet() const
{
    return regionIsSet_;
}

void ShowProjectListResult::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowProjectListResult::getUri() const
{
    return uri_;
}

void ShowProjectListResult::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ShowProjectListResult::uriIsSet() const
{
    return uriIsSet_;
}

void ShowProjectListResult::unseturi()
{
    uriIsSet_ = false;
}

bool ShowProjectListResult::isDisable() const
{
    return disable_;
}

void ShowProjectListResult::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool ShowProjectListResult::disableIsSet() const
{
    return disableIsSet_;
}

void ShowProjectListResult::unsetdisable()
{
    disableIsSet_ = false;
}

std::string ShowProjectListResult::getPackageType() const
{
    return packageType_;
}

void ShowProjectListResult::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool ShowProjectListResult::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void ShowProjectListResult::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

}
}
}
}
}



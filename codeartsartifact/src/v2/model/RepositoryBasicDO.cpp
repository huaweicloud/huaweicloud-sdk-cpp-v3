

#include "huaweicloud/codeartsartifact/v2/model/RepositoryBasicDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepositoryBasicDO::RepositoryBasicDO()
{
    id_ = "";
    idIsSet_ = false;
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
    repoType_ = "";
    repoTypeIsSet_ = false;
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
    projectId_ = "";
    projectIdIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    deploymentPolicy_ = "";
    deploymentPolicyIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    storageSummaryInfoIsSet_ = false;
}

RepositoryBasicDO::~RepositoryBasicDO() = default;

void RepositoryBasicDO::validate()
{
}

web::json::value RepositoryBasicDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(repoTypeIsSet_) {
        val[utility::conversions::to_string_t("repoType")] = ModelBase::toJson(repoType_);
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
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includesPattern")] = ModelBase::toJson(includesPattern_);
    }
    if(deploymentPolicyIsSet_) {
        val[utility::conversions::to_string_t("deploymentPolicy")] = ModelBase::toJson(deploymentPolicy_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("shareRight")] = ModelBase::toJson(shareRight_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("packageType")] = ModelBase::toJson(packageType_);
    }
    if(storageSummaryInfoIsSet_) {
        val[utility::conversions::to_string_t("storageSummaryInfo")] = ModelBase::toJson(storageSummaryInfo_);
    }

    return val;
}
bool RepositoryBasicDO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repoType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploymentPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploymentPolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentPolicy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("storageSummaryInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageSummaryInfo"));
        if(!fieldValue.is_null())
        {
            DownloadFolderInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSummaryInfo(refVal);
        }
    }
    return ok;
}


std::string RepositoryBasicDO::getId() const
{
    return id_;
}

void RepositoryBasicDO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryBasicDO::idIsSet() const
{
    return idIsSet_;
}

void RepositoryBasicDO::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryBasicDO::getStatus() const
{
    return status_;
}

void RepositoryBasicDO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepositoryBasicDO::statusIsSet() const
{
    return statusIsSet_;
}

void RepositoryBasicDO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepositoryBasicDO::getDomainId() const
{
    return domainId_;
}

void RepositoryBasicDO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepositoryBasicDO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepositoryBasicDO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepositoryBasicDO::getRegion() const
{
    return region_;
}

void RepositoryBasicDO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RepositoryBasicDO::regionIsSet() const
{
    return regionIsSet_;
}

void RepositoryBasicDO::unsetregion()
{
    regionIsSet_ = false;
}

std::string RepositoryBasicDO::getCreatedTime() const
{
    return createdTime_;
}

void RepositoryBasicDO::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool RepositoryBasicDO::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void RepositoryBasicDO::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string RepositoryBasicDO::getModifiedTime() const
{
    return modifiedTime_;
}

void RepositoryBasicDO::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool RepositoryBasicDO::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void RepositoryBasicDO::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string RepositoryBasicDO::getCreatedUserId() const
{
    return createdUserId_;
}

void RepositoryBasicDO::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool RepositoryBasicDO::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void RepositoryBasicDO::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string RepositoryBasicDO::getCreatedUserName() const
{
    return createdUserName_;
}

void RepositoryBasicDO::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool RepositoryBasicDO::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void RepositoryBasicDO::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string RepositoryBasicDO::getModifiedUserId() const
{
    return modifiedUserId_;
}

void RepositoryBasicDO::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool RepositoryBasicDO::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void RepositoryBasicDO::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string RepositoryBasicDO::getModifiedUserName() const
{
    return modifiedUserName_;
}

void RepositoryBasicDO::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool RepositoryBasicDO::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void RepositoryBasicDO::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string RepositoryBasicDO::getName() const
{
    return name_;
}

void RepositoryBasicDO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryBasicDO::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryBasicDO::unsetname()
{
    nameIsSet_ = false;
}

bool RepositoryBasicDO::isDisable() const
{
    return disable_;
}

void RepositoryBasicDO::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool RepositoryBasicDO::disableIsSet() const
{
    return disableIsSet_;
}

void RepositoryBasicDO::unsetdisable()
{
    disableIsSet_ = false;
}

std::string RepositoryBasicDO::getFormat() const
{
    return format_;
}

void RepositoryBasicDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RepositoryBasicDO::formatIsSet() const
{
    return formatIsSet_;
}

void RepositoryBasicDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string RepositoryBasicDO::getRepoType() const
{
    return repoType_;
}

void RepositoryBasicDO::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool RepositoryBasicDO::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void RepositoryBasicDO::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

std::string RepositoryBasicDO::getPolicy() const
{
    return policy_;
}

void RepositoryBasicDO::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RepositoryBasicDO::policyIsSet() const
{
    return policyIsSet_;
}

void RepositoryBasicDO::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string RepositoryBasicDO::getTabId() const
{
    return tabId_;
}

void RepositoryBasicDO::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool RepositoryBasicDO::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void RepositoryBasicDO::unsettabId()
{
    tabIdIsSet_ = false;
}

std::string RepositoryBasicDO::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryBasicDO::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryBasicDO::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryBasicDO::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepositoryBasicDO::getDisplayName() const
{
    return displayName_;
}

void RepositoryBasicDO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool RepositoryBasicDO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void RepositoryBasicDO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string RepositoryBasicDO::getDescription() const
{
    return description_;
}

void RepositoryBasicDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryBasicDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryBasicDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryBasicDO::getProjectId() const
{
    return projectId_;
}

void RepositoryBasicDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryBasicDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryBasicDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryBasicDO::getIncludesPattern() const
{
    return includesPattern_;
}

void RepositoryBasicDO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool RepositoryBasicDO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void RepositoryBasicDO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string RepositoryBasicDO::getDeploymentPolicy() const
{
    return deploymentPolicy_;
}

void RepositoryBasicDO::setDeploymentPolicy(const std::string& value)
{
    deploymentPolicy_ = value;
    deploymentPolicyIsSet_ = true;
}

bool RepositoryBasicDO::deploymentPolicyIsSet() const
{
    return deploymentPolicyIsSet_;
}

void RepositoryBasicDO::unsetdeploymentPolicy()
{
    deploymentPolicyIsSet_ = false;
}

std::string RepositoryBasicDO::getShareRight() const
{
    return shareRight_;
}

void RepositoryBasicDO::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool RepositoryBasicDO::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void RepositoryBasicDO::unsetshareRight()
{
    shareRightIsSet_ = false;
}

std::string RepositoryBasicDO::getUrl() const
{
    return url_;
}

void RepositoryBasicDO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RepositoryBasicDO::urlIsSet() const
{
    return urlIsSet_;
}

void RepositoryBasicDO::unseturl()
{
    urlIsSet_ = false;
}

std::string RepositoryBasicDO::getPackageType() const
{
    return packageType_;
}

void RepositoryBasicDO::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool RepositoryBasicDO::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void RepositoryBasicDO::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

DownloadFolderInfo RepositoryBasicDO::getStorageSummaryInfo() const
{
    return storageSummaryInfo_;
}

void RepositoryBasicDO::setStorageSummaryInfo(const DownloadFolderInfo& value)
{
    storageSummaryInfo_ = value;
    storageSummaryInfoIsSet_ = true;
}

bool RepositoryBasicDO::storageSummaryInfoIsSet() const
{
    return storageSummaryInfoIsSet_;
}

void RepositoryBasicDO::unsetstorageSummaryInfo()
{
    storageSummaryInfoIsSet_ = false;
}

}
}
}
}
}



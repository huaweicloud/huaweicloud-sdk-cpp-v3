

#include "huaweicloud/codeartspipeline/v2/model/PipelineSourceParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineSourceParam::PipelineSourceParam()
{
    alias_ = "";
    aliasIsSet_ = false;
    gitType_ = "";
    gitTypeIsSet_ = false;
    codehubId_ = "";
    codehubIdIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    defaultBranch_ = "";
    defaultBranchIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    sshGitUrl_ = "";
    sshGitUrlIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    artifactType_ = "";
    artifactTypeIsSet_ = false;
    artifactTypeName_ = "";
    artifactTypeNameIsSet_ = false;
    branchFilter_ = "";
    branchFilterIsSet_ = false;
    directory_ = "";
    directoryIsSet_ = false;
    directoryId_ = "";
    directoryIdIsSet_ = false;
    organization_ = "";
    organizationIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionStrategy_ = "";
    versionStrategyIsSet_ = false;
    sourceSystem_ = "";
    sourceSystemIsSet_ = false;
}

PipelineSourceParam::~PipelineSourceParam() = default;

void PipelineSourceParam::validate()
{
}

web::json::value PipelineSourceParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(gitTypeIsSet_) {
        val[utility::conversions::to_string_t("git_type")] = ModelBase::toJson(gitType_);
    }
    if(codehubIdIsSet_) {
        val[utility::conversions::to_string_t("codehub_id")] = ModelBase::toJson(codehubId_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(defaultBranchIsSet_) {
        val[utility::conversions::to_string_t("default_branch")] = ModelBase::toJson(defaultBranch_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(sshGitUrlIsSet_) {
        val[utility::conversions::to_string_t("ssh_git_url")] = ModelBase::toJson(sshGitUrl_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(artifactTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_type")] = ModelBase::toJson(artifactType_);
    }
    if(artifactTypeNameIsSet_) {
        val[utility::conversions::to_string_t("artifact_type_name")] = ModelBase::toJson(artifactTypeName_);
    }
    if(branchFilterIsSet_) {
        val[utility::conversions::to_string_t("branch_filter")] = ModelBase::toJson(branchFilter_);
    }
    if(directoryIsSet_) {
        val[utility::conversions::to_string_t("directory")] = ModelBase::toJson(directory_);
    }
    if(directoryIdIsSet_) {
        val[utility::conversions::to_string_t("directory_id")] = ModelBase::toJson(directoryId_);
    }
    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionStrategyIsSet_) {
        val[utility::conversions::to_string_t("version_strategy")] = ModelBase::toJson(versionStrategy_);
    }
    if(sourceSystemIsSet_) {
        val[utility::conversions::to_string_t("source_system")] = ModelBase::toJson(sourceSystem_);
    }

    return val;
}
bool PipelineSourceParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codehub_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssh_git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh_git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("directory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("directory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirectory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("directory_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("directory_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirectoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSystem(refVal);
        }
    }
    return ok;
}


std::string PipelineSourceParam::getAlias() const
{
    return alias_;
}

void PipelineSourceParam::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PipelineSourceParam::aliasIsSet() const
{
    return aliasIsSet_;
}

void PipelineSourceParam::unsetalias()
{
    aliasIsSet_ = false;
}

std::string PipelineSourceParam::getGitType() const
{
    return gitType_;
}

void PipelineSourceParam::setGitType(const std::string& value)
{
    gitType_ = value;
    gitTypeIsSet_ = true;
}

bool PipelineSourceParam::gitTypeIsSet() const
{
    return gitTypeIsSet_;
}

void PipelineSourceParam::unsetgitType()
{
    gitTypeIsSet_ = false;
}

std::string PipelineSourceParam::getCodehubId() const
{
    return codehubId_;
}

void PipelineSourceParam::setCodehubId(const std::string& value)
{
    codehubId_ = value;
    codehubIdIsSet_ = true;
}

bool PipelineSourceParam::codehubIdIsSet() const
{
    return codehubIdIsSet_;
}

void PipelineSourceParam::unsetcodehubId()
{
    codehubIdIsSet_ = false;
}

std::string PipelineSourceParam::getEndpointId() const
{
    return endpointId_;
}

void PipelineSourceParam::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool PipelineSourceParam::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void PipelineSourceParam::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

std::string PipelineSourceParam::getDefaultBranch() const
{
    return defaultBranch_;
}

void PipelineSourceParam::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool PipelineSourceParam::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void PipelineSourceParam::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string PipelineSourceParam::getGitUrl() const
{
    return gitUrl_;
}

void PipelineSourceParam::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool PipelineSourceParam::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void PipelineSourceParam::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string PipelineSourceParam::getSshGitUrl() const
{
    return sshGitUrl_;
}

void PipelineSourceParam::setSshGitUrl(const std::string& value)
{
    sshGitUrl_ = value;
    sshGitUrlIsSet_ = true;
}

bool PipelineSourceParam::sshGitUrlIsSet() const
{
    return sshGitUrlIsSet_;
}

void PipelineSourceParam::unsetsshGitUrl()
{
    sshGitUrlIsSet_ = false;
}

std::string PipelineSourceParam::getWebUrl() const
{
    return webUrl_;
}

void PipelineSourceParam::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool PipelineSourceParam::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void PipelineSourceParam::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string PipelineSourceParam::getRepoName() const
{
    return repoName_;
}

void PipelineSourceParam::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool PipelineSourceParam::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void PipelineSourceParam::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string PipelineSourceParam::getArtifactType() const
{
    return artifactType_;
}

void PipelineSourceParam::setArtifactType(const std::string& value)
{
    artifactType_ = value;
    artifactTypeIsSet_ = true;
}

bool PipelineSourceParam::artifactTypeIsSet() const
{
    return artifactTypeIsSet_;
}

void PipelineSourceParam::unsetartifactType()
{
    artifactTypeIsSet_ = false;
}

std::string PipelineSourceParam::getArtifactTypeName() const
{
    return artifactTypeName_;
}

void PipelineSourceParam::setArtifactTypeName(const std::string& value)
{
    artifactTypeName_ = value;
    artifactTypeNameIsSet_ = true;
}

bool PipelineSourceParam::artifactTypeNameIsSet() const
{
    return artifactTypeNameIsSet_;
}

void PipelineSourceParam::unsetartifactTypeName()
{
    artifactTypeNameIsSet_ = false;
}

std::string PipelineSourceParam::getBranchFilter() const
{
    return branchFilter_;
}

void PipelineSourceParam::setBranchFilter(const std::string& value)
{
    branchFilter_ = value;
    branchFilterIsSet_ = true;
}

bool PipelineSourceParam::branchFilterIsSet() const
{
    return branchFilterIsSet_;
}

void PipelineSourceParam::unsetbranchFilter()
{
    branchFilterIsSet_ = false;
}

std::string PipelineSourceParam::getDirectory() const
{
    return directory_;
}

void PipelineSourceParam::setDirectory(const std::string& value)
{
    directory_ = value;
    directoryIsSet_ = true;
}

bool PipelineSourceParam::directoryIsSet() const
{
    return directoryIsSet_;
}

void PipelineSourceParam::unsetdirectory()
{
    directoryIsSet_ = false;
}

std::string PipelineSourceParam::getDirectoryId() const
{
    return directoryId_;
}

void PipelineSourceParam::setDirectoryId(const std::string& value)
{
    directoryId_ = value;
    directoryIdIsSet_ = true;
}

bool PipelineSourceParam::directoryIdIsSet() const
{
    return directoryIdIsSet_;
}

void PipelineSourceParam::unsetdirectoryId()
{
    directoryIdIsSet_ = false;
}

std::string PipelineSourceParam::getOrganization() const
{
    return organization_;
}

void PipelineSourceParam::setOrganization(const std::string& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool PipelineSourceParam::organizationIsSet() const
{
    return organizationIsSet_;
}

void PipelineSourceParam::unsetorganization()
{
    organizationIsSet_ = false;
}

std::string PipelineSourceParam::getPackageName() const
{
    return packageName_;
}

void PipelineSourceParam::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool PipelineSourceParam::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void PipelineSourceParam::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string PipelineSourceParam::getVersion() const
{
    return version_;
}

void PipelineSourceParam::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PipelineSourceParam::versionIsSet() const
{
    return versionIsSet_;
}

void PipelineSourceParam::unsetversion()
{
    versionIsSet_ = false;
}

std::string PipelineSourceParam::getVersionStrategy() const
{
    return versionStrategy_;
}

void PipelineSourceParam::setVersionStrategy(const std::string& value)
{
    versionStrategy_ = value;
    versionStrategyIsSet_ = true;
}

bool PipelineSourceParam::versionStrategyIsSet() const
{
    return versionStrategyIsSet_;
}

void PipelineSourceParam::unsetversionStrategy()
{
    versionStrategyIsSet_ = false;
}

std::string PipelineSourceParam::getSourceSystem() const
{
    return sourceSystem_;
}

void PipelineSourceParam::setSourceSystem(const std::string& value)
{
    sourceSystem_ = value;
    sourceSystemIsSet_ = true;
}

bool PipelineSourceParam::sourceSystemIsSet() const
{
    return sourceSystemIsSet_;
}

void PipelineSourceParam::unsetsourceSystem()
{
    sourceSystemIsSet_ = false;
}

}
}
}
}
}



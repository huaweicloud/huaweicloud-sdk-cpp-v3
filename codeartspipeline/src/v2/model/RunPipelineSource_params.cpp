

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineSource_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineSource_params::RunPipelineSource_params()
{
    gitType_ = "";
    gitTypeIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    sshGitUrl_ = "";
    sshGitUrlIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    defaultBranch_ = "";
    defaultBranchIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    codehubId_ = "";
    codehubIdIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    buildParamsIsSet_ = false;
}

RunPipelineSource_params::~RunPipelineSource_params() = default;

void RunPipelineSource_params::validate()
{
}

web::json::value RunPipelineSource_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gitTypeIsSet_) {
        val[utility::conversions::to_string_t("git_type")] = ModelBase::toJson(gitType_);
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
    if(defaultBranchIsSet_) {
        val[utility::conversions::to_string_t("default_branch")] = ModelBase::toJson(defaultBranch_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(codehubIdIsSet_) {
        val[utility::conversions::to_string_t("codehub_id")] = ModelBase::toJson(codehubId_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(buildParamsIsSet_) {
        val[utility::conversions::to_string_t("build_params")] = ModelBase::toJson(buildParams_);
    }

    return val;
}
bool RunPipelineSource_params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("git_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("default_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("codehub_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_params"));
        if(!fieldValue.is_null())
        {
            RunPipelineSource_params_build_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildParams(refVal);
        }
    }
    return ok;
}


std::string RunPipelineSource_params::getGitType() const
{
    return gitType_;
}

void RunPipelineSource_params::setGitType(const std::string& value)
{
    gitType_ = value;
    gitTypeIsSet_ = true;
}

bool RunPipelineSource_params::gitTypeIsSet() const
{
    return gitTypeIsSet_;
}

void RunPipelineSource_params::unsetgitType()
{
    gitTypeIsSet_ = false;
}

std::string RunPipelineSource_params::getGitUrl() const
{
    return gitUrl_;
}

void RunPipelineSource_params::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool RunPipelineSource_params::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void RunPipelineSource_params::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string RunPipelineSource_params::getSshGitUrl() const
{
    return sshGitUrl_;
}

void RunPipelineSource_params::setSshGitUrl(const std::string& value)
{
    sshGitUrl_ = value;
    sshGitUrlIsSet_ = true;
}

bool RunPipelineSource_params::sshGitUrlIsSet() const
{
    return sshGitUrlIsSet_;
}

void RunPipelineSource_params::unsetsshGitUrl()
{
    sshGitUrlIsSet_ = false;
}

std::string RunPipelineSource_params::getWebUrl() const
{
    return webUrl_;
}

void RunPipelineSource_params::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RunPipelineSource_params::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RunPipelineSource_params::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string RunPipelineSource_params::getRepoName() const
{
    return repoName_;
}

void RunPipelineSource_params::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool RunPipelineSource_params::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void RunPipelineSource_params::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string RunPipelineSource_params::getDefaultBranch() const
{
    return defaultBranch_;
}

void RunPipelineSource_params::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool RunPipelineSource_params::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void RunPipelineSource_params::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string RunPipelineSource_params::getEndpointId() const
{
    return endpointId_;
}

void RunPipelineSource_params::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool RunPipelineSource_params::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void RunPipelineSource_params::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

std::string RunPipelineSource_params::getCodehubId() const
{
    return codehubId_;
}

void RunPipelineSource_params::setCodehubId(const std::string& value)
{
    codehubId_ = value;
    codehubIdIsSet_ = true;
}

bool RunPipelineSource_params::codehubIdIsSet() const
{
    return codehubIdIsSet_;
}

void RunPipelineSource_params::unsetcodehubId()
{
    codehubIdIsSet_ = false;
}

std::string RunPipelineSource_params::getAlias() const
{
    return alias_;
}

void RunPipelineSource_params::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool RunPipelineSource_params::aliasIsSet() const
{
    return aliasIsSet_;
}

void RunPipelineSource_params::unsetalias()
{
    aliasIsSet_ = false;
}

RunPipelineSource_params_build_params RunPipelineSource_params::getBuildParams() const
{
    return buildParams_;
}

void RunPipelineSource_params::setBuildParams(const RunPipelineSource_params_build_params& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool RunPipelineSource_params::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void RunPipelineSource_params::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

}
}
}
}
}



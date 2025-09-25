

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineDTO_params::RunPipelineDTO_params()
{
    gitType_ = "";
    gitTypeIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    codehubId_ = "";
    codehubIdIsSet_ = false;
    defaultBranch_ = "";
    defaultBranchIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    buildParamsIsSet_ = false;
    changeRequestIdsIsSet_ = false;
}

RunPipelineDTO_params::~RunPipelineDTO_params() = default;

void RunPipelineDTO_params::validate()
{
}

web::json::value RunPipelineDTO_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gitTypeIsSet_) {
        val[utility::conversions::to_string_t("git_type")] = ModelBase::toJson(gitType_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(codehubIdIsSet_) {
        val[utility::conversions::to_string_t("codehub_id")] = ModelBase::toJson(codehubId_);
    }
    if(defaultBranchIsSet_) {
        val[utility::conversions::to_string_t("default_branch")] = ModelBase::toJson(defaultBranch_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(buildParamsIsSet_) {
        val[utility::conversions::to_string_t("build_params")] = ModelBase::toJson(buildParams_);
    }
    if(changeRequestIdsIsSet_) {
        val[utility::conversions::to_string_t("change_request_ids")] = ModelBase::toJson(changeRequestIds_);
    }

    return val;
}
bool RunPipelineDTO_params::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_params"));
        if(!fieldValue.is_null())
        {
            RunPipelineDTO_params_build_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_request_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_request_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeRequestIds(refVal);
        }
    }
    return ok;
}


std::string RunPipelineDTO_params::getGitType() const
{
    return gitType_;
}

void RunPipelineDTO_params::setGitType(const std::string& value)
{
    gitType_ = value;
    gitTypeIsSet_ = true;
}

bool RunPipelineDTO_params::gitTypeIsSet() const
{
    return gitTypeIsSet_;
}

void RunPipelineDTO_params::unsetgitType()
{
    gitTypeIsSet_ = false;
}

std::string RunPipelineDTO_params::getAlias() const
{
    return alias_;
}

void RunPipelineDTO_params::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool RunPipelineDTO_params::aliasIsSet() const
{
    return aliasIsSet_;
}

void RunPipelineDTO_params::unsetalias()
{
    aliasIsSet_ = false;
}

std::string RunPipelineDTO_params::getCodehubId() const
{
    return codehubId_;
}

void RunPipelineDTO_params::setCodehubId(const std::string& value)
{
    codehubId_ = value;
    codehubIdIsSet_ = true;
}

bool RunPipelineDTO_params::codehubIdIsSet() const
{
    return codehubIdIsSet_;
}

void RunPipelineDTO_params::unsetcodehubId()
{
    codehubIdIsSet_ = false;
}

std::string RunPipelineDTO_params::getDefaultBranch() const
{
    return defaultBranch_;
}

void RunPipelineDTO_params::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool RunPipelineDTO_params::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void RunPipelineDTO_params::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string RunPipelineDTO_params::getGitUrl() const
{
    return gitUrl_;
}

void RunPipelineDTO_params::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool RunPipelineDTO_params::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void RunPipelineDTO_params::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string RunPipelineDTO_params::getEndpointId() const
{
    return endpointId_;
}

void RunPipelineDTO_params::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool RunPipelineDTO_params::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void RunPipelineDTO_params::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

RunPipelineDTO_params_build_params RunPipelineDTO_params::getBuildParams() const
{
    return buildParams_;
}

void RunPipelineDTO_params::setBuildParams(const RunPipelineDTO_params_build_params& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool RunPipelineDTO_params::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void RunPipelineDTO_params::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

std::vector<std::string>& RunPipelineDTO_params::getChangeRequestIds()
{
    return changeRequestIds_;
}

void RunPipelineDTO_params::setChangeRequestIds(const std::vector<std::string>& value)
{
    changeRequestIds_ = value;
    changeRequestIdsIsSet_ = true;
}

bool RunPipelineDTO_params::changeRequestIdsIsSet() const
{
    return changeRequestIdsIsSet_;
}

void RunPipelineDTO_params::unsetchangeRequestIds()
{
    changeRequestIdsIsSet_ = false;
}

}
}
}
}
}



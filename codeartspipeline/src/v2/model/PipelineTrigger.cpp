

#include "huaweicloud/codeartspipeline/v2/model/PipelineTrigger.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineTrigger::PipelineTrigger()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    gitType_ = "";
    gitTypeIsSet_ = false;
    isAutoCommit_ = false;
    isAutoCommitIsSet_ = false;
    eventsIsSet_ = false;
    hookId_ = "";
    hookIdIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    securityToken_ = "";
    securityTokenIsSet_ = false;
}

PipelineTrigger::~PipelineTrigger() = default;

void PipelineTrigger::validate()
{
}

web::json::value PipelineTrigger::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(gitTypeIsSet_) {
        val[utility::conversions::to_string_t("git_type")] = ModelBase::toJson(gitType_);
    }
    if(isAutoCommitIsSet_) {
        val[utility::conversions::to_string_t("is_auto_commit")] = ModelBase::toJson(isAutoCommit_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(securityTokenIsSet_) {
        val[utility::conversions::to_string_t("security_token")] = ModelBase::toJson(securityToken_);
    }

    return val;
}
bool PipelineTrigger::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("git_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_commit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<CodeEvent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityToken(refVal);
        }
    }
    return ok;
}


std::string PipelineTrigger::getPipelineId() const
{
    return pipelineId_;
}

void PipelineTrigger::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineTrigger::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineTrigger::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineTrigger::getGitUrl() const
{
    return gitUrl_;
}

void PipelineTrigger::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool PipelineTrigger::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void PipelineTrigger::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string PipelineTrigger::getGitType() const
{
    return gitType_;
}

void PipelineTrigger::setGitType(const std::string& value)
{
    gitType_ = value;
    gitTypeIsSet_ = true;
}

bool PipelineTrigger::gitTypeIsSet() const
{
    return gitTypeIsSet_;
}

void PipelineTrigger::unsetgitType()
{
    gitTypeIsSet_ = false;
}

bool PipelineTrigger::isIsAutoCommit() const
{
    return isAutoCommit_;
}

void PipelineTrigger::setIsAutoCommit(bool value)
{
    isAutoCommit_ = value;
    isAutoCommitIsSet_ = true;
}

bool PipelineTrigger::isAutoCommitIsSet() const
{
    return isAutoCommitIsSet_;
}

void PipelineTrigger::unsetisAutoCommit()
{
    isAutoCommitIsSet_ = false;
}

std::vector<CodeEvent>& PipelineTrigger::getEvents()
{
    return events_;
}

void PipelineTrigger::setEvents(const std::vector<CodeEvent>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool PipelineTrigger::eventsIsSet() const
{
    return eventsIsSet_;
}

void PipelineTrigger::unsetevents()
{
    eventsIsSet_ = false;
}

std::string PipelineTrigger::getHookId() const
{
    return hookId_;
}

void PipelineTrigger::setHookId(const std::string& value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool PipelineTrigger::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void PipelineTrigger::unsethookId()
{
    hookIdIsSet_ = false;
}

std::string PipelineTrigger::getRepoId() const
{
    return repoId_;
}

void PipelineTrigger::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool PipelineTrigger::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void PipelineTrigger::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string PipelineTrigger::getEndpointId() const
{
    return endpointId_;
}

void PipelineTrigger::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool PipelineTrigger::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void PipelineTrigger::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

std::string PipelineTrigger::getCallbackUrl() const
{
    return callbackUrl_;
}

void PipelineTrigger::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool PipelineTrigger::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void PipelineTrigger::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string PipelineTrigger::getSecurityToken() const
{
    return securityToken_;
}

void PipelineTrigger::setSecurityToken(const std::string& value)
{
    securityToken_ = value;
    securityTokenIsSet_ = true;
}

bool PipelineTrigger::securityTokenIsSet() const
{
    return securityTokenIsSet_;
}

void PipelineTrigger::unsetsecurityToken()
{
    securityTokenIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsPage_build_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsPage_build_params::ListPipelineRunsPage_build_params()
{
    action_ = "";
    actionIsSet_ = false;
    buildType_ = "";
    buildTypeIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    mergeId_ = "";
    mergeIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    codehubId_ = "";
    codehubIdIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    sourceCodehubId_ = "";
    sourceCodehubIdIsSet_ = false;
    sourceCodehubUrl_ = "";
    sourceCodehubUrlIsSet_ = false;
    sourceCodehubHttpUrl_ = "";
    sourceCodehubHttpUrlIsSet_ = false;
}

ListPipelineRunsPage_build_params::~ListPipelineRunsPage_build_params() = default;

void ListPipelineRunsPage_build_params::validate()
{
}

web::json::value ListPipelineRunsPage_build_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(mergeIdIsSet_) {
        val[utility::conversions::to_string_t("merge_id")] = ModelBase::toJson(mergeId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(codehubIdIsSet_) {
        val[utility::conversions::to_string_t("codehub_id")] = ModelBase::toJson(codehubId_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(sourceCodehubIdIsSet_) {
        val[utility::conversions::to_string_t("source_codehub_id")] = ModelBase::toJson(sourceCodehubId_);
    }
    if(sourceCodehubUrlIsSet_) {
        val[utility::conversions::to_string_t("source_codehub_url")] = ModelBase::toJson(sourceCodehubUrl_);
    }
    if(sourceCodehubHttpUrlIsSet_) {
        val[utility::conversions::to_string_t("source_codehub_http_url")] = ModelBase::toJson(sourceCodehubHttpUrl_);
    }

    return val;
}
bool ListPipelineRunsPage_build_params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_codehub_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_codehub_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCodehubId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_codehub_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_codehub_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCodehubUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_codehub_http_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_codehub_http_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCodehubHttpUrl(refVal);
        }
    }
    return ok;
}


std::string ListPipelineRunsPage_build_params::getAction() const
{
    return action_;
}

void ListPipelineRunsPage_build_params::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::actionIsSet() const
{
    return actionIsSet_;
}

void ListPipelineRunsPage_build_params::unsetaction()
{
    actionIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getBuildType() const
{
    return buildType_;
}

void ListPipelineRunsPage_build_params::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void ListPipelineRunsPage_build_params::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getCommitId() const
{
    return commitId_;
}

void ListPipelineRunsPage_build_params::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ListPipelineRunsPage_build_params::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getEventType() const
{
    return eventType_;
}

void ListPipelineRunsPage_build_params::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void ListPipelineRunsPage_build_params::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getMergeId() const
{
    return mergeId_;
}

void ListPipelineRunsPage_build_params::setMergeId(const std::string& value)
{
    mergeId_ = value;
    mergeIdIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::mergeIdIsSet() const
{
    return mergeIdIsSet_;
}

void ListPipelineRunsPage_build_params::unsetmergeId()
{
    mergeIdIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getMessage() const
{
    return message_;
}

void ListPipelineRunsPage_build_params::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::messageIsSet() const
{
    return messageIsSet_;
}

void ListPipelineRunsPage_build_params::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getSourceBranch() const
{
    return sourceBranch_;
}

void ListPipelineRunsPage_build_params::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListPipelineRunsPage_build_params::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getTag() const
{
    return tag_;
}

void ListPipelineRunsPage_build_params::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::tagIsSet() const
{
    return tagIsSet_;
}

void ListPipelineRunsPage_build_params::unsettag()
{
    tagIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getTargetBranch() const
{
    return targetBranch_;
}

void ListPipelineRunsPage_build_params::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListPipelineRunsPage_build_params::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getCodehubId() const
{
    return codehubId_;
}

void ListPipelineRunsPage_build_params::setCodehubId(const std::string& value)
{
    codehubId_ = value;
    codehubIdIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::codehubIdIsSet() const
{
    return codehubIdIsSet_;
}

void ListPipelineRunsPage_build_params::unsetcodehubId()
{
    codehubIdIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getGitUrl() const
{
    return gitUrl_;
}

void ListPipelineRunsPage_build_params::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void ListPipelineRunsPage_build_params::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getSourceCodehubId() const
{
    return sourceCodehubId_;
}

void ListPipelineRunsPage_build_params::setSourceCodehubId(const std::string& value)
{
    sourceCodehubId_ = value;
    sourceCodehubIdIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::sourceCodehubIdIsSet() const
{
    return sourceCodehubIdIsSet_;
}

void ListPipelineRunsPage_build_params::unsetsourceCodehubId()
{
    sourceCodehubIdIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getSourceCodehubUrl() const
{
    return sourceCodehubUrl_;
}

void ListPipelineRunsPage_build_params::setSourceCodehubUrl(const std::string& value)
{
    sourceCodehubUrl_ = value;
    sourceCodehubUrlIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::sourceCodehubUrlIsSet() const
{
    return sourceCodehubUrlIsSet_;
}

void ListPipelineRunsPage_build_params::unsetsourceCodehubUrl()
{
    sourceCodehubUrlIsSet_ = false;
}

std::string ListPipelineRunsPage_build_params::getSourceCodehubHttpUrl() const
{
    return sourceCodehubHttpUrl_;
}

void ListPipelineRunsPage_build_params::setSourceCodehubHttpUrl(const std::string& value)
{
    sourceCodehubHttpUrl_ = value;
    sourceCodehubHttpUrlIsSet_ = true;
}

bool ListPipelineRunsPage_build_params::sourceCodehubHttpUrlIsSet() const
{
    return sourceCodehubHttpUrlIsSet_;
}

void ListPipelineRunsPage_build_params::unsetsourceCodehubHttpUrl()
{
    sourceCodehubHttpUrlIsSet_ = false;
}

}
}
}
}
}



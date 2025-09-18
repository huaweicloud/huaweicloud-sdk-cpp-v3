

#include "huaweicloud/codeartscheck/v2/model/IncConfigV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




IncConfigV2::IncConfigV2()
{
    parentTaskId_ = "";
    parentTaskIdIsSet_ = false;
    gitSourceBranch_ = "";
    gitSourceBranchIsSet_ = false;
    gitTargetBranch_ = "";
    gitTargetBranchIsSet_ = false;
    mergeId_ = "";
    mergeIdIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

IncConfigV2::~IncConfigV2() = default;

void IncConfigV2::validate()
{
}

web::json::value IncConfigV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentTaskIdIsSet_) {
        val[utility::conversions::to_string_t("parent_task_id")] = ModelBase::toJson(parentTaskId_);
    }
    if(gitSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("git_source_branch")] = ModelBase::toJson(gitSourceBranch_);
    }
    if(gitTargetBranchIsSet_) {
        val[utility::conversions::to_string_t("git_target_branch")] = ModelBase::toJson(gitTargetBranch_);
    }
    if(mergeIdIsSet_) {
        val[utility::conversions::to_string_t("merge_id")] = ModelBase::toJson(mergeId_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool IncConfigV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitTargetBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    return ok;
}


std::string IncConfigV2::getParentTaskId() const
{
    return parentTaskId_;
}

void IncConfigV2::setParentTaskId(const std::string& value)
{
    parentTaskId_ = value;
    parentTaskIdIsSet_ = true;
}

bool IncConfigV2::parentTaskIdIsSet() const
{
    return parentTaskIdIsSet_;
}

void IncConfigV2::unsetparentTaskId()
{
    parentTaskIdIsSet_ = false;
}

std::string IncConfigV2::getGitSourceBranch() const
{
    return gitSourceBranch_;
}

void IncConfigV2::setGitSourceBranch(const std::string& value)
{
    gitSourceBranch_ = value;
    gitSourceBranchIsSet_ = true;
}

bool IncConfigV2::gitSourceBranchIsSet() const
{
    return gitSourceBranchIsSet_;
}

void IncConfigV2::unsetgitSourceBranch()
{
    gitSourceBranchIsSet_ = false;
}

std::string IncConfigV2::getGitTargetBranch() const
{
    return gitTargetBranch_;
}

void IncConfigV2::setGitTargetBranch(const std::string& value)
{
    gitTargetBranch_ = value;
    gitTargetBranchIsSet_ = true;
}

bool IncConfigV2::gitTargetBranchIsSet() const
{
    return gitTargetBranchIsSet_;
}

void IncConfigV2::unsetgitTargetBranch()
{
    gitTargetBranchIsSet_ = false;
}

std::string IncConfigV2::getMergeId() const
{
    return mergeId_;
}

void IncConfigV2::setMergeId(const std::string& value)
{
    mergeId_ = value;
    mergeIdIsSet_ = true;
}

bool IncConfigV2::mergeIdIsSet() const
{
    return mergeIdIsSet_;
}

void IncConfigV2::unsetmergeId()
{
    mergeIdIsSet_ = false;
}

std::string IncConfigV2::getEventType() const
{
    return eventType_;
}

void IncConfigV2::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool IncConfigV2::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void IncConfigV2::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string IncConfigV2::getAction() const
{
    return action_;
}

void IncConfigV2::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool IncConfigV2::actionIsSet() const
{
    return actionIsSet_;
}

void IncConfigV2::unsetaction()
{
    actionIsSet_ = false;
}

std::string IncConfigV2::getTitle() const
{
    return title_;
}

void IncConfigV2::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IncConfigV2::titleIsSet() const
{
    return titleIsSet_;
}

void IncConfigV2::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}



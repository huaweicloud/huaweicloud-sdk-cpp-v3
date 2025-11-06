

#include "huaweicloud/codeartsrepo/v4/model/PutMergeRequestParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PutMergeRequestParamsDto::PutMergeRequestParamsDto()
{
    title_ = "";
    titleIsSet_ = false;
    stateEvent_ = "";
    stateEventIsSet_ = false;
    assigneeIds_ = "";
    assigneeIdsIsSet_ = false;
    reviewerIds_ = "";
    reviewerIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    milestoneId_ = 0;
    milestoneIdIsSet_ = false;
    labelsIsSet_ = false;
    forceRemoveSourceBranch_ = false;
    forceRemoveSourceBranchIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    squashCommitMessage_ = "";
    squashCommitMessageIsSet_ = false;
    workItemIdsIsSet_ = false;
}

PutMergeRequestParamsDto::~PutMergeRequestParamsDto() = default;

void PutMergeRequestParamsDto::validate()
{
}

web::json::value PutMergeRequestParamsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(stateEventIsSet_) {
        val[utility::conversions::to_string_t("state_event")] = ModelBase::toJson(stateEvent_);
    }
    if(assigneeIdsIsSet_) {
        val[utility::conversions::to_string_t("assignee_ids")] = ModelBase::toJson(assigneeIds_);
    }
    if(reviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("reviewer_ids")] = ModelBase::toJson(reviewerIds_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(milestoneIdIsSet_) {
        val[utility::conversions::to_string_t("milestone_id")] = ModelBase::toJson(milestoneId_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(forceRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("force_remove_source_branch")] = ModelBase::toJson(forceRemoveSourceBranch_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(squashCommitMessageIsSet_) {
        val[utility::conversions::to_string_t("squash_commit_message")] = ModelBase::toJson(squashCommitMessage_);
    }
    if(workItemIdsIsSet_) {
        val[utility::conversions::to_string_t("work_item_ids")] = ModelBase::toJson(workItemIds_);
    }

    return val;
}
bool PutMergeRequestParamsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewerIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("milestone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("milestone_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMilestoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_remove_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_remove_source_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRemoveSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("squash"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquash(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("squash_commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash_commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquashCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_item_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemIds(refVal);
        }
    }
    return ok;
}


std::string PutMergeRequestParamsDto::getTitle() const
{
    return title_;
}

void PutMergeRequestParamsDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PutMergeRequestParamsDto::titleIsSet() const
{
    return titleIsSet_;
}

void PutMergeRequestParamsDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string PutMergeRequestParamsDto::getStateEvent() const
{
    return stateEvent_;
}

void PutMergeRequestParamsDto::setStateEvent(const std::string& value)
{
    stateEvent_ = value;
    stateEventIsSet_ = true;
}

bool PutMergeRequestParamsDto::stateEventIsSet() const
{
    return stateEventIsSet_;
}

void PutMergeRequestParamsDto::unsetstateEvent()
{
    stateEventIsSet_ = false;
}

std::string PutMergeRequestParamsDto::getAssigneeIds() const
{
    return assigneeIds_;
}

void PutMergeRequestParamsDto::setAssigneeIds(const std::string& value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool PutMergeRequestParamsDto::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void PutMergeRequestParamsDto::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::string PutMergeRequestParamsDto::getReviewerIds() const
{
    return reviewerIds_;
}

void PutMergeRequestParamsDto::setReviewerIds(const std::string& value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool PutMergeRequestParamsDto::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void PutMergeRequestParamsDto::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::string PutMergeRequestParamsDto::getDescription() const
{
    return description_;
}

void PutMergeRequestParamsDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PutMergeRequestParamsDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PutMergeRequestParamsDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t PutMergeRequestParamsDto::getMilestoneId() const
{
    return milestoneId_;
}

void PutMergeRequestParamsDto::setMilestoneId(int32_t value)
{
    milestoneId_ = value;
    milestoneIdIsSet_ = true;
}

bool PutMergeRequestParamsDto::milestoneIdIsSet() const
{
    return milestoneIdIsSet_;
}

void PutMergeRequestParamsDto::unsetmilestoneId()
{
    milestoneIdIsSet_ = false;
}

Object PutMergeRequestParamsDto::getLabels() const
{
    return labels_;
}

void PutMergeRequestParamsDto::setLabels(const Object& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PutMergeRequestParamsDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void PutMergeRequestParamsDto::unsetlabels()
{
    labelsIsSet_ = false;
}

bool PutMergeRequestParamsDto::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void PutMergeRequestParamsDto::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool PutMergeRequestParamsDto::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void PutMergeRequestParamsDto::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

bool PutMergeRequestParamsDto::isSquash() const
{
    return squash_;
}

void PutMergeRequestParamsDto::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool PutMergeRequestParamsDto::squashIsSet() const
{
    return squashIsSet_;
}

void PutMergeRequestParamsDto::unsetsquash()
{
    squashIsSet_ = false;
}

std::string PutMergeRequestParamsDto::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void PutMergeRequestParamsDto::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool PutMergeRequestParamsDto::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void PutMergeRequestParamsDto::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

std::vector<std::string>& PutMergeRequestParamsDto::getWorkItemIds()
{
    return workItemIds_;
}

void PutMergeRequestParamsDto::setWorkItemIds(const std::vector<std::string>& value)
{
    workItemIds_ = value;
    workItemIdsIsSet_ = true;
}

bool PutMergeRequestParamsDto::workItemIdsIsSet() const
{
    return workItemIdsIsSet_;
}

void PutMergeRequestParamsDto::unsetworkItemIds()
{
    workItemIdsIsSet_ = false;
}

}
}
}
}
}



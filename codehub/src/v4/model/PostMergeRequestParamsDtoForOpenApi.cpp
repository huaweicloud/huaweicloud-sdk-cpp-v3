

#include "huaweicloud/codehub/v4/model/PostMergeRequestParamsDtoForOpenApi.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




PostMergeRequestParamsDtoForOpenApi::PostMergeRequestParamsDtoForOpenApi()
{
    title_ = "";
    titleIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    targetRepositoryId_ = 0;
    targetRepositoryIdIsSet_ = false;
    reviewerIds_ = "";
    reviewerIdsIsSet_ = false;
    assigneeIds_ = "";
    assigneeIdsIsSet_ = false;
    approvalReviewerIds_ = "";
    approvalReviewerIdsIsSet_ = false;
    approvalApproversIds_ = "";
    approvalApproversIdsIsSet_ = false;
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
    isUseTempBranch_ = false;
    isUseTempBranchIsSet_ = false;
    onlyAssigneeCanMerge_ = false;
    onlyAssigneeCanMergeIsSet_ = false;
}

PostMergeRequestParamsDtoForOpenApi::~PostMergeRequestParamsDtoForOpenApi() = default;

void PostMergeRequestParamsDtoForOpenApi::validate()
{
}

web::json::value PostMergeRequestParamsDtoForOpenApi::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
    }
    if(reviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("reviewer_ids")] = ModelBase::toJson(reviewerIds_);
    }
    if(assigneeIdsIsSet_) {
        val[utility::conversions::to_string_t("assignee_ids")] = ModelBase::toJson(assigneeIds_);
    }
    if(approvalReviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("approval_reviewer_ids")] = ModelBase::toJson(approvalReviewerIds_);
    }
    if(approvalApproversIdsIsSet_) {
        val[utility::conversions::to_string_t("approval_approvers_ids")] = ModelBase::toJson(approvalApproversIds_);
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
    if(isUseTempBranchIsSet_) {
        val[utility::conversions::to_string_t("is_use_temp_branch")] = ModelBase::toJson(isUseTempBranch_);
    }
    if(onlyAssigneeCanMergeIsSet_) {
        val[utility::conversions::to_string_t("only_assignee_can_merge")] = ModelBase::toJson(onlyAssigneeCanMerge_);
    }

    return val;
}
bool PostMergeRequestParamsDtoForOpenApi::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_reviewer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_reviewer_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalReviewerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_approvers_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_approvers_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalApproversIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_use_temp_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_use_temp_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUseTempBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_assignee_can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_assignee_can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAssigneeCanMerge(refVal);
        }
    }
    return ok;
}


std::string PostMergeRequestParamsDtoForOpenApi::getTitle() const
{
    return title_;
}

void PostMergeRequestParamsDtoForOpenApi::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::titleIsSet() const
{
    return titleIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsettitle()
{
    titleIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getSourceBranch() const
{
    return sourceBranch_;
}

void PostMergeRequestParamsDtoForOpenApi::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getTargetBranch() const
{
    return targetBranch_;
}

void PostMergeRequestParamsDtoForOpenApi::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

int32_t PostMergeRequestParamsDtoForOpenApi::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void PostMergeRequestParamsDtoForOpenApi::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getReviewerIds() const
{
    return reviewerIds_;
}

void PostMergeRequestParamsDtoForOpenApi::setReviewerIds(const std::string& value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getAssigneeIds() const
{
    return assigneeIds_;
}

void PostMergeRequestParamsDtoForOpenApi::setAssigneeIds(const std::string& value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getApprovalReviewerIds() const
{
    return approvalReviewerIds_;
}

void PostMergeRequestParamsDtoForOpenApi::setApprovalReviewerIds(const std::string& value)
{
    approvalReviewerIds_ = value;
    approvalReviewerIdsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::approvalReviewerIdsIsSet() const
{
    return approvalReviewerIdsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetapprovalReviewerIds()
{
    approvalReviewerIdsIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getApprovalApproversIds() const
{
    return approvalApproversIds_;
}

void PostMergeRequestParamsDtoForOpenApi::setApprovalApproversIds(const std::string& value)
{
    approvalApproversIds_ = value;
    approvalApproversIdsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::approvalApproversIdsIsSet() const
{
    return approvalApproversIdsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetapprovalApproversIds()
{
    approvalApproversIdsIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getDescription() const
{
    return description_;
}

void PostMergeRequestParamsDtoForOpenApi::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t PostMergeRequestParamsDtoForOpenApi::getMilestoneId() const
{
    return milestoneId_;
}

void PostMergeRequestParamsDtoForOpenApi::setMilestoneId(int32_t value)
{
    milestoneId_ = value;
    milestoneIdIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::milestoneIdIsSet() const
{
    return milestoneIdIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetmilestoneId()
{
    milestoneIdIsSet_ = false;
}

Object PostMergeRequestParamsDtoForOpenApi::getLabels() const
{
    return labels_;
}

void PostMergeRequestParamsDtoForOpenApi::setLabels(const Object& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::labelsIsSet() const
{
    return labelsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetlabels()
{
    labelsIsSet_ = false;
}

bool PostMergeRequestParamsDtoForOpenApi::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void PostMergeRequestParamsDtoForOpenApi::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

bool PostMergeRequestParamsDtoForOpenApi::isSquash() const
{
    return squash_;
}

void PostMergeRequestParamsDtoForOpenApi::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::squashIsSet() const
{
    return squashIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetsquash()
{
    squashIsSet_ = false;
}

std::string PostMergeRequestParamsDtoForOpenApi::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void PostMergeRequestParamsDtoForOpenApi::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

std::vector<std::string>& PostMergeRequestParamsDtoForOpenApi::getWorkItemIds()
{
    return workItemIds_;
}

void PostMergeRequestParamsDtoForOpenApi::setWorkItemIds(const std::vector<std::string>& value)
{
    workItemIds_ = value;
    workItemIdsIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::workItemIdsIsSet() const
{
    return workItemIdsIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetworkItemIds()
{
    workItemIdsIsSet_ = false;
}

bool PostMergeRequestParamsDtoForOpenApi::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void PostMergeRequestParamsDtoForOpenApi::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

bool PostMergeRequestParamsDtoForOpenApi::isOnlyAssigneeCanMerge() const
{
    return onlyAssigneeCanMerge_;
}

void PostMergeRequestParamsDtoForOpenApi::setOnlyAssigneeCanMerge(bool value)
{
    onlyAssigneeCanMerge_ = value;
    onlyAssigneeCanMergeIsSet_ = true;
}

bool PostMergeRequestParamsDtoForOpenApi::onlyAssigneeCanMergeIsSet() const
{
    return onlyAssigneeCanMergeIsSet_;
}

void PostMergeRequestParamsDtoForOpenApi::unsetonlyAssigneeCanMerge()
{
    onlyAssigneeCanMergeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codehub/v4/model/MergeMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeMergeRequestResponse::MergeMergeRequestResponse()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    isSourceBranchProtected_ = false;
    isSourceBranchProtectedIsSet_ = false;
    devcloudSourceBranch_ = "";
    devcloudSourceBranchIsSet_ = false;
    authorIsSet_ = false;
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    targetRepositoryId_ = 0;
    targetRepositoryIdIsSet_ = false;
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
    labelsIsSet_ = false;
    workInProgress_ = false;
    workInProgressIsSet_ = false;
    milestoneIsSet_ = false;
    mergeWhenBuildSucceeds_ = false;
    mergeWhenBuildSucceedsIsSet_ = false;
    mergeStatus_ = "";
    mergeStatusIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    mergeCommitSha_ = "";
    mergeCommitShaIsSet_ = false;
    subscribed_ = false;
    subscribedIsSet_ = false;
    mergedByIsSet_ = false;
    mergedAt_ = "";
    mergedAtIsSet_ = false;
    closedByIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    userNotesCount_ = 0;
    userNotesCountIsSet_ = false;
    forceRemoveSourceBranch_ = false;
    forceRemoveSourceBranchIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    mergeRequestDiffIsSet_ = false;
    mergeRequestReviewersCount_ = 0;
    mergeRequestReviewersCountIsSet_ = false;
    mergeRequestReviewCount_ = 0;
    mergeRequestReviewCountIsSet_ = false;
    mergeRequestReviewerListIsSet_ = false;
    mergeRequestAssigneeListIsSet_ = false;
    notes_ = 0;
    notesIsSet_ = false;
    codecheckState_ = 0;
    codecheckStateIsSet_ = false;
    codecheckDefectCount_ = 0;
    codecheckDefectCountIsSet_ = false;
    mergeRequestRelatedWorkItemsIsSet_ = false;
    divergedCommitsCount_ = 0;
    divergedCommitsCountIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
    isUseTempBranch_ = false;
    isUseTempBranchIsSet_ = false;
    approvalMergeRequestApproversIsSet_ = false;
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    squashCommitMessage_ = "";
    squashCommitMessageIsSet_ = false;
    rebaseInProgress_ = false;
    rebaseInProgressIsSet_ = false;
    sourceRepositoryIsSet_ = false;
    targetRepositoryIsSet_ = false;
    isSourceBranchExist_ = false;
    isSourceBranchExistIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
}

MergeMergeRequestResponse::~MergeMergeRequestResponse() = default;

void MergeMergeRequestResponse::validate()
{
}

web::json::value MergeMergeRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(isSourceBranchProtectedIsSet_) {
        val[utility::conversions::to_string_t("is_source_branch_protected")] = ModelBase::toJson(isSourceBranchProtected_);
    }
    if(devcloudSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("devcloud_source_branch")] = ModelBase::toJson(devcloudSourceBranch_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
    }
    if(sourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("source_project_id")] = ModelBase::toJson(sourceProjectId_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(workInProgressIsSet_) {
        val[utility::conversions::to_string_t("work_in_progress")] = ModelBase::toJson(workInProgress_);
    }
    if(milestoneIsSet_) {
        val[utility::conversions::to_string_t("milestone")] = ModelBase::toJson(milestone_);
    }
    if(mergeWhenBuildSucceedsIsSet_) {
        val[utility::conversions::to_string_t("merge_when_build_succeeds")] = ModelBase::toJson(mergeWhenBuildSucceeds_);
    }
    if(mergeStatusIsSet_) {
        val[utility::conversions::to_string_t("merge_status")] = ModelBase::toJson(mergeStatus_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(mergeCommitShaIsSet_) {
        val[utility::conversions::to_string_t("merge_commit_sha")] = ModelBase::toJson(mergeCommitSha_);
    }
    if(subscribedIsSet_) {
        val[utility::conversions::to_string_t("subscribed")] = ModelBase::toJson(subscribed_);
    }
    if(mergedByIsSet_) {
        val[utility::conversions::to_string_t("merged_by")] = ModelBase::toJson(mergedBy_);
    }
    if(mergedAtIsSet_) {
        val[utility::conversions::to_string_t("merged_at")] = ModelBase::toJson(mergedAt_);
    }
    if(closedByIsSet_) {
        val[utility::conversions::to_string_t("closed_by")] = ModelBase::toJson(closedBy_);
    }
    if(closedAtIsSet_) {
        val[utility::conversions::to_string_t("closed_at")] = ModelBase::toJson(closedAt_);
    }
    if(userNotesCountIsSet_) {
        val[utility::conversions::to_string_t("user_notes_count")] = ModelBase::toJson(userNotesCount_);
    }
    if(forceRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("force_remove_source_branch")] = ModelBase::toJson(forceRemoveSourceBranch_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(mergeRequestDiffIsSet_) {
        val[utility::conversions::to_string_t("merge_request_diff")] = ModelBase::toJson(mergeRequestDiff_);
    }
    if(mergeRequestReviewersCountIsSet_) {
        val[utility::conversions::to_string_t("merge_request_reviewers_count")] = ModelBase::toJson(mergeRequestReviewersCount_);
    }
    if(mergeRequestReviewCountIsSet_) {
        val[utility::conversions::to_string_t("merge_request_review_count")] = ModelBase::toJson(mergeRequestReviewCount_);
    }
    if(mergeRequestReviewerListIsSet_) {
        val[utility::conversions::to_string_t("merge_request_reviewer_list")] = ModelBase::toJson(mergeRequestReviewerList_);
    }
    if(mergeRequestAssigneeListIsSet_) {
        val[utility::conversions::to_string_t("merge_request_assignee_list")] = ModelBase::toJson(mergeRequestAssigneeList_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(codecheckStateIsSet_) {
        val[utility::conversions::to_string_t("codecheck_state")] = ModelBase::toJson(codecheckState_);
    }
    if(codecheckDefectCountIsSet_) {
        val[utility::conversions::to_string_t("codecheck_defect_count")] = ModelBase::toJson(codecheckDefectCount_);
    }
    if(mergeRequestRelatedWorkItemsIsSet_) {
        val[utility::conversions::to_string_t("merge_request_related_work_items")] = ModelBase::toJson(mergeRequestRelatedWorkItems_);
    }
    if(divergedCommitsCountIsSet_) {
        val[utility::conversions::to_string_t("diverged_commits_count")] = ModelBase::toJson(divergedCommitsCount_);
    }
    if(moderationResultIsSet_) {
        val[utility::conversions::to_string_t("moderation_result")] = ModelBase::toJson(moderationResult_);
    }
    if(moderationTimeIsSet_) {
        val[utility::conversions::to_string_t("moderation_time")] = ModelBase::toJson(moderationTime_);
    }
    if(moderationStatusIsSet_) {
        val[utility::conversions::to_string_t("moderation_status")] = ModelBase::toJson(moderationStatus_);
    }
    if(isUseTempBranchIsSet_) {
        val[utility::conversions::to_string_t("is_use_temp_branch")] = ModelBase::toJson(isUseTempBranch_);
    }
    if(approvalMergeRequestApproversIsSet_) {
        val[utility::conversions::to_string_t("approval_merge_request_approvers")] = ModelBase::toJson(approvalMergeRequestApprovers_);
    }
    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(squashCommitMessageIsSet_) {
        val[utility::conversions::to_string_t("squash_commit_message")] = ModelBase::toJson(squashCommitMessage_);
    }
    if(rebaseInProgressIsSet_) {
        val[utility::conversions::to_string_t("rebase_in_progress")] = ModelBase::toJson(rebaseInProgress_);
    }
    if(sourceRepositoryIsSet_) {
        val[utility::conversions::to_string_t("source_repository")] = ModelBase::toJson(sourceRepository_);
    }
    if(targetRepositoryIsSet_) {
        val[utility::conversions::to_string_t("target_repository")] = ModelBase::toJson(targetRepository_);
    }
    if(isSourceBranchExistIsSet_) {
        val[utility::conversions::to_string_t("is_source_branch_exist")] = ModelBase::toJson(isSourceBranchExist_);
    }
    if(mergeRequestTypeIsSet_) {
        val[utility::conversions::to_string_t("merge_request_type")] = ModelBase::toJson(mergeRequestType_);
    }

    return val;
}
bool MergeMergeRequestResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_source_branch_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_source_branch_protected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSourceBranchProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devcloud_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devcloud_source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevcloudSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserBasicExternalDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_in_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_in_progress"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkInProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("milestone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("milestone"));
        if(!fieldValue.is_null())
        {
            MilestoneBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMilestone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_when_build_succeeds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_when_build_succeeds"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeWhenBuildSucceeds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscribed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscribed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscribed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_by"));
        if(!fieldValue.is_null())
        {
            UserBasicExternalDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_by"));
        if(!fieldValue.is_null())
        {
            UserBasicExternalDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_notes_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNotesCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_diff"));
        if(!fieldValue.is_null())
        {
            MergeRequestDiffExternalDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_reviewers_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_reviewers_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestReviewersCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_review_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_review_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestReviewCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_reviewer_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_reviewer_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestReviewerExternalDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestReviewerList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_assignee_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_assignee_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicExternalDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestAssigneeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codecheck_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codecheck_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecheckState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codecheck_defect_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codecheck_defect_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecheckDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_related_work_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_related_work_items"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestRelatedWorkItemDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestRelatedWorkItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diverged_commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diverged_commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDivergedCommitsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("approval_merge_request_approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_merge_request_approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApprovalUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalMergeRequestApprovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rebase_in_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rebase_in_progress"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRebaseInProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository"));
        if(!fieldValue.is_null())
        {
            ProjectSimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_repository"));
        if(!fieldValue.is_null())
        {
            ProjectSimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_source_branch_exist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_source_branch_exist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSourceBranchExist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestType(refVal);
        }
    }
    return ok;
}


int32_t MergeMergeRequestResponse::getId() const
{
    return id_;
}

void MergeMergeRequestResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeMergeRequestResponse::idIsSet() const
{
    return idIsSet_;
}

void MergeMergeRequestResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getIid() const
{
    return iid_;
}

void MergeMergeRequestResponse::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeMergeRequestResponse::iidIsSet() const
{
    return iidIsSet_;
}

void MergeMergeRequestResponse::unsetiid()
{
    iidIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getRepositoryId() const
{
    return repositoryId_;
}

void MergeMergeRequestResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MergeMergeRequestResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MergeMergeRequestResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string MergeMergeRequestResponse::getTitle() const
{
    return title_;
}

void MergeMergeRequestResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeMergeRequestResponse::titleIsSet() const
{
    return titleIsSet_;
}

void MergeMergeRequestResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeMergeRequestResponse::getDescription() const
{
    return description_;
}

void MergeMergeRequestResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeMergeRequestResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeMergeRequestResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MergeMergeRequestResponse::getState() const
{
    return state_;
}

void MergeMergeRequestResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeMergeRequestResponse::stateIsSet() const
{
    return stateIsSet_;
}

void MergeMergeRequestResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeMergeRequestResponse::getCreatedAt() const
{
    return createdAt_;
}

void MergeMergeRequestResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeMergeRequestResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeMergeRequestResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeMergeRequestResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeMergeRequestResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeMergeRequestResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeMergeRequestResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeMergeRequestResponse::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeMergeRequestResponse::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeMergeRequestResponse::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeMergeRequestResponse::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeMergeRequestResponse::getTargetBranch() const
{
    return targetBranch_;
}

void MergeMergeRequestResponse::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeMergeRequestResponse::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeMergeRequestResponse::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool MergeMergeRequestResponse::isIsSourceBranchProtected() const
{
    return isSourceBranchProtected_;
}

void MergeMergeRequestResponse::setIsSourceBranchProtected(bool value)
{
    isSourceBranchProtected_ = value;
    isSourceBranchProtectedIsSet_ = true;
}

bool MergeMergeRequestResponse::isSourceBranchProtectedIsSet() const
{
    return isSourceBranchProtectedIsSet_;
}

void MergeMergeRequestResponse::unsetisSourceBranchProtected()
{
    isSourceBranchProtectedIsSet_ = false;
}

std::string MergeMergeRequestResponse::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void MergeMergeRequestResponse::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool MergeMergeRequestResponse::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void MergeMergeRequestResponse::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

UserBasicExternalDto MergeMergeRequestResponse::getAuthor() const
{
    return author_;
}

void MergeMergeRequestResponse::setAuthor(const UserBasicExternalDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeMergeRequestResponse::authorIsSet() const
{
    return authorIsSet_;
}

void MergeMergeRequestResponse::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void MergeMergeRequestResponse::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool MergeMergeRequestResponse::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void MergeMergeRequestResponse::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void MergeMergeRequestResponse::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool MergeMergeRequestResponse::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void MergeMergeRequestResponse::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string MergeMergeRequestResponse::getSourceProjectId() const
{
    return sourceProjectId_;
}

void MergeMergeRequestResponse::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool MergeMergeRequestResponse::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void MergeMergeRequestResponse::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string MergeMergeRequestResponse::getTargetProjectId() const
{
    return targetProjectId_;
}

void MergeMergeRequestResponse::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool MergeMergeRequestResponse::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void MergeMergeRequestResponse::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<Object>& MergeMergeRequestResponse::getLabels()
{
    return labels_;
}

void MergeMergeRequestResponse::setLabels(const std::vector<Object>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool MergeMergeRequestResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void MergeMergeRequestResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

bool MergeMergeRequestResponse::isWorkInProgress() const
{
    return workInProgress_;
}

void MergeMergeRequestResponse::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool MergeMergeRequestResponse::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void MergeMergeRequestResponse::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto MergeMergeRequestResponse::getMilestone() const
{
    return milestone_;
}

void MergeMergeRequestResponse::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool MergeMergeRequestResponse::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void MergeMergeRequestResponse::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool MergeMergeRequestResponse::isMergeWhenBuildSucceeds() const
{
    return mergeWhenBuildSucceeds_;
}

void MergeMergeRequestResponse::setMergeWhenBuildSucceeds(bool value)
{
    mergeWhenBuildSucceeds_ = value;
    mergeWhenBuildSucceedsIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeWhenBuildSucceedsIsSet() const
{
    return mergeWhenBuildSucceedsIsSet_;
}

void MergeMergeRequestResponse::unsetmergeWhenBuildSucceeds()
{
    mergeWhenBuildSucceedsIsSet_ = false;
}

std::string MergeMergeRequestResponse::getMergeStatus() const
{
    return mergeStatus_;
}

void MergeMergeRequestResponse::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void MergeMergeRequestResponse::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string MergeMergeRequestResponse::getSha() const
{
    return sha_;
}

void MergeMergeRequestResponse::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool MergeMergeRequestResponse::shaIsSet() const
{
    return shaIsSet_;
}

void MergeMergeRequestResponse::unsetsha()
{
    shaIsSet_ = false;
}

std::string MergeMergeRequestResponse::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void MergeMergeRequestResponse::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void MergeMergeRequestResponse::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool MergeMergeRequestResponse::isSubscribed() const
{
    return subscribed_;
}

void MergeMergeRequestResponse::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool MergeMergeRequestResponse::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void MergeMergeRequestResponse::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

UserBasicExternalDto MergeMergeRequestResponse::getMergedBy() const
{
    return mergedBy_;
}

void MergeMergeRequestResponse::setMergedBy(const UserBasicExternalDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool MergeMergeRequestResponse::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void MergeMergeRequestResponse::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string MergeMergeRequestResponse::getMergedAt() const
{
    return mergedAt_;
}

void MergeMergeRequestResponse::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool MergeMergeRequestResponse::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void MergeMergeRequestResponse::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicExternalDto MergeMergeRequestResponse::getClosedBy() const
{
    return closedBy_;
}

void MergeMergeRequestResponse::setClosedBy(const UserBasicExternalDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool MergeMergeRequestResponse::closedByIsSet() const
{
    return closedByIsSet_;
}

void MergeMergeRequestResponse::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string MergeMergeRequestResponse::getClosedAt() const
{
    return closedAt_;
}

void MergeMergeRequestResponse::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeMergeRequestResponse::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeMergeRequestResponse::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getUserNotesCount() const
{
    return userNotesCount_;
}

void MergeMergeRequestResponse::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool MergeMergeRequestResponse::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void MergeMergeRequestResponse::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

bool MergeMergeRequestResponse::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void MergeMergeRequestResponse::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool MergeMergeRequestResponse::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void MergeMergeRequestResponse::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string MergeMergeRequestResponse::getWebUrl() const
{
    return webUrl_;
}

void MergeMergeRequestResponse::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeMergeRequestResponse::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeMergeRequestResponse::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

MergeRequestDiffExternalDto MergeMergeRequestResponse::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void MergeMergeRequestResponse::setMergeRequestDiff(const MergeRequestDiffExternalDto& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getMergeRequestReviewersCount() const
{
    return mergeRequestReviewersCount_;
}

void MergeMergeRequestResponse::setMergeRequestReviewersCount(int32_t value)
{
    mergeRequestReviewersCount_ = value;
    mergeRequestReviewersCountIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestReviewersCountIsSet() const
{
    return mergeRequestReviewersCountIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestReviewersCount()
{
    mergeRequestReviewersCountIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getMergeRequestReviewCount() const
{
    return mergeRequestReviewCount_;
}

void MergeMergeRequestResponse::setMergeRequestReviewCount(int32_t value)
{
    mergeRequestReviewCount_ = value;
    mergeRequestReviewCountIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestReviewCountIsSet() const
{
    return mergeRequestReviewCountIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestReviewCount()
{
    mergeRequestReviewCountIsSet_ = false;
}

std::vector<MergeRequestReviewerExternalDto>& MergeMergeRequestResponse::getMergeRequestReviewerList()
{
    return mergeRequestReviewerList_;
}

void MergeMergeRequestResponse::setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value)
{
    mergeRequestReviewerList_ = value;
    mergeRequestReviewerListIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestReviewerListIsSet() const
{
    return mergeRequestReviewerListIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestReviewerList()
{
    mergeRequestReviewerListIsSet_ = false;
}

std::vector<UserBasicExternalDto>& MergeMergeRequestResponse::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void MergeMergeRequestResponse::setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getNotes() const
{
    return notes_;
}

void MergeMergeRequestResponse::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool MergeMergeRequestResponse::notesIsSet() const
{
    return notesIsSet_;
}

void MergeMergeRequestResponse::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getCodecheckState() const
{
    return codecheckState_;
}

void MergeMergeRequestResponse::setCodecheckState(int32_t value)
{
    codecheckState_ = value;
    codecheckStateIsSet_ = true;
}

bool MergeMergeRequestResponse::codecheckStateIsSet() const
{
    return codecheckStateIsSet_;
}

void MergeMergeRequestResponse::unsetcodecheckState()
{
    codecheckStateIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getCodecheckDefectCount() const
{
    return codecheckDefectCount_;
}

void MergeMergeRequestResponse::setCodecheckDefectCount(int32_t value)
{
    codecheckDefectCount_ = value;
    codecheckDefectCountIsSet_ = true;
}

bool MergeMergeRequestResponse::codecheckDefectCountIsSet() const
{
    return codecheckDefectCountIsSet_;
}

void MergeMergeRequestResponse::unsetcodecheckDefectCount()
{
    codecheckDefectCountIsSet_ = false;
}

std::vector<MergeRequestRelatedWorkItemDto>& MergeMergeRequestResponse::getMergeRequestRelatedWorkItems()
{
    return mergeRequestRelatedWorkItems_;
}

void MergeMergeRequestResponse::setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value)
{
    mergeRequestRelatedWorkItems_ = value;
    mergeRequestRelatedWorkItemsIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestRelatedWorkItemsIsSet() const
{
    return mergeRequestRelatedWorkItemsIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestRelatedWorkItems()
{
    mergeRequestRelatedWorkItemsIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void MergeMergeRequestResponse::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool MergeMergeRequestResponse::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void MergeMergeRequestResponse::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

bool MergeMergeRequestResponse::isModerationResult() const
{
    return moderationResult_;
}

void MergeMergeRequestResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool MergeMergeRequestResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void MergeMergeRequestResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t MergeMergeRequestResponse::getModerationTime() const
{
    return moderationTime_;
}

void MergeMergeRequestResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool MergeMergeRequestResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void MergeMergeRequestResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t MergeMergeRequestResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void MergeMergeRequestResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool MergeMergeRequestResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void MergeMergeRequestResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool MergeMergeRequestResponse::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void MergeMergeRequestResponse::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool MergeMergeRequestResponse::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void MergeMergeRequestResponse::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

std::vector<ApprovalUserDto>& MergeMergeRequestResponse::getApprovalMergeRequestApprovers()
{
    return approvalMergeRequestApprovers_;
}

void MergeMergeRequestResponse::setApprovalMergeRequestApprovers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestApprovers_ = value;
    approvalMergeRequestApproversIsSet_ = true;
}

bool MergeMergeRequestResponse::approvalMergeRequestApproversIsSet() const
{
    return approvalMergeRequestApproversIsSet_;
}

void MergeMergeRequestResponse::unsetapprovalMergeRequestApprovers()
{
    approvalMergeRequestApproversIsSet_ = false;
}

std::string MergeMergeRequestResponse::getReviewMode() const
{
    return reviewMode_;
}

void MergeMergeRequestResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool MergeMergeRequestResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void MergeMergeRequestResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool MergeMergeRequestResponse::isSquash() const
{
    return squash_;
}

void MergeMergeRequestResponse::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool MergeMergeRequestResponse::squashIsSet() const
{
    return squashIsSet_;
}

void MergeMergeRequestResponse::unsetsquash()
{
    squashIsSet_ = false;
}

std::string MergeMergeRequestResponse::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void MergeMergeRequestResponse::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool MergeMergeRequestResponse::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void MergeMergeRequestResponse::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

bool MergeMergeRequestResponse::isRebaseInProgress() const
{
    return rebaseInProgress_;
}

void MergeMergeRequestResponse::setRebaseInProgress(bool value)
{
    rebaseInProgress_ = value;
    rebaseInProgressIsSet_ = true;
}

bool MergeMergeRequestResponse::rebaseInProgressIsSet() const
{
    return rebaseInProgressIsSet_;
}

void MergeMergeRequestResponse::unsetrebaseInProgress()
{
    rebaseInProgressIsSet_ = false;
}

ProjectSimpleDto MergeMergeRequestResponse::getSourceRepository() const
{
    return sourceRepository_;
}

void MergeMergeRequestResponse::setSourceRepository(const ProjectSimpleDto& value)
{
    sourceRepository_ = value;
    sourceRepositoryIsSet_ = true;
}

bool MergeMergeRequestResponse::sourceRepositoryIsSet() const
{
    return sourceRepositoryIsSet_;
}

void MergeMergeRequestResponse::unsetsourceRepository()
{
    sourceRepositoryIsSet_ = false;
}

ProjectSimpleDto MergeMergeRequestResponse::getTargetRepository() const
{
    return targetRepository_;
}

void MergeMergeRequestResponse::setTargetRepository(const ProjectSimpleDto& value)
{
    targetRepository_ = value;
    targetRepositoryIsSet_ = true;
}

bool MergeMergeRequestResponse::targetRepositoryIsSet() const
{
    return targetRepositoryIsSet_;
}

void MergeMergeRequestResponse::unsettargetRepository()
{
    targetRepositoryIsSet_ = false;
}

bool MergeMergeRequestResponse::isIsSourceBranchExist() const
{
    return isSourceBranchExist_;
}

void MergeMergeRequestResponse::setIsSourceBranchExist(bool value)
{
    isSourceBranchExist_ = value;
    isSourceBranchExistIsSet_ = true;
}

bool MergeMergeRequestResponse::isSourceBranchExistIsSet() const
{
    return isSourceBranchExistIsSet_;
}

void MergeMergeRequestResponse::unsetisSourceBranchExist()
{
    isSourceBranchExistIsSet_ = false;
}

std::string MergeMergeRequestResponse::getMergeRequestType() const
{
    return mergeRequestType_;
}

void MergeMergeRequestResponse::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool MergeMergeRequestResponse::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void MergeMergeRequestResponse::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codehub/v4/model/CreateMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestResponse::CreateMergeRequestResponse()
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

CreateMergeRequestResponse::~CreateMergeRequestResponse() = default;

void CreateMergeRequestResponse::validate()
{
}

web::json::value CreateMergeRequestResponse::toJson() const
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
bool CreateMergeRequestResponse::fromJson(const web::json::value& val)
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


int32_t CreateMergeRequestResponse::getId() const
{
    return id_;
}

void CreateMergeRequestResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateMergeRequestResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateMergeRequestResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getIid() const
{
    return iid_;
}

void CreateMergeRequestResponse::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool CreateMergeRequestResponse::iidIsSet() const
{
    return iidIsSet_;
}

void CreateMergeRequestResponse::unsetiid()
{
    iidIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateMergeRequestResponse::getTitle() const
{
    return title_;
}

void CreateMergeRequestResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateMergeRequestResponse::titleIsSet() const
{
    return titleIsSet_;
}

void CreateMergeRequestResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateMergeRequestResponse::getDescription() const
{
    return description_;
}

void CreateMergeRequestResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateMergeRequestResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateMergeRequestResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateMergeRequestResponse::getState() const
{
    return state_;
}

void CreateMergeRequestResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateMergeRequestResponse::stateIsSet() const
{
    return stateIsSet_;
}

void CreateMergeRequestResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateMergeRequestResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateMergeRequestResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateMergeRequestResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateMergeRequestResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateMergeRequestResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateMergeRequestResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateMergeRequestResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateMergeRequestResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string CreateMergeRequestResponse::getSourceBranch() const
{
    return sourceBranch_;
}

void CreateMergeRequestResponse::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool CreateMergeRequestResponse::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void CreateMergeRequestResponse::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string CreateMergeRequestResponse::getTargetBranch() const
{
    return targetBranch_;
}

void CreateMergeRequestResponse::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool CreateMergeRequestResponse::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void CreateMergeRequestResponse::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool CreateMergeRequestResponse::isIsSourceBranchProtected() const
{
    return isSourceBranchProtected_;
}

void CreateMergeRequestResponse::setIsSourceBranchProtected(bool value)
{
    isSourceBranchProtected_ = value;
    isSourceBranchProtectedIsSet_ = true;
}

bool CreateMergeRequestResponse::isSourceBranchProtectedIsSet() const
{
    return isSourceBranchProtectedIsSet_;
}

void CreateMergeRequestResponse::unsetisSourceBranchProtected()
{
    isSourceBranchProtectedIsSet_ = false;
}

std::string CreateMergeRequestResponse::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void CreateMergeRequestResponse::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool CreateMergeRequestResponse::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void CreateMergeRequestResponse::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

UserBasicExternalDto CreateMergeRequestResponse::getAuthor() const
{
    return author_;
}

void CreateMergeRequestResponse::setAuthor(const UserBasicExternalDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool CreateMergeRequestResponse::authorIsSet() const
{
    return authorIsSet_;
}

void CreateMergeRequestResponse::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void CreateMergeRequestResponse::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool CreateMergeRequestResponse::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void CreateMergeRequestResponse::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void CreateMergeRequestResponse::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool CreateMergeRequestResponse::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void CreateMergeRequestResponse::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string CreateMergeRequestResponse::getSourceProjectId() const
{
    return sourceProjectId_;
}

void CreateMergeRequestResponse::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool CreateMergeRequestResponse::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void CreateMergeRequestResponse::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string CreateMergeRequestResponse::getTargetProjectId() const
{
    return targetProjectId_;
}

void CreateMergeRequestResponse::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool CreateMergeRequestResponse::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void CreateMergeRequestResponse::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<Object>& CreateMergeRequestResponse::getLabels()
{
    return labels_;
}

void CreateMergeRequestResponse::setLabels(const std::vector<Object>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool CreateMergeRequestResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void CreateMergeRequestResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

bool CreateMergeRequestResponse::isWorkInProgress() const
{
    return workInProgress_;
}

void CreateMergeRequestResponse::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool CreateMergeRequestResponse::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void CreateMergeRequestResponse::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto CreateMergeRequestResponse::getMilestone() const
{
    return milestone_;
}

void CreateMergeRequestResponse::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool CreateMergeRequestResponse::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void CreateMergeRequestResponse::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool CreateMergeRequestResponse::isMergeWhenBuildSucceeds() const
{
    return mergeWhenBuildSucceeds_;
}

void CreateMergeRequestResponse::setMergeWhenBuildSucceeds(bool value)
{
    mergeWhenBuildSucceeds_ = value;
    mergeWhenBuildSucceedsIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeWhenBuildSucceedsIsSet() const
{
    return mergeWhenBuildSucceedsIsSet_;
}

void CreateMergeRequestResponse::unsetmergeWhenBuildSucceeds()
{
    mergeWhenBuildSucceedsIsSet_ = false;
}

std::string CreateMergeRequestResponse::getMergeStatus() const
{
    return mergeStatus_;
}

void CreateMergeRequestResponse::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void CreateMergeRequestResponse::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string CreateMergeRequestResponse::getSha() const
{
    return sha_;
}

void CreateMergeRequestResponse::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool CreateMergeRequestResponse::shaIsSet() const
{
    return shaIsSet_;
}

void CreateMergeRequestResponse::unsetsha()
{
    shaIsSet_ = false;
}

std::string CreateMergeRequestResponse::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void CreateMergeRequestResponse::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void CreateMergeRequestResponse::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool CreateMergeRequestResponse::isSubscribed() const
{
    return subscribed_;
}

void CreateMergeRequestResponse::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool CreateMergeRequestResponse::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void CreateMergeRequestResponse::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

UserBasicExternalDto CreateMergeRequestResponse::getMergedBy() const
{
    return mergedBy_;
}

void CreateMergeRequestResponse::setMergedBy(const UserBasicExternalDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool CreateMergeRequestResponse::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void CreateMergeRequestResponse::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string CreateMergeRequestResponse::getMergedAt() const
{
    return mergedAt_;
}

void CreateMergeRequestResponse::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool CreateMergeRequestResponse::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void CreateMergeRequestResponse::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicExternalDto CreateMergeRequestResponse::getClosedBy() const
{
    return closedBy_;
}

void CreateMergeRequestResponse::setClosedBy(const UserBasicExternalDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool CreateMergeRequestResponse::closedByIsSet() const
{
    return closedByIsSet_;
}

void CreateMergeRequestResponse::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string CreateMergeRequestResponse::getClosedAt() const
{
    return closedAt_;
}

void CreateMergeRequestResponse::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool CreateMergeRequestResponse::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void CreateMergeRequestResponse::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getUserNotesCount() const
{
    return userNotesCount_;
}

void CreateMergeRequestResponse::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool CreateMergeRequestResponse::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void CreateMergeRequestResponse::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

bool CreateMergeRequestResponse::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void CreateMergeRequestResponse::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool CreateMergeRequestResponse::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void CreateMergeRequestResponse::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string CreateMergeRequestResponse::getWebUrl() const
{
    return webUrl_;
}

void CreateMergeRequestResponse::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool CreateMergeRequestResponse::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void CreateMergeRequestResponse::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

MergeRequestDiffExternalDto CreateMergeRequestResponse::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void CreateMergeRequestResponse::setMergeRequestDiff(const MergeRequestDiffExternalDto& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getMergeRequestReviewersCount() const
{
    return mergeRequestReviewersCount_;
}

void CreateMergeRequestResponse::setMergeRequestReviewersCount(int32_t value)
{
    mergeRequestReviewersCount_ = value;
    mergeRequestReviewersCountIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestReviewersCountIsSet() const
{
    return mergeRequestReviewersCountIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestReviewersCount()
{
    mergeRequestReviewersCountIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getMergeRequestReviewCount() const
{
    return mergeRequestReviewCount_;
}

void CreateMergeRequestResponse::setMergeRequestReviewCount(int32_t value)
{
    mergeRequestReviewCount_ = value;
    mergeRequestReviewCountIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestReviewCountIsSet() const
{
    return mergeRequestReviewCountIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestReviewCount()
{
    mergeRequestReviewCountIsSet_ = false;
}

std::vector<MergeRequestReviewerExternalDto>& CreateMergeRequestResponse::getMergeRequestReviewerList()
{
    return mergeRequestReviewerList_;
}

void CreateMergeRequestResponse::setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value)
{
    mergeRequestReviewerList_ = value;
    mergeRequestReviewerListIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestReviewerListIsSet() const
{
    return mergeRequestReviewerListIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestReviewerList()
{
    mergeRequestReviewerListIsSet_ = false;
}

std::vector<UserBasicExternalDto>& CreateMergeRequestResponse::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void CreateMergeRequestResponse::setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getNotes() const
{
    return notes_;
}

void CreateMergeRequestResponse::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool CreateMergeRequestResponse::notesIsSet() const
{
    return notesIsSet_;
}

void CreateMergeRequestResponse::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getCodecheckState() const
{
    return codecheckState_;
}

void CreateMergeRequestResponse::setCodecheckState(int32_t value)
{
    codecheckState_ = value;
    codecheckStateIsSet_ = true;
}

bool CreateMergeRequestResponse::codecheckStateIsSet() const
{
    return codecheckStateIsSet_;
}

void CreateMergeRequestResponse::unsetcodecheckState()
{
    codecheckStateIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getCodecheckDefectCount() const
{
    return codecheckDefectCount_;
}

void CreateMergeRequestResponse::setCodecheckDefectCount(int32_t value)
{
    codecheckDefectCount_ = value;
    codecheckDefectCountIsSet_ = true;
}

bool CreateMergeRequestResponse::codecheckDefectCountIsSet() const
{
    return codecheckDefectCountIsSet_;
}

void CreateMergeRequestResponse::unsetcodecheckDefectCount()
{
    codecheckDefectCountIsSet_ = false;
}

std::vector<MergeRequestRelatedWorkItemDto>& CreateMergeRequestResponse::getMergeRequestRelatedWorkItems()
{
    return mergeRequestRelatedWorkItems_;
}

void CreateMergeRequestResponse::setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value)
{
    mergeRequestRelatedWorkItems_ = value;
    mergeRequestRelatedWorkItemsIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestRelatedWorkItemsIsSet() const
{
    return mergeRequestRelatedWorkItemsIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestRelatedWorkItems()
{
    mergeRequestRelatedWorkItemsIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void CreateMergeRequestResponse::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool CreateMergeRequestResponse::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void CreateMergeRequestResponse::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

bool CreateMergeRequestResponse::isModerationResult() const
{
    return moderationResult_;
}

void CreateMergeRequestResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool CreateMergeRequestResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void CreateMergeRequestResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t CreateMergeRequestResponse::getModerationTime() const
{
    return moderationTime_;
}

void CreateMergeRequestResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool CreateMergeRequestResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void CreateMergeRequestResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t CreateMergeRequestResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void CreateMergeRequestResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool CreateMergeRequestResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void CreateMergeRequestResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool CreateMergeRequestResponse::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void CreateMergeRequestResponse::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool CreateMergeRequestResponse::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void CreateMergeRequestResponse::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

std::vector<ApprovalUserDto>& CreateMergeRequestResponse::getApprovalMergeRequestApprovers()
{
    return approvalMergeRequestApprovers_;
}

void CreateMergeRequestResponse::setApprovalMergeRequestApprovers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestApprovers_ = value;
    approvalMergeRequestApproversIsSet_ = true;
}

bool CreateMergeRequestResponse::approvalMergeRequestApproversIsSet() const
{
    return approvalMergeRequestApproversIsSet_;
}

void CreateMergeRequestResponse::unsetapprovalMergeRequestApprovers()
{
    approvalMergeRequestApproversIsSet_ = false;
}

std::string CreateMergeRequestResponse::getReviewMode() const
{
    return reviewMode_;
}

void CreateMergeRequestResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool CreateMergeRequestResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void CreateMergeRequestResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool CreateMergeRequestResponse::isSquash() const
{
    return squash_;
}

void CreateMergeRequestResponse::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool CreateMergeRequestResponse::squashIsSet() const
{
    return squashIsSet_;
}

void CreateMergeRequestResponse::unsetsquash()
{
    squashIsSet_ = false;
}

std::string CreateMergeRequestResponse::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void CreateMergeRequestResponse::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool CreateMergeRequestResponse::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void CreateMergeRequestResponse::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

bool CreateMergeRequestResponse::isRebaseInProgress() const
{
    return rebaseInProgress_;
}

void CreateMergeRequestResponse::setRebaseInProgress(bool value)
{
    rebaseInProgress_ = value;
    rebaseInProgressIsSet_ = true;
}

bool CreateMergeRequestResponse::rebaseInProgressIsSet() const
{
    return rebaseInProgressIsSet_;
}

void CreateMergeRequestResponse::unsetrebaseInProgress()
{
    rebaseInProgressIsSet_ = false;
}

ProjectSimpleDto CreateMergeRequestResponse::getSourceRepository() const
{
    return sourceRepository_;
}

void CreateMergeRequestResponse::setSourceRepository(const ProjectSimpleDto& value)
{
    sourceRepository_ = value;
    sourceRepositoryIsSet_ = true;
}

bool CreateMergeRequestResponse::sourceRepositoryIsSet() const
{
    return sourceRepositoryIsSet_;
}

void CreateMergeRequestResponse::unsetsourceRepository()
{
    sourceRepositoryIsSet_ = false;
}

ProjectSimpleDto CreateMergeRequestResponse::getTargetRepository() const
{
    return targetRepository_;
}

void CreateMergeRequestResponse::setTargetRepository(const ProjectSimpleDto& value)
{
    targetRepository_ = value;
    targetRepositoryIsSet_ = true;
}

bool CreateMergeRequestResponse::targetRepositoryIsSet() const
{
    return targetRepositoryIsSet_;
}

void CreateMergeRequestResponse::unsettargetRepository()
{
    targetRepositoryIsSet_ = false;
}

bool CreateMergeRequestResponse::isIsSourceBranchExist() const
{
    return isSourceBranchExist_;
}

void CreateMergeRequestResponse::setIsSourceBranchExist(bool value)
{
    isSourceBranchExist_ = value;
    isSourceBranchExistIsSet_ = true;
}

bool CreateMergeRequestResponse::isSourceBranchExistIsSet() const
{
    return isSourceBranchExistIsSet_;
}

void CreateMergeRequestResponse::unsetisSourceBranchExist()
{
    isSourceBranchExistIsSet_ = false;
}

std::string CreateMergeRequestResponse::getMergeRequestType() const
{
    return mergeRequestType_;
}

void CreateMergeRequestResponse::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool CreateMergeRequestResponse::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void CreateMergeRequestResponse::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

}
}
}
}
}



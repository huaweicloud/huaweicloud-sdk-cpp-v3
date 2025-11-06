

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestDetailExternalDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestDetailExternalDto::MergeRequestDetailExternalDto()
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
}

MergeRequestDetailExternalDto::~MergeRequestDetailExternalDto() = default;

void MergeRequestDetailExternalDto::validate()
{
}

web::json::value MergeRequestDetailExternalDto::toJson() const
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

    return val;
}
bool MergeRequestDetailExternalDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t MergeRequestDetailExternalDto::getId() const
{
    return id_;
}

void MergeRequestDetailExternalDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestDetailExternalDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestDetailExternalDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getIid() const
{
    return iid_;
}

void MergeRequestDetailExternalDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeRequestDetailExternalDto::iidIsSet() const
{
    return iidIsSet_;
}

void MergeRequestDetailExternalDto::unsetiid()
{
    iidIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getRepositoryId() const
{
    return repositoryId_;
}

void MergeRequestDetailExternalDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MergeRequestDetailExternalDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MergeRequestDetailExternalDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getTitle() const
{
    return title_;
}

void MergeRequestDetailExternalDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestDetailExternalDto::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestDetailExternalDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getDescription() const
{
    return description_;
}

void MergeRequestDetailExternalDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeRequestDetailExternalDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeRequestDetailExternalDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getState() const
{
    return state_;
}

void MergeRequestDetailExternalDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestDetailExternalDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestDetailExternalDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestDetailExternalDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestDetailExternalDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestDetailExternalDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestDetailExternalDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestDetailExternalDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestDetailExternalDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeRequestDetailExternalDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeRequestDetailExternalDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeRequestDetailExternalDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getTargetBranch() const
{
    return targetBranch_;
}

void MergeRequestDetailExternalDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeRequestDetailExternalDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeRequestDetailExternalDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isIsSourceBranchProtected() const
{
    return isSourceBranchProtected_;
}

void MergeRequestDetailExternalDto::setIsSourceBranchProtected(bool value)
{
    isSourceBranchProtected_ = value;
    isSourceBranchProtectedIsSet_ = true;
}

bool MergeRequestDetailExternalDto::isSourceBranchProtectedIsSet() const
{
    return isSourceBranchProtectedIsSet_;
}

void MergeRequestDetailExternalDto::unsetisSourceBranchProtected()
{
    isSourceBranchProtectedIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void MergeRequestDetailExternalDto::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool MergeRequestDetailExternalDto::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void MergeRequestDetailExternalDto::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

UserBasicExternalDto MergeRequestDetailExternalDto::getAuthor() const
{
    return author_;
}

void MergeRequestDetailExternalDto::setAuthor(const UserBasicExternalDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeRequestDetailExternalDto::authorIsSet() const
{
    return authorIsSet_;
}

void MergeRequestDetailExternalDto::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void MergeRequestDetailExternalDto::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool MergeRequestDetailExternalDto::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void MergeRequestDetailExternalDto::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void MergeRequestDetailExternalDto::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool MergeRequestDetailExternalDto::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void MergeRequestDetailExternalDto::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getSourceProjectId() const
{
    return sourceProjectId_;
}

void MergeRequestDetailExternalDto::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool MergeRequestDetailExternalDto::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void MergeRequestDetailExternalDto::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getTargetProjectId() const
{
    return targetProjectId_;
}

void MergeRequestDetailExternalDto::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool MergeRequestDetailExternalDto::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void MergeRequestDetailExternalDto::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<Object>& MergeRequestDetailExternalDto::getLabels()
{
    return labels_;
}

void MergeRequestDetailExternalDto::setLabels(const std::vector<Object>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool MergeRequestDetailExternalDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void MergeRequestDetailExternalDto::unsetlabels()
{
    labelsIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isWorkInProgress() const
{
    return workInProgress_;
}

void MergeRequestDetailExternalDto::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool MergeRequestDetailExternalDto::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void MergeRequestDetailExternalDto::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto MergeRequestDetailExternalDto::getMilestone() const
{
    return milestone_;
}

void MergeRequestDetailExternalDto::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool MergeRequestDetailExternalDto::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void MergeRequestDetailExternalDto::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isMergeWhenBuildSucceeds() const
{
    return mergeWhenBuildSucceeds_;
}

void MergeRequestDetailExternalDto::setMergeWhenBuildSucceeds(bool value)
{
    mergeWhenBuildSucceeds_ = value;
    mergeWhenBuildSucceedsIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeWhenBuildSucceedsIsSet() const
{
    return mergeWhenBuildSucceedsIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeWhenBuildSucceeds()
{
    mergeWhenBuildSucceedsIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getMergeStatus() const
{
    return mergeStatus_;
}

void MergeRequestDetailExternalDto::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getSha() const
{
    return sha_;
}

void MergeRequestDetailExternalDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool MergeRequestDetailExternalDto::shaIsSet() const
{
    return shaIsSet_;
}

void MergeRequestDetailExternalDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void MergeRequestDetailExternalDto::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isSubscribed() const
{
    return subscribed_;
}

void MergeRequestDetailExternalDto::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool MergeRequestDetailExternalDto::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void MergeRequestDetailExternalDto::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

UserBasicExternalDto MergeRequestDetailExternalDto::getMergedBy() const
{
    return mergedBy_;
}

void MergeRequestDetailExternalDto::setMergedBy(const UserBasicExternalDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getMergedAt() const
{
    return mergedAt_;
}

void MergeRequestDetailExternalDto::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicExternalDto MergeRequestDetailExternalDto::getClosedBy() const
{
    return closedBy_;
}

void MergeRequestDetailExternalDto::setClosedBy(const UserBasicExternalDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool MergeRequestDetailExternalDto::closedByIsSet() const
{
    return closedByIsSet_;
}

void MergeRequestDetailExternalDto::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getClosedAt() const
{
    return closedAt_;
}

void MergeRequestDetailExternalDto::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeRequestDetailExternalDto::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeRequestDetailExternalDto::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getUserNotesCount() const
{
    return userNotesCount_;
}

void MergeRequestDetailExternalDto::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool MergeRequestDetailExternalDto::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void MergeRequestDetailExternalDto::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void MergeRequestDetailExternalDto::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool MergeRequestDetailExternalDto::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void MergeRequestDetailExternalDto::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getWebUrl() const
{
    return webUrl_;
}

void MergeRequestDetailExternalDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeRequestDetailExternalDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeRequestDetailExternalDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

MergeRequestDiffExternalDto MergeRequestDetailExternalDto::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void MergeRequestDetailExternalDto::setMergeRequestDiff(const MergeRequestDiffExternalDto& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getMergeRequestReviewersCount() const
{
    return mergeRequestReviewersCount_;
}

void MergeRequestDetailExternalDto::setMergeRequestReviewersCount(int32_t value)
{
    mergeRequestReviewersCount_ = value;
    mergeRequestReviewersCountIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestReviewersCountIsSet() const
{
    return mergeRequestReviewersCountIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestReviewersCount()
{
    mergeRequestReviewersCountIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getMergeRequestReviewCount() const
{
    return mergeRequestReviewCount_;
}

void MergeRequestDetailExternalDto::setMergeRequestReviewCount(int32_t value)
{
    mergeRequestReviewCount_ = value;
    mergeRequestReviewCountIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestReviewCountIsSet() const
{
    return mergeRequestReviewCountIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestReviewCount()
{
    mergeRequestReviewCountIsSet_ = false;
}

std::vector<MergeRequestReviewerExternalDto>& MergeRequestDetailExternalDto::getMergeRequestReviewerList()
{
    return mergeRequestReviewerList_;
}

void MergeRequestDetailExternalDto::setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value)
{
    mergeRequestReviewerList_ = value;
    mergeRequestReviewerListIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestReviewerListIsSet() const
{
    return mergeRequestReviewerListIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestReviewerList()
{
    mergeRequestReviewerListIsSet_ = false;
}

std::vector<UserBasicExternalDto>& MergeRequestDetailExternalDto::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void MergeRequestDetailExternalDto::setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getNotes() const
{
    return notes_;
}

void MergeRequestDetailExternalDto::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool MergeRequestDetailExternalDto::notesIsSet() const
{
    return notesIsSet_;
}

void MergeRequestDetailExternalDto::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getCodecheckState() const
{
    return codecheckState_;
}

void MergeRequestDetailExternalDto::setCodecheckState(int32_t value)
{
    codecheckState_ = value;
    codecheckStateIsSet_ = true;
}

bool MergeRequestDetailExternalDto::codecheckStateIsSet() const
{
    return codecheckStateIsSet_;
}

void MergeRequestDetailExternalDto::unsetcodecheckState()
{
    codecheckStateIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getCodecheckDefectCount() const
{
    return codecheckDefectCount_;
}

void MergeRequestDetailExternalDto::setCodecheckDefectCount(int32_t value)
{
    codecheckDefectCount_ = value;
    codecheckDefectCountIsSet_ = true;
}

bool MergeRequestDetailExternalDto::codecheckDefectCountIsSet() const
{
    return codecheckDefectCountIsSet_;
}

void MergeRequestDetailExternalDto::unsetcodecheckDefectCount()
{
    codecheckDefectCountIsSet_ = false;
}

std::vector<MergeRequestRelatedWorkItemDto>& MergeRequestDetailExternalDto::getMergeRequestRelatedWorkItems()
{
    return mergeRequestRelatedWorkItems_;
}

void MergeRequestDetailExternalDto::setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value)
{
    mergeRequestRelatedWorkItems_ = value;
    mergeRequestRelatedWorkItemsIsSet_ = true;
}

bool MergeRequestDetailExternalDto::mergeRequestRelatedWorkItemsIsSet() const
{
    return mergeRequestRelatedWorkItemsIsSet_;
}

void MergeRequestDetailExternalDto::unsetmergeRequestRelatedWorkItems()
{
    mergeRequestRelatedWorkItemsIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void MergeRequestDetailExternalDto::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool MergeRequestDetailExternalDto::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void MergeRequestDetailExternalDto::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isModerationResult() const
{
    return moderationResult_;
}

void MergeRequestDetailExternalDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool MergeRequestDetailExternalDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void MergeRequestDetailExternalDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t MergeRequestDetailExternalDto::getModerationTime() const
{
    return moderationTime_;
}

void MergeRequestDetailExternalDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool MergeRequestDetailExternalDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void MergeRequestDetailExternalDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t MergeRequestDetailExternalDto::getModerationStatus() const
{
    return moderationStatus_;
}

void MergeRequestDetailExternalDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool MergeRequestDetailExternalDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void MergeRequestDetailExternalDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void MergeRequestDetailExternalDto::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool MergeRequestDetailExternalDto::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void MergeRequestDetailExternalDto::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

std::vector<ApprovalUserDto>& MergeRequestDetailExternalDto::getApprovalMergeRequestApprovers()
{
    return approvalMergeRequestApprovers_;
}

void MergeRequestDetailExternalDto::setApprovalMergeRequestApprovers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestApprovers_ = value;
    approvalMergeRequestApproversIsSet_ = true;
}

bool MergeRequestDetailExternalDto::approvalMergeRequestApproversIsSet() const
{
    return approvalMergeRequestApproversIsSet_;
}

void MergeRequestDetailExternalDto::unsetapprovalMergeRequestApprovers()
{
    approvalMergeRequestApproversIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getReviewMode() const
{
    return reviewMode_;
}

void MergeRequestDetailExternalDto::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool MergeRequestDetailExternalDto::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void MergeRequestDetailExternalDto::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isSquash() const
{
    return squash_;
}

void MergeRequestDetailExternalDto::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool MergeRequestDetailExternalDto::squashIsSet() const
{
    return squashIsSet_;
}

void MergeRequestDetailExternalDto::unsetsquash()
{
    squashIsSet_ = false;
}

std::string MergeRequestDetailExternalDto::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void MergeRequestDetailExternalDto::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool MergeRequestDetailExternalDto::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void MergeRequestDetailExternalDto::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

bool MergeRequestDetailExternalDto::isRebaseInProgress() const
{
    return rebaseInProgress_;
}

void MergeRequestDetailExternalDto::setRebaseInProgress(bool value)
{
    rebaseInProgress_ = value;
    rebaseInProgressIsSet_ = true;
}

bool MergeRequestDetailExternalDto::rebaseInProgressIsSet() const
{
    return rebaseInProgressIsSet_;
}

void MergeRequestDetailExternalDto::unsetrebaseInProgress()
{
    rebaseInProgressIsSet_ = false;
}

}
}
}
}
}



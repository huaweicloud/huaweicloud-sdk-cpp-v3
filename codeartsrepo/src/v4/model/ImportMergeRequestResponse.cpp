

#include "huaweicloud/codeartsrepo/v4/model/ImportMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ImportMergeRequestResponse::ImportMergeRequestResponse()
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
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    approvalMergeRequestApproversIsSet_ = false;
    approvalMergeRequestReviewersIsSet_ = false;
    sourceRepositoryIsSet_ = false;
    targetRepositoryIsSet_ = false;
    isSourceBranchExist_ = false;
    isSourceBranchExistIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
    squashCommitMessage_ = "";
    squashCommitMessageIsSet_ = false;
    autoMerge_ = false;
    autoMergeIsSet_ = false;
    mergeError_ = "";
    mergeErrorIsSet_ = false;
    jsonMergeErrorIsSet_ = false;
    rebaseInProgress_ = false;
    rebaseInProgressIsSet_ = false;
}

ImportMergeRequestResponse::~ImportMergeRequestResponse() = default;

void ImportMergeRequestResponse::validate()
{
}

web::json::value ImportMergeRequestResponse::toJson() const
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
    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(approvalMergeRequestApproversIsSet_) {
        val[utility::conversions::to_string_t("approval_merge_request_approvers")] = ModelBase::toJson(approvalMergeRequestApprovers_);
    }
    if(approvalMergeRequestReviewersIsSet_) {
        val[utility::conversions::to_string_t("approval_merge_request_reviewers")] = ModelBase::toJson(approvalMergeRequestReviewers_);
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
    if(squashCommitMessageIsSet_) {
        val[utility::conversions::to_string_t("squash_commit_message")] = ModelBase::toJson(squashCommitMessage_);
    }
    if(autoMergeIsSet_) {
        val[utility::conversions::to_string_t("auto_merge")] = ModelBase::toJson(autoMerge_);
    }
    if(mergeErrorIsSet_) {
        val[utility::conversions::to_string_t("merge_error")] = ModelBase::toJson(mergeError_);
    }
    if(jsonMergeErrorIsSet_) {
        val[utility::conversions::to_string_t("json_merge_error")] = ModelBase::toJson(jsonMergeError_);
    }
    if(rebaseInProgressIsSet_) {
        val[utility::conversions::to_string_t("rebase_in_progress")] = ModelBase::toJson(rebaseInProgress_);
    }

    return val;
}
bool ImportMergeRequestResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("approval_merge_request_approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_merge_request_approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApprovalUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalMergeRequestApprovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_merge_request_reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_merge_request_reviewers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApprovalUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalMergeRequestReviewers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("squash_commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash_commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquashCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("json_merge_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("json_merge_error"));
        if(!fieldValue.is_null())
        {
            MergeErrorDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJsonMergeError(refVal);
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


int32_t ImportMergeRequestResponse::getId() const
{
    return id_;
}

void ImportMergeRequestResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImportMergeRequestResponse::idIsSet() const
{
    return idIsSet_;
}

void ImportMergeRequestResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getIid() const
{
    return iid_;
}

void ImportMergeRequestResponse::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool ImportMergeRequestResponse::iidIsSet() const
{
    return iidIsSet_;
}

void ImportMergeRequestResponse::unsetiid()
{
    iidIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ImportMergeRequestResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ImportMergeRequestResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ImportMergeRequestResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ImportMergeRequestResponse::getTitle() const
{
    return title_;
}

void ImportMergeRequestResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ImportMergeRequestResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ImportMergeRequestResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ImportMergeRequestResponse::getDescription() const
{
    return description_;
}

void ImportMergeRequestResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImportMergeRequestResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImportMergeRequestResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImportMergeRequestResponse::getState() const
{
    return state_;
}

void ImportMergeRequestResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ImportMergeRequestResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ImportMergeRequestResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ImportMergeRequestResponse::getCreatedAt() const
{
    return createdAt_;
}

void ImportMergeRequestResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ImportMergeRequestResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ImportMergeRequestResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ImportMergeRequestResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ImportMergeRequestResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ImportMergeRequestResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ImportMergeRequestResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ImportMergeRequestResponse::getSourceBranch() const
{
    return sourceBranch_;
}

void ImportMergeRequestResponse::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ImportMergeRequestResponse::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ImportMergeRequestResponse::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ImportMergeRequestResponse::getTargetBranch() const
{
    return targetBranch_;
}

void ImportMergeRequestResponse::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ImportMergeRequestResponse::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ImportMergeRequestResponse::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool ImportMergeRequestResponse::isIsSourceBranchProtected() const
{
    return isSourceBranchProtected_;
}

void ImportMergeRequestResponse::setIsSourceBranchProtected(bool value)
{
    isSourceBranchProtected_ = value;
    isSourceBranchProtectedIsSet_ = true;
}

bool ImportMergeRequestResponse::isSourceBranchProtectedIsSet() const
{
    return isSourceBranchProtectedIsSet_;
}

void ImportMergeRequestResponse::unsetisSourceBranchProtected()
{
    isSourceBranchProtectedIsSet_ = false;
}

std::string ImportMergeRequestResponse::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void ImportMergeRequestResponse::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool ImportMergeRequestResponse::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void ImportMergeRequestResponse::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

UserBasicExternalDto ImportMergeRequestResponse::getAuthor() const
{
    return author_;
}

void ImportMergeRequestResponse::setAuthor(const UserBasicExternalDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ImportMergeRequestResponse::authorIsSet() const
{
    return authorIsSet_;
}

void ImportMergeRequestResponse::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void ImportMergeRequestResponse::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool ImportMergeRequestResponse::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void ImportMergeRequestResponse::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ImportMergeRequestResponse::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ImportMergeRequestResponse::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ImportMergeRequestResponse::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string ImportMergeRequestResponse::getSourceProjectId() const
{
    return sourceProjectId_;
}

void ImportMergeRequestResponse::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool ImportMergeRequestResponse::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void ImportMergeRequestResponse::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string ImportMergeRequestResponse::getTargetProjectId() const
{
    return targetProjectId_;
}

void ImportMergeRequestResponse::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool ImportMergeRequestResponse::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void ImportMergeRequestResponse::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<Object>& ImportMergeRequestResponse::getLabels()
{
    return labels_;
}

void ImportMergeRequestResponse::setLabels(const std::vector<Object>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ImportMergeRequestResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void ImportMergeRequestResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

bool ImportMergeRequestResponse::isWorkInProgress() const
{
    return workInProgress_;
}

void ImportMergeRequestResponse::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool ImportMergeRequestResponse::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void ImportMergeRequestResponse::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto ImportMergeRequestResponse::getMilestone() const
{
    return milestone_;
}

void ImportMergeRequestResponse::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool ImportMergeRequestResponse::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void ImportMergeRequestResponse::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool ImportMergeRequestResponse::isMergeWhenBuildSucceeds() const
{
    return mergeWhenBuildSucceeds_;
}

void ImportMergeRequestResponse::setMergeWhenBuildSucceeds(bool value)
{
    mergeWhenBuildSucceeds_ = value;
    mergeWhenBuildSucceedsIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeWhenBuildSucceedsIsSet() const
{
    return mergeWhenBuildSucceedsIsSet_;
}

void ImportMergeRequestResponse::unsetmergeWhenBuildSucceeds()
{
    mergeWhenBuildSucceedsIsSet_ = false;
}

std::string ImportMergeRequestResponse::getMergeStatus() const
{
    return mergeStatus_;
}

void ImportMergeRequestResponse::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void ImportMergeRequestResponse::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string ImportMergeRequestResponse::getSha() const
{
    return sha_;
}

void ImportMergeRequestResponse::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ImportMergeRequestResponse::shaIsSet() const
{
    return shaIsSet_;
}

void ImportMergeRequestResponse::unsetsha()
{
    shaIsSet_ = false;
}

std::string ImportMergeRequestResponse::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void ImportMergeRequestResponse::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void ImportMergeRequestResponse::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool ImportMergeRequestResponse::isSubscribed() const
{
    return subscribed_;
}

void ImportMergeRequestResponse::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool ImportMergeRequestResponse::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void ImportMergeRequestResponse::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

UserBasicExternalDto ImportMergeRequestResponse::getMergedBy() const
{
    return mergedBy_;
}

void ImportMergeRequestResponse::setMergedBy(const UserBasicExternalDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool ImportMergeRequestResponse::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void ImportMergeRequestResponse::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string ImportMergeRequestResponse::getMergedAt() const
{
    return mergedAt_;
}

void ImportMergeRequestResponse::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool ImportMergeRequestResponse::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void ImportMergeRequestResponse::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicExternalDto ImportMergeRequestResponse::getClosedBy() const
{
    return closedBy_;
}

void ImportMergeRequestResponse::setClosedBy(const UserBasicExternalDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool ImportMergeRequestResponse::closedByIsSet() const
{
    return closedByIsSet_;
}

void ImportMergeRequestResponse::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string ImportMergeRequestResponse::getClosedAt() const
{
    return closedAt_;
}

void ImportMergeRequestResponse::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool ImportMergeRequestResponse::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void ImportMergeRequestResponse::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getUserNotesCount() const
{
    return userNotesCount_;
}

void ImportMergeRequestResponse::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool ImportMergeRequestResponse::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void ImportMergeRequestResponse::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

bool ImportMergeRequestResponse::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void ImportMergeRequestResponse::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool ImportMergeRequestResponse::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void ImportMergeRequestResponse::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string ImportMergeRequestResponse::getWebUrl() const
{
    return webUrl_;
}

void ImportMergeRequestResponse::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool ImportMergeRequestResponse::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void ImportMergeRequestResponse::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

MergeRequestDiffExternalDto ImportMergeRequestResponse::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void ImportMergeRequestResponse::setMergeRequestDiff(const MergeRequestDiffExternalDto& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getMergeRequestReviewersCount() const
{
    return mergeRequestReviewersCount_;
}

void ImportMergeRequestResponse::setMergeRequestReviewersCount(int32_t value)
{
    mergeRequestReviewersCount_ = value;
    mergeRequestReviewersCountIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestReviewersCountIsSet() const
{
    return mergeRequestReviewersCountIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestReviewersCount()
{
    mergeRequestReviewersCountIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getMergeRequestReviewCount() const
{
    return mergeRequestReviewCount_;
}

void ImportMergeRequestResponse::setMergeRequestReviewCount(int32_t value)
{
    mergeRequestReviewCount_ = value;
    mergeRequestReviewCountIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestReviewCountIsSet() const
{
    return mergeRequestReviewCountIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestReviewCount()
{
    mergeRequestReviewCountIsSet_ = false;
}

std::vector<MergeRequestReviewerExternalDto>& ImportMergeRequestResponse::getMergeRequestReviewerList()
{
    return mergeRequestReviewerList_;
}

void ImportMergeRequestResponse::setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value)
{
    mergeRequestReviewerList_ = value;
    mergeRequestReviewerListIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestReviewerListIsSet() const
{
    return mergeRequestReviewerListIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestReviewerList()
{
    mergeRequestReviewerListIsSet_ = false;
}

std::vector<UserBasicExternalDto>& ImportMergeRequestResponse::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void ImportMergeRequestResponse::setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getNotes() const
{
    return notes_;
}

void ImportMergeRequestResponse::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool ImportMergeRequestResponse::notesIsSet() const
{
    return notesIsSet_;
}

void ImportMergeRequestResponse::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getCodecheckState() const
{
    return codecheckState_;
}

void ImportMergeRequestResponse::setCodecheckState(int32_t value)
{
    codecheckState_ = value;
    codecheckStateIsSet_ = true;
}

bool ImportMergeRequestResponse::codecheckStateIsSet() const
{
    return codecheckStateIsSet_;
}

void ImportMergeRequestResponse::unsetcodecheckState()
{
    codecheckStateIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getCodecheckDefectCount() const
{
    return codecheckDefectCount_;
}

void ImportMergeRequestResponse::setCodecheckDefectCount(int32_t value)
{
    codecheckDefectCount_ = value;
    codecheckDefectCountIsSet_ = true;
}

bool ImportMergeRequestResponse::codecheckDefectCountIsSet() const
{
    return codecheckDefectCountIsSet_;
}

void ImportMergeRequestResponse::unsetcodecheckDefectCount()
{
    codecheckDefectCountIsSet_ = false;
}

std::vector<MergeRequestRelatedWorkItemDto>& ImportMergeRequestResponse::getMergeRequestRelatedWorkItems()
{
    return mergeRequestRelatedWorkItems_;
}

void ImportMergeRequestResponse::setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value)
{
    mergeRequestRelatedWorkItems_ = value;
    mergeRequestRelatedWorkItemsIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestRelatedWorkItemsIsSet() const
{
    return mergeRequestRelatedWorkItemsIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestRelatedWorkItems()
{
    mergeRequestRelatedWorkItemsIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void ImportMergeRequestResponse::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool ImportMergeRequestResponse::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void ImportMergeRequestResponse::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

bool ImportMergeRequestResponse::isModerationResult() const
{
    return moderationResult_;
}

void ImportMergeRequestResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool ImportMergeRequestResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void ImportMergeRequestResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t ImportMergeRequestResponse::getModerationTime() const
{
    return moderationTime_;
}

void ImportMergeRequestResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool ImportMergeRequestResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void ImportMergeRequestResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t ImportMergeRequestResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void ImportMergeRequestResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool ImportMergeRequestResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void ImportMergeRequestResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool ImportMergeRequestResponse::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void ImportMergeRequestResponse::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool ImportMergeRequestResponse::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void ImportMergeRequestResponse::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

std::string ImportMergeRequestResponse::getReviewMode() const
{
    return reviewMode_;
}

void ImportMergeRequestResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool ImportMergeRequestResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void ImportMergeRequestResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool ImportMergeRequestResponse::isSquash() const
{
    return squash_;
}

void ImportMergeRequestResponse::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool ImportMergeRequestResponse::squashIsSet() const
{
    return squashIsSet_;
}

void ImportMergeRequestResponse::unsetsquash()
{
    squashIsSet_ = false;
}

std::vector<ApprovalUserDto>& ImportMergeRequestResponse::getApprovalMergeRequestApprovers()
{
    return approvalMergeRequestApprovers_;
}

void ImportMergeRequestResponse::setApprovalMergeRequestApprovers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestApprovers_ = value;
    approvalMergeRequestApproversIsSet_ = true;
}

bool ImportMergeRequestResponse::approvalMergeRequestApproversIsSet() const
{
    return approvalMergeRequestApproversIsSet_;
}

void ImportMergeRequestResponse::unsetapprovalMergeRequestApprovers()
{
    approvalMergeRequestApproversIsSet_ = false;
}

std::vector<ApprovalUserDto>& ImportMergeRequestResponse::getApprovalMergeRequestReviewers()
{
    return approvalMergeRequestReviewers_;
}

void ImportMergeRequestResponse::setApprovalMergeRequestReviewers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestReviewers_ = value;
    approvalMergeRequestReviewersIsSet_ = true;
}

bool ImportMergeRequestResponse::approvalMergeRequestReviewersIsSet() const
{
    return approvalMergeRequestReviewersIsSet_;
}

void ImportMergeRequestResponse::unsetapprovalMergeRequestReviewers()
{
    approvalMergeRequestReviewersIsSet_ = false;
}

ProjectSimpleDto ImportMergeRequestResponse::getSourceRepository() const
{
    return sourceRepository_;
}

void ImportMergeRequestResponse::setSourceRepository(const ProjectSimpleDto& value)
{
    sourceRepository_ = value;
    sourceRepositoryIsSet_ = true;
}

bool ImportMergeRequestResponse::sourceRepositoryIsSet() const
{
    return sourceRepositoryIsSet_;
}

void ImportMergeRequestResponse::unsetsourceRepository()
{
    sourceRepositoryIsSet_ = false;
}

ProjectSimpleDto ImportMergeRequestResponse::getTargetRepository() const
{
    return targetRepository_;
}

void ImportMergeRequestResponse::setTargetRepository(const ProjectSimpleDto& value)
{
    targetRepository_ = value;
    targetRepositoryIsSet_ = true;
}

bool ImportMergeRequestResponse::targetRepositoryIsSet() const
{
    return targetRepositoryIsSet_;
}

void ImportMergeRequestResponse::unsettargetRepository()
{
    targetRepositoryIsSet_ = false;
}

bool ImportMergeRequestResponse::isIsSourceBranchExist() const
{
    return isSourceBranchExist_;
}

void ImportMergeRequestResponse::setIsSourceBranchExist(bool value)
{
    isSourceBranchExist_ = value;
    isSourceBranchExistIsSet_ = true;
}

bool ImportMergeRequestResponse::isSourceBranchExistIsSet() const
{
    return isSourceBranchExistIsSet_;
}

void ImportMergeRequestResponse::unsetisSourceBranchExist()
{
    isSourceBranchExistIsSet_ = false;
}

std::string ImportMergeRequestResponse::getMergeRequestType() const
{
    return mergeRequestType_;
}

void ImportMergeRequestResponse::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void ImportMergeRequestResponse::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

std::string ImportMergeRequestResponse::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void ImportMergeRequestResponse::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool ImportMergeRequestResponse::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void ImportMergeRequestResponse::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

bool ImportMergeRequestResponse::isAutoMerge() const
{
    return autoMerge_;
}

void ImportMergeRequestResponse::setAutoMerge(bool value)
{
    autoMerge_ = value;
    autoMergeIsSet_ = true;
}

bool ImportMergeRequestResponse::autoMergeIsSet() const
{
    return autoMergeIsSet_;
}

void ImportMergeRequestResponse::unsetautoMerge()
{
    autoMergeIsSet_ = false;
}

std::string ImportMergeRequestResponse::getMergeError() const
{
    return mergeError_;
}

void ImportMergeRequestResponse::setMergeError(const std::string& value)
{
    mergeError_ = value;
    mergeErrorIsSet_ = true;
}

bool ImportMergeRequestResponse::mergeErrorIsSet() const
{
    return mergeErrorIsSet_;
}

void ImportMergeRequestResponse::unsetmergeError()
{
    mergeErrorIsSet_ = false;
}

MergeErrorDto ImportMergeRequestResponse::getJsonMergeError() const
{
    return jsonMergeError_;
}

void ImportMergeRequestResponse::setJsonMergeError(const MergeErrorDto& value)
{
    jsonMergeError_ = value;
    jsonMergeErrorIsSet_ = true;
}

bool ImportMergeRequestResponse::jsonMergeErrorIsSet() const
{
    return jsonMergeErrorIsSet_;
}

void ImportMergeRequestResponse::unsetjsonMergeError()
{
    jsonMergeErrorIsSet_ = false;
}

bool ImportMergeRequestResponse::isRebaseInProgress() const
{
    return rebaseInProgress_;
}

void ImportMergeRequestResponse::setRebaseInProgress(bool value)
{
    rebaseInProgress_ = value;
    rebaseInProgressIsSet_ = true;
}

bool ImportMergeRequestResponse::rebaseInProgressIsSet() const
{
    return rebaseInProgressIsSet_;
}

void ImportMergeRequestResponse::unsetrebaseInProgress()
{
    rebaseInProgressIsSet_ = false;
}

}
}
}
}
}



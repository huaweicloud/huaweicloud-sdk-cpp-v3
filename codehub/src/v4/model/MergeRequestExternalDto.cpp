

#include "huaweicloud/codehub/v4/model/MergeRequestExternalDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestExternalDto::MergeRequestExternalDto()
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
}

MergeRequestExternalDto::~MergeRequestExternalDto() = default;

void MergeRequestExternalDto::validate()
{
}

web::json::value MergeRequestExternalDto::toJson() const
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

    return val;
}
bool MergeRequestExternalDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t MergeRequestExternalDto::getId() const
{
    return id_;
}

void MergeRequestExternalDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestExternalDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestExternalDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestExternalDto::getIid() const
{
    return iid_;
}

void MergeRequestExternalDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeRequestExternalDto::iidIsSet() const
{
    return iidIsSet_;
}

void MergeRequestExternalDto::unsetiid()
{
    iidIsSet_ = false;
}

int32_t MergeRequestExternalDto::getRepositoryId() const
{
    return repositoryId_;
}

void MergeRequestExternalDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MergeRequestExternalDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MergeRequestExternalDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string MergeRequestExternalDto::getTitle() const
{
    return title_;
}

void MergeRequestExternalDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestExternalDto::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestExternalDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestExternalDto::getDescription() const
{
    return description_;
}

void MergeRequestExternalDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeRequestExternalDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeRequestExternalDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MergeRequestExternalDto::getState() const
{
    return state_;
}

void MergeRequestExternalDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestExternalDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestExternalDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeRequestExternalDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestExternalDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestExternalDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestExternalDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestExternalDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestExternalDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestExternalDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestExternalDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeRequestExternalDto::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeRequestExternalDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeRequestExternalDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeRequestExternalDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeRequestExternalDto::getTargetBranch() const
{
    return targetBranch_;
}

void MergeRequestExternalDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeRequestExternalDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeRequestExternalDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool MergeRequestExternalDto::isIsSourceBranchProtected() const
{
    return isSourceBranchProtected_;
}

void MergeRequestExternalDto::setIsSourceBranchProtected(bool value)
{
    isSourceBranchProtected_ = value;
    isSourceBranchProtectedIsSet_ = true;
}

bool MergeRequestExternalDto::isSourceBranchProtectedIsSet() const
{
    return isSourceBranchProtectedIsSet_;
}

void MergeRequestExternalDto::unsetisSourceBranchProtected()
{
    isSourceBranchProtectedIsSet_ = false;
}

std::string MergeRequestExternalDto::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void MergeRequestExternalDto::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool MergeRequestExternalDto::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void MergeRequestExternalDto::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

UserBasicExternalDto MergeRequestExternalDto::getAuthor() const
{
    return author_;
}

void MergeRequestExternalDto::setAuthor(const UserBasicExternalDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeRequestExternalDto::authorIsSet() const
{
    return authorIsSet_;
}

void MergeRequestExternalDto::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t MergeRequestExternalDto::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void MergeRequestExternalDto::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool MergeRequestExternalDto::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void MergeRequestExternalDto::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t MergeRequestExternalDto::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void MergeRequestExternalDto::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool MergeRequestExternalDto::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void MergeRequestExternalDto::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string MergeRequestExternalDto::getSourceProjectId() const
{
    return sourceProjectId_;
}

void MergeRequestExternalDto::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool MergeRequestExternalDto::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void MergeRequestExternalDto::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string MergeRequestExternalDto::getTargetProjectId() const
{
    return targetProjectId_;
}

void MergeRequestExternalDto::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool MergeRequestExternalDto::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void MergeRequestExternalDto::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<Object>& MergeRequestExternalDto::getLabels()
{
    return labels_;
}

void MergeRequestExternalDto::setLabels(const std::vector<Object>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool MergeRequestExternalDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void MergeRequestExternalDto::unsetlabels()
{
    labelsIsSet_ = false;
}

bool MergeRequestExternalDto::isWorkInProgress() const
{
    return workInProgress_;
}

void MergeRequestExternalDto::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool MergeRequestExternalDto::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void MergeRequestExternalDto::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto MergeRequestExternalDto::getMilestone() const
{
    return milestone_;
}

void MergeRequestExternalDto::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool MergeRequestExternalDto::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void MergeRequestExternalDto::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool MergeRequestExternalDto::isMergeWhenBuildSucceeds() const
{
    return mergeWhenBuildSucceeds_;
}

void MergeRequestExternalDto::setMergeWhenBuildSucceeds(bool value)
{
    mergeWhenBuildSucceeds_ = value;
    mergeWhenBuildSucceedsIsSet_ = true;
}

bool MergeRequestExternalDto::mergeWhenBuildSucceedsIsSet() const
{
    return mergeWhenBuildSucceedsIsSet_;
}

void MergeRequestExternalDto::unsetmergeWhenBuildSucceeds()
{
    mergeWhenBuildSucceedsIsSet_ = false;
}

std::string MergeRequestExternalDto::getMergeStatus() const
{
    return mergeStatus_;
}

void MergeRequestExternalDto::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool MergeRequestExternalDto::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void MergeRequestExternalDto::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string MergeRequestExternalDto::getSha() const
{
    return sha_;
}

void MergeRequestExternalDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool MergeRequestExternalDto::shaIsSet() const
{
    return shaIsSet_;
}

void MergeRequestExternalDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string MergeRequestExternalDto::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void MergeRequestExternalDto::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool MergeRequestExternalDto::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void MergeRequestExternalDto::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool MergeRequestExternalDto::isSubscribed() const
{
    return subscribed_;
}

void MergeRequestExternalDto::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool MergeRequestExternalDto::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void MergeRequestExternalDto::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

UserBasicExternalDto MergeRequestExternalDto::getMergedBy() const
{
    return mergedBy_;
}

void MergeRequestExternalDto::setMergedBy(const UserBasicExternalDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool MergeRequestExternalDto::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void MergeRequestExternalDto::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string MergeRequestExternalDto::getMergedAt() const
{
    return mergedAt_;
}

void MergeRequestExternalDto::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool MergeRequestExternalDto::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void MergeRequestExternalDto::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicExternalDto MergeRequestExternalDto::getClosedBy() const
{
    return closedBy_;
}

void MergeRequestExternalDto::setClosedBy(const UserBasicExternalDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool MergeRequestExternalDto::closedByIsSet() const
{
    return closedByIsSet_;
}

void MergeRequestExternalDto::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string MergeRequestExternalDto::getClosedAt() const
{
    return closedAt_;
}

void MergeRequestExternalDto::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeRequestExternalDto::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeRequestExternalDto::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

int32_t MergeRequestExternalDto::getUserNotesCount() const
{
    return userNotesCount_;
}

void MergeRequestExternalDto::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool MergeRequestExternalDto::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void MergeRequestExternalDto::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

bool MergeRequestExternalDto::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void MergeRequestExternalDto::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool MergeRequestExternalDto::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void MergeRequestExternalDto::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string MergeRequestExternalDto::getWebUrl() const
{
    return webUrl_;
}

void MergeRequestExternalDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeRequestExternalDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeRequestExternalDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

MergeRequestDiffExternalDto MergeRequestExternalDto::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void MergeRequestExternalDto::setMergeRequestDiff(const MergeRequestDiffExternalDto& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

int32_t MergeRequestExternalDto::getMergeRequestReviewersCount() const
{
    return mergeRequestReviewersCount_;
}

void MergeRequestExternalDto::setMergeRequestReviewersCount(int32_t value)
{
    mergeRequestReviewersCount_ = value;
    mergeRequestReviewersCountIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestReviewersCountIsSet() const
{
    return mergeRequestReviewersCountIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestReviewersCount()
{
    mergeRequestReviewersCountIsSet_ = false;
}

int32_t MergeRequestExternalDto::getMergeRequestReviewCount() const
{
    return mergeRequestReviewCount_;
}

void MergeRequestExternalDto::setMergeRequestReviewCount(int32_t value)
{
    mergeRequestReviewCount_ = value;
    mergeRequestReviewCountIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestReviewCountIsSet() const
{
    return mergeRequestReviewCountIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestReviewCount()
{
    mergeRequestReviewCountIsSet_ = false;
}

std::vector<MergeRequestReviewerExternalDto>& MergeRequestExternalDto::getMergeRequestReviewerList()
{
    return mergeRequestReviewerList_;
}

void MergeRequestExternalDto::setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value)
{
    mergeRequestReviewerList_ = value;
    mergeRequestReviewerListIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestReviewerListIsSet() const
{
    return mergeRequestReviewerListIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestReviewerList()
{
    mergeRequestReviewerListIsSet_ = false;
}

std::vector<UserBasicExternalDto>& MergeRequestExternalDto::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void MergeRequestExternalDto::setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

int32_t MergeRequestExternalDto::getNotes() const
{
    return notes_;
}

void MergeRequestExternalDto::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool MergeRequestExternalDto::notesIsSet() const
{
    return notesIsSet_;
}

void MergeRequestExternalDto::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t MergeRequestExternalDto::getCodecheckState() const
{
    return codecheckState_;
}

void MergeRequestExternalDto::setCodecheckState(int32_t value)
{
    codecheckState_ = value;
    codecheckStateIsSet_ = true;
}

bool MergeRequestExternalDto::codecheckStateIsSet() const
{
    return codecheckStateIsSet_;
}

void MergeRequestExternalDto::unsetcodecheckState()
{
    codecheckStateIsSet_ = false;
}

int32_t MergeRequestExternalDto::getCodecheckDefectCount() const
{
    return codecheckDefectCount_;
}

void MergeRequestExternalDto::setCodecheckDefectCount(int32_t value)
{
    codecheckDefectCount_ = value;
    codecheckDefectCountIsSet_ = true;
}

bool MergeRequestExternalDto::codecheckDefectCountIsSet() const
{
    return codecheckDefectCountIsSet_;
}

void MergeRequestExternalDto::unsetcodecheckDefectCount()
{
    codecheckDefectCountIsSet_ = false;
}

std::vector<MergeRequestRelatedWorkItemDto>& MergeRequestExternalDto::getMergeRequestRelatedWorkItems()
{
    return mergeRequestRelatedWorkItems_;
}

void MergeRequestExternalDto::setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value)
{
    mergeRequestRelatedWorkItems_ = value;
    mergeRequestRelatedWorkItemsIsSet_ = true;
}

bool MergeRequestExternalDto::mergeRequestRelatedWorkItemsIsSet() const
{
    return mergeRequestRelatedWorkItemsIsSet_;
}

void MergeRequestExternalDto::unsetmergeRequestRelatedWorkItems()
{
    mergeRequestRelatedWorkItemsIsSet_ = false;
}

int32_t MergeRequestExternalDto::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void MergeRequestExternalDto::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool MergeRequestExternalDto::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void MergeRequestExternalDto::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

bool MergeRequestExternalDto::isModerationResult() const
{
    return moderationResult_;
}

void MergeRequestExternalDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool MergeRequestExternalDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void MergeRequestExternalDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t MergeRequestExternalDto::getModerationTime() const
{
    return moderationTime_;
}

void MergeRequestExternalDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool MergeRequestExternalDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void MergeRequestExternalDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t MergeRequestExternalDto::getModerationStatus() const
{
    return moderationStatus_;
}

void MergeRequestExternalDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool MergeRequestExternalDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void MergeRequestExternalDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool MergeRequestExternalDto::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void MergeRequestExternalDto::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool MergeRequestExternalDto::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void MergeRequestExternalDto::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

}
}
}
}
}



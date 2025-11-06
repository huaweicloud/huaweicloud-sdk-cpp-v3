

#include "huaweicloud/codeartsrepo/v4/model/CommitMergeRequestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CommitMergeRequestDto::CommitMergeRequestDto()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
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
    mergedByIsSet_ = false;
    mergedAt_ = "";
    mergedAtIsSet_ = false;
    closedByIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    userNotesCount_ = 0;
    userNotesCountIsSet_ = false;
    upvotes_ = 0;
    upvotesIsSet_ = false;
    downvotes_ = 0;
    downvotesIsSet_ = false;
    authorIsSet_ = false;
    assigneeIsSet_ = false;
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    targetRepositoryId_ = 0;
    targetRepositoryIdIsSet_ = false;
    labelsIsSet_ = false;
    workInProgress_ = false;
    workInProgressIsSet_ = false;
    milestoneIsSet_ = false;
    mergeWhenPipelineSucceeds_ = false;
    mergeWhenPipelineSucceedsIsSet_ = false;
    mergeStatus_ = "";
    mergeStatusIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    mergeCommitSha_ = "";
    mergeCommitShaIsSet_ = false;
    discussionLocked_ = false;
    discussionLockedIsSet_ = false;
    forceRemoveSourceBranch_ = false;
    forceRemoveSourceBranchIsSet_ = false;
    shouldRemoveSourceBranch_ = false;
    shouldRemoveSourceBranchIsSet_ = false;
    allowCollaboration_ = false;
    allowCollaborationIsSet_ = false;
    allowMaintainerToPush_ = false;
    allowMaintainerToPushIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    timeStatsIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
}

CommitMergeRequestDto::~CommitMergeRequestDto() = default;

void CommitMergeRequestDto::validate()
{
}

web::json::value CommitMergeRequestDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
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
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(userNotesCountIsSet_) {
        val[utility::conversions::to_string_t("user_notes_count")] = ModelBase::toJson(userNotesCount_);
    }
    if(upvotesIsSet_) {
        val[utility::conversions::to_string_t("upvotes")] = ModelBase::toJson(upvotes_);
    }
    if(downvotesIsSet_) {
        val[utility::conversions::to_string_t("downvotes")] = ModelBase::toJson(downvotes_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
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
    if(mergeWhenPipelineSucceedsIsSet_) {
        val[utility::conversions::to_string_t("merge_when_pipeline_succeeds")] = ModelBase::toJson(mergeWhenPipelineSucceeds_);
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
    if(discussionLockedIsSet_) {
        val[utility::conversions::to_string_t("discussion_locked")] = ModelBase::toJson(discussionLocked_);
    }
    if(forceRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("force_remove_source_branch")] = ModelBase::toJson(forceRemoveSourceBranch_);
    }
    if(shouldRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("should_remove_source_branch")] = ModelBase::toJson(shouldRemoveSourceBranch_);
    }
    if(allowCollaborationIsSet_) {
        val[utility::conversions::to_string_t("allow_collaboration")] = ModelBase::toJson(allowCollaboration_);
    }
    if(allowMaintainerToPushIsSet_) {
        val[utility::conversions::to_string_t("allow_maintainer_to_push")] = ModelBase::toJson(allowMaintainerToPush_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(timeStatsIsSet_) {
        val[utility::conversions::to_string_t("time_stats")] = ModelBase::toJson(timeStats_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(mergeRequestTypeIsSet_) {
        val[utility::conversions::to_string_t("merge_request_type")] = ModelBase::toJson(mergeRequestType_);
    }

    return val;
}
bool CommitMergeRequestDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merged_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_by"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
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
            UserBasicDto refVal;
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
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_notes_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNotesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upvotes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upvotes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpvotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("downvotes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downvotes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownvotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("merge_when_pipeline_succeeds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_when_pipeline_succeeds"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeWhenPipelineSucceeds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("discussion_locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discussion_locked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscussionLocked(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("should_remove_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("should_remove_source_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShouldRemoveSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_collaboration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_collaboration"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowCollaboration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_maintainer_to_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_maintainer_to_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowMaintainerToPush(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_stats"));
        if(!fieldValue.is_null())
        {
            IssuableTimeStatsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeStats(refVal);
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


int32_t CommitMergeRequestDto::getId() const
{
    return id_;
}

void CommitMergeRequestDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitMergeRequestDto::idIsSet() const
{
    return idIsSet_;
}

void CommitMergeRequestDto::unsetid()
{
    idIsSet_ = false;
}

int32_t CommitMergeRequestDto::getIid() const
{
    return iid_;
}

void CommitMergeRequestDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool CommitMergeRequestDto::iidIsSet() const
{
    return iidIsSet_;
}

void CommitMergeRequestDto::unsetiid()
{
    iidIsSet_ = false;
}

std::string CommitMergeRequestDto::getTitle() const
{
    return title_;
}

void CommitMergeRequestDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CommitMergeRequestDto::titleIsSet() const
{
    return titleIsSet_;
}

void CommitMergeRequestDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string CommitMergeRequestDto::getDescription() const
{
    return description_;
}

void CommitMergeRequestDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommitMergeRequestDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommitMergeRequestDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommitMergeRequestDto::getState() const
{
    return state_;
}

void CommitMergeRequestDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CommitMergeRequestDto::stateIsSet() const
{
    return stateIsSet_;
}

void CommitMergeRequestDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string CommitMergeRequestDto::getCreatedAt() const
{
    return createdAt_;
}

void CommitMergeRequestDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CommitMergeRequestDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CommitMergeRequestDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CommitMergeRequestDto::getUpdatedAt() const
{
    return updatedAt_;
}

void CommitMergeRequestDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CommitMergeRequestDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CommitMergeRequestDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

UserBasicDto CommitMergeRequestDto::getMergedBy() const
{
    return mergedBy_;
}

void CommitMergeRequestDto::setMergedBy(const UserBasicDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool CommitMergeRequestDto::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void CommitMergeRequestDto::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string CommitMergeRequestDto::getMergedAt() const
{
    return mergedAt_;
}

void CommitMergeRequestDto::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool CommitMergeRequestDto::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void CommitMergeRequestDto::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicDto CommitMergeRequestDto::getClosedBy() const
{
    return closedBy_;
}

void CommitMergeRequestDto::setClosedBy(const UserBasicDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool CommitMergeRequestDto::closedByIsSet() const
{
    return closedByIsSet_;
}

void CommitMergeRequestDto::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string CommitMergeRequestDto::getClosedAt() const
{
    return closedAt_;
}

void CommitMergeRequestDto::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool CommitMergeRequestDto::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void CommitMergeRequestDto::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

std::string CommitMergeRequestDto::getTargetBranch() const
{
    return targetBranch_;
}

void CommitMergeRequestDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool CommitMergeRequestDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void CommitMergeRequestDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string CommitMergeRequestDto::getSourceBranch() const
{
    return sourceBranch_;
}

void CommitMergeRequestDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool CommitMergeRequestDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void CommitMergeRequestDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

int32_t CommitMergeRequestDto::getUserNotesCount() const
{
    return userNotesCount_;
}

void CommitMergeRequestDto::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool CommitMergeRequestDto::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void CommitMergeRequestDto::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

int32_t CommitMergeRequestDto::getUpvotes() const
{
    return upvotes_;
}

void CommitMergeRequestDto::setUpvotes(int32_t value)
{
    upvotes_ = value;
    upvotesIsSet_ = true;
}

bool CommitMergeRequestDto::upvotesIsSet() const
{
    return upvotesIsSet_;
}

void CommitMergeRequestDto::unsetupvotes()
{
    upvotesIsSet_ = false;
}

int32_t CommitMergeRequestDto::getDownvotes() const
{
    return downvotes_;
}

void CommitMergeRequestDto::setDownvotes(int32_t value)
{
    downvotes_ = value;
    downvotesIsSet_ = true;
}

bool CommitMergeRequestDto::downvotesIsSet() const
{
    return downvotesIsSet_;
}

void CommitMergeRequestDto::unsetdownvotes()
{
    downvotesIsSet_ = false;
}

UserBasicDto CommitMergeRequestDto::getAuthor() const
{
    return author_;
}

void CommitMergeRequestDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool CommitMergeRequestDto::authorIsSet() const
{
    return authorIsSet_;
}

void CommitMergeRequestDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::vector<UserBasicDto>& CommitMergeRequestDto::getAssignee()
{
    return assignee_;
}

void CommitMergeRequestDto::setAssignee(const std::vector<UserBasicDto>& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CommitMergeRequestDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CommitMergeRequestDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

int32_t CommitMergeRequestDto::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void CommitMergeRequestDto::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool CommitMergeRequestDto::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void CommitMergeRequestDto::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t CommitMergeRequestDto::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void CommitMergeRequestDto::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool CommitMergeRequestDto::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void CommitMergeRequestDto::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::vector<std::string>& CommitMergeRequestDto::getLabels()
{
    return labels_;
}

void CommitMergeRequestDto::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool CommitMergeRequestDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void CommitMergeRequestDto::unsetlabels()
{
    labelsIsSet_ = false;
}

bool CommitMergeRequestDto::isWorkInProgress() const
{
    return workInProgress_;
}

void CommitMergeRequestDto::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool CommitMergeRequestDto::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void CommitMergeRequestDto::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

MilestoneBasicDto CommitMergeRequestDto::getMilestone() const
{
    return milestone_;
}

void CommitMergeRequestDto::setMilestone(const MilestoneBasicDto& value)
{
    milestone_ = value;
    milestoneIsSet_ = true;
}

bool CommitMergeRequestDto::milestoneIsSet() const
{
    return milestoneIsSet_;
}

void CommitMergeRequestDto::unsetmilestone()
{
    milestoneIsSet_ = false;
}

bool CommitMergeRequestDto::isMergeWhenPipelineSucceeds() const
{
    return mergeWhenPipelineSucceeds_;
}

void CommitMergeRequestDto::setMergeWhenPipelineSucceeds(bool value)
{
    mergeWhenPipelineSucceeds_ = value;
    mergeWhenPipelineSucceedsIsSet_ = true;
}

bool CommitMergeRequestDto::mergeWhenPipelineSucceedsIsSet() const
{
    return mergeWhenPipelineSucceedsIsSet_;
}

void CommitMergeRequestDto::unsetmergeWhenPipelineSucceeds()
{
    mergeWhenPipelineSucceedsIsSet_ = false;
}

std::string CommitMergeRequestDto::getMergeStatus() const
{
    return mergeStatus_;
}

void CommitMergeRequestDto::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool CommitMergeRequestDto::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void CommitMergeRequestDto::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string CommitMergeRequestDto::getSha() const
{
    return sha_;
}

void CommitMergeRequestDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool CommitMergeRequestDto::shaIsSet() const
{
    return shaIsSet_;
}

void CommitMergeRequestDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string CommitMergeRequestDto::getMergeCommitSha() const
{
    return mergeCommitSha_;
}

void CommitMergeRequestDto::setMergeCommitSha(const std::string& value)
{
    mergeCommitSha_ = value;
    mergeCommitShaIsSet_ = true;
}

bool CommitMergeRequestDto::mergeCommitShaIsSet() const
{
    return mergeCommitShaIsSet_;
}

void CommitMergeRequestDto::unsetmergeCommitSha()
{
    mergeCommitShaIsSet_ = false;
}

bool CommitMergeRequestDto::isDiscussionLocked() const
{
    return discussionLocked_;
}

void CommitMergeRequestDto::setDiscussionLocked(bool value)
{
    discussionLocked_ = value;
    discussionLockedIsSet_ = true;
}

bool CommitMergeRequestDto::discussionLockedIsSet() const
{
    return discussionLockedIsSet_;
}

void CommitMergeRequestDto::unsetdiscussionLocked()
{
    discussionLockedIsSet_ = false;
}

bool CommitMergeRequestDto::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void CommitMergeRequestDto::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool CommitMergeRequestDto::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void CommitMergeRequestDto::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

bool CommitMergeRequestDto::isShouldRemoveSourceBranch() const
{
    return shouldRemoveSourceBranch_;
}

void CommitMergeRequestDto::setShouldRemoveSourceBranch(bool value)
{
    shouldRemoveSourceBranch_ = value;
    shouldRemoveSourceBranchIsSet_ = true;
}

bool CommitMergeRequestDto::shouldRemoveSourceBranchIsSet() const
{
    return shouldRemoveSourceBranchIsSet_;
}

void CommitMergeRequestDto::unsetshouldRemoveSourceBranch()
{
    shouldRemoveSourceBranchIsSet_ = false;
}

bool CommitMergeRequestDto::isAllowCollaboration() const
{
    return allowCollaboration_;
}

void CommitMergeRequestDto::setAllowCollaboration(bool value)
{
    allowCollaboration_ = value;
    allowCollaborationIsSet_ = true;
}

bool CommitMergeRequestDto::allowCollaborationIsSet() const
{
    return allowCollaborationIsSet_;
}

void CommitMergeRequestDto::unsetallowCollaboration()
{
    allowCollaborationIsSet_ = false;
}

bool CommitMergeRequestDto::isAllowMaintainerToPush() const
{
    return allowMaintainerToPush_;
}

void CommitMergeRequestDto::setAllowMaintainerToPush(bool value)
{
    allowMaintainerToPush_ = value;
    allowMaintainerToPushIsSet_ = true;
}

bool CommitMergeRequestDto::allowMaintainerToPushIsSet() const
{
    return allowMaintainerToPushIsSet_;
}

void CommitMergeRequestDto::unsetallowMaintainerToPush()
{
    allowMaintainerToPushIsSet_ = false;
}

std::string CommitMergeRequestDto::getWebUrl() const
{
    return webUrl_;
}

void CommitMergeRequestDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool CommitMergeRequestDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void CommitMergeRequestDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

IssuableTimeStatsDto CommitMergeRequestDto::getTimeStats() const
{
    return timeStats_;
}

void CommitMergeRequestDto::setTimeStats(const IssuableTimeStatsDto& value)
{
    timeStats_ = value;
    timeStatsIsSet_ = true;
}

bool CommitMergeRequestDto::timeStatsIsSet() const
{
    return timeStatsIsSet_;
}

void CommitMergeRequestDto::unsettimeStats()
{
    timeStatsIsSet_ = false;
}

bool CommitMergeRequestDto::isSquash() const
{
    return squash_;
}

void CommitMergeRequestDto::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool CommitMergeRequestDto::squashIsSet() const
{
    return squashIsSet_;
}

void CommitMergeRequestDto::unsetsquash()
{
    squashIsSet_ = false;
}

std::string CommitMergeRequestDto::getMergeRequestType() const
{
    return mergeRequestType_;
}

void CommitMergeRequestDto::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool CommitMergeRequestDto::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void CommitMergeRequestDto::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

}
}
}
}
}



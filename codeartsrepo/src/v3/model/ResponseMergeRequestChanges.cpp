

#include "huaweicloud/codeartsrepo/v3/model/ResponseMergeRequestChanges.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ResponseMergeRequestChanges::ResponseMergeRequestChanges()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
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
    sourceProjectId_ = 0;
    sourceProjectIdIsSet_ = false;
    targetProjectId_ = 0;
    targetProjectIdIsSet_ = false;
    labelsIsSet_ = false;
    workInProgress_ = false;
    workInProgressIsSet_ = false;
    mergeWhenPipelineSucceeds_ = false;
    mergeWhenPipelineSucceedsIsSet_ = false;
    mergeStatus_ = "";
    mergeStatusIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    shouldRemoveSourceBranch_ = false;
    shouldRemoveSourceBranchIsSet_ = false;
    forceRemoveSourceBranch_ = false;
    forceRemoveSourceBranchIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
    subscribed_ = false;
    subscribedIsSet_ = false;
    changesCount_ = "";
    changesCountIsSet_ = false;
    latestBuildStartedAt_ = "";
    latestBuildStartedAtIsSet_ = false;
    latestBuildFinishedAt_ = "";
    latestBuildFinishedAtIsSet_ = false;
    firstDeployedToProductionAt_ = "";
    firstDeployedToProductionAtIsSet_ = false;
    pipelineIsSet_ = false;
    diffRefsIsSet_ = false;
    mergeError_ = "";
    mergeErrorIsSet_ = false;
    rebaseInProgress_ = false;
    rebaseInProgressIsSet_ = false;
    divergedCommitsCount_ = 0;
    divergedCommitsCountIsSet_ = false;
    userIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    changesIsSet_ = false;
    sourceProjectIsSet_ = false;
}

ResponseMergeRequestChanges::~ResponseMergeRequestChanges() = default;

void ResponseMergeRequestChanges::validate()
{
}

web::json::value ResponseMergeRequestChanges::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(mergeWhenPipelineSucceedsIsSet_) {
        val[utility::conversions::to_string_t("merge_when_pipeline_succeeds")] = ModelBase::toJson(mergeWhenPipelineSucceeds_);
    }
    if(mergeStatusIsSet_) {
        val[utility::conversions::to_string_t("merge_status")] = ModelBase::toJson(mergeStatus_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(shouldRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("should_remove_source_branch")] = ModelBase::toJson(shouldRemoveSourceBranch_);
    }
    if(forceRemoveSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("force_remove_source_branch")] = ModelBase::toJson(forceRemoveSourceBranch_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(mergeRequestTypeIsSet_) {
        val[utility::conversions::to_string_t("merge_request_type")] = ModelBase::toJson(mergeRequestType_);
    }
    if(subscribedIsSet_) {
        val[utility::conversions::to_string_t("subscribed")] = ModelBase::toJson(subscribed_);
    }
    if(changesCountIsSet_) {
        val[utility::conversions::to_string_t("changes_count")] = ModelBase::toJson(changesCount_);
    }
    if(latestBuildStartedAtIsSet_) {
        val[utility::conversions::to_string_t("latest_build_started_at")] = ModelBase::toJson(latestBuildStartedAt_);
    }
    if(latestBuildFinishedAtIsSet_) {
        val[utility::conversions::to_string_t("latest_build_finished_at")] = ModelBase::toJson(latestBuildFinishedAt_);
    }
    if(firstDeployedToProductionAtIsSet_) {
        val[utility::conversions::to_string_t("first_deployed_to_production_at")] = ModelBase::toJson(firstDeployedToProductionAt_);
    }
    if(pipelineIsSet_) {
        val[utility::conversions::to_string_t("pipeline")] = ModelBase::toJson(pipeline_);
    }
    if(diffRefsIsSet_) {
        val[utility::conversions::to_string_t("diff_refs")] = ModelBase::toJson(diffRefs_);
    }
    if(mergeErrorIsSet_) {
        val[utility::conversions::to_string_t("merge_error")] = ModelBase::toJson(mergeError_);
    }
    if(rebaseInProgressIsSet_) {
        val[utility::conversions::to_string_t("rebase_in_progress")] = ModelBase::toJson(rebaseInProgress_);
    }
    if(divergedCommitsCountIsSet_) {
        val[utility::conversions::to_string_t("diverged_commits_count")] = ModelBase::toJson(divergedCommitsCount_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(changesIsSet_) {
        val[utility::conversions::to_string_t("changes")] = ModelBase::toJson(changes_);
    }
    if(sourceProjectIsSet_) {
        val[utility::conversions::to_string_t("source_project")] = ModelBase::toJson(sourceProject_);
    }

    return val;
}
bool ResponseMergeRequestChanges::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
            Author refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("should_remove_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("should_remove_source_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShouldRemoveSourceBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subscribed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscribed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscribed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changes_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_build_started_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_build_started_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestBuildStartedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_build_finished_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_build_finished_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestBuildFinishedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_deployed_to_production_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_deployed_to_production_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstDeployedToProductionAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline"));
        if(!fieldValue.is_null())
        {
            PipelineBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipeline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_refs"));
        if(!fieldValue.is_null())
        {
            DiffRefsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRefs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rebase_in_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rebase_in_progress"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRebaseInProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            MergeRequestListDtoUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changes"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestDiffFileDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChanges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project"));
        if(!fieldValue.is_null())
        {
            ProjectSimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProject(refVal);
        }
    }
    return ok;
}


int32_t ResponseMergeRequestChanges::getId() const
{
    return id_;
}

void ResponseMergeRequestChanges::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResponseMergeRequestChanges::idIsSet() const
{
    return idIsSet_;
}

void ResponseMergeRequestChanges::unsetid()
{
    idIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getIid() const
{
    return iid_;
}

void ResponseMergeRequestChanges::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool ResponseMergeRequestChanges::iidIsSet() const
{
    return iidIsSet_;
}

void ResponseMergeRequestChanges::unsetiid()
{
    iidIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getProjectId() const
{
    return projectId_;
}

void ResponseMergeRequestChanges::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ResponseMergeRequestChanges::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ResponseMergeRequestChanges::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getTitle() const
{
    return title_;
}

void ResponseMergeRequestChanges::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ResponseMergeRequestChanges::titleIsSet() const
{
    return titleIsSet_;
}

void ResponseMergeRequestChanges::unsettitle()
{
    titleIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getDescription() const
{
    return description_;
}

void ResponseMergeRequestChanges::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ResponseMergeRequestChanges::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ResponseMergeRequestChanges::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getState() const
{
    return state_;
}

void ResponseMergeRequestChanges::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ResponseMergeRequestChanges::stateIsSet() const
{
    return stateIsSet_;
}

void ResponseMergeRequestChanges::unsetstate()
{
    stateIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getCreatedAt() const
{
    return createdAt_;
}

void ResponseMergeRequestChanges::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ResponseMergeRequestChanges::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ResponseMergeRequestChanges::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getUpdatedAt() const
{
    return updatedAt_;
}

void ResponseMergeRequestChanges::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ResponseMergeRequestChanges::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ResponseMergeRequestChanges::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getTargetBranch() const
{
    return targetBranch_;
}

void ResponseMergeRequestChanges::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ResponseMergeRequestChanges::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ResponseMergeRequestChanges::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getSourceBranch() const
{
    return sourceBranch_;
}

void ResponseMergeRequestChanges::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ResponseMergeRequestChanges::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ResponseMergeRequestChanges::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getUserNotesCount() const
{
    return userNotesCount_;
}

void ResponseMergeRequestChanges::setUserNotesCount(int32_t value)
{
    userNotesCount_ = value;
    userNotesCountIsSet_ = true;
}

bool ResponseMergeRequestChanges::userNotesCountIsSet() const
{
    return userNotesCountIsSet_;
}

void ResponseMergeRequestChanges::unsetuserNotesCount()
{
    userNotesCountIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getUpvotes() const
{
    return upvotes_;
}

void ResponseMergeRequestChanges::setUpvotes(int32_t value)
{
    upvotes_ = value;
    upvotesIsSet_ = true;
}

bool ResponseMergeRequestChanges::upvotesIsSet() const
{
    return upvotesIsSet_;
}

void ResponseMergeRequestChanges::unsetupvotes()
{
    upvotesIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getDownvotes() const
{
    return downvotes_;
}

void ResponseMergeRequestChanges::setDownvotes(int32_t value)
{
    downvotes_ = value;
    downvotesIsSet_ = true;
}

bool ResponseMergeRequestChanges::downvotesIsSet() const
{
    return downvotesIsSet_;
}

void ResponseMergeRequestChanges::unsetdownvotes()
{
    downvotesIsSet_ = false;
}

Author ResponseMergeRequestChanges::getAuthor() const
{
    return author_;
}

void ResponseMergeRequestChanges::setAuthor(const Author& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ResponseMergeRequestChanges::authorIsSet() const
{
    return authorIsSet_;
}

void ResponseMergeRequestChanges::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getSourceProjectId() const
{
    return sourceProjectId_;
}

void ResponseMergeRequestChanges::setSourceProjectId(int32_t value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool ResponseMergeRequestChanges::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void ResponseMergeRequestChanges::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getTargetProjectId() const
{
    return targetProjectId_;
}

void ResponseMergeRequestChanges::setTargetProjectId(int32_t value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool ResponseMergeRequestChanges::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void ResponseMergeRequestChanges::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::vector<std::string>& ResponseMergeRequestChanges::getLabels()
{
    return labels_;
}

void ResponseMergeRequestChanges::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ResponseMergeRequestChanges::labelsIsSet() const
{
    return labelsIsSet_;
}

void ResponseMergeRequestChanges::unsetlabels()
{
    labelsIsSet_ = false;
}

bool ResponseMergeRequestChanges::isWorkInProgress() const
{
    return workInProgress_;
}

void ResponseMergeRequestChanges::setWorkInProgress(bool value)
{
    workInProgress_ = value;
    workInProgressIsSet_ = true;
}

bool ResponseMergeRequestChanges::workInProgressIsSet() const
{
    return workInProgressIsSet_;
}

void ResponseMergeRequestChanges::unsetworkInProgress()
{
    workInProgressIsSet_ = false;
}

bool ResponseMergeRequestChanges::isMergeWhenPipelineSucceeds() const
{
    return mergeWhenPipelineSucceeds_;
}

void ResponseMergeRequestChanges::setMergeWhenPipelineSucceeds(bool value)
{
    mergeWhenPipelineSucceeds_ = value;
    mergeWhenPipelineSucceedsIsSet_ = true;
}

bool ResponseMergeRequestChanges::mergeWhenPipelineSucceedsIsSet() const
{
    return mergeWhenPipelineSucceedsIsSet_;
}

void ResponseMergeRequestChanges::unsetmergeWhenPipelineSucceeds()
{
    mergeWhenPipelineSucceedsIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getMergeStatus() const
{
    return mergeStatus_;
}

void ResponseMergeRequestChanges::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool ResponseMergeRequestChanges::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void ResponseMergeRequestChanges::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getSha() const
{
    return sha_;
}

void ResponseMergeRequestChanges::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ResponseMergeRequestChanges::shaIsSet() const
{
    return shaIsSet_;
}

void ResponseMergeRequestChanges::unsetsha()
{
    shaIsSet_ = false;
}

bool ResponseMergeRequestChanges::isShouldRemoveSourceBranch() const
{
    return shouldRemoveSourceBranch_;
}

void ResponseMergeRequestChanges::setShouldRemoveSourceBranch(bool value)
{
    shouldRemoveSourceBranch_ = value;
    shouldRemoveSourceBranchIsSet_ = true;
}

bool ResponseMergeRequestChanges::shouldRemoveSourceBranchIsSet() const
{
    return shouldRemoveSourceBranchIsSet_;
}

void ResponseMergeRequestChanges::unsetshouldRemoveSourceBranch()
{
    shouldRemoveSourceBranchIsSet_ = false;
}

bool ResponseMergeRequestChanges::isForceRemoveSourceBranch() const
{
    return forceRemoveSourceBranch_;
}

void ResponseMergeRequestChanges::setForceRemoveSourceBranch(bool value)
{
    forceRemoveSourceBranch_ = value;
    forceRemoveSourceBranchIsSet_ = true;
}

bool ResponseMergeRequestChanges::forceRemoveSourceBranchIsSet() const
{
    return forceRemoveSourceBranchIsSet_;
}

void ResponseMergeRequestChanges::unsetforceRemoveSourceBranch()
{
    forceRemoveSourceBranchIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getWebUrl() const
{
    return webUrl_;
}

void ResponseMergeRequestChanges::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool ResponseMergeRequestChanges::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void ResponseMergeRequestChanges::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

bool ResponseMergeRequestChanges::isSquash() const
{
    return squash_;
}

void ResponseMergeRequestChanges::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool ResponseMergeRequestChanges::squashIsSet() const
{
    return squashIsSet_;
}

void ResponseMergeRequestChanges::unsetsquash()
{
    squashIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getMergeRequestType() const
{
    return mergeRequestType_;
}

void ResponseMergeRequestChanges::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool ResponseMergeRequestChanges::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void ResponseMergeRequestChanges::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

bool ResponseMergeRequestChanges::isSubscribed() const
{
    return subscribed_;
}

void ResponseMergeRequestChanges::setSubscribed(bool value)
{
    subscribed_ = value;
    subscribedIsSet_ = true;
}

bool ResponseMergeRequestChanges::subscribedIsSet() const
{
    return subscribedIsSet_;
}

void ResponseMergeRequestChanges::unsetsubscribed()
{
    subscribedIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getChangesCount() const
{
    return changesCount_;
}

void ResponseMergeRequestChanges::setChangesCount(const std::string& value)
{
    changesCount_ = value;
    changesCountIsSet_ = true;
}

bool ResponseMergeRequestChanges::changesCountIsSet() const
{
    return changesCountIsSet_;
}

void ResponseMergeRequestChanges::unsetchangesCount()
{
    changesCountIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getLatestBuildStartedAt() const
{
    return latestBuildStartedAt_;
}

void ResponseMergeRequestChanges::setLatestBuildStartedAt(const std::string& value)
{
    latestBuildStartedAt_ = value;
    latestBuildStartedAtIsSet_ = true;
}

bool ResponseMergeRequestChanges::latestBuildStartedAtIsSet() const
{
    return latestBuildStartedAtIsSet_;
}

void ResponseMergeRequestChanges::unsetlatestBuildStartedAt()
{
    latestBuildStartedAtIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getLatestBuildFinishedAt() const
{
    return latestBuildFinishedAt_;
}

void ResponseMergeRequestChanges::setLatestBuildFinishedAt(const std::string& value)
{
    latestBuildFinishedAt_ = value;
    latestBuildFinishedAtIsSet_ = true;
}

bool ResponseMergeRequestChanges::latestBuildFinishedAtIsSet() const
{
    return latestBuildFinishedAtIsSet_;
}

void ResponseMergeRequestChanges::unsetlatestBuildFinishedAt()
{
    latestBuildFinishedAtIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getFirstDeployedToProductionAt() const
{
    return firstDeployedToProductionAt_;
}

void ResponseMergeRequestChanges::setFirstDeployedToProductionAt(const std::string& value)
{
    firstDeployedToProductionAt_ = value;
    firstDeployedToProductionAtIsSet_ = true;
}

bool ResponseMergeRequestChanges::firstDeployedToProductionAtIsSet() const
{
    return firstDeployedToProductionAtIsSet_;
}

void ResponseMergeRequestChanges::unsetfirstDeployedToProductionAt()
{
    firstDeployedToProductionAtIsSet_ = false;
}

PipelineBasicDto ResponseMergeRequestChanges::getPipeline() const
{
    return pipeline_;
}

void ResponseMergeRequestChanges::setPipeline(const PipelineBasicDto& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool ResponseMergeRequestChanges::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void ResponseMergeRequestChanges::unsetpipeline()
{
    pipelineIsSet_ = false;
}

DiffRefsDto ResponseMergeRequestChanges::getDiffRefs() const
{
    return diffRefs_;
}

void ResponseMergeRequestChanges::setDiffRefs(const DiffRefsDto& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool ResponseMergeRequestChanges::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void ResponseMergeRequestChanges::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

std::string ResponseMergeRequestChanges::getMergeError() const
{
    return mergeError_;
}

void ResponseMergeRequestChanges::setMergeError(const std::string& value)
{
    mergeError_ = value;
    mergeErrorIsSet_ = true;
}

bool ResponseMergeRequestChanges::mergeErrorIsSet() const
{
    return mergeErrorIsSet_;
}

void ResponseMergeRequestChanges::unsetmergeError()
{
    mergeErrorIsSet_ = false;
}

bool ResponseMergeRequestChanges::isRebaseInProgress() const
{
    return rebaseInProgress_;
}

void ResponseMergeRequestChanges::setRebaseInProgress(bool value)
{
    rebaseInProgress_ = value;
    rebaseInProgressIsSet_ = true;
}

bool ResponseMergeRequestChanges::rebaseInProgressIsSet() const
{
    return rebaseInProgressIsSet_;
}

void ResponseMergeRequestChanges::unsetrebaseInProgress()
{
    rebaseInProgressIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getDivergedCommitsCount() const
{
    return divergedCommitsCount_;
}

void ResponseMergeRequestChanges::setDivergedCommitsCount(int32_t value)
{
    divergedCommitsCount_ = value;
    divergedCommitsCountIsSet_ = true;
}

bool ResponseMergeRequestChanges::divergedCommitsCountIsSet() const
{
    return divergedCommitsCountIsSet_;
}

void ResponseMergeRequestChanges::unsetdivergedCommitsCount()
{
    divergedCommitsCountIsSet_ = false;
}

MergeRequestListDtoUser ResponseMergeRequestChanges::getUser() const
{
    return user_;
}

void ResponseMergeRequestChanges::setUser(const MergeRequestListDtoUser& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ResponseMergeRequestChanges::userIsSet() const
{
    return userIsSet_;
}

void ResponseMergeRequestChanges::unsetuser()
{
    userIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getAddedLines() const
{
    return addedLines_;
}

void ResponseMergeRequestChanges::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool ResponseMergeRequestChanges::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void ResponseMergeRequestChanges::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t ResponseMergeRequestChanges::getRemovedLines() const
{
    return removedLines_;
}

void ResponseMergeRequestChanges::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool ResponseMergeRequestChanges::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void ResponseMergeRequestChanges::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

std::vector<MergeRequestDiffFileDto>& ResponseMergeRequestChanges::getChanges()
{
    return changes_;
}

void ResponseMergeRequestChanges::setChanges(const std::vector<MergeRequestDiffFileDto>& value)
{
    changes_ = value;
    changesIsSet_ = true;
}

bool ResponseMergeRequestChanges::changesIsSet() const
{
    return changesIsSet_;
}

void ResponseMergeRequestChanges::unsetchanges()
{
    changesIsSet_ = false;
}

ProjectSimpleDto ResponseMergeRequestChanges::getSourceProject() const
{
    return sourceProject_;
}

void ResponseMergeRequestChanges::setSourceProject(const ProjectSimpleDto& value)
{
    sourceProject_ = value;
    sourceProjectIsSet_ = true;
}

bool ResponseMergeRequestChanges::sourceProjectIsSet() const
{
    return sourceProjectIsSet_;
}

void ResponseMergeRequestChanges::unsetsourceProject()
{
    sourceProjectIsSet_ = false;
}

}
}
}
}
}



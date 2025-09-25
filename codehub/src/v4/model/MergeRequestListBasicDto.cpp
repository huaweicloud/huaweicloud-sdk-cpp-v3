

#include "huaweicloud/codehub/v4/model/MergeRequestListBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestListBasicDto::MergeRequestListBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    authorIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    closedByIsSet_ = false;
    mergedAt_ = "";
    mergedAtIsSet_ = false;
    mergedByIsSet_ = false;
    pipelineStatus_ = "";
    pipelineStatusIsSet_ = false;
    codequalityStatus_ = "";
    codequalityStatusIsSet_ = false;
    pipelineStatusWithCodeQuality_ = "";
    pipelineStatusWithCodeQualityIsSet_ = false;
    notes_ = 0;
    notesIsSet_ = false;
    sourceRepositoryIsSet_ = false;
    targetRepositoryIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
    sourceGitUrl_ = "";
    sourceGitUrlIsSet_ = false;
    labelsIsSet_ = false;
    score_ = 0;
    scoreIsSet_ = false;
    minMergedScore_ = 0;
    minMergedScoreIsSet_ = false;
    sourceProductId_ = "";
    sourceProductIdIsSet_ = false;
    targetProductId_ = "";
    targetProductIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    notesCountIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
}

MergeRequestListBasicDto::~MergeRequestListBasicDto() = default;

void MergeRequestListBasicDto::validate()
{
}

web::json::value MergeRequestListBasicDto::toJson() const
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
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
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
    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(closedAtIsSet_) {
        val[utility::conversions::to_string_t("closed_at")] = ModelBase::toJson(closedAt_);
    }
    if(closedByIsSet_) {
        val[utility::conversions::to_string_t("closed_by")] = ModelBase::toJson(closedBy_);
    }
    if(mergedAtIsSet_) {
        val[utility::conversions::to_string_t("merged_at")] = ModelBase::toJson(mergedAt_);
    }
    if(mergedByIsSet_) {
        val[utility::conversions::to_string_t("merged_by")] = ModelBase::toJson(mergedBy_);
    }
    if(pipelineStatusIsSet_) {
        val[utility::conversions::to_string_t("pipeline_status")] = ModelBase::toJson(pipelineStatus_);
    }
    if(codequalityStatusIsSet_) {
        val[utility::conversions::to_string_t("codequality_status")] = ModelBase::toJson(codequalityStatus_);
    }
    if(pipelineStatusWithCodeQualityIsSet_) {
        val[utility::conversions::to_string_t("pipeline_status_with_code_quality")] = ModelBase::toJson(pipelineStatusWithCodeQuality_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(sourceRepositoryIsSet_) {
        val[utility::conversions::to_string_t("source_repository")] = ModelBase::toJson(sourceRepository_);
    }
    if(targetRepositoryIsSet_) {
        val[utility::conversions::to_string_t("target_repository")] = ModelBase::toJson(targetRepository_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(mergeRequestTypeIsSet_) {
        val[utility::conversions::to_string_t("merge_request_type")] = ModelBase::toJson(mergeRequestType_);
    }
    if(sourceGitUrlIsSet_) {
        val[utility::conversions::to_string_t("source_git_url")] = ModelBase::toJson(sourceGitUrl_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(minMergedScoreIsSet_) {
        val[utility::conversions::to_string_t("min_merged_score")] = ModelBase::toJson(minMergedScore_);
    }
    if(sourceProductIdIsSet_) {
        val[utility::conversions::to_string_t("source_product_id")] = ModelBase::toJson(sourceProductId_);
    }
    if(targetProductIdIsSet_) {
        val[utility::conversions::to_string_t("target_product_id")] = ModelBase::toJson(targetProductId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(notesCountIsSet_) {
        val[utility::conversions::to_string_t("notes_count")] = ModelBase::toJson(notesCount_);
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

    return val;
}
bool MergeRequestListBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("closed_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_by"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merged_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_by"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codequality_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codequality_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodequalityStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_status_with_code_quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_status_with_code_quality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineStatusWithCodeQuality(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_merged_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_merged_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinMergedScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes_count"));
        if(!fieldValue.is_null())
        {
            NotesCountDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotesCount(refVal);
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
    return ok;
}


int32_t MergeRequestListBasicDto::getId() const
{
    return id_;
}

void MergeRequestListBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestListBasicDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestListBasicDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getIid() const
{
    return iid_;
}

void MergeRequestListBasicDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeRequestListBasicDto::iidIsSet() const
{
    return iidIsSet_;
}

void MergeRequestListBasicDto::unsetiid()
{
    iidIsSet_ = false;
}

std::string MergeRequestListBasicDto::getTitle() const
{
    return title_;
}

void MergeRequestListBasicDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestListBasicDto::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestListBasicDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestListBasicDto::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeRequestListBasicDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeRequestListBasicDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeRequestListBasicDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeRequestListBasicDto::getTargetBranch() const
{
    return targetBranch_;
}

void MergeRequestListBasicDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeRequestListBasicDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeRequestListBasicDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string MergeRequestListBasicDto::getState() const
{
    return state_;
}

void MergeRequestListBasicDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestListBasicDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestListBasicDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeRequestListBasicDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestListBasicDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestListBasicDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestListBasicDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestListBasicDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestListBasicDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestListBasicDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestListBasicDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void MergeRequestListBasicDto::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool MergeRequestListBasicDto::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void MergeRequestListBasicDto::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

std::string MergeRequestListBasicDto::getReviewMode() const
{
    return reviewMode_;
}

void MergeRequestListBasicDto::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool MergeRequestListBasicDto::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void MergeRequestListBasicDto::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

UserBasicDto MergeRequestListBasicDto::getAuthor() const
{
    return author_;
}

void MergeRequestListBasicDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeRequestListBasicDto::authorIsSet() const
{
    return authorIsSet_;
}

void MergeRequestListBasicDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string MergeRequestListBasicDto::getClosedAt() const
{
    return closedAt_;
}

void MergeRequestListBasicDto::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeRequestListBasicDto::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeRequestListBasicDto::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

UserBasicDto MergeRequestListBasicDto::getClosedBy() const
{
    return closedBy_;
}

void MergeRequestListBasicDto::setClosedBy(const UserBasicDto& value)
{
    closedBy_ = value;
    closedByIsSet_ = true;
}

bool MergeRequestListBasicDto::closedByIsSet() const
{
    return closedByIsSet_;
}

void MergeRequestListBasicDto::unsetclosedBy()
{
    closedByIsSet_ = false;
}

std::string MergeRequestListBasicDto::getMergedAt() const
{
    return mergedAt_;
}

void MergeRequestListBasicDto::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool MergeRequestListBasicDto::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void MergeRequestListBasicDto::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

UserBasicDto MergeRequestListBasicDto::getMergedBy() const
{
    return mergedBy_;
}

void MergeRequestListBasicDto::setMergedBy(const UserBasicDto& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool MergeRequestListBasicDto::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void MergeRequestListBasicDto::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

std::string MergeRequestListBasicDto::getPipelineStatus() const
{
    return pipelineStatus_;
}

void MergeRequestListBasicDto::setPipelineStatus(const std::string& value)
{
    pipelineStatus_ = value;
    pipelineStatusIsSet_ = true;
}

bool MergeRequestListBasicDto::pipelineStatusIsSet() const
{
    return pipelineStatusIsSet_;
}

void MergeRequestListBasicDto::unsetpipelineStatus()
{
    pipelineStatusIsSet_ = false;
}

std::string MergeRequestListBasicDto::getCodequalityStatus() const
{
    return codequalityStatus_;
}

void MergeRequestListBasicDto::setCodequalityStatus(const std::string& value)
{
    codequalityStatus_ = value;
    codequalityStatusIsSet_ = true;
}

bool MergeRequestListBasicDto::codequalityStatusIsSet() const
{
    return codequalityStatusIsSet_;
}

void MergeRequestListBasicDto::unsetcodequalityStatus()
{
    codequalityStatusIsSet_ = false;
}

std::string MergeRequestListBasicDto::getPipelineStatusWithCodeQuality() const
{
    return pipelineStatusWithCodeQuality_;
}

void MergeRequestListBasicDto::setPipelineStatusWithCodeQuality(const std::string& value)
{
    pipelineStatusWithCodeQuality_ = value;
    pipelineStatusWithCodeQualityIsSet_ = true;
}

bool MergeRequestListBasicDto::pipelineStatusWithCodeQualityIsSet() const
{
    return pipelineStatusWithCodeQualityIsSet_;
}

void MergeRequestListBasicDto::unsetpipelineStatusWithCodeQuality()
{
    pipelineStatusWithCodeQualityIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getNotes() const
{
    return notes_;
}

void MergeRequestListBasicDto::setNotes(int32_t value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool MergeRequestListBasicDto::notesIsSet() const
{
    return notesIsSet_;
}

void MergeRequestListBasicDto::unsetnotes()
{
    notesIsSet_ = false;
}

ProjectSimpleDto MergeRequestListBasicDto::getSourceRepository() const
{
    return sourceRepository_;
}

void MergeRequestListBasicDto::setSourceRepository(const ProjectSimpleDto& value)
{
    sourceRepository_ = value;
    sourceRepositoryIsSet_ = true;
}

bool MergeRequestListBasicDto::sourceRepositoryIsSet() const
{
    return sourceRepositoryIsSet_;
}

void MergeRequestListBasicDto::unsetsourceRepository()
{
    sourceRepositoryIsSet_ = false;
}

ProjectSimpleDto MergeRequestListBasicDto::getTargetRepository() const
{
    return targetRepository_;
}

void MergeRequestListBasicDto::setTargetRepository(const ProjectSimpleDto& value)
{
    targetRepository_ = value;
    targetRepositoryIsSet_ = true;
}

bool MergeRequestListBasicDto::targetRepositoryIsSet() const
{
    return targetRepositoryIsSet_;
}

void MergeRequestListBasicDto::unsettargetRepository()
{
    targetRepositoryIsSet_ = false;
}

std::string MergeRequestListBasicDto::getWebUrl() const
{
    return webUrl_;
}

void MergeRequestListBasicDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeRequestListBasicDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeRequestListBasicDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getAddedLines() const
{
    return addedLines_;
}

void MergeRequestListBasicDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool MergeRequestListBasicDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void MergeRequestListBasicDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getRemovedLines() const
{
    return removedLines_;
}

void MergeRequestListBasicDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool MergeRequestListBasicDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void MergeRequestListBasicDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

std::string MergeRequestListBasicDto::getMergeRequestType() const
{
    return mergeRequestType_;
}

void MergeRequestListBasicDto::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool MergeRequestListBasicDto::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void MergeRequestListBasicDto::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

std::string MergeRequestListBasicDto::getSourceGitUrl() const
{
    return sourceGitUrl_;
}

void MergeRequestListBasicDto::setSourceGitUrl(const std::string& value)
{
    sourceGitUrl_ = value;
    sourceGitUrlIsSet_ = true;
}

bool MergeRequestListBasicDto::sourceGitUrlIsSet() const
{
    return sourceGitUrlIsSet_;
}

void MergeRequestListBasicDto::unsetsourceGitUrl()
{
    sourceGitUrlIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& MergeRequestListBasicDto::getLabels()
{
    return labels_;
}

void MergeRequestListBasicDto::setLabels(const std::vector<std::map<std::string, Object>>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool MergeRequestListBasicDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void MergeRequestListBasicDto::unsetlabels()
{
    labelsIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getScore() const
{
    return score_;
}

void MergeRequestListBasicDto::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool MergeRequestListBasicDto::scoreIsSet() const
{
    return scoreIsSet_;
}

void MergeRequestListBasicDto::unsetscore()
{
    scoreIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getMinMergedScore() const
{
    return minMergedScore_;
}

void MergeRequestListBasicDto::setMinMergedScore(int32_t value)
{
    minMergedScore_ = value;
    minMergedScoreIsSet_ = true;
}

bool MergeRequestListBasicDto::minMergedScoreIsSet() const
{
    return minMergedScoreIsSet_;
}

void MergeRequestListBasicDto::unsetminMergedScore()
{
    minMergedScoreIsSet_ = false;
}

std::string MergeRequestListBasicDto::getSourceProductId() const
{
    return sourceProductId_;
}

void MergeRequestListBasicDto::setSourceProductId(const std::string& value)
{
    sourceProductId_ = value;
    sourceProductIdIsSet_ = true;
}

bool MergeRequestListBasicDto::sourceProductIdIsSet() const
{
    return sourceProductIdIsSet_;
}

void MergeRequestListBasicDto::unsetsourceProductId()
{
    sourceProductIdIsSet_ = false;
}

std::string MergeRequestListBasicDto::getTargetProductId() const
{
    return targetProductId_;
}

void MergeRequestListBasicDto::setTargetProductId(const std::string& value)
{
    targetProductId_ = value;
    targetProductIdIsSet_ = true;
}

bool MergeRequestListBasicDto::targetProductIdIsSet() const
{
    return targetProductIdIsSet_;
}

void MergeRequestListBasicDto::unsettargetProductId()
{
    targetProductIdIsSet_ = false;
}

std::string MergeRequestListBasicDto::getProductName() const
{
    return productName_;
}

void MergeRequestListBasicDto::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool MergeRequestListBasicDto::productNameIsSet() const
{
    return productNameIsSet_;
}

void MergeRequestListBasicDto::unsetproductName()
{
    productNameIsSet_ = false;
}

NotesCountDto MergeRequestListBasicDto::getNotesCount() const
{
    return notesCount_;
}

void MergeRequestListBasicDto::setNotesCount(const NotesCountDto& value)
{
    notesCount_ = value;
    notesCountIsSet_ = true;
}

bool MergeRequestListBasicDto::notesCountIsSet() const
{
    return notesCountIsSet_;
}

void MergeRequestListBasicDto::unsetnotesCount()
{
    notesCountIsSet_ = false;
}

bool MergeRequestListBasicDto::isModerationResult() const
{
    return moderationResult_;
}

void MergeRequestListBasicDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool MergeRequestListBasicDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void MergeRequestListBasicDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t MergeRequestListBasicDto::getModerationTime() const
{
    return moderationTime_;
}

void MergeRequestListBasicDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool MergeRequestListBasicDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void MergeRequestListBasicDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t MergeRequestListBasicDto::getModerationStatus() const
{
    return moderationStatus_;
}

void MergeRequestListBasicDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool MergeRequestListBasicDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void MergeRequestListBasicDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

}
}
}
}
}



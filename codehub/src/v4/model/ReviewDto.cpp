

#include "huaweicloud/codehub/v4/model/ReviewDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ReviewDto::ReviewDto()
{
    assigneeIsSet_ = false;
    authorIsSet_ = false;
    note_ = "";
    noteIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    isReply_ = false;
    isReplyIsSet_ = false;
    resolvedByIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    repositoryPath_ = "";
    repositoryPathIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    reviewCategories_ = "";
    reviewCategoriesIsSet_ = false;
    reviewCategoriesCn_ = "";
    reviewCategoriesCnIsSet_ = false;
    reviewCategoriesEn_ = "";
    reviewCategoriesEnIsSet_ = false;
    reviewModules_ = "";
    reviewModulesIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    severityCn_ = "";
    severityCnIsSet_ = false;
    severityEn_ = "";
    severityEnIsSet_ = false;
    proposerIsSet_ = false;
    reviewerIsSet_ = false;
    resolved_ = false;
    resolvedIsSet_ = false;
    resolvedAt_ = "";
    resolvedAtIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    mergeRequestTitle_ = "";
    mergeRequestTitleIsSet_ = false;
    mergeRequestState_ = "";
    mergeRequestStateIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
}

ReviewDto::~ReviewDto() = default;

void ReviewDto::validate()
{
}

web::json::value ReviewDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(noteIsSet_) {
        val[utility::conversions::to_string_t("note")] = ModelBase::toJson(note_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(isReplyIsSet_) {
        val[utility::conversions::to_string_t("is_reply")] = ModelBase::toJson(isReply_);
    }
    if(resolvedByIsSet_) {
        val[utility::conversions::to_string_t("resolved_by")] = ModelBase::toJson(resolvedBy_);
    }
    if(discussionIdIsSet_) {
        val[utility::conversions::to_string_t("discussion_id")] = ModelBase::toJson(discussionId_);
    }
    if(repositoryPathIsSet_) {
        val[utility::conversions::to_string_t("repository_path")] = ModelBase::toJson(repositoryPath_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(reviewCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_categories")] = ModelBase::toJson(reviewCategories_);
    }
    if(reviewCategoriesCnIsSet_) {
        val[utility::conversions::to_string_t("review_categories_cn")] = ModelBase::toJson(reviewCategoriesCn_);
    }
    if(reviewCategoriesEnIsSet_) {
        val[utility::conversions::to_string_t("review_categories_en")] = ModelBase::toJson(reviewCategoriesEn_);
    }
    if(reviewModulesIsSet_) {
        val[utility::conversions::to_string_t("review_modules")] = ModelBase::toJson(reviewModules_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(severityCnIsSet_) {
        val[utility::conversions::to_string_t("severity_cn")] = ModelBase::toJson(severityCn_);
    }
    if(severityEnIsSet_) {
        val[utility::conversions::to_string_t("severity_en")] = ModelBase::toJson(severityEn_);
    }
    if(proposerIsSet_) {
        val[utility::conversions::to_string_t("proposer")] = ModelBase::toJson(proposer_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
    }
    if(resolvedAtIsSet_) {
        val[utility::conversions::to_string_t("resolved_at")] = ModelBase::toJson(resolvedAt_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
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
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(mergeRequestTitleIsSet_) {
        val[utility::conversions::to_string_t("merge_request_title")] = ModelBase::toJson(mergeRequestTitle_);
    }
    if(mergeRequestStateIsSet_) {
        val[utility::conversions::to_string_t("merge_request_state")] = ModelBase::toJson(mergeRequestState_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }

    return val;
}
bool ReviewDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNote(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_reply"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reply"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReply(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved_by"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolvedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discussion_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discussion_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscussionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("review_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_categories_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_categories_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCategoriesCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_categories_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_categories_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCategoriesEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_modules"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewModules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proposer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proposer"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProposer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolvedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    return ok;
}


UserBasicDto ReviewDto::getAssignee() const
{
    return assignee_;
}

void ReviewDto::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool ReviewDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void ReviewDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto ReviewDto::getAuthor() const
{
    return author_;
}

void ReviewDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ReviewDto::authorIsSet() const
{
    return authorIsSet_;
}

void ReviewDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string ReviewDto::getNote() const
{
    return note_;
}

void ReviewDto::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool ReviewDto::noteIsSet() const
{
    return noteIsSet_;
}

void ReviewDto::unsetnote()
{
    noteIsSet_ = false;
}

std::string ReviewDto::getCreatedAt() const
{
    return createdAt_;
}

void ReviewDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ReviewDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ReviewDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool ReviewDto::isIsReply() const
{
    return isReply_;
}

void ReviewDto::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool ReviewDto::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void ReviewDto::unsetisReply()
{
    isReplyIsSet_ = false;
}

UserBasicDto ReviewDto::getResolvedBy() const
{
    return resolvedBy_;
}

void ReviewDto::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool ReviewDto::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void ReviewDto::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

std::string ReviewDto::getDiscussionId() const
{
    return discussionId_;
}

void ReviewDto::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool ReviewDto::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void ReviewDto::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string ReviewDto::getRepositoryPath() const
{
    return repositoryPath_;
}

void ReviewDto::setRepositoryPath(const std::string& value)
{
    repositoryPath_ = value;
    repositoryPathIsSet_ = true;
}

bool ReviewDto::repositoryPathIsSet() const
{
    return repositoryPathIsSet_;
}

void ReviewDto::unsetrepositoryPath()
{
    repositoryPathIsSet_ = false;
}

int32_t ReviewDto::getRepositoryId() const
{
    return repositoryId_;
}

void ReviewDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ReviewDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ReviewDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ReviewDto::getReviewCategories() const
{
    return reviewCategories_;
}

void ReviewDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool ReviewDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void ReviewDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string ReviewDto::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void ReviewDto::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool ReviewDto::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void ReviewDto::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string ReviewDto::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void ReviewDto::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool ReviewDto::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void ReviewDto::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string ReviewDto::getReviewModules() const
{
    return reviewModules_;
}

void ReviewDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool ReviewDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void ReviewDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string ReviewDto::getSeverity() const
{
    return severity_;
}

void ReviewDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ReviewDto::severityIsSet() const
{
    return severityIsSet_;
}

void ReviewDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ReviewDto::getSeverityCn() const
{
    return severityCn_;
}

void ReviewDto::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool ReviewDto::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void ReviewDto::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string ReviewDto::getSeverityEn() const
{
    return severityEn_;
}

void ReviewDto::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool ReviewDto::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void ReviewDto::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

UserBasicDto ReviewDto::getProposer() const
{
    return proposer_;
}

void ReviewDto::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool ReviewDto::proposerIsSet() const
{
    return proposerIsSet_;
}

void ReviewDto::unsetproposer()
{
    proposerIsSet_ = false;
}

UserBasicDto ReviewDto::getReviewer() const
{
    return reviewer_;
}

void ReviewDto::setReviewer(const UserBasicDto& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool ReviewDto::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void ReviewDto::unsetreviewer()
{
    reviewerIsSet_ = false;
}

bool ReviewDto::isResolved() const
{
    return resolved_;
}

void ReviewDto::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool ReviewDto::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void ReviewDto::unsetresolved()
{
    resolvedIsSet_ = false;
}

std::string ReviewDto::getResolvedAt() const
{
    return resolvedAt_;
}

void ReviewDto::setResolvedAt(const std::string& value)
{
    resolvedAt_ = value;
    resolvedAtIsSet_ = true;
}

bool ReviewDto::resolvedAtIsSet() const
{
    return resolvedAtIsSet_;
}

void ReviewDto::unsetresolvedAt()
{
    resolvedAtIsSet_ = false;
}

std::string ReviewDto::getLink() const
{
    return link_;
}

void ReviewDto::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ReviewDto::linkIsSet() const
{
    return linkIsSet_;
}

void ReviewDto::unsetlink()
{
    linkIsSet_ = false;
}

bool ReviewDto::isModerationResult() const
{
    return moderationResult_;
}

void ReviewDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool ReviewDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void ReviewDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t ReviewDto::getModerationTime() const
{
    return moderationTime_;
}

void ReviewDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool ReviewDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void ReviewDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t ReviewDto::getModerationStatus() const
{
    return moderationStatus_;
}

void ReviewDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool ReviewDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void ReviewDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

int32_t ReviewDto::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ReviewDto::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ReviewDto::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ReviewDto::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

int32_t ReviewDto::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ReviewDto::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ReviewDto::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ReviewDto::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ReviewDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void ReviewDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool ReviewDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void ReviewDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

std::string ReviewDto::getMergeRequestState() const
{
    return mergeRequestState_;
}

void ReviewDto::setMergeRequestState(const std::string& value)
{
    mergeRequestState_ = value;
    mergeRequestStateIsSet_ = true;
}

bool ReviewDto::mergeRequestStateIsSet() const
{
    return mergeRequestStateIsSet_;
}

void ReviewDto::unsetmergeRequestState()
{
    mergeRequestStateIsSet_ = false;
}

std::string ReviewDto::getCommitId() const
{
    return commitId_;
}

void ReviewDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ReviewDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ReviewDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

}
}
}
}
}



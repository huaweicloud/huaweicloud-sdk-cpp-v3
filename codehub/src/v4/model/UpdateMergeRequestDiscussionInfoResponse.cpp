

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestDiscussionInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestDiscussionInfoResponse::UpdateMergeRequestDiscussionInfoResponse()
{
    id_ = 0;
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
    attachment_ = "";
    attachmentIsSet_ = false;
    authorIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    system_ = false;
    systemIsSet_ = false;
    noteableId_ = 0;
    noteableIdIsSet_ = false;
    noteableType_ = "";
    noteableTypeIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    resolvable_ = false;
    resolvableIsSet_ = false;
    isReply_ = false;
    isReplyIsSet_ = false;
    resolvedByIsSet_ = false;
    noteableIid_ = 0;
    noteableIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    repository_ = "";
    repositoryIsSet_ = false;
    diffFile_ = "";
    diffFileIsSet_ = false;
    diff_ = "";
    diffIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
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
    filePath_ = "";
    filePathIsSet_ = false;
    line_ = "";
    lineIsSet_ = false;
    assigneeIsSet_ = false;
    proposerIsSet_ = false;
    positionIsSet_ = false;
    resolved_ = false;
    resolvedIsSet_ = false;
    isOutdated_ = false;
    isOutdatedIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
}

UpdateMergeRequestDiscussionInfoResponse::~UpdateMergeRequestDiscussionInfoResponse() = default;

void UpdateMergeRequestDiscussionInfoResponse::validate()
{
}

web::json::value UpdateMergeRequestDiscussionInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(attachmentIsSet_) {
        val[utility::conversions::to_string_t("attachment")] = ModelBase::toJson(attachment_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(systemIsSet_) {
        val[utility::conversions::to_string_t("system")] = ModelBase::toJson(system_);
    }
    if(noteableIdIsSet_) {
        val[utility::conversions::to_string_t("noteable_id")] = ModelBase::toJson(noteableId_);
    }
    if(noteableTypeIsSet_) {
        val[utility::conversions::to_string_t("noteable_type")] = ModelBase::toJson(noteableType_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(resolvableIsSet_) {
        val[utility::conversions::to_string_t("resolvable")] = ModelBase::toJson(resolvable_);
    }
    if(isReplyIsSet_) {
        val[utility::conversions::to_string_t("is_reply")] = ModelBase::toJson(isReply_);
    }
    if(resolvedByIsSet_) {
        val[utility::conversions::to_string_t("resolved_by")] = ModelBase::toJson(resolvedBy_);
    }
    if(noteableIidIsSet_) {
        val[utility::conversions::to_string_t("noteable_iid")] = ModelBase::toJson(noteableIid_);
    }
    if(discussionIdIsSet_) {
        val[utility::conversions::to_string_t("discussion_id")] = ModelBase::toJson(discussionId_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }
    if(diffFileIsSet_) {
        val[utility::conversions::to_string_t("diff_file")] = ModelBase::toJson(diffFile_);
    }
    if(diffIsSet_) {
        val[utility::conversions::to_string_t("diff")] = ModelBase::toJson(diff_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
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
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(lineIsSet_) {
        val[utility::conversions::to_string_t("line")] = ModelBase::toJson(line_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(proposerIsSet_) {
        val[utility::conversions::to_string_t("proposer")] = ModelBase::toJson(proposer_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
    }
    if(isOutdatedIsSet_) {
        val[utility::conversions::to_string_t("is_outdated")] = ModelBase::toJson(isOutdated_);
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
bool UpdateMergeRequestDiscussionInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachment(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("noteable_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteable_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteableId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("noteable_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteable_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteableType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resolvable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolvable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolvable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("noteable_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteable_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteableIid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            PositionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_outdated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_outdated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOutdated(refVal);
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


int32_t UpdateMergeRequestDiscussionInfoResponse::getId() const
{
    return id_;
}

void UpdateMergeRequestDiscussionInfoResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getType() const
{
    return type_;
}

void UpdateMergeRequestDiscussionInfoResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getBody() const
{
    return body_;
}

void UpdateMergeRequestDiscussionInfoResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getAttachment() const
{
    return attachment_;
}

void UpdateMergeRequestDiscussionInfoResponse::setAttachment(const std::string& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetattachment()
{
    attachmentIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionInfoResponse::getAuthor() const
{
    return author_;
}

void UpdateMergeRequestDiscussionInfoResponse::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::authorIsSet() const
{
    return authorIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetauthor()
{
    authorIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateMergeRequestDiscussionInfoResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateMergeRequestDiscussionInfoResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isSystem() const
{
    return system_;
}

void UpdateMergeRequestDiscussionInfoResponse::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::systemIsSet() const
{
    return systemIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoResponse::getNoteableId() const
{
    return noteableId_;
}

void UpdateMergeRequestDiscussionInfoResponse::setNoteableId(int32_t value)
{
    noteableId_ = value;
    noteableIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::noteableIdIsSet() const
{
    return noteableIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetnoteableId()
{
    noteableIdIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getNoteableType() const
{
    return noteableType_;
}

void UpdateMergeRequestDiscussionInfoResponse::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getCommitId() const
{
    return commitId_;
}

void UpdateMergeRequestDiscussionInfoResponse::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetcommitId()
{
    commitIdIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isResolvable() const
{
    return resolvable_;
}

void UpdateMergeRequestDiscussionInfoResponse::setResolvable(bool value)
{
    resolvable_ = value;
    resolvableIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::resolvableIsSet() const
{
    return resolvableIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetresolvable()
{
    resolvableIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isIsReply() const
{
    return isReply_;
}

void UpdateMergeRequestDiscussionInfoResponse::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetisReply()
{
    isReplyIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionInfoResponse::getResolvedBy() const
{
    return resolvedBy_;
}

void UpdateMergeRequestDiscussionInfoResponse::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoResponse::getNoteableIid() const
{
    return noteableIid_;
}

void UpdateMergeRequestDiscussionInfoResponse::setNoteableIid(int32_t value)
{
    noteableIid_ = value;
    noteableIidIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::noteableIidIsSet() const
{
    return noteableIidIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetnoteableIid()
{
    noteableIidIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getDiscussionId() const
{
    return discussionId_;
}

void UpdateMergeRequestDiscussionInfoResponse::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getRepository() const
{
    return repository_;
}

void UpdateMergeRequestDiscussionInfoResponse::setRepository(const std::string& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetrepository()
{
    repositoryIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getDiffFile() const
{
    return diffFile_;
}

void UpdateMergeRequestDiscussionInfoResponse::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getDiff() const
{
    return diff_;
}

void UpdateMergeRequestDiscussionInfoResponse::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::diffIsSet() const
{
    return diffIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetdiff()
{
    diffIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isArchived() const
{
    return archived_;
}

void UpdateMergeRequestDiscussionInfoResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getReviewCategories() const
{
    return reviewCategories_;
}

void UpdateMergeRequestDiscussionInfoResponse::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void UpdateMergeRequestDiscussionInfoResponse::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void UpdateMergeRequestDiscussionInfoResponse::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getReviewModules() const
{
    return reviewModules_;
}

void UpdateMergeRequestDiscussionInfoResponse::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getSeverity() const
{
    return severity_;
}

void UpdateMergeRequestDiscussionInfoResponse::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::severityIsSet() const
{
    return severityIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetseverity()
{
    severityIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getSeverityCn() const
{
    return severityCn_;
}

void UpdateMergeRequestDiscussionInfoResponse::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getSeverityEn() const
{
    return severityEn_;
}

void UpdateMergeRequestDiscussionInfoResponse::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getFilePath() const
{
    return filePath_;
}

void UpdateMergeRequestDiscussionInfoResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getLine() const
{
    return line_;
}

void UpdateMergeRequestDiscussionInfoResponse::setLine(const std::string& value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::lineIsSet() const
{
    return lineIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetline()
{
    lineIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionInfoResponse::getAssignee() const
{
    return assignee_;
}

void UpdateMergeRequestDiscussionInfoResponse::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionInfoResponse::getProposer() const
{
    return proposer_;
}

void UpdateMergeRequestDiscussionInfoResponse::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::proposerIsSet() const
{
    return proposerIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetproposer()
{
    proposerIsSet_ = false;
}

PositionDto UpdateMergeRequestDiscussionInfoResponse::getPosition() const
{
    return position_;
}

void UpdateMergeRequestDiscussionInfoResponse::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::positionIsSet() const
{
    return positionIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetposition()
{
    positionIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isResolved() const
{
    return resolved_;
}

void UpdateMergeRequestDiscussionInfoResponse::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isIsOutdated() const
{
    return isOutdated_;
}

void UpdateMergeRequestDiscussionInfoResponse::setIsOutdated(bool value)
{
    isOutdated_ = value;
    isOutdatedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::isOutdatedIsSet() const
{
    return isOutdatedIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetisOutdated()
{
    isOutdatedIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isModerationResult() const
{
    return moderationResult_;
}

void UpdateMergeRequestDiscussionInfoResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t UpdateMergeRequestDiscussionInfoResponse::getModerationTime() const
{
    return moderationTime_;
}

void UpdateMergeRequestDiscussionInfoResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void UpdateMergeRequestDiscussionInfoResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

}
}
}
}
}



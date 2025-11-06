

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestDiscussionResponse::UpdateMergeRequestDiscussionResponse()
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

UpdateMergeRequestDiscussionResponse::~UpdateMergeRequestDiscussionResponse() = default;

void UpdateMergeRequestDiscussionResponse::validate()
{
}

web::json::value UpdateMergeRequestDiscussionResponse::toJson() const
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
bool UpdateMergeRequestDiscussionResponse::fromJson(const web::json::value& val)
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


int32_t UpdateMergeRequestDiscussionResponse::getId() const
{
    return id_;
}

void UpdateMergeRequestDiscussionResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getType() const
{
    return type_;
}

void UpdateMergeRequestDiscussionResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getBody() const
{
    return body_;
}

void UpdateMergeRequestDiscussionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getAttachment() const
{
    return attachment_;
}

void UpdateMergeRequestDiscussionResponse::setAttachment(const std::string& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetattachment()
{
    attachmentIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionResponse::getAuthor() const
{
    return author_;
}

void UpdateMergeRequestDiscussionResponse::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::authorIsSet() const
{
    return authorIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetauthor()
{
    authorIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateMergeRequestDiscussionResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateMergeRequestDiscussionResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isSystem() const
{
    return system_;
}

void UpdateMergeRequestDiscussionResponse::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::systemIsSet() const
{
    return systemIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionResponse::getNoteableId() const
{
    return noteableId_;
}

void UpdateMergeRequestDiscussionResponse::setNoteableId(int32_t value)
{
    noteableId_ = value;
    noteableIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::noteableIdIsSet() const
{
    return noteableIdIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetnoteableId()
{
    noteableIdIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getNoteableType() const
{
    return noteableType_;
}

void UpdateMergeRequestDiscussionResponse::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getCommitId() const
{
    return commitId_;
}

void UpdateMergeRequestDiscussionResponse::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetcommitId()
{
    commitIdIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isResolvable() const
{
    return resolvable_;
}

void UpdateMergeRequestDiscussionResponse::setResolvable(bool value)
{
    resolvable_ = value;
    resolvableIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::resolvableIsSet() const
{
    return resolvableIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetresolvable()
{
    resolvableIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isIsReply() const
{
    return isReply_;
}

void UpdateMergeRequestDiscussionResponse::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetisReply()
{
    isReplyIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionResponse::getResolvedBy() const
{
    return resolvedBy_;
}

void UpdateMergeRequestDiscussionResponse::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionResponse::getNoteableIid() const
{
    return noteableIid_;
}

void UpdateMergeRequestDiscussionResponse::setNoteableIid(int32_t value)
{
    noteableIid_ = value;
    noteableIidIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::noteableIidIsSet() const
{
    return noteableIidIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetnoteableIid()
{
    noteableIidIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getDiscussionId() const
{
    return discussionId_;
}

void UpdateMergeRequestDiscussionResponse::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getRepository() const
{
    return repository_;
}

void UpdateMergeRequestDiscussionResponse::setRepository(const std::string& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetrepository()
{
    repositoryIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getDiffFile() const
{
    return diffFile_;
}

void UpdateMergeRequestDiscussionResponse::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getDiff() const
{
    return diff_;
}

void UpdateMergeRequestDiscussionResponse::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::diffIsSet() const
{
    return diffIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetdiff()
{
    diffIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isArchived() const
{
    return archived_;
}

void UpdateMergeRequestDiscussionResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getReviewCategories() const
{
    return reviewCategories_;
}

void UpdateMergeRequestDiscussionResponse::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void UpdateMergeRequestDiscussionResponse::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void UpdateMergeRequestDiscussionResponse::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getReviewModules() const
{
    return reviewModules_;
}

void UpdateMergeRequestDiscussionResponse::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getSeverity() const
{
    return severity_;
}

void UpdateMergeRequestDiscussionResponse::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::severityIsSet() const
{
    return severityIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetseverity()
{
    severityIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getSeverityCn() const
{
    return severityCn_;
}

void UpdateMergeRequestDiscussionResponse::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getSeverityEn() const
{
    return severityEn_;
}

void UpdateMergeRequestDiscussionResponse::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getFilePath() const
{
    return filePath_;
}

void UpdateMergeRequestDiscussionResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionResponse::getLine() const
{
    return line_;
}

void UpdateMergeRequestDiscussionResponse::setLine(const std::string& value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::lineIsSet() const
{
    return lineIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetline()
{
    lineIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionResponse::getAssignee() const
{
    return assignee_;
}

void UpdateMergeRequestDiscussionResponse::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto UpdateMergeRequestDiscussionResponse::getProposer() const
{
    return proposer_;
}

void UpdateMergeRequestDiscussionResponse::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::proposerIsSet() const
{
    return proposerIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetproposer()
{
    proposerIsSet_ = false;
}

PositionDto UpdateMergeRequestDiscussionResponse::getPosition() const
{
    return position_;
}

void UpdateMergeRequestDiscussionResponse::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::positionIsSet() const
{
    return positionIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetposition()
{
    positionIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isResolved() const
{
    return resolved_;
}

void UpdateMergeRequestDiscussionResponse::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isIsOutdated() const
{
    return isOutdated_;
}

void UpdateMergeRequestDiscussionResponse::setIsOutdated(bool value)
{
    isOutdated_ = value;
    isOutdatedIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::isOutdatedIsSet() const
{
    return isOutdatedIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetisOutdated()
{
    isOutdatedIsSet_ = false;
}

bool UpdateMergeRequestDiscussionResponse::isModerationResult() const
{
    return moderationResult_;
}

void UpdateMergeRequestDiscussionResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t UpdateMergeRequestDiscussionResponse::getModerationTime() const
{
    return moderationTime_;
}

void UpdateMergeRequestDiscussionResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void UpdateMergeRequestDiscussionResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool UpdateMergeRequestDiscussionResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void UpdateMergeRequestDiscussionResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

}
}
}
}
}



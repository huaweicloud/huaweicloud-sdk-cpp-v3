

#include "huaweicloud/codehub/v4/model/CreateMergeRequestDiscussionResponseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestDiscussionResponseResponse::CreateMergeRequestDiscussionResponseResponse()
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

CreateMergeRequestDiscussionResponseResponse::~CreateMergeRequestDiscussionResponseResponse() = default;

void CreateMergeRequestDiscussionResponseResponse::validate()
{
}

web::json::value CreateMergeRequestDiscussionResponseResponse::toJson() const
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
bool CreateMergeRequestDiscussionResponseResponse::fromJson(const web::json::value& val)
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


int32_t CreateMergeRequestDiscussionResponseResponse::getId() const
{
    return id_;
}

void CreateMergeRequestDiscussionResponseResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getType() const
{
    return type_;
}

void CreateMergeRequestDiscussionResponseResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionResponseResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getAttachment() const
{
    return attachment_;
}

void CreateMergeRequestDiscussionResponseResponse::setAttachment(const std::string& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetattachment()
{
    attachmentIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponseResponse::getAuthor() const
{
    return author_;
}

void CreateMergeRequestDiscussionResponseResponse::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::authorIsSet() const
{
    return authorIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetauthor()
{
    authorIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateMergeRequestDiscussionResponseResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateMergeRequestDiscussionResponseResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isSystem() const
{
    return system_;
}

void CreateMergeRequestDiscussionResponseResponse::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::systemIsSet() const
{
    return systemIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponseResponse::getNoteableId() const
{
    return noteableId_;
}

void CreateMergeRequestDiscussionResponseResponse::setNoteableId(int32_t value)
{
    noteableId_ = value;
    noteableIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::noteableIdIsSet() const
{
    return noteableIdIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetnoteableId()
{
    noteableIdIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getNoteableType() const
{
    return noteableType_;
}

void CreateMergeRequestDiscussionResponseResponse::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getCommitId() const
{
    return commitId_;
}

void CreateMergeRequestDiscussionResponseResponse::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetcommitId()
{
    commitIdIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isResolvable() const
{
    return resolvable_;
}

void CreateMergeRequestDiscussionResponseResponse::setResolvable(bool value)
{
    resolvable_ = value;
    resolvableIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::resolvableIsSet() const
{
    return resolvableIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetresolvable()
{
    resolvableIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isIsReply() const
{
    return isReply_;
}

void CreateMergeRequestDiscussionResponseResponse::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetisReply()
{
    isReplyIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponseResponse::getResolvedBy() const
{
    return resolvedBy_;
}

void CreateMergeRequestDiscussionResponseResponse::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponseResponse::getNoteableIid() const
{
    return noteableIid_;
}

void CreateMergeRequestDiscussionResponseResponse::setNoteableIid(int32_t value)
{
    noteableIid_ = value;
    noteableIidIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::noteableIidIsSet() const
{
    return noteableIidIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetnoteableIid()
{
    noteableIidIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getDiscussionId() const
{
    return discussionId_;
}

void CreateMergeRequestDiscussionResponseResponse::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getRepository() const
{
    return repository_;
}

void CreateMergeRequestDiscussionResponseResponse::setRepository(const std::string& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetrepository()
{
    repositoryIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getDiffFile() const
{
    return diffFile_;
}

void CreateMergeRequestDiscussionResponseResponse::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getDiff() const
{
    return diff_;
}

void CreateMergeRequestDiscussionResponseResponse::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::diffIsSet() const
{
    return diffIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetdiff()
{
    diffIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isArchived() const
{
    return archived_;
}

void CreateMergeRequestDiscussionResponseResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getReviewCategories() const
{
    return reviewCategories_;
}

void CreateMergeRequestDiscussionResponseResponse::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void CreateMergeRequestDiscussionResponseResponse::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void CreateMergeRequestDiscussionResponseResponse::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getReviewModules() const
{
    return reviewModules_;
}

void CreateMergeRequestDiscussionResponseResponse::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getSeverity() const
{
    return severity_;
}

void CreateMergeRequestDiscussionResponseResponse::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::severityIsSet() const
{
    return severityIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getSeverityCn() const
{
    return severityCn_;
}

void CreateMergeRequestDiscussionResponseResponse::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getSeverityEn() const
{
    return severityEn_;
}

void CreateMergeRequestDiscussionResponseResponse::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getFilePath() const
{
    return filePath_;
}

void CreateMergeRequestDiscussionResponseResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseResponse::getLine() const
{
    return line_;
}

void CreateMergeRequestDiscussionResponseResponse::setLine(const std::string& value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::lineIsSet() const
{
    return lineIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetline()
{
    lineIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponseResponse::getAssignee() const
{
    return assignee_;
}

void CreateMergeRequestDiscussionResponseResponse::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponseResponse::getProposer() const
{
    return proposer_;
}

void CreateMergeRequestDiscussionResponseResponse::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::proposerIsSet() const
{
    return proposerIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetproposer()
{
    proposerIsSet_ = false;
}

PositionDto CreateMergeRequestDiscussionResponseResponse::getPosition() const
{
    return position_;
}

void CreateMergeRequestDiscussionResponseResponse::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::positionIsSet() const
{
    return positionIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetposition()
{
    positionIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isResolved() const
{
    return resolved_;
}

void CreateMergeRequestDiscussionResponseResponse::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isIsOutdated() const
{
    return isOutdated_;
}

void CreateMergeRequestDiscussionResponseResponse::setIsOutdated(bool value)
{
    isOutdated_ = value;
    isOutdatedIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::isOutdatedIsSet() const
{
    return isOutdatedIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetisOutdated()
{
    isOutdatedIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponseResponse::isModerationResult() const
{
    return moderationResult_;
}

void CreateMergeRequestDiscussionResponseResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t CreateMergeRequestDiscussionResponseResponse::getModerationTime() const
{
    return moderationTime_;
}

void CreateMergeRequestDiscussionResponseResponse::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponseResponse::getModerationStatus() const
{
    return moderationStatus_;
}

void CreateMergeRequestDiscussionResponseResponse::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseResponse::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void CreateMergeRequestDiscussionResponseResponse::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

}
}
}
}
}



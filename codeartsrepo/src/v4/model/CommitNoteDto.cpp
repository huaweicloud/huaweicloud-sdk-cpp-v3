

#include "huaweicloud/codeartsrepo/v4/model/CommitNoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CommitNoteDto::CommitNoteDto()
{
    id_ = 0;
    idIsSet_ = false;
    noteableType_ = "";
    noteableTypeIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
    diffFile_ = "";
    diffFileIsSet_ = false;
    diff_ = "";
    diffIsSet_ = false;
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
    positionIsSet_ = false;
    resolvable_ = false;
    resolvableIsSet_ = false;
    resolved_ = false;
    resolvedIsSet_ = false;
    resolvedByIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    noteableIid_ = 0;
    noteableIidIsSet_ = false;
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
    isReply_ = false;
    isReplyIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
}

CommitNoteDto::~CommitNoteDto() = default;

void CommitNoteDto::validate()
{
}

web::json::value CommitNoteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(noteableTypeIsSet_) {
        val[utility::conversions::to_string_t("noteable_type")] = ModelBase::toJson(noteableType_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(discussionIdIsSet_) {
        val[utility::conversions::to_string_t("discussion_id")] = ModelBase::toJson(discussionId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(diffFileIsSet_) {
        val[utility::conversions::to_string_t("diff_file")] = ModelBase::toJson(diffFile_);
    }
    if(diffIsSet_) {
        val[utility::conversions::to_string_t("diff")] = ModelBase::toJson(diff_);
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
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(resolvableIsSet_) {
        val[utility::conversions::to_string_t("resolvable")] = ModelBase::toJson(resolvable_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
    }
    if(resolvedByIsSet_) {
        val[utility::conversions::to_string_t("resolved_by")] = ModelBase::toJson(resolvedBy_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(noteableIidIsSet_) {
        val[utility::conversions::to_string_t("noteable_iid")] = ModelBase::toJson(noteableIid_);
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
    if(isReplyIsSet_) {
        val[utility::conversions::to_string_t("is_reply")] = ModelBase::toJson(isReply_);
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
bool CommitNoteDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("discussion_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discussion_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscussionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            PositionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolved(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_reply"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reply"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReply(refVal);
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


int32_t CommitNoteDto::getId() const
{
    return id_;
}

void CommitNoteDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitNoteDto::idIsSet() const
{
    return idIsSet_;
}

void CommitNoteDto::unsetid()
{
    idIsSet_ = false;
}

std::string CommitNoteDto::getNoteableType() const
{
    return noteableType_;
}

void CommitNoteDto::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool CommitNoteDto::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void CommitNoteDto::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string CommitNoteDto::getCommitId() const
{
    return commitId_;
}

void CommitNoteDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool CommitNoteDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void CommitNoteDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string CommitNoteDto::getDiscussionId() const
{
    return discussionId_;
}

void CommitNoteDto::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool CommitNoteDto::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void CommitNoteDto::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string CommitNoteDto::getType() const
{
    return type_;
}

void CommitNoteDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CommitNoteDto::typeIsSet() const
{
    return typeIsSet_;
}

void CommitNoteDto::unsettype()
{
    typeIsSet_ = false;
}

std::string CommitNoteDto::getBody() const
{
    return body_;
}

void CommitNoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CommitNoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void CommitNoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

std::string CommitNoteDto::getDiffFile() const
{
    return diffFile_;
}

void CommitNoteDto::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool CommitNoteDto::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void CommitNoteDto::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

std::string CommitNoteDto::getDiff() const
{
    return diff_;
}

void CommitNoteDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool CommitNoteDto::diffIsSet() const
{
    return diffIsSet_;
}

void CommitNoteDto::unsetdiff()
{
    diffIsSet_ = false;
}

std::string CommitNoteDto::getAttachment() const
{
    return attachment_;
}

void CommitNoteDto::setAttachment(const std::string& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool CommitNoteDto::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void CommitNoteDto::unsetattachment()
{
    attachmentIsSet_ = false;
}

UserBasicDto CommitNoteDto::getAuthor() const
{
    return author_;
}

void CommitNoteDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool CommitNoteDto::authorIsSet() const
{
    return authorIsSet_;
}

void CommitNoteDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string CommitNoteDto::getCreatedAt() const
{
    return createdAt_;
}

void CommitNoteDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CommitNoteDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CommitNoteDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CommitNoteDto::getUpdatedAt() const
{
    return updatedAt_;
}

void CommitNoteDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CommitNoteDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CommitNoteDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool CommitNoteDto::isSystem() const
{
    return system_;
}

void CommitNoteDto::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool CommitNoteDto::systemIsSet() const
{
    return systemIsSet_;
}

void CommitNoteDto::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t CommitNoteDto::getNoteableId() const
{
    return noteableId_;
}

void CommitNoteDto::setNoteableId(int32_t value)
{
    noteableId_ = value;
    noteableIdIsSet_ = true;
}

bool CommitNoteDto::noteableIdIsSet() const
{
    return noteableIdIsSet_;
}

void CommitNoteDto::unsetnoteableId()
{
    noteableIdIsSet_ = false;
}

PositionDto CommitNoteDto::getPosition() const
{
    return position_;
}

void CommitNoteDto::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool CommitNoteDto::positionIsSet() const
{
    return positionIsSet_;
}

void CommitNoteDto::unsetposition()
{
    positionIsSet_ = false;
}

bool CommitNoteDto::isResolvable() const
{
    return resolvable_;
}

void CommitNoteDto::setResolvable(bool value)
{
    resolvable_ = value;
    resolvableIsSet_ = true;
}

bool CommitNoteDto::resolvableIsSet() const
{
    return resolvableIsSet_;
}

void CommitNoteDto::unsetresolvable()
{
    resolvableIsSet_ = false;
}

bool CommitNoteDto::isResolved() const
{
    return resolved_;
}

void CommitNoteDto::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool CommitNoteDto::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void CommitNoteDto::unsetresolved()
{
    resolvedIsSet_ = false;
}

UserBasicDto CommitNoteDto::getResolvedBy() const
{
    return resolvedBy_;
}

void CommitNoteDto::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool CommitNoteDto::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void CommitNoteDto::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

bool CommitNoteDto::isArchived() const
{
    return archived_;
}

void CommitNoteDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool CommitNoteDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void CommitNoteDto::unsetarchived()
{
    archivedIsSet_ = false;
}

int32_t CommitNoteDto::getNoteableIid() const
{
    return noteableIid_;
}

void CommitNoteDto::setNoteableIid(int32_t value)
{
    noteableIid_ = value;
    noteableIidIsSet_ = true;
}

bool CommitNoteDto::noteableIidIsSet() const
{
    return noteableIidIsSet_;
}

void CommitNoteDto::unsetnoteableIid()
{
    noteableIidIsSet_ = false;
}

std::string CommitNoteDto::getReviewCategories() const
{
    return reviewCategories_;
}

void CommitNoteDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CommitNoteDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CommitNoteDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CommitNoteDto::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void CommitNoteDto::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool CommitNoteDto::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void CommitNoteDto::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string CommitNoteDto::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void CommitNoteDto::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool CommitNoteDto::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void CommitNoteDto::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string CommitNoteDto::getReviewModules() const
{
    return reviewModules_;
}

void CommitNoteDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CommitNoteDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CommitNoteDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CommitNoteDto::getSeverity() const
{
    return severity_;
}

void CommitNoteDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CommitNoteDto::severityIsSet() const
{
    return severityIsSet_;
}

void CommitNoteDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CommitNoteDto::getSeverityCn() const
{
    return severityCn_;
}

void CommitNoteDto::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool CommitNoteDto::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void CommitNoteDto::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string CommitNoteDto::getSeverityEn() const
{
    return severityEn_;
}

void CommitNoteDto::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool CommitNoteDto::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void CommitNoteDto::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

std::string CommitNoteDto::getFilePath() const
{
    return filePath_;
}

void CommitNoteDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CommitNoteDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void CommitNoteDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string CommitNoteDto::getLine() const
{
    return line_;
}

void CommitNoteDto::setLine(const std::string& value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool CommitNoteDto::lineIsSet() const
{
    return lineIsSet_;
}

void CommitNoteDto::unsetline()
{
    lineIsSet_ = false;
}

UserBasicDto CommitNoteDto::getAssignee() const
{
    return assignee_;
}

void CommitNoteDto::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CommitNoteDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CommitNoteDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto CommitNoteDto::getProposer() const
{
    return proposer_;
}

void CommitNoteDto::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool CommitNoteDto::proposerIsSet() const
{
    return proposerIsSet_;
}

void CommitNoteDto::unsetproposer()
{
    proposerIsSet_ = false;
}

bool CommitNoteDto::isIsReply() const
{
    return isReply_;
}

void CommitNoteDto::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool CommitNoteDto::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void CommitNoteDto::unsetisReply()
{
    isReplyIsSet_ = false;
}

bool CommitNoteDto::isModerationResult() const
{
    return moderationResult_;
}

void CommitNoteDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool CommitNoteDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void CommitNoteDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t CommitNoteDto::getModerationTime() const
{
    return moderationTime_;
}

void CommitNoteDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool CommitNoteDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void CommitNoteDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t CommitNoteDto::getModerationStatus() const
{
    return moderationStatus_;
}

void CommitNoteDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool CommitNoteDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void CommitNoteDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

}
}
}
}
}



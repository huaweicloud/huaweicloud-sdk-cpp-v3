

#include "huaweicloud/codehub/v3/model/NoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




NoteDto::NoteDto()
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
    project_ = "";
    projectIsSet_ = false;
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
}

NoteDto::~NoteDto() = default;

void NoteDto::validate()
{
}

web::json::value NoteDto::toJson() const
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
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
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

    return val;
}
bool NoteDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
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
    return ok;
}


int32_t NoteDto::getId() const
{
    return id_;
}

void NoteDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NoteDto::idIsSet() const
{
    return idIsSet_;
}

void NoteDto::unsetid()
{
    idIsSet_ = false;
}

std::string NoteDto::getType() const
{
    return type_;
}

void NoteDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NoteDto::typeIsSet() const
{
    return typeIsSet_;
}

void NoteDto::unsettype()
{
    typeIsSet_ = false;
}

std::string NoteDto::getBody() const
{
    return body_;
}

void NoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void NoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

std::string NoteDto::getAttachment() const
{
    return attachment_;
}

void NoteDto::setAttachment(const std::string& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool NoteDto::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void NoteDto::unsetattachment()
{
    attachmentIsSet_ = false;
}

UserBasicDto NoteDto::getAuthor() const
{
    return author_;
}

void NoteDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool NoteDto::authorIsSet() const
{
    return authorIsSet_;
}

void NoteDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string NoteDto::getCreatedAt() const
{
    return createdAt_;
}

void NoteDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NoteDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NoteDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string NoteDto::getUpdatedAt() const
{
    return updatedAt_;
}

void NoteDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NoteDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NoteDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool NoteDto::isSystem() const
{
    return system_;
}

void NoteDto::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool NoteDto::systemIsSet() const
{
    return systemIsSet_;
}

void NoteDto::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t NoteDto::getNoteableId() const
{
    return noteableId_;
}

void NoteDto::setNoteableId(int32_t value)
{
    noteableId_ = value;
    noteableIdIsSet_ = true;
}

bool NoteDto::noteableIdIsSet() const
{
    return noteableIdIsSet_;
}

void NoteDto::unsetnoteableId()
{
    noteableIdIsSet_ = false;
}

std::string NoteDto::getNoteableType() const
{
    return noteableType_;
}

void NoteDto::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool NoteDto::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void NoteDto::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string NoteDto::getCommitId() const
{
    return commitId_;
}

void NoteDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool NoteDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void NoteDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

bool NoteDto::isResolvable() const
{
    return resolvable_;
}

void NoteDto::setResolvable(bool value)
{
    resolvable_ = value;
    resolvableIsSet_ = true;
}

bool NoteDto::resolvableIsSet() const
{
    return resolvableIsSet_;
}

void NoteDto::unsetresolvable()
{
    resolvableIsSet_ = false;
}

bool NoteDto::isIsReply() const
{
    return isReply_;
}

void NoteDto::setIsReply(bool value)
{
    isReply_ = value;
    isReplyIsSet_ = true;
}

bool NoteDto::isReplyIsSet() const
{
    return isReplyIsSet_;
}

void NoteDto::unsetisReply()
{
    isReplyIsSet_ = false;
}

UserBasicDto NoteDto::getResolvedBy() const
{
    return resolvedBy_;
}

void NoteDto::setResolvedBy(const UserBasicDto& value)
{
    resolvedBy_ = value;
    resolvedByIsSet_ = true;
}

bool NoteDto::resolvedByIsSet() const
{
    return resolvedByIsSet_;
}

void NoteDto::unsetresolvedBy()
{
    resolvedByIsSet_ = false;
}

int32_t NoteDto::getNoteableIid() const
{
    return noteableIid_;
}

void NoteDto::setNoteableIid(int32_t value)
{
    noteableIid_ = value;
    noteableIidIsSet_ = true;
}

bool NoteDto::noteableIidIsSet() const
{
    return noteableIidIsSet_;
}

void NoteDto::unsetnoteableIid()
{
    noteableIidIsSet_ = false;
}

std::string NoteDto::getDiscussionId() const
{
    return discussionId_;
}

void NoteDto::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool NoteDto::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void NoteDto::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

std::string NoteDto::getProject() const
{
    return project_;
}

void NoteDto::setProject(const std::string& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool NoteDto::projectIsSet() const
{
    return projectIsSet_;
}

void NoteDto::unsetproject()
{
    projectIsSet_ = false;
}

std::string NoteDto::getDiffFile() const
{
    return diffFile_;
}

void NoteDto::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool NoteDto::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void NoteDto::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

std::string NoteDto::getDiff() const
{
    return diff_;
}

void NoteDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool NoteDto::diffIsSet() const
{
    return diffIsSet_;
}

void NoteDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool NoteDto::isArchived() const
{
    return archived_;
}

void NoteDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool NoteDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void NoteDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string NoteDto::getReviewCategories() const
{
    return reviewCategories_;
}

void NoteDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool NoteDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void NoteDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string NoteDto::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void NoteDto::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool NoteDto::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void NoteDto::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string NoteDto::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void NoteDto::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool NoteDto::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void NoteDto::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string NoteDto::getReviewModules() const
{
    return reviewModules_;
}

void NoteDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool NoteDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void NoteDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string NoteDto::getSeverity() const
{
    return severity_;
}

void NoteDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool NoteDto::severityIsSet() const
{
    return severityIsSet_;
}

void NoteDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string NoteDto::getSeverityCn() const
{
    return severityCn_;
}

void NoteDto::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool NoteDto::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void NoteDto::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string NoteDto::getSeverityEn() const
{
    return severityEn_;
}

void NoteDto::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool NoteDto::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void NoteDto::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

std::string NoteDto::getFilePath() const
{
    return filePath_;
}

void NoteDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool NoteDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void NoteDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string NoteDto::getLine() const
{
    return line_;
}

void NoteDto::setLine(const std::string& value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool NoteDto::lineIsSet() const
{
    return lineIsSet_;
}

void NoteDto::unsetline()
{
    lineIsSet_ = false;
}

UserBasicDto NoteDto::getAssignee() const
{
    return assignee_;
}

void NoteDto::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool NoteDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void NoteDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto NoteDto::getProposer() const
{
    return proposer_;
}

void NoteDto::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool NoteDto::proposerIsSet() const
{
    return proposerIsSet_;
}

void NoteDto::unsetproposer()
{
    proposerIsSet_ = false;
}

PositionDto NoteDto::getPosition() const
{
    return position_;
}

void NoteDto::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool NoteDto::positionIsSet() const
{
    return positionIsSet_;
}

void NoteDto::unsetposition()
{
    positionIsSet_ = false;
}

bool NoteDto::isResolved() const
{
    return resolved_;
}

void NoteDto::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool NoteDto::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void NoteDto::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool NoteDto::isIsOutdated() const
{
    return isOutdated_;
}

void NoteDto::setIsOutdated(bool value)
{
    isOutdated_ = value;
    isOutdatedIsSet_ = true;
}

bool NoteDto::isOutdatedIsSet() const
{
    return isOutdatedIsSet_;
}

void NoteDto::unsetisOutdated()
{
    isOutdatedIsSet_ = false;
}

}
}
}
}
}



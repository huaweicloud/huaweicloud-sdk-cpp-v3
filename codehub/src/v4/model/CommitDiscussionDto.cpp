

#include "huaweicloud/codehub/v4/model/CommitDiscussionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitDiscussionDto::CommitDiscussionDto()
{
    id_ = "";
    idIsSet_ = false;
    individualNote_ = false;
    individualNoteIsSet_ = false;
    notesIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    noteableType_ = "";
    noteableTypeIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    repositoryFullPath_ = "";
    repositoryFullPathIsSet_ = false;
    aMode_ = "";
    aModeIsSet_ = false;
    bMode_ = "";
    bModeIsSet_ = false;
    deletedFile_ = false;
    deletedFileIsSet_ = false;
    newFile_ = false;
    newFileIsSet_ = false;
    diffFile_ = false;
    diffFileIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    resolved_ = false;
    resolvedIsSet_ = false;
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
    assigneeIsSet_ = false;
    proposerIsSet_ = false;
}

CommitDiscussionDto::~CommitDiscussionDto() = default;

void CommitDiscussionDto::validate()
{
}

web::json::value CommitDiscussionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(individualNoteIsSet_) {
        val[utility::conversions::to_string_t("individual_note")] = ModelBase::toJson(individualNote_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(noteableTypeIsSet_) {
        val[utility::conversions::to_string_t("noteable_type")] = ModelBase::toJson(noteableType_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(repositoryFullPathIsSet_) {
        val[utility::conversions::to_string_t("repository_full_path")] = ModelBase::toJson(repositoryFullPath_);
    }
    if(aModeIsSet_) {
        val[utility::conversions::to_string_t("a_mode")] = ModelBase::toJson(aMode_);
    }
    if(bModeIsSet_) {
        val[utility::conversions::to_string_t("b_mode")] = ModelBase::toJson(bMode_);
    }
    if(deletedFileIsSet_) {
        val[utility::conversions::to_string_t("deleted_file")] = ModelBase::toJson(deletedFile_);
    }
    if(newFileIsSet_) {
        val[utility::conversions::to_string_t("new_file")] = ModelBase::toJson(newFile_);
    }
    if(diffFileIsSet_) {
        val[utility::conversions::to_string_t("diff_file")] = ModelBase::toJson(diffFile_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
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
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(proposerIsSet_) {
        val[utility::conversions::to_string_t("proposer")] = ModelBase::toJson(proposer_);
    }

    return val;
}
bool CommitDiscussionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("individual_note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("individual_note"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndividualNote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitNoteDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("b_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("b_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_file"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_file"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_file"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffFile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolved(refVal);
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
    return ok;
}


std::string CommitDiscussionDto::getId() const
{
    return id_;
}

void CommitDiscussionDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitDiscussionDto::idIsSet() const
{
    return idIsSet_;
}

void CommitDiscussionDto::unsetid()
{
    idIsSet_ = false;
}

bool CommitDiscussionDto::isIndividualNote() const
{
    return individualNote_;
}

void CommitDiscussionDto::setIndividualNote(bool value)
{
    individualNote_ = value;
    individualNoteIsSet_ = true;
}

bool CommitDiscussionDto::individualNoteIsSet() const
{
    return individualNoteIsSet_;
}

void CommitDiscussionDto::unsetindividualNote()
{
    individualNoteIsSet_ = false;
}

std::vector<CommitNoteDto>& CommitDiscussionDto::getNotes()
{
    return notes_;
}

void CommitDiscussionDto::setNotes(const std::vector<CommitNoteDto>& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool CommitDiscussionDto::notesIsSet() const
{
    return notesIsSet_;
}

void CommitDiscussionDto::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t CommitDiscussionDto::getRepositoryId() const
{
    return repositoryId_;
}

void CommitDiscussionDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CommitDiscussionDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CommitDiscussionDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CommitDiscussionDto::getNoteableType() const
{
    return noteableType_;
}

void CommitDiscussionDto::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool CommitDiscussionDto::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void CommitDiscussionDto::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string CommitDiscussionDto::getCommitId() const
{
    return commitId_;
}

void CommitDiscussionDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool CommitDiscussionDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void CommitDiscussionDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string CommitDiscussionDto::getRepositoryFullPath() const
{
    return repositoryFullPath_;
}

void CommitDiscussionDto::setRepositoryFullPath(const std::string& value)
{
    repositoryFullPath_ = value;
    repositoryFullPathIsSet_ = true;
}

bool CommitDiscussionDto::repositoryFullPathIsSet() const
{
    return repositoryFullPathIsSet_;
}

void CommitDiscussionDto::unsetrepositoryFullPath()
{
    repositoryFullPathIsSet_ = false;
}

std::string CommitDiscussionDto::getAMode() const
{
    return aMode_;
}

void CommitDiscussionDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool CommitDiscussionDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void CommitDiscussionDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string CommitDiscussionDto::getBMode() const
{
    return bMode_;
}

void CommitDiscussionDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool CommitDiscussionDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void CommitDiscussionDto::unsetbMode()
{
    bModeIsSet_ = false;
}

bool CommitDiscussionDto::isDeletedFile() const
{
    return deletedFile_;
}

void CommitDiscussionDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool CommitDiscussionDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void CommitDiscussionDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

bool CommitDiscussionDto::isNewFile() const
{
    return newFile_;
}

void CommitDiscussionDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool CommitDiscussionDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void CommitDiscussionDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool CommitDiscussionDto::isDiffFile() const
{
    return diffFile_;
}

void CommitDiscussionDto::setDiffFile(bool value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool CommitDiscussionDto::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void CommitDiscussionDto::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

int32_t CommitDiscussionDto::getAddedLines() const
{
    return addedLines_;
}

void CommitDiscussionDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool CommitDiscussionDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void CommitDiscussionDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t CommitDiscussionDto::getRemovedLines() const
{
    return removedLines_;
}

void CommitDiscussionDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool CommitDiscussionDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void CommitDiscussionDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

bool CommitDiscussionDto::isResolved() const
{
    return resolved_;
}

void CommitDiscussionDto::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool CommitDiscussionDto::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void CommitDiscussionDto::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool CommitDiscussionDto::isArchived() const
{
    return archived_;
}

void CommitDiscussionDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool CommitDiscussionDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void CommitDiscussionDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string CommitDiscussionDto::getReviewCategories() const
{
    return reviewCategories_;
}

void CommitDiscussionDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CommitDiscussionDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CommitDiscussionDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CommitDiscussionDto::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void CommitDiscussionDto::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool CommitDiscussionDto::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void CommitDiscussionDto::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string CommitDiscussionDto::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void CommitDiscussionDto::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool CommitDiscussionDto::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void CommitDiscussionDto::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string CommitDiscussionDto::getReviewModules() const
{
    return reviewModules_;
}

void CommitDiscussionDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CommitDiscussionDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CommitDiscussionDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CommitDiscussionDto::getSeverity() const
{
    return severity_;
}

void CommitDiscussionDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CommitDiscussionDto::severityIsSet() const
{
    return severityIsSet_;
}

void CommitDiscussionDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CommitDiscussionDto::getSeverityCn() const
{
    return severityCn_;
}

void CommitDiscussionDto::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool CommitDiscussionDto::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void CommitDiscussionDto::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string CommitDiscussionDto::getSeverityEn() const
{
    return severityEn_;
}

void CommitDiscussionDto::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool CommitDiscussionDto::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void CommitDiscussionDto::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

UserBasicDto CommitDiscussionDto::getAssignee() const
{
    return assignee_;
}

void CommitDiscussionDto::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CommitDiscussionDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CommitDiscussionDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto CommitDiscussionDto::getProposer() const
{
    return proposer_;
}

void CommitDiscussionDto::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool CommitDiscussionDto::proposerIsSet() const
{
    return proposerIsSet_;
}

void CommitDiscussionDto::unsetproposer()
{
    proposerIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestDiscussionInfoResponse::UpdateMergeRequestDiscussionInfoResponse()
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
    mergeRequestVersionParamsIsSet_ = false;
    diffFile_ = "";
    diffFileIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
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
    if(mergeRequestVersionParamsIsSet_) {
        val[utility::conversions::to_string_t("merge_request_version_params")] = ModelBase::toJson(mergeRequestVersionParams_);
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

    return val;
}
bool UpdateMergeRequestDiscussionInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<NoteDto> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_version_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_version_params"));
        if(!fieldValue.is_null())
        {
            MergeRequestVersionParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestVersionParams(refVal);
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
    return ok;
}


std::string UpdateMergeRequestDiscussionInfoResponse::getId() const
{
    return id_;
}

void UpdateMergeRequestDiscussionInfoResponse::setId(const std::string& value)
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

bool UpdateMergeRequestDiscussionInfoResponse::isIndividualNote() const
{
    return individualNote_;
}

void UpdateMergeRequestDiscussionInfoResponse::setIndividualNote(bool value)
{
    individualNote_ = value;
    individualNoteIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::individualNoteIsSet() const
{
    return individualNoteIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetindividualNote()
{
    individualNoteIsSet_ = false;
}

std::vector<NoteDto>& UpdateMergeRequestDiscussionInfoResponse::getNotes()
{
    return notes_;
}

void UpdateMergeRequestDiscussionInfoResponse::setNotes(const std::vector<NoteDto>& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::notesIsSet() const
{
    return notesIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoResponse::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestDiscussionInfoResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
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

std::string UpdateMergeRequestDiscussionInfoResponse::getRepositoryFullPath() const
{
    return repositoryFullPath_;
}

void UpdateMergeRequestDiscussionInfoResponse::setRepositoryFullPath(const std::string& value)
{
    repositoryFullPath_ = value;
    repositoryFullPathIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::repositoryFullPathIsSet() const
{
    return repositoryFullPathIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetrepositoryFullPath()
{
    repositoryFullPathIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getAMode() const
{
    return aMode_;
}

void UpdateMergeRequestDiscussionInfoResponse::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::aModeIsSet() const
{
    return aModeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoResponse::getBMode() const
{
    return bMode_;
}

void UpdateMergeRequestDiscussionInfoResponse::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::bModeIsSet() const
{
    return bModeIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetbMode()
{
    bModeIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isDeletedFile() const
{
    return deletedFile_;
}

void UpdateMergeRequestDiscussionInfoResponse::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

bool UpdateMergeRequestDiscussionInfoResponse::isNewFile() const
{
    return newFile_;
}

void UpdateMergeRequestDiscussionInfoResponse::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::newFileIsSet() const
{
    return newFileIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetnewFile()
{
    newFileIsSet_ = false;
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

MergeRequestVersionParamsDto UpdateMergeRequestDiscussionInfoResponse::getMergeRequestVersionParams() const
{
    return mergeRequestVersionParams_;
}

void UpdateMergeRequestDiscussionInfoResponse::setMergeRequestVersionParams(const MergeRequestVersionParamsDto& value)
{
    mergeRequestVersionParams_ = value;
    mergeRequestVersionParamsIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::mergeRequestVersionParamsIsSet() const
{
    return mergeRequestVersionParamsIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetmergeRequestVersionParams()
{
    mergeRequestVersionParamsIsSet_ = false;
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

int32_t UpdateMergeRequestDiscussionInfoResponse::getAddedLines() const
{
    return addedLines_;
}

void UpdateMergeRequestDiscussionInfoResponse::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoResponse::getRemovedLines() const
{
    return removedLines_;
}

void UpdateMergeRequestDiscussionInfoResponse::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoResponse::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void UpdateMergeRequestDiscussionInfoResponse::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}



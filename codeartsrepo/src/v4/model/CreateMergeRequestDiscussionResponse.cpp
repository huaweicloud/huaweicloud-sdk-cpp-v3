

#include "huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateMergeRequestDiscussionResponse::CreateMergeRequestDiscussionResponse()
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

CreateMergeRequestDiscussionResponse::~CreateMergeRequestDiscussionResponse() = default;

void CreateMergeRequestDiscussionResponse::validate()
{
}

web::json::value CreateMergeRequestDiscussionResponse::toJson() const
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
bool CreateMergeRequestDiscussionResponse::fromJson(const web::json::value& val)
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


std::string CreateMergeRequestDiscussionResponse::getId() const
{
    return id_;
}

void CreateMergeRequestDiscussionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetid()
{
    idIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponse::isIndividualNote() const
{
    return individualNote_;
}

void CreateMergeRequestDiscussionResponse::setIndividualNote(bool value)
{
    individualNote_ = value;
    individualNoteIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::individualNoteIsSet() const
{
    return individualNoteIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetindividualNote()
{
    individualNoteIsSet_ = false;
}

std::vector<NoteDto>& CreateMergeRequestDiscussionResponse::getNotes()
{
    return notes_;
}

void CreateMergeRequestDiscussionResponse::setNotes(const std::vector<NoteDto>& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::notesIsSet() const
{
    return notesIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetnotes()
{
    notesIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponse::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestDiscussionResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getNoteableType() const
{
    return noteableType_;
}

void CreateMergeRequestDiscussionResponse::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getCommitId() const
{
    return commitId_;
}

void CreateMergeRequestDiscussionResponse::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getRepositoryFullPath() const
{
    return repositoryFullPath_;
}

void CreateMergeRequestDiscussionResponse::setRepositoryFullPath(const std::string& value)
{
    repositoryFullPath_ = value;
    repositoryFullPathIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::repositoryFullPathIsSet() const
{
    return repositoryFullPathIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetrepositoryFullPath()
{
    repositoryFullPathIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getAMode() const
{
    return aMode_;
}

void CreateMergeRequestDiscussionResponse::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::aModeIsSet() const
{
    return aModeIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getBMode() const
{
    return bMode_;
}

void CreateMergeRequestDiscussionResponse::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::bModeIsSet() const
{
    return bModeIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetbMode()
{
    bModeIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponse::isDeletedFile() const
{
    return deletedFile_;
}

void CreateMergeRequestDiscussionResponse::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponse::isNewFile() const
{
    return newFile_;
}

void CreateMergeRequestDiscussionResponse::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::newFileIsSet() const
{
    return newFileIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponse::isResolved() const
{
    return resolved_;
}

void CreateMergeRequestDiscussionResponse::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetresolved()
{
    resolvedIsSet_ = false;
}

bool CreateMergeRequestDiscussionResponse::isArchived() const
{
    return archived_;
}

void CreateMergeRequestDiscussionResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getReviewCategories() const
{
    return reviewCategories_;
}

void CreateMergeRequestDiscussionResponse::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getReviewCategoriesCn() const
{
    return reviewCategoriesCn_;
}

void CreateMergeRequestDiscussionResponse::setReviewCategoriesCn(const std::string& value)
{
    reviewCategoriesCn_ = value;
    reviewCategoriesCnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::reviewCategoriesCnIsSet() const
{
    return reviewCategoriesCnIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetreviewCategoriesCn()
{
    reviewCategoriesCnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getReviewCategoriesEn() const
{
    return reviewCategoriesEn_;
}

void CreateMergeRequestDiscussionResponse::setReviewCategoriesEn(const std::string& value)
{
    reviewCategoriesEn_ = value;
    reviewCategoriesEnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::reviewCategoriesEnIsSet() const
{
    return reviewCategoriesEnIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetreviewCategoriesEn()
{
    reviewCategoriesEnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getReviewModules() const
{
    return reviewModules_;
}

void CreateMergeRequestDiscussionResponse::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getSeverity() const
{
    return severity_;
}

void CreateMergeRequestDiscussionResponse::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::severityIsSet() const
{
    return severityIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getSeverityCn() const
{
    return severityCn_;
}

void CreateMergeRequestDiscussionResponse::setSeverityCn(const std::string& value)
{
    severityCn_ = value;
    severityCnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::severityCnIsSet() const
{
    return severityCnIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetseverityCn()
{
    severityCnIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getSeverityEn() const
{
    return severityEn_;
}

void CreateMergeRequestDiscussionResponse::setSeverityEn(const std::string& value)
{
    severityEn_ = value;
    severityEnIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::severityEnIsSet() const
{
    return severityEnIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetseverityEn()
{
    severityEnIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponse::getAssignee() const
{
    return assignee_;
}

void CreateMergeRequestDiscussionResponse::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserBasicDto CreateMergeRequestDiscussionResponse::getProposer() const
{
    return proposer_;
}

void CreateMergeRequestDiscussionResponse::setProposer(const UserBasicDto& value)
{
    proposer_ = value;
    proposerIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::proposerIsSet() const
{
    return proposerIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetproposer()
{
    proposerIsSet_ = false;
}

MergeRequestVersionParamsDto CreateMergeRequestDiscussionResponse::getMergeRequestVersionParams() const
{
    return mergeRequestVersionParams_;
}

void CreateMergeRequestDiscussionResponse::setMergeRequestVersionParams(const MergeRequestVersionParamsDto& value)
{
    mergeRequestVersionParams_ = value;
    mergeRequestVersionParamsIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::mergeRequestVersionParamsIsSet() const
{
    return mergeRequestVersionParamsIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetmergeRequestVersionParams()
{
    mergeRequestVersionParamsIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getDiffFile() const
{
    return diffFile_;
}

void CreateMergeRequestDiscussionResponse::setDiffFile(const std::string& value)
{
    diffFile_ = value;
    diffFileIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::diffFileIsSet() const
{
    return diffFileIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetdiffFile()
{
    diffFileIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponse::getAddedLines() const
{
    return addedLines_;
}

void CreateMergeRequestDiscussionResponse::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponse::getRemovedLines() const
{
    return removedLines_;
}

void CreateMergeRequestDiscussionResponse::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}



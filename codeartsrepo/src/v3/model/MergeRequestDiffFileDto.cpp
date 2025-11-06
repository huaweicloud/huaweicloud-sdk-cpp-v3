

#include "huaweicloud/codeartsrepo/v3/model/MergeRequestDiffFileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeRequestDiffFileDto::MergeRequestDiffFileDto()
{
    contentSha_ = "";
    contentShaIsSet_ = false;
    submodule_ = false;
    submoduleIsSet_ = false;
    expanded_ = false;
    expandedIsSet_ = false;
    diffRefsIsSet_ = false;
    modeChanged_ = false;
    modeChangedIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    aMode_ = "";
    aModeIsSet_ = false;
    bMode_ = "";
    bModeIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    newFile_ = false;
    newFileIsSet_ = false;
    renamedFile_ = false;
    renamedFileIsSet_ = false;
    deletedFile_ = false;
    deletedFileIsSet_ = false;
    diff_ = "";
    diffIsSet_ = false;
    binary_ = false;
    binaryIsSet_ = false;
    tooLarge_ = false;
    tooLargeIsSet_ = false;
    collapsed_ = false;
    collapsedIsSet_ = false;
    lineCountIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
}

MergeRequestDiffFileDto::~MergeRequestDiffFileDto() = default;

void MergeRequestDiffFileDto::validate()
{
}

web::json::value MergeRequestDiffFileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentShaIsSet_) {
        val[utility::conversions::to_string_t("content_sha")] = ModelBase::toJson(contentSha_);
    }
    if(submoduleIsSet_) {
        val[utility::conversions::to_string_t("submodule")] = ModelBase::toJson(submodule_);
    }
    if(expandedIsSet_) {
        val[utility::conversions::to_string_t("expanded")] = ModelBase::toJson(expanded_);
    }
    if(diffRefsIsSet_) {
        val[utility::conversions::to_string_t("diff_refs")] = ModelBase::toJson(diffRefs_);
    }
    if(modeChangedIsSet_) {
        val[utility::conversions::to_string_t("mode_changed")] = ModelBase::toJson(modeChanged_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }
    if(aModeIsSet_) {
        val[utility::conversions::to_string_t("a_mode")] = ModelBase::toJson(aMode_);
    }
    if(bModeIsSet_) {
        val[utility::conversions::to_string_t("b_mode")] = ModelBase::toJson(bMode_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(newFileIsSet_) {
        val[utility::conversions::to_string_t("new_file")] = ModelBase::toJson(newFile_);
    }
    if(renamedFileIsSet_) {
        val[utility::conversions::to_string_t("renamed_file")] = ModelBase::toJson(renamedFile_);
    }
    if(deletedFileIsSet_) {
        val[utility::conversions::to_string_t("deleted_file")] = ModelBase::toJson(deletedFile_);
    }
    if(diffIsSet_) {
        val[utility::conversions::to_string_t("diff")] = ModelBase::toJson(diff_);
    }
    if(binaryIsSet_) {
        val[utility::conversions::to_string_t("binary")] = ModelBase::toJson(binary_);
    }
    if(tooLargeIsSet_) {
        val[utility::conversions::to_string_t("too_large")] = ModelBase::toJson(tooLarge_);
    }
    if(collapsedIsSet_) {
        val[utility::conversions::to_string_t("collapsed")] = ModelBase::toJson(collapsed_);
    }
    if(lineCountIsSet_) {
        val[utility::conversions::to_string_t("line_count")] = ModelBase::toJson(lineCount_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }

    return val;
}
bool MergeRequestDiffFileDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmodule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expanded"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expanded"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpanded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_refs"));
        if(!fieldValue.is_null())
        {
            DiffRefsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRefs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode_changed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode_changed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModeChanged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("renamed_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("renamed_file"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRenamedFile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("too_large"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("too_large"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTooLarge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collapsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collapsed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollapsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_count"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    return ok;
}


std::string MergeRequestDiffFileDto::getContentSha() const
{
    return contentSha_;
}

void MergeRequestDiffFileDto::setContentSha(const std::string& value)
{
    contentSha_ = value;
    contentShaIsSet_ = true;
}

bool MergeRequestDiffFileDto::contentShaIsSet() const
{
    return contentShaIsSet_;
}

void MergeRequestDiffFileDto::unsetcontentSha()
{
    contentShaIsSet_ = false;
}

bool MergeRequestDiffFileDto::isSubmodule() const
{
    return submodule_;
}

void MergeRequestDiffFileDto::setSubmodule(bool value)
{
    submodule_ = value;
    submoduleIsSet_ = true;
}

bool MergeRequestDiffFileDto::submoduleIsSet() const
{
    return submoduleIsSet_;
}

void MergeRequestDiffFileDto::unsetsubmodule()
{
    submoduleIsSet_ = false;
}

bool MergeRequestDiffFileDto::isExpanded() const
{
    return expanded_;
}

void MergeRequestDiffFileDto::setExpanded(bool value)
{
    expanded_ = value;
    expandedIsSet_ = true;
}

bool MergeRequestDiffFileDto::expandedIsSet() const
{
    return expandedIsSet_;
}

void MergeRequestDiffFileDto::unsetexpanded()
{
    expandedIsSet_ = false;
}

DiffRefsDto MergeRequestDiffFileDto::getDiffRefs() const
{
    return diffRefs_;
}

void MergeRequestDiffFileDto::setDiffRefs(const DiffRefsDto& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool MergeRequestDiffFileDto::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void MergeRequestDiffFileDto::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

bool MergeRequestDiffFileDto::isModeChanged() const
{
    return modeChanged_;
}

void MergeRequestDiffFileDto::setModeChanged(bool value)
{
    modeChanged_ = value;
    modeChangedIsSet_ = true;
}

bool MergeRequestDiffFileDto::modeChangedIsSet() const
{
    return modeChangedIsSet_;
}

void MergeRequestDiffFileDto::unsetmodeChanged()
{
    modeChangedIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getFileType() const
{
    return fileType_;
}

void MergeRequestDiffFileDto::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool MergeRequestDiffFileDto::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void MergeRequestDiffFileDto::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getOldPath() const
{
    return oldPath_;
}

void MergeRequestDiffFileDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool MergeRequestDiffFileDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void MergeRequestDiffFileDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getNewPath() const
{
    return newPath_;
}

void MergeRequestDiffFileDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool MergeRequestDiffFileDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void MergeRequestDiffFileDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getAMode() const
{
    return aMode_;
}

void MergeRequestDiffFileDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool MergeRequestDiffFileDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void MergeRequestDiffFileDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getBMode() const
{
    return bMode_;
}

void MergeRequestDiffFileDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool MergeRequestDiffFileDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void MergeRequestDiffFileDto::unsetbMode()
{
    bModeIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getFilePath() const
{
    return filePath_;
}

void MergeRequestDiffFileDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool MergeRequestDiffFileDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void MergeRequestDiffFileDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

bool MergeRequestDiffFileDto::isNewFile() const
{
    return newFile_;
}

void MergeRequestDiffFileDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool MergeRequestDiffFileDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void MergeRequestDiffFileDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool MergeRequestDiffFileDto::isRenamedFile() const
{
    return renamedFile_;
}

void MergeRequestDiffFileDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool MergeRequestDiffFileDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void MergeRequestDiffFileDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool MergeRequestDiffFileDto::isDeletedFile() const
{
    return deletedFile_;
}

void MergeRequestDiffFileDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool MergeRequestDiffFileDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void MergeRequestDiffFileDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getDiff() const
{
    return diff_;
}

void MergeRequestDiffFileDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool MergeRequestDiffFileDto::diffIsSet() const
{
    return diffIsSet_;
}

void MergeRequestDiffFileDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool MergeRequestDiffFileDto::isBinary() const
{
    return binary_;
}

void MergeRequestDiffFileDto::setBinary(bool value)
{
    binary_ = value;
    binaryIsSet_ = true;
}

bool MergeRequestDiffFileDto::binaryIsSet() const
{
    return binaryIsSet_;
}

void MergeRequestDiffFileDto::unsetbinary()
{
    binaryIsSet_ = false;
}

bool MergeRequestDiffFileDto::isTooLarge() const
{
    return tooLarge_;
}

void MergeRequestDiffFileDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool MergeRequestDiffFileDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void MergeRequestDiffFileDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

bool MergeRequestDiffFileDto::isCollapsed() const
{
    return collapsed_;
}

void MergeRequestDiffFileDto::setCollapsed(bool value)
{
    collapsed_ = value;
    collapsedIsSet_ = true;
}

bool MergeRequestDiffFileDto::collapsedIsSet() const
{
    return collapsedIsSet_;
}

void MergeRequestDiffFileDto::unsetcollapsed()
{
    collapsedIsSet_ = false;
}

std::vector<int32_t>& MergeRequestDiffFileDto::getLineCount()
{
    return lineCount_;
}

void MergeRequestDiffFileDto::setLineCount(std::vector<int32_t> value)
{
    lineCount_ = value;
    lineCountIsSet_ = true;
}

bool MergeRequestDiffFileDto::lineCountIsSet() const
{
    return lineCountIsSet_;
}

void MergeRequestDiffFileDto::unsetlineCount()
{
    lineCountIsSet_ = false;
}

int32_t MergeRequestDiffFileDto::getAddedLines() const
{
    return addedLines_;
}

void MergeRequestDiffFileDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool MergeRequestDiffFileDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void MergeRequestDiffFileDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t MergeRequestDiffFileDto::getRemovedLines() const
{
    return removedLines_;
}

void MergeRequestDiffFileDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool MergeRequestDiffFileDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void MergeRequestDiffFileDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

std::string MergeRequestDiffFileDto::getBlobId() const
{
    return blobId_;
}

void MergeRequestDiffFileDto::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool MergeRequestDiffFileDto::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void MergeRequestDiffFileDto::unsetblobId()
{
    blobIdIsSet_ = false;
}

}
}
}
}
}



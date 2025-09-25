

#include "huaweicloud/codehub/v4/model/FileChangeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




FileChangeDto::FileChangeDto()
{
    filePath_ = "";
    filePathIsSet_ = false;
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    aMode_ = "";
    aModeIsSet_ = false;
    bMode_ = "";
    bModeIsSet_ = false;
    modeChanged_ = false;
    modeChangedIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
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
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    contentSha_ = "";
    contentShaIsSet_ = false;
    diffRefsIsSet_ = false;
}

FileChangeDto::~FileChangeDto() = default;

void FileChangeDto::validate()
{
}

web::json::value FileChangeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
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
    if(modeChangedIsSet_) {
        val[utility::conversions::to_string_t("mode_changed")] = ModelBase::toJson(modeChanged_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
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
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(contentShaIsSet_) {
        val[utility::conversions::to_string_t("content_sha")] = ModelBase::toJson(contentSha_);
    }
    if(diffRefsIsSet_) {
        val[utility::conversions::to_string_t("diff_refs")] = ModelBase::toJson(diffRefs_);
    }

    return val;
}
bool FileChangeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_refs"));
        if(!fieldValue.is_null())
        {
            DiffRefDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRefs(refVal);
        }
    }
    return ok;
}


std::string FileChangeDto::getFilePath() const
{
    return filePath_;
}

void FileChangeDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool FileChangeDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void FileChangeDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string FileChangeDto::getOldPath() const
{
    return oldPath_;
}

void FileChangeDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool FileChangeDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void FileChangeDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string FileChangeDto::getNewPath() const
{
    return newPath_;
}

void FileChangeDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool FileChangeDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void FileChangeDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string FileChangeDto::getAMode() const
{
    return aMode_;
}

void FileChangeDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool FileChangeDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void FileChangeDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string FileChangeDto::getBMode() const
{
    return bMode_;
}

void FileChangeDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool FileChangeDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void FileChangeDto::unsetbMode()
{
    bModeIsSet_ = false;
}

bool FileChangeDto::isModeChanged() const
{
    return modeChanged_;
}

void FileChangeDto::setModeChanged(bool value)
{
    modeChanged_ = value;
    modeChangedIsSet_ = true;
}

bool FileChangeDto::modeChangedIsSet() const
{
    return modeChangedIsSet_;
}

void FileChangeDto::unsetmodeChanged()
{
    modeChangedIsSet_ = false;
}

std::string FileChangeDto::getFileType() const
{
    return fileType_;
}

void FileChangeDto::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool FileChangeDto::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void FileChangeDto::unsetfileType()
{
    fileTypeIsSet_ = false;
}

bool FileChangeDto::isNewFile() const
{
    return newFile_;
}

void FileChangeDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool FileChangeDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void FileChangeDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool FileChangeDto::isRenamedFile() const
{
    return renamedFile_;
}

void FileChangeDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool FileChangeDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void FileChangeDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool FileChangeDto::isDeletedFile() const
{
    return deletedFile_;
}

void FileChangeDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool FileChangeDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void FileChangeDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string FileChangeDto::getDiff() const
{
    return diff_;
}

void FileChangeDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool FileChangeDto::diffIsSet() const
{
    return diffIsSet_;
}

void FileChangeDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool FileChangeDto::isBinary() const
{
    return binary_;
}

void FileChangeDto::setBinary(bool value)
{
    binary_ = value;
    binaryIsSet_ = true;
}

bool FileChangeDto::binaryIsSet() const
{
    return binaryIsSet_;
}

void FileChangeDto::unsetbinary()
{
    binaryIsSet_ = false;
}

bool FileChangeDto::isTooLarge() const
{
    return tooLarge_;
}

void FileChangeDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool FileChangeDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void FileChangeDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

bool FileChangeDto::isCollapsed() const
{
    return collapsed_;
}

void FileChangeDto::setCollapsed(bool value)
{
    collapsed_ = value;
    collapsedIsSet_ = true;
}

bool FileChangeDto::collapsedIsSet() const
{
    return collapsedIsSet_;
}

void FileChangeDto::unsetcollapsed()
{
    collapsedIsSet_ = false;
}

int32_t FileChangeDto::getAddedLines() const
{
    return addedLines_;
}

void FileChangeDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool FileChangeDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void FileChangeDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t FileChangeDto::getRemovedLines() const
{
    return removedLines_;
}

void FileChangeDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool FileChangeDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void FileChangeDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

std::string FileChangeDto::getContentSha() const
{
    return contentSha_;
}

void FileChangeDto::setContentSha(const std::string& value)
{
    contentSha_ = value;
    contentShaIsSet_ = true;
}

bool FileChangeDto::contentShaIsSet() const
{
    return contentShaIsSet_;
}

void FileChangeDto::unsetcontentSha()
{
    contentShaIsSet_ = false;
}

DiffRefDto FileChangeDto::getDiffRefs() const
{
    return diffRefs_;
}

void FileChangeDto::setDiffRefs(const DiffRefDto& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool FileChangeDto::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void FileChangeDto::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

}
}
}
}
}



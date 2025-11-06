

#include "huaweicloud/codeartsrepo/v4/model/DiffDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DiffDto::DiffDto()
{
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
    fileType_ = "";
    fileTypeIsSet_ = false;
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
}

DiffDto::~DiffDto() = default;

void DiffDto::validate()
{
}

web::json::value DiffDto::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
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

    return val;
}
bool DiffDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
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
    return ok;
}


std::string DiffDto::getOldPath() const
{
    return oldPath_;
}

void DiffDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool DiffDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void DiffDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string DiffDto::getNewPath() const
{
    return newPath_;
}

void DiffDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool DiffDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void DiffDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string DiffDto::getAMode() const
{
    return aMode_;
}

void DiffDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool DiffDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void DiffDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string DiffDto::getBMode() const
{
    return bMode_;
}

void DiffDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool DiffDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void DiffDto::unsetbMode()
{
    bModeIsSet_ = false;
}

std::string DiffDto::getFilePath() const
{
    return filePath_;
}

void DiffDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DiffDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void DiffDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

bool DiffDto::isNewFile() const
{
    return newFile_;
}

void DiffDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool DiffDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void DiffDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

std::string DiffDto::getFileType() const
{
    return fileType_;
}

void DiffDto::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool DiffDto::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void DiffDto::unsetfileType()
{
    fileTypeIsSet_ = false;
}

bool DiffDto::isRenamedFile() const
{
    return renamedFile_;
}

void DiffDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool DiffDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void DiffDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool DiffDto::isDeletedFile() const
{
    return deletedFile_;
}

void DiffDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool DiffDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void DiffDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string DiffDto::getDiff() const
{
    return diff_;
}

void DiffDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool DiffDto::diffIsSet() const
{
    return diffIsSet_;
}

void DiffDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool DiffDto::isBinary() const
{
    return binary_;
}

void DiffDto::setBinary(bool value)
{
    binary_ = value;
    binaryIsSet_ = true;
}

bool DiffDto::binaryIsSet() const
{
    return binaryIsSet_;
}

void DiffDto::unsetbinary()
{
    binaryIsSet_ = false;
}

bool DiffDto::isTooLarge() const
{
    return tooLarge_;
}

void DiffDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool DiffDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void DiffDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

bool DiffDto::isCollapsed() const
{
    return collapsed_;
}

void DiffDto::setCollapsed(bool value)
{
    collapsed_ = value;
    collapsedIsSet_ = true;
}

bool DiffDto::collapsedIsSet() const
{
    return collapsedIsSet_;
}

void DiffDto::unsetcollapsed()
{
    collapsedIsSet_ = false;
}

std::vector<int32_t>& DiffDto::getLineCount()
{
    return lineCount_;
}

void DiffDto::setLineCount(std::vector<int32_t> value)
{
    lineCount_ = value;
    lineCountIsSet_ = true;
}

bool DiffDto::lineCountIsSet() const
{
    return lineCountIsSet_;
}

void DiffDto::unsetlineCount()
{
    lineCountIsSet_ = false;
}

int32_t DiffDto::getAddedLines() const
{
    return addedLines_;
}

void DiffDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool DiffDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void DiffDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t DiffDto::getRemovedLines() const
{
    return removedLines_;
}

void DiffDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool DiffDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void DiffDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}



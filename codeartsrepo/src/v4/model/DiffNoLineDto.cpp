

#include "huaweicloud/codeartsrepo/v4/model/DiffNoLineDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DiffNoLineDto::DiffNoLineDto()
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
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
}

DiffNoLineDto::~DiffNoLineDto() = default;

void DiffNoLineDto::validate()
{
}

web::json::value DiffNoLineDto::toJson() const
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
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }

    return val;
}
bool DiffNoLineDto::fromJson(const web::json::value& val)
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


std::string DiffNoLineDto::getOldPath() const
{
    return oldPath_;
}

void DiffNoLineDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool DiffNoLineDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void DiffNoLineDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string DiffNoLineDto::getNewPath() const
{
    return newPath_;
}

void DiffNoLineDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool DiffNoLineDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void DiffNoLineDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string DiffNoLineDto::getAMode() const
{
    return aMode_;
}

void DiffNoLineDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool DiffNoLineDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void DiffNoLineDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string DiffNoLineDto::getBMode() const
{
    return bMode_;
}

void DiffNoLineDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool DiffNoLineDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void DiffNoLineDto::unsetbMode()
{
    bModeIsSet_ = false;
}

std::string DiffNoLineDto::getFilePath() const
{
    return filePath_;
}

void DiffNoLineDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DiffNoLineDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void DiffNoLineDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

bool DiffNoLineDto::isNewFile() const
{
    return newFile_;
}

void DiffNoLineDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool DiffNoLineDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void DiffNoLineDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

std::string DiffNoLineDto::getFileType() const
{
    return fileType_;
}

void DiffNoLineDto::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool DiffNoLineDto::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void DiffNoLineDto::unsetfileType()
{
    fileTypeIsSet_ = false;
}

bool DiffNoLineDto::isRenamedFile() const
{
    return renamedFile_;
}

void DiffNoLineDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool DiffNoLineDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void DiffNoLineDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool DiffNoLineDto::isDeletedFile() const
{
    return deletedFile_;
}

void DiffNoLineDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool DiffNoLineDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void DiffNoLineDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string DiffNoLineDto::getDiff() const
{
    return diff_;
}

void DiffNoLineDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool DiffNoLineDto::diffIsSet() const
{
    return diffIsSet_;
}

void DiffNoLineDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool DiffNoLineDto::isBinary() const
{
    return binary_;
}

void DiffNoLineDto::setBinary(bool value)
{
    binary_ = value;
    binaryIsSet_ = true;
}

bool DiffNoLineDto::binaryIsSet() const
{
    return binaryIsSet_;
}

void DiffNoLineDto::unsetbinary()
{
    binaryIsSet_ = false;
}

bool DiffNoLineDto::isTooLarge() const
{
    return tooLarge_;
}

void DiffNoLineDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool DiffNoLineDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void DiffNoLineDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

bool DiffNoLineDto::isCollapsed() const
{
    return collapsed_;
}

void DiffNoLineDto::setCollapsed(bool value)
{
    collapsed_ = value;
    collapsedIsSet_ = true;
}

bool DiffNoLineDto::collapsedIsSet() const
{
    return collapsedIsSet_;
}

void DiffNoLineDto::unsetcollapsed()
{
    collapsedIsSet_ = false;
}

int32_t DiffNoLineDto::getAddedLines() const
{
    return addedLines_;
}

void DiffNoLineDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool DiffNoLineDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void DiffNoLineDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t DiffNoLineDto::getRemovedLines() const
{
    return removedLines_;
}

void DiffNoLineDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool DiffNoLineDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void DiffNoLineDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}



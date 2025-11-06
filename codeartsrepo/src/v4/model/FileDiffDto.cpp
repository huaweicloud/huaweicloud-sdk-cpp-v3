

#include "huaweicloud/codeartsrepo/v4/model/FileDiffDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




FileDiffDto::FileDiffDto()
{
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPathIsSet_ = false;
    aMode_ = "";
    aModeIsSet_ = false;
    bMode_ = "";
    bModeIsSet_ = false;
    newFile_ = false;
    newFileIsSet_ = false;
    renamedFile_ = false;
    renamedFileIsSet_ = false;
    deletedFile_ = false;
    deletedFileIsSet_ = false;
    diff_ = "";
    diffIsSet_ = false;
    tooLarge_ = false;
    tooLargeIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
}

FileDiffDto::~FileDiffDto() = default;

void FileDiffDto::validate()
{
}

web::json::value FileDiffDto::toJson() const
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
    if(tooLargeIsSet_) {
        val[utility::conversions::to_string_t("too_large")] = ModelBase::toJson(tooLarge_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }

    return val;
}
bool FileDiffDto::fromJson(const web::json::value& val)
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
            Object refVal;
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
    if(val.has_field(utility::conversions::to_string_t("too_large"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("too_large"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTooLarge(refVal);
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


std::string FileDiffDto::getOldPath() const
{
    return oldPath_;
}

void FileDiffDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool FileDiffDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void FileDiffDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

Object FileDiffDto::getNewPath() const
{
    return newPath_;
}

void FileDiffDto::setNewPath(const Object& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool FileDiffDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void FileDiffDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string FileDiffDto::getAMode() const
{
    return aMode_;
}

void FileDiffDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool FileDiffDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void FileDiffDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string FileDiffDto::getBMode() const
{
    return bMode_;
}

void FileDiffDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool FileDiffDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void FileDiffDto::unsetbMode()
{
    bModeIsSet_ = false;
}

bool FileDiffDto::isNewFile() const
{
    return newFile_;
}

void FileDiffDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool FileDiffDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void FileDiffDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool FileDiffDto::isRenamedFile() const
{
    return renamedFile_;
}

void FileDiffDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool FileDiffDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void FileDiffDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool FileDiffDto::isDeletedFile() const
{
    return deletedFile_;
}

void FileDiffDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool FileDiffDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void FileDiffDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string FileDiffDto::getDiff() const
{
    return diff_;
}

void FileDiffDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool FileDiffDto::diffIsSet() const
{
    return diffIsSet_;
}

void FileDiffDto::unsetdiff()
{
    diffIsSet_ = false;
}

bool FileDiffDto::isTooLarge() const
{
    return tooLarge_;
}

void FileDiffDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool FileDiffDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void FileDiffDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

int32_t FileDiffDto::getAddedLines() const
{
    return addedLines_;
}

void FileDiffDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool FileDiffDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void FileDiffDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t FileDiffDto::getRemovedLines() const
{
    return removedLines_;
}

void FileDiffDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool FileDiffDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void FileDiffDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}



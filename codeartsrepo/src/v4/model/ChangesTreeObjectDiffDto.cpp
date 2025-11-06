

#include "huaweicloud/codeartsrepo/v4/model/ChangesTreeObjectDiffDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ChangesTreeObjectDiffDto::ChangesTreeObjectDiffDto()
{
    diff_ = "";
    diffIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    oldPath_ = "";
    oldPathIsSet_ = false;
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
    tooLarge_ = false;
    tooLargeIsSet_ = false;
}

ChangesTreeObjectDiffDto::~ChangesTreeObjectDiffDto() = default;

void ChangesTreeObjectDiffDto::validate()
{
}

web::json::value ChangesTreeObjectDiffDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diffIsSet_) {
        val[utility::conversions::to_string_t("diff")] = ModelBase::toJson(diff_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }
    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
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
    if(tooLargeIsSet_) {
        val[utility::conversions::to_string_t("too_large")] = ModelBase::toJson(tooLarge_);
    }

    return val;
}
bool ChangesTreeObjectDiffDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiff(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("old_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("too_large"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("too_large"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTooLarge(refVal);
        }
    }
    return ok;
}


std::string ChangesTreeObjectDiffDto::getDiff() const
{
    return diff_;
}

void ChangesTreeObjectDiffDto::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::diffIsSet() const
{
    return diffIsSet_;
}

void ChangesTreeObjectDiffDto::unsetdiff()
{
    diffIsSet_ = false;
}

std::string ChangesTreeObjectDiffDto::getNewPath() const
{
    return newPath_;
}

void ChangesTreeObjectDiffDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void ChangesTreeObjectDiffDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string ChangesTreeObjectDiffDto::getOldPath() const
{
    return oldPath_;
}

void ChangesTreeObjectDiffDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void ChangesTreeObjectDiffDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string ChangesTreeObjectDiffDto::getAMode() const
{
    return aMode_;
}

void ChangesTreeObjectDiffDto::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::aModeIsSet() const
{
    return aModeIsSet_;
}

void ChangesTreeObjectDiffDto::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string ChangesTreeObjectDiffDto::getBMode() const
{
    return bMode_;
}

void ChangesTreeObjectDiffDto::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::bModeIsSet() const
{
    return bModeIsSet_;
}

void ChangesTreeObjectDiffDto::unsetbMode()
{
    bModeIsSet_ = false;
}

bool ChangesTreeObjectDiffDto::isNewFile() const
{
    return newFile_;
}

void ChangesTreeObjectDiffDto::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::newFileIsSet() const
{
    return newFileIsSet_;
}

void ChangesTreeObjectDiffDto::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool ChangesTreeObjectDiffDto::isRenamedFile() const
{
    return renamedFile_;
}

void ChangesTreeObjectDiffDto::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void ChangesTreeObjectDiffDto::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool ChangesTreeObjectDiffDto::isDeletedFile() const
{
    return deletedFile_;
}

void ChangesTreeObjectDiffDto::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void ChangesTreeObjectDiffDto::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

bool ChangesTreeObjectDiffDto::isTooLarge() const
{
    return tooLarge_;
}

void ChangesTreeObjectDiffDto::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool ChangesTreeObjectDiffDto::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void ChangesTreeObjectDiffDto::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

}
}
}
}
}



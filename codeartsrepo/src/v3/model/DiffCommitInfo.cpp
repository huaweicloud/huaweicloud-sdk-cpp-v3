

#include "huaweicloud/codeartsrepo/v3/model/DiffCommitInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DiffCommitInfo::DiffCommitInfo()
{
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
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
}

DiffCommitInfo::~DiffCommitInfo() = default;

void DiffCommitInfo::validate()
{
}

web::json::value DiffCommitInfo::toJson() const
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

    return val;
}
bool DiffCommitInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DiffCommitInfo::getOldPath() const
{
    return oldPath_;
}

void DiffCommitInfo::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool DiffCommitInfo::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void DiffCommitInfo::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string DiffCommitInfo::getNewPath() const
{
    return newPath_;
}

void DiffCommitInfo::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool DiffCommitInfo::newPathIsSet() const
{
    return newPathIsSet_;
}

void DiffCommitInfo::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string DiffCommitInfo::getAMode() const
{
    return aMode_;
}

void DiffCommitInfo::setAMode(const std::string& value)
{
    aMode_ = value;
    aModeIsSet_ = true;
}

bool DiffCommitInfo::aModeIsSet() const
{
    return aModeIsSet_;
}

void DiffCommitInfo::unsetaMode()
{
    aModeIsSet_ = false;
}

std::string DiffCommitInfo::getBMode() const
{
    return bMode_;
}

void DiffCommitInfo::setBMode(const std::string& value)
{
    bMode_ = value;
    bModeIsSet_ = true;
}

bool DiffCommitInfo::bModeIsSet() const
{
    return bModeIsSet_;
}

void DiffCommitInfo::unsetbMode()
{
    bModeIsSet_ = false;
}

bool DiffCommitInfo::isNewFile() const
{
    return newFile_;
}

void DiffCommitInfo::setNewFile(bool value)
{
    newFile_ = value;
    newFileIsSet_ = true;
}

bool DiffCommitInfo::newFileIsSet() const
{
    return newFileIsSet_;
}

void DiffCommitInfo::unsetnewFile()
{
    newFileIsSet_ = false;
}

bool DiffCommitInfo::isRenamedFile() const
{
    return renamedFile_;
}

void DiffCommitInfo::setRenamedFile(bool value)
{
    renamedFile_ = value;
    renamedFileIsSet_ = true;
}

bool DiffCommitInfo::renamedFileIsSet() const
{
    return renamedFileIsSet_;
}

void DiffCommitInfo::unsetrenamedFile()
{
    renamedFileIsSet_ = false;
}

bool DiffCommitInfo::isDeletedFile() const
{
    return deletedFile_;
}

void DiffCommitInfo::setDeletedFile(bool value)
{
    deletedFile_ = value;
    deletedFileIsSet_ = true;
}

bool DiffCommitInfo::deletedFileIsSet() const
{
    return deletedFileIsSet_;
}

void DiffCommitInfo::unsetdeletedFile()
{
    deletedFileIsSet_ = false;
}

std::string DiffCommitInfo::getDiff() const
{
    return diff_;
}

void DiffCommitInfo::setDiff(const std::string& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool DiffCommitInfo::diffIsSet() const
{
    return diffIsSet_;
}

void DiffCommitInfo::unsetdiff()
{
    diffIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/AttachmentEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AttachmentEntity::AttachmentEntity()
{
    id_ = "";
    idIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    diskDirectory_ = "";
    diskDirectoryIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    storeFilename_ = "";
    storeFilenameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    modifiedByIsSet_ = false;
    createdByIsSet_ = false;
    attachmentType_ = "";
    attachmentTypeIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
}

AttachmentEntity::~AttachmentEntity() = default;

void AttachmentEntity::validate()
{
}

web::json::value AttachmentEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(diskDirectoryIsSet_) {
        val[utility::conversions::to_string_t("disk_directory")] = ModelBase::toJson(diskDirectory_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(storeFilenameIsSet_) {
        val[utility::conversions::to_string_t("store_filename")] = ModelBase::toJson(storeFilename_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(attachmentTypeIsSet_) {
        val[utility::conversions::to_string_t("attachment_type")] = ModelBase::toJson(attachmentType_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }

    return val;
}
bool AttachmentEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_directory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_directory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskDirectory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("store_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    return ok;
}


std::string AttachmentEntity::getId() const
{
    return id_;
}

void AttachmentEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AttachmentEntity::idIsSet() const
{
    return idIsSet_;
}

void AttachmentEntity::unsetid()
{
    idIsSet_ = false;
}

std::string AttachmentEntity::getIssueId() const
{
    return issueId_;
}

void AttachmentEntity::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AttachmentEntity::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AttachmentEntity::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AttachmentEntity::getDiskDirectory() const
{
    return diskDirectory_;
}

void AttachmentEntity::setDiskDirectory(const std::string& value)
{
    diskDirectory_ = value;
    diskDirectoryIsSet_ = true;
}

bool AttachmentEntity::diskDirectoryIsSet() const
{
    return diskDirectoryIsSet_;
}

void AttachmentEntity::unsetdiskDirectory()
{
    diskDirectoryIsSet_ = false;
}

std::string AttachmentEntity::getFileSize() const
{
    return fileSize_;
}

void AttachmentEntity::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool AttachmentEntity::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void AttachmentEntity::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string AttachmentEntity::getStoreFilename() const
{
    return storeFilename_;
}

void AttachmentEntity::setStoreFilename(const std::string& value)
{
    storeFilename_ = value;
    storeFilenameIsSet_ = true;
}

bool AttachmentEntity::storeFilenameIsSet() const
{
    return storeFilenameIsSet_;
}

void AttachmentEntity::unsetstoreFilename()
{
    storeFilenameIsSet_ = false;
}

std::string AttachmentEntity::getTitle() const
{
    return title_;
}

void AttachmentEntity::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AttachmentEntity::titleIsSet() const
{
    return titleIsSet_;
}

void AttachmentEntity::unsettitle()
{
    titleIsSet_ = false;
}

UserEntity AttachmentEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void AttachmentEntity::setModifiedBy(const UserEntity& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool AttachmentEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void AttachmentEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

UserEntity AttachmentEntity::getCreatedBy() const
{
    return createdBy_;
}

void AttachmentEntity::setCreatedBy(const UserEntity& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool AttachmentEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void AttachmentEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string AttachmentEntity::getAttachmentType() const
{
    return attachmentType_;
}

void AttachmentEntity::setAttachmentType(const std::string& value)
{
    attachmentType_ = value;
    attachmentTypeIsSet_ = true;
}

bool AttachmentEntity::attachmentTypeIsSet() const
{
    return attachmentTypeIsSet_;
}

void AttachmentEntity::unsetattachmentType()
{
    attachmentTypeIsSet_ = false;
}

std::string AttachmentEntity::getCreatedDate() const
{
    return createdDate_;
}

void AttachmentEntity::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AttachmentEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AttachmentEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

}
}
}
}
}



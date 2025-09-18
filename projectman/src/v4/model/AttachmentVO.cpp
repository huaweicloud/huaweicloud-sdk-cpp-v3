

#include "huaweicloud/projectman/v4/model/AttachmentVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AttachmentVO::AttachmentVO()
{
    attachmentType_ = "";
    attachmentTypeIsSet_ = false;
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    diskDirectory_ = "";
    diskDirectoryIsSet_ = false;
    filesize_ = "";
    filesizeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    modifiedByIsSet_ = false;
    storeFilename_ = "";
    storeFilenameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    workitemId_ = "";
    workitemIdIsSet_ = false;
}

AttachmentVO::~AttachmentVO() = default;

void AttachmentVO::validate()
{
}

web::json::value AttachmentVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachmentTypeIsSet_) {
        val[utility::conversions::to_string_t("attachment_type")] = ModelBase::toJson(attachmentType_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(diskDirectoryIsSet_) {
        val[utility::conversions::to_string_t("disk_directory")] = ModelBase::toJson(diskDirectory_);
    }
    if(filesizeIsSet_) {
        val[utility::conversions::to_string_t("filesize")] = ModelBase::toJson(filesize_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(storeFilenameIsSet_) {
        val[utility::conversions::to_string_t("store_filename")] = ModelBase::toJson(storeFilename_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(workitemIdIsSet_) {
        val[utility::conversions::to_string_t("workitem_id")] = ModelBase::toJson(workitemId_);
    }

    return val;
}
bool AttachmentVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachment_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("filesize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filesize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemId(refVal);
        }
    }
    return ok;
}


std::string AttachmentVO::getAttachmentType() const
{
    return attachmentType_;
}

void AttachmentVO::setAttachmentType(const std::string& value)
{
    attachmentType_ = value;
    attachmentTypeIsSet_ = true;
}

bool AttachmentVO::attachmentTypeIsSet() const
{
    return attachmentTypeIsSet_;
}

void AttachmentVO::unsetattachmentType()
{
    attachmentTypeIsSet_ = false;
}

Object AttachmentVO::getCreatedBy() const
{
    return createdBy_;
}

void AttachmentVO::setCreatedBy(const Object& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool AttachmentVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void AttachmentVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string AttachmentVO::getCreatedDate() const
{
    return createdDate_;
}

void AttachmentVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AttachmentVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AttachmentVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string AttachmentVO::getDescription() const
{
    return description_;
}

void AttachmentVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AttachmentVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AttachmentVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AttachmentVO::getDiskDirectory() const
{
    return diskDirectory_;
}

void AttachmentVO::setDiskDirectory(const std::string& value)
{
    diskDirectory_ = value;
    diskDirectoryIsSet_ = true;
}

bool AttachmentVO::diskDirectoryIsSet() const
{
    return diskDirectoryIsSet_;
}

void AttachmentVO::unsetdiskDirectory()
{
    diskDirectoryIsSet_ = false;
}

std::string AttachmentVO::getFilesize() const
{
    return filesize_;
}

void AttachmentVO::setFilesize(const std::string& value)
{
    filesize_ = value;
    filesizeIsSet_ = true;
}

bool AttachmentVO::filesizeIsSet() const
{
    return filesizeIsSet_;
}

void AttachmentVO::unsetfilesize()
{
    filesizeIsSet_ = false;
}

std::string AttachmentVO::getId() const
{
    return id_;
}

void AttachmentVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AttachmentVO::idIsSet() const
{
    return idIsSet_;
}

void AttachmentVO::unsetid()
{
    idIsSet_ = false;
}

Object AttachmentVO::getModifiedBy() const
{
    return modifiedBy_;
}

void AttachmentVO::setModifiedBy(const Object& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool AttachmentVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void AttachmentVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string AttachmentVO::getStoreFilename() const
{
    return storeFilename_;
}

void AttachmentVO::setStoreFilename(const std::string& value)
{
    storeFilename_ = value;
    storeFilenameIsSet_ = true;
}

bool AttachmentVO::storeFilenameIsSet() const
{
    return storeFilenameIsSet_;
}

void AttachmentVO::unsetstoreFilename()
{
    storeFilenameIsSet_ = false;
}

std::string AttachmentVO::getTitle() const
{
    return title_;
}

void AttachmentVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AttachmentVO::titleIsSet() const
{
    return titleIsSet_;
}

void AttachmentVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string AttachmentVO::getWorkitemId() const
{
    return workitemId_;
}

void AttachmentVO::setWorkitemId(const std::string& value)
{
    workitemId_ = value;
    workitemIdIsSet_ = true;
}

bool AttachmentVO::workitemIdIsSet() const
{
    return workitemIdIsSet_;
}

void AttachmentVO::unsetworkitemId()
{
    workitemIdIsSet_ = false;
}

}
}
}
}
}



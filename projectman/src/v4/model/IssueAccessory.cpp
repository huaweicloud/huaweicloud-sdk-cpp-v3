

#include "huaweicloud/projectman/v4/model/IssueAccessory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueAccessory::IssueAccessory()
{
    attachmentId_ = 0;
    attachmentIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    creatorNumId_ = 0;
    creatorNumIdIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    containerType_ = "";
    containerTypeIsSet_ = false;
    diskFileName_ = "";
    diskFileNameIsSet_ = false;
    digest_ = "";
    digestIsSet_ = false;
    diskDirectory_ = "";
    diskDirectoryIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
}

IssueAccessory::~IssueAccessory() = default;

void IssueAccessory::validate()
{
}

web::json::value IssueAccessory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachmentIdIsSet_) {
        val[utility::conversions::to_string_t("attachment_id")] = ModelBase::toJson(attachmentId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(creatorNumIdIsSet_) {
        val[utility::conversions::to_string_t("creator_num_id")] = ModelBase::toJson(creatorNumId_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(containerTypeIsSet_) {
        val[utility::conversions::to_string_t("container_type")] = ModelBase::toJson(containerType_);
    }
    if(diskFileNameIsSet_) {
        val[utility::conversions::to_string_t("disk_file_name")] = ModelBase::toJson(diskFileName_);
    }
    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(diskDirectoryIsSet_) {
        val[utility::conversions::to_string_t("disk_directory")] = ModelBase::toJson(diskDirectory_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }

    return val;
}
bool IssueAccessory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    return ok;
}


int32_t IssueAccessory::getAttachmentId() const
{
    return attachmentId_;
}

void IssueAccessory::setAttachmentId(int32_t value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool IssueAccessory::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void IssueAccessory::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

int32_t IssueAccessory::getIssueId() const
{
    return issueId_;
}

void IssueAccessory::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool IssueAccessory::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void IssueAccessory::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t IssueAccessory::getCreatorNumId() const
{
    return creatorNumId_;
}

void IssueAccessory::setCreatorNumId(int32_t value)
{
    creatorNumId_ = value;
    creatorNumIdIsSet_ = true;
}

bool IssueAccessory::creatorNumIdIsSet() const
{
    return creatorNumIdIsSet_;
}

void IssueAccessory::unsetcreatorNumId()
{
    creatorNumIdIsSet_ = false;
}

std::string IssueAccessory::getCreatedDate() const
{
    return createdDate_;
}

void IssueAccessory::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool IssueAccessory::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void IssueAccessory::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string IssueAccessory::getFileName() const
{
    return fileName_;
}

void IssueAccessory::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool IssueAccessory::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void IssueAccessory::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string IssueAccessory::getContainerType() const
{
    return containerType_;
}

void IssueAccessory::setContainerType(const std::string& value)
{
    containerType_ = value;
    containerTypeIsSet_ = true;
}

bool IssueAccessory::containerTypeIsSet() const
{
    return containerTypeIsSet_;
}

void IssueAccessory::unsetcontainerType()
{
    containerTypeIsSet_ = false;
}

std::string IssueAccessory::getDiskFileName() const
{
    return diskFileName_;
}

void IssueAccessory::setDiskFileName(const std::string& value)
{
    diskFileName_ = value;
    diskFileNameIsSet_ = true;
}

bool IssueAccessory::diskFileNameIsSet() const
{
    return diskFileNameIsSet_;
}

void IssueAccessory::unsetdiskFileName()
{
    diskFileNameIsSet_ = false;
}

std::string IssueAccessory::getDigest() const
{
    return digest_;
}

void IssueAccessory::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool IssueAccessory::digestIsSet() const
{
    return digestIsSet_;
}

void IssueAccessory::unsetdigest()
{
    digestIsSet_ = false;
}

std::string IssueAccessory::getDiskDirectory() const
{
    return diskDirectory_;
}

void IssueAccessory::setDiskDirectory(const std::string& value)
{
    diskDirectory_ = value;
    diskDirectoryIsSet_ = true;
}

bool IssueAccessory::diskDirectoryIsSet() const
{
    return diskDirectoryIsSet_;
}

void IssueAccessory::unsetdiskDirectory()
{
    diskDirectoryIsSet_ = false;
}

std::string IssueAccessory::getCreatorId() const
{
    return creatorId_;
}

void IssueAccessory::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool IssueAccessory::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void IssueAccessory::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

}
}
}
}
}



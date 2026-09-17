

#include "huaweicloud/projectman/v4/model/IssueAccessoryV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueAccessoryV2::IssueAccessoryV2()
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

IssueAccessoryV2::~IssueAccessoryV2() = default;

void IssueAccessoryV2::validate()
{
}

web::json::value IssueAccessoryV2::toJson() const
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
bool IssueAccessoryV2::fromJson(const web::json::value& val)
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


int32_t IssueAccessoryV2::getAttachmentId() const
{
    return attachmentId_;
}

void IssueAccessoryV2::setAttachmentId(int32_t value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool IssueAccessoryV2::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void IssueAccessoryV2::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

int32_t IssueAccessoryV2::getIssueId() const
{
    return issueId_;
}

void IssueAccessoryV2::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool IssueAccessoryV2::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void IssueAccessoryV2::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t IssueAccessoryV2::getCreatorNumId() const
{
    return creatorNumId_;
}

void IssueAccessoryV2::setCreatorNumId(int32_t value)
{
    creatorNumId_ = value;
    creatorNumIdIsSet_ = true;
}

bool IssueAccessoryV2::creatorNumIdIsSet() const
{
    return creatorNumIdIsSet_;
}

void IssueAccessoryV2::unsetcreatorNumId()
{
    creatorNumIdIsSet_ = false;
}

std::string IssueAccessoryV2::getCreatedDate() const
{
    return createdDate_;
}

void IssueAccessoryV2::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool IssueAccessoryV2::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void IssueAccessoryV2::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string IssueAccessoryV2::getFileName() const
{
    return fileName_;
}

void IssueAccessoryV2::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool IssueAccessoryV2::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void IssueAccessoryV2::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string IssueAccessoryV2::getContainerType() const
{
    return containerType_;
}

void IssueAccessoryV2::setContainerType(const std::string& value)
{
    containerType_ = value;
    containerTypeIsSet_ = true;
}

bool IssueAccessoryV2::containerTypeIsSet() const
{
    return containerTypeIsSet_;
}

void IssueAccessoryV2::unsetcontainerType()
{
    containerTypeIsSet_ = false;
}

std::string IssueAccessoryV2::getDiskFileName() const
{
    return diskFileName_;
}

void IssueAccessoryV2::setDiskFileName(const std::string& value)
{
    diskFileName_ = value;
    diskFileNameIsSet_ = true;
}

bool IssueAccessoryV2::diskFileNameIsSet() const
{
    return diskFileNameIsSet_;
}

void IssueAccessoryV2::unsetdiskFileName()
{
    diskFileNameIsSet_ = false;
}

std::string IssueAccessoryV2::getDigest() const
{
    return digest_;
}

void IssueAccessoryV2::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool IssueAccessoryV2::digestIsSet() const
{
    return digestIsSet_;
}

void IssueAccessoryV2::unsetdigest()
{
    digestIsSet_ = false;
}

std::string IssueAccessoryV2::getDiskDirectory() const
{
    return diskDirectory_;
}

void IssueAccessoryV2::setDiskDirectory(const std::string& value)
{
    diskDirectory_ = value;
    diskDirectoryIsSet_ = true;
}

bool IssueAccessoryV2::diskDirectoryIsSet() const
{
    return diskDirectoryIsSet_;
}

void IssueAccessoryV2::unsetdiskDirectory()
{
    diskDirectoryIsSet_ = false;
}

std::string IssueAccessoryV2::getCreatorId() const
{
    return creatorId_;
}

void IssueAccessoryV2::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool IssueAccessoryV2::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void IssueAccessoryV2::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

}
}
}
}
}



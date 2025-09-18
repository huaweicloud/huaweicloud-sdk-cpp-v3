

#include "huaweicloud/projectman/v4/model/UploadAttachmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadAttachmentsResponse::UploadAttachmentsResponse()
{
    id_ = 0;
    idIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    diskFilename_ = "";
    diskFilenameIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

UploadAttachmentsResponse::~UploadAttachmentsResponse() = default;

void UploadAttachmentsResponse::validate()
{
}

web::json::value UploadAttachmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(diskFilenameIsSet_) {
        val[utility::conversions::to_string_t("disk_filename")] = ModelBase::toJson(diskFilename_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool UploadAttachmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFilename(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


int32_t UploadAttachmentsResponse::getId() const
{
    return id_;
}

void UploadAttachmentsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UploadAttachmentsResponse::idIsSet() const
{
    return idIsSet_;
}

void UploadAttachmentsResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UploadAttachmentsResponse::getIssueId() const
{
    return issueId_;
}

void UploadAttachmentsResponse::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UploadAttachmentsResponse::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UploadAttachmentsResponse::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string UploadAttachmentsResponse::getProjectId() const
{
    return projectId_;
}

void UploadAttachmentsResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadAttachmentsResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadAttachmentsResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UploadAttachmentsResponse::getDiskFilename() const
{
    return diskFilename_;
}

void UploadAttachmentsResponse::setDiskFilename(const std::string& value)
{
    diskFilename_ = value;
    diskFilenameIsSet_ = true;
}

bool UploadAttachmentsResponse::diskFilenameIsSet() const
{
    return diskFilenameIsSet_;
}

void UploadAttachmentsResponse::unsetdiskFilename()
{
    diskFilenameIsSet_ = false;
}

std::string UploadAttachmentsResponse::getFileName() const
{
    return fileName_;
}

void UploadAttachmentsResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool UploadAttachmentsResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void UploadAttachmentsResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string UploadAttachmentsResponse::getSize() const
{
    return size_;
}

void UploadAttachmentsResponse::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UploadAttachmentsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void UploadAttachmentsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}



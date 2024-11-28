

#include "huaweicloud/gaussdb/v3/model/DownloadSlowLogFileItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadSlowLogFileItem::DownloadSlowLogFileItem()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
}

DownloadSlowLogFileItem::~DownloadSlowLogFileItem() = default;

void DownloadSlowLogFileItem::validate()
{
}

web::json::value DownloadSlowLogFileItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileLinkIsSet_) {
        val[utility::conversions::to_string_t("file_link")] = ModelBase::toJson(fileLink_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool DownloadSlowLogFileItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string DownloadSlowLogFileItem::getJobId() const
{
    return jobId_;
}

void DownloadSlowLogFileItem::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadSlowLogFileItem::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadSlowLogFileItem::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DownloadSlowLogFileItem::getFileName() const
{
    return fileName_;
}

void DownloadSlowLogFileItem::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadSlowLogFileItem::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadSlowLogFileItem::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadSlowLogFileItem::getStatus() const
{
    return status_;
}

void DownloadSlowLogFileItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadSlowLogFileItem::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadSlowLogFileItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DownloadSlowLogFileItem::getFileSize() const
{
    return fileSize_;
}

void DownloadSlowLogFileItem::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DownloadSlowLogFileItem::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DownloadSlowLogFileItem::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DownloadSlowLogFileItem::getFileLink() const
{
    return fileLink_;
}

void DownloadSlowLogFileItem::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool DownloadSlowLogFileItem::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void DownloadSlowLogFileItem::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

int64_t DownloadSlowLogFileItem::getCreateAt() const
{
    return createAt_;
}

void DownloadSlowLogFileItem::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DownloadSlowLogFileItem::createAtIsSet() const
{
    return createAtIsSet_;
}

void DownloadSlowLogFileItem::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t DownloadSlowLogFileItem::getUpdatedAt() const
{
    return updatedAt_;
}

void DownloadSlowLogFileItem::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DownloadSlowLogFileItem::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DownloadSlowLogFileItem::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}



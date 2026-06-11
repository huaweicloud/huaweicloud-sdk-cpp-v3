

#include "huaweicloud/rds/v3/model/DownloadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DownloadInfo::DownloadInfo()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
    fileLinkExpirationTime_ = 0L;
    fileLinkExpirationTimeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

DownloadInfo::~DownloadInfo() = default;

void DownloadInfo::validate()
{
}

web::json::value DownloadInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
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
    if(fileLinkExpirationTimeIsSet_) {
        val[utility::conversions::to_string_t("file_link_expiration_time")] = ModelBase::toJson(fileLinkExpirationTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool DownloadInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_link_expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_link_expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLinkExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string DownloadInfo::getWorkflowId() const
{
    return workflowId_;
}

void DownloadInfo::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DownloadInfo::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DownloadInfo::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string DownloadInfo::getFileName() const
{
    return fileName_;
}

void DownloadInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadInfo::getStatus() const
{
    return status_;
}

void DownloadInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadInfo::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DownloadInfo::getFileSize() const
{
    return fileSize_;
}

void DownloadInfo::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DownloadInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DownloadInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DownloadInfo::getFileLink() const
{
    return fileLink_;
}

void DownloadInfo::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool DownloadInfo::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void DownloadInfo::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

int64_t DownloadInfo::getFileLinkExpirationTime() const
{
    return fileLinkExpirationTime_;
}

void DownloadInfo::setFileLinkExpirationTime(int64_t value)
{
    fileLinkExpirationTime_ = value;
    fileLinkExpirationTimeIsSet_ = true;
}

bool DownloadInfo::fileLinkExpirationTimeIsSet() const
{
    return fileLinkExpirationTimeIsSet_;
}

void DownloadInfo::unsetfileLinkExpirationTime()
{
    fileLinkExpirationTimeIsSet_ = false;
}

int64_t DownloadInfo::getStartTime() const
{
    return startTime_;
}

void DownloadInfo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DownloadInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DownloadInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DownloadInfo::getEndTime() const
{
    return endTime_;
}

void DownloadInfo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DownloadInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DownloadInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



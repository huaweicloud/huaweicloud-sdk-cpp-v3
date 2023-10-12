

#include "huaweicloud/rds/v3/model/SlowlogDownloadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowlogDownloadInfo::SlowlogDownloadInfo()
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
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

SlowlogDownloadInfo::~SlowlogDownloadInfo() = default;

void SlowlogDownloadInfo::validate()
{
}

web::json::value SlowlogDownloadInfo::toJson() const
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
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool SlowlogDownloadInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string SlowlogDownloadInfo::getWorkflowId() const
{
    return workflowId_;
}

void SlowlogDownloadInfo::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool SlowlogDownloadInfo::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void SlowlogDownloadInfo::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string SlowlogDownloadInfo::getFileName() const
{
    return fileName_;
}

void SlowlogDownloadInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool SlowlogDownloadInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void SlowlogDownloadInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string SlowlogDownloadInfo::getStatus() const
{
    return status_;
}

void SlowlogDownloadInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SlowlogDownloadInfo::statusIsSet() const
{
    return statusIsSet_;
}

void SlowlogDownloadInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SlowlogDownloadInfo::getFileSize() const
{
    return fileSize_;
}

void SlowlogDownloadInfo::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool SlowlogDownloadInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void SlowlogDownloadInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string SlowlogDownloadInfo::getFileLink() const
{
    return fileLink_;
}

void SlowlogDownloadInfo::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool SlowlogDownloadInfo::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void SlowlogDownloadInfo::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

int64_t SlowlogDownloadInfo::getCreateAt() const
{
    return createAt_;
}

void SlowlogDownloadInfo::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool SlowlogDownloadInfo::createAtIsSet() const
{
    return createAtIsSet_;
}

void SlowlogDownloadInfo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t SlowlogDownloadInfo::getUpdateAt() const
{
    return updateAt_;
}

void SlowlogDownloadInfo::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool SlowlogDownloadInfo::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void SlowlogDownloadInfo::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}



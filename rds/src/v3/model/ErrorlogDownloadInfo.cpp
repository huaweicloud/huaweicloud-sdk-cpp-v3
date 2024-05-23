

#include "huaweicloud/rds/v3/model/ErrorlogDownloadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ErrorlogDownloadInfo::ErrorlogDownloadInfo()
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

ErrorlogDownloadInfo::~ErrorlogDownloadInfo() = default;

void ErrorlogDownloadInfo::validate()
{
}

web::json::value ErrorlogDownloadInfo::toJson() const
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
bool ErrorlogDownloadInfo::fromJson(const web::json::value& val)
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


std::string ErrorlogDownloadInfo::getWorkflowId() const
{
    return workflowId_;
}

void ErrorlogDownloadInfo::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ErrorlogDownloadInfo::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ErrorlogDownloadInfo::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ErrorlogDownloadInfo::getFileName() const
{
    return fileName_;
}

void ErrorlogDownloadInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ErrorlogDownloadInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ErrorlogDownloadInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ErrorlogDownloadInfo::getStatus() const
{
    return status_;
}

void ErrorlogDownloadInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ErrorlogDownloadInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ErrorlogDownloadInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ErrorlogDownloadInfo::getFileSize() const
{
    return fileSize_;
}

void ErrorlogDownloadInfo::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ErrorlogDownloadInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ErrorlogDownloadInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ErrorlogDownloadInfo::getFileLink() const
{
    return fileLink_;
}

void ErrorlogDownloadInfo::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool ErrorlogDownloadInfo::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void ErrorlogDownloadInfo::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

int64_t ErrorlogDownloadInfo::getCreateAt() const
{
    return createAt_;
}

void ErrorlogDownloadInfo::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ErrorlogDownloadInfo::createAtIsSet() const
{
    return createAtIsSet_;
}

void ErrorlogDownloadInfo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ErrorlogDownloadInfo::getUpdateAt() const
{
    return updateAt_;
}

void ErrorlogDownloadInfo::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ErrorlogDownloadInfo::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ErrorlogDownloadInfo::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}



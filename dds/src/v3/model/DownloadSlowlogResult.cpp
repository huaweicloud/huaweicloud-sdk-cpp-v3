

#include "huaweicloud/dds/v3/model/DownloadSlowlogResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DownloadSlowlogResult::DownloadSlowlogResult()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

DownloadSlowlogResult::~DownloadSlowlogResult() = default;

void DownloadSlowlogResult::validate()
{
}

web::json::value DownloadSlowlogResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
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
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}

bool DownloadSlowlogResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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

std::string DownloadSlowlogResult::getNodeName() const
{
    return nodeName_;
}

void DownloadSlowlogResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool DownloadSlowlogResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void DownloadSlowlogResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string DownloadSlowlogResult::getFileName() const
{
    return fileName_;
}

void DownloadSlowlogResult::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadSlowlogResult::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadSlowlogResult::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadSlowlogResult::getStatus() const
{
    return status_;
}

void DownloadSlowlogResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadSlowlogResult::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadSlowlogResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DownloadSlowlogResult::getFileSize() const
{
    return fileSize_;
}

void DownloadSlowlogResult::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DownloadSlowlogResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DownloadSlowlogResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DownloadSlowlogResult::getFileLink() const
{
    return fileLink_;
}

void DownloadSlowlogResult::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool DownloadSlowlogResult::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void DownloadSlowlogResult::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

int64_t DownloadSlowlogResult::getUpdateAt() const
{
    return updateAt_;
}

void DownloadSlowlogResult::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DownloadSlowlogResult::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DownloadSlowlogResult::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}



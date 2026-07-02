

#include "huaweicloud/gaussdb/v3/model/DownLoadFileInfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownLoadFileInfoItem::DownLoadFileInfoItem()
{
    id_ = "";
    idIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0;
    fileSizeIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
}

DownLoadFileInfoItem::~DownLoadFileInfoItem() = default;

void DownLoadFileInfoItem::validate()
{
}

web::json::value DownLoadFileInfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool DownLoadFileInfoItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


std::string DownLoadFileInfoItem::getId() const
{
    return id_;
}

void DownLoadFileInfoItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DownLoadFileInfoItem::idIsSet() const
{
    return idIsSet_;
}

void DownLoadFileInfoItem::unsetid()
{
    idIsSet_ = false;
}

std::string DownLoadFileInfoItem::getFileName() const
{
    return fileName_;
}

void DownLoadFileInfoItem::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownLoadFileInfoItem::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownLoadFileInfoItem::unsetfileName()
{
    fileNameIsSet_ = false;
}

int32_t DownLoadFileInfoItem::getFileSize() const
{
    return fileSize_;
}

void DownLoadFileInfoItem::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DownLoadFileInfoItem::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DownLoadFileInfoItem::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DownLoadFileInfoItem::getDownloadUrl() const
{
    return downloadUrl_;
}

void DownLoadFileInfoItem::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool DownLoadFileInfoItem::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void DownLoadFileInfoItem::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string DownLoadFileInfoItem::getExpireTime() const
{
    return expireTime_;
}

void DownLoadFileInfoItem::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool DownLoadFileInfoItem::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void DownLoadFileInfoItem::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdb/v3/model/FileInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




FileInfo::FileInfo()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    linkExpiredTime_ = "";
    linkExpiredTimeIsSet_ = false;
}

FileInfo::~FileInfo() = default;

void FileInfo::validate()
{
}

web::json::value FileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(linkExpiredTimeIsSet_) {
        val[utility::conversions::to_string_t("link_expired_time")] = ModelBase::toJson(linkExpiredTime_);
    }

    return val;
}

bool FileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_expired_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkExpiredTime(refVal);
        }
    }
    return ok;
}

std::string FileInfo::getName() const
{
    return name_;
}

void FileInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FileInfo::nameIsSet() const
{
    return nameIsSet_;
}

void FileInfo::unsetname()
{
    nameIsSet_ = false;
}

int64_t FileInfo::getSize() const
{
    return size_;
}

void FileInfo::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool FileInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void FileInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string FileInfo::getUpdatedTime() const
{
    return updatedTime_;
}

void FileInfo::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool FileInfo::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void FileInfo::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string FileInfo::getDownloadLink() const
{
    return downloadLink_;
}

void FileInfo::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool FileInfo::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void FileInfo::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string FileInfo::getLinkExpiredTime() const
{
    return linkExpiredTime_;
}

void FileInfo::setLinkExpiredTime(const std::string& value)
{
    linkExpiredTime_ = value;
    linkExpiredTimeIsSet_ = true;
}

bool FileInfo::linkExpiredTimeIsSet() const
{
    return linkExpiredTimeIsSet_;
}

void FileInfo::unsetlinkExpiredTime()
{
    linkExpiredTimeIsSet_ = false;
}

}
}
}
}
}



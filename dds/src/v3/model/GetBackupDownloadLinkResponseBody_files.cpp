

#include "huaweicloud/dds/v3/model/GetBackupDownloadLinkResponseBody_files.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




GetBackupDownloadLinkResponseBody_files::GetBackupDownloadLinkResponseBody_files()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    linkExpiredTime_ = "";
    linkExpiredTimeIsSet_ = false;
}

GetBackupDownloadLinkResponseBody_files::~GetBackupDownloadLinkResponseBody_files() = default;

void GetBackupDownloadLinkResponseBody_files::validate()
{
}

web::json::value GetBackupDownloadLinkResponseBody_files::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(linkExpiredTimeIsSet_) {
        val[utility::conversions::to_string_t("link_expired_time")] = ModelBase::toJson(linkExpiredTime_);
    }

    return val;
}
bool GetBackupDownloadLinkResponseBody_files::fromJson(const web::json::value& val)
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


std::string GetBackupDownloadLinkResponseBody_files::getName() const
{
    return name_;
}

void GetBackupDownloadLinkResponseBody_files::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetBackupDownloadLinkResponseBody_files::nameIsSet() const
{
    return nameIsSet_;
}

void GetBackupDownloadLinkResponseBody_files::unsetname()
{
    nameIsSet_ = false;
}

int64_t GetBackupDownloadLinkResponseBody_files::getSize() const
{
    return size_;
}

void GetBackupDownloadLinkResponseBody_files::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GetBackupDownloadLinkResponseBody_files::sizeIsSet() const
{
    return sizeIsSet_;
}

void GetBackupDownloadLinkResponseBody_files::unsetsize()
{
    sizeIsSet_ = false;
}

std::string GetBackupDownloadLinkResponseBody_files::getDownloadLink() const
{
    return downloadLink_;
}

void GetBackupDownloadLinkResponseBody_files::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool GetBackupDownloadLinkResponseBody_files::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void GetBackupDownloadLinkResponseBody_files::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string GetBackupDownloadLinkResponseBody_files::getLinkExpiredTime() const
{
    return linkExpiredTime_;
}

void GetBackupDownloadLinkResponseBody_files::setLinkExpiredTime(const std::string& value)
{
    linkExpiredTime_ = value;
    linkExpiredTimeIsSet_ = true;
}

bool GetBackupDownloadLinkResponseBody_files::linkExpiredTimeIsSet() const
{
    return linkExpiredTimeIsSet_;
}

void GetBackupDownloadLinkResponseBody_files::unsetlinkExpiredTime()
{
    linkExpiredTimeIsSet_ = false;
}

}
}
}
}
}



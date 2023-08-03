

#include "huaweicloud/rds/v3/model/GetBackupDownloadLink_files.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetBackupDownloadLink_files::GetBackupDownloadLink_files()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    linkExpiredTime_ = "";
    linkExpiredTimeIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

GetBackupDownloadLink_files::~GetBackupDownloadLink_files() = default;

void GetBackupDownloadLink_files::validate()
{
}

web::json::value GetBackupDownloadLink_files::toJson() const
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
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}

bool GetBackupDownloadLink_files::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    return ok;
}

std::string GetBackupDownloadLink_files::getName() const
{
    return name_;
}

void GetBackupDownloadLink_files::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetBackupDownloadLink_files::nameIsSet() const
{
    return nameIsSet_;
}

void GetBackupDownloadLink_files::unsetname()
{
    nameIsSet_ = false;
}

int64_t GetBackupDownloadLink_files::getSize() const
{
    return size_;
}

void GetBackupDownloadLink_files::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GetBackupDownloadLink_files::sizeIsSet() const
{
    return sizeIsSet_;
}

void GetBackupDownloadLink_files::unsetsize()
{
    sizeIsSet_ = false;
}

std::string GetBackupDownloadLink_files::getDownloadLink() const
{
    return downloadLink_;
}

void GetBackupDownloadLink_files::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool GetBackupDownloadLink_files::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void GetBackupDownloadLink_files::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string GetBackupDownloadLink_files::getLinkExpiredTime() const
{
    return linkExpiredTime_;
}

void GetBackupDownloadLink_files::setLinkExpiredTime(const std::string& value)
{
    linkExpiredTime_ = value;
    linkExpiredTimeIsSet_ = true;
}

bool GetBackupDownloadLink_files::linkExpiredTimeIsSet() const
{
    return linkExpiredTimeIsSet_;
}

void GetBackupDownloadLink_files::unsetlinkExpiredTime()
{
    linkExpiredTimeIsSet_ = false;
}

std::string GetBackupDownloadLink_files::getDatabaseName() const
{
    return databaseName_;
}

void GetBackupDownloadLink_files::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool GetBackupDownloadLink_files::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void GetBackupDownloadLink_files::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}



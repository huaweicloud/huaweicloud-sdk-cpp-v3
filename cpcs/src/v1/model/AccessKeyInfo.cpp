

#include "huaweicloud/cpcs/v1/model/AccessKeyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AccessKeyInfo::AccessKeyInfo()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    accessKey_ = "";
    accessKeyIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    downloadTime_ = 0L;
    downloadTimeIsSet_ = false;
    isDownloaded_ = false;
    isDownloadedIsSet_ = false;
    isImported_ = false;
    isImportedIsSet_ = false;
}

AccessKeyInfo::~AccessKeyInfo() = default;

void AccessKeyInfo::validate()
{
}

web::json::value AccessKeyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(downloadTimeIsSet_) {
        val[utility::conversions::to_string_t("download_time")] = ModelBase::toJson(downloadTime_);
    }
    if(isDownloadedIsSet_) {
        val[utility::conversions::to_string_t("is_downloaded")] = ModelBase::toJson(isDownloaded_);
    }
    if(isImportedIsSet_) {
        val[utility::conversions::to_string_t("is_imported")] = ModelBase::toJson(isImported_);
    }

    return val;
}
bool AccessKeyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_downloaded"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_downloaded"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDownloaded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_imported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_imported"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsImported(refVal);
        }
    }
    return ok;
}


std::string AccessKeyInfo::getAccessKeyId() const
{
    return accessKeyId_;
}

void AccessKeyInfo::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool AccessKeyInfo::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void AccessKeyInfo::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string AccessKeyInfo::getKeyName() const
{
    return keyName_;
}

void AccessKeyInfo::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool AccessKeyInfo::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void AccessKeyInfo::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string AccessKeyInfo::getAccessKey() const
{
    return accessKey_;
}

void AccessKeyInfo::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool AccessKeyInfo::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void AccessKeyInfo::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string AccessKeyInfo::getAppName() const
{
    return appName_;
}

void AccessKeyInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AccessKeyInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void AccessKeyInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AccessKeyInfo::getStatus() const
{
    return status_;
}

void AccessKeyInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AccessKeyInfo::statusIsSet() const
{
    return statusIsSet_;
}

void AccessKeyInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t AccessKeyInfo::getCreateTime() const
{
    return createTime_;
}

void AccessKeyInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AccessKeyInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AccessKeyInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t AccessKeyInfo::getDownloadTime() const
{
    return downloadTime_;
}

void AccessKeyInfo::setDownloadTime(int64_t value)
{
    downloadTime_ = value;
    downloadTimeIsSet_ = true;
}

bool AccessKeyInfo::downloadTimeIsSet() const
{
    return downloadTimeIsSet_;
}

void AccessKeyInfo::unsetdownloadTime()
{
    downloadTimeIsSet_ = false;
}

bool AccessKeyInfo::isIsDownloaded() const
{
    return isDownloaded_;
}

void AccessKeyInfo::setIsDownloaded(bool value)
{
    isDownloaded_ = value;
    isDownloadedIsSet_ = true;
}

bool AccessKeyInfo::isDownloadedIsSet() const
{
    return isDownloadedIsSet_;
}

void AccessKeyInfo::unsetisDownloaded()
{
    isDownloadedIsSet_ = false;
}

bool AccessKeyInfo::isIsImported() const
{
    return isImported_;
}

void AccessKeyInfo::setIsImported(bool value)
{
    isImported_ = value;
    isImportedIsSet_ = true;
}

bool AccessKeyInfo::isImportedIsSet() const
{
    return isImportedIsSet_;
}

void AccessKeyInfo::unsetisImported()
{
    isImportedIsSet_ = false;
}

}
}
}
}
}



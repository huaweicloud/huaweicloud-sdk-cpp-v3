

#include "huaweicloud/rds/v3/model/CreateSubscriptionInfo_initialize_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscriptionInfo_initialize_info::CreateSubscriptionInfo_initialize_info()
{
    fileSource_ = "";
    fileSourceIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    overwriteRestore_ = false;
    overwriteRestoreIsSet_ = false;
}

CreateSubscriptionInfo_initialize_info::~CreateSubscriptionInfo_initialize_info() = default;

void CreateSubscriptionInfo_initialize_info::validate()
{
}

web::json::value CreateSubscriptionInfo_initialize_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileSourceIsSet_) {
        val[utility::conversions::to_string_t("file_source")] = ModelBase::toJson(fileSource_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(overwriteRestoreIsSet_) {
        val[utility::conversions::to_string_t("overwrite_restore")] = ModelBase::toJson(overwriteRestore_);
    }

    return val;
}
bool CreateSubscriptionInfo_initialize_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("overwrite_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overwrite_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverwriteRestore(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionInfo_initialize_info::getFileSource() const
{
    return fileSource_;
}

void CreateSubscriptionInfo_initialize_info::setFileSource(const std::string& value)
{
    fileSource_ = value;
    fileSourceIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::fileSourceIsSet() const
{
    return fileSourceIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetfileSource()
{
    fileSourceIsSet_ = false;
}

std::string CreateSubscriptionInfo_initialize_info::getBackupId() const
{
    return backupId_;
}

void CreateSubscriptionInfo_initialize_info::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string CreateSubscriptionInfo_initialize_info::getBucketName() const
{
    return bucketName_;
}

void CreateSubscriptionInfo_initialize_info::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string CreateSubscriptionInfo_initialize_info::getFilePath() const
{
    return filePath_;
}

void CreateSubscriptionInfo_initialize_info::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::filePathIsSet() const
{
    return filePathIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string CreateSubscriptionInfo_initialize_info::getFileName() const
{
    return fileName_;
}

void CreateSubscriptionInfo_initialize_info::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetfileName()
{
    fileNameIsSet_ = false;
}

bool CreateSubscriptionInfo_initialize_info::isOverwriteRestore() const
{
    return overwriteRestore_;
}

void CreateSubscriptionInfo_initialize_info::setOverwriteRestore(bool value)
{
    overwriteRestore_ = value;
    overwriteRestoreIsSet_ = true;
}

bool CreateSubscriptionInfo_initialize_info::overwriteRestoreIsSet() const
{
    return overwriteRestoreIsSet_;
}

void CreateSubscriptionInfo_initialize_info::unsetoverwriteRestore()
{
    overwriteRestoreIsSet_ = false;
}

}
}
}
}
}



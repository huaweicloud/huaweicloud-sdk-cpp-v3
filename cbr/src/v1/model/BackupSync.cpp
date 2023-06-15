

#include "huaweicloud/cbr/v1/model/BackupSync.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupSync::BackupSync()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    imagePath_ = "";
    imagePathIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    createdAt_ = 0;
    createdAtIsSet_ = false;
}

BackupSync::~BackupSync() = default;

void BackupSync::validate()
{
}

web::json::value BackupSync::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(imagePathIsSet_) {
        val[utility::conversions::to_string_t("image_path")] = ModelBase::toJson(imagePath_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}

bool BackupSync::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string BackupSync::getBackupId() const
{
    return backupId_;
}

void BackupSync::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool BackupSync::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void BackupSync::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string BackupSync::getBackupName() const
{
    return backupName_;
}

void BackupSync::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool BackupSync::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void BackupSync::unsetbackupName()
{
    backupNameIsSet_ = false;
}

std::string BackupSync::getBucketName() const
{
    return bucketName_;
}

void BackupSync::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool BackupSync::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void BackupSync::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string BackupSync::getImagePath() const
{
    return imagePath_;
}

void BackupSync::setImagePath(const std::string& value)
{
    imagePath_ = value;
    imagePathIsSet_ = true;
}

bool BackupSync::imagePathIsSet() const
{
    return imagePathIsSet_;
}

void BackupSync::unsetimagePath()
{
    imagePathIsSet_ = false;
}

std::string BackupSync::getResourceId() const
{
    return resourceId_;
}

void BackupSync::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BackupSync::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BackupSync::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string BackupSync::getResourceName() const
{
    return resourceName_;
}

void BackupSync::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool BackupSync::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void BackupSync::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string BackupSync::getResourceType() const
{
    return resourceType_;
}

void BackupSync::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BackupSync::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BackupSync::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

int32_t BackupSync::getCreatedAt() const
{
    return createdAt_;
}

void BackupSync::setCreatedAt(int32_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BackupSync::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BackupSync::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}



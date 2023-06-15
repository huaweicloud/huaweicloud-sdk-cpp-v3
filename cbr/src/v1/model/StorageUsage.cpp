

#include "huaweicloud/cbr/v1/model/StorageUsage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




StorageUsage::StorageUsage()
{
    backupCount_ = 0;
    backupCountIsSet_ = false;
    backupSize_ = 0;
    backupSizeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    backupSizeMultiaz_ = 0;
    backupSizeMultiazIsSet_ = false;
}

StorageUsage::~StorageUsage() = default;

void StorageUsage::validate()
{
}

web::json::value StorageUsage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupCountIsSet_) {
        val[utility::conversions::to_string_t("backup_count")] = ModelBase::toJson(backupCount_);
    }
    if(backupSizeIsSet_) {
        val[utility::conversions::to_string_t("backup_size")] = ModelBase::toJson(backupSize_);
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
    if(backupSizeMultiazIsSet_) {
        val[utility::conversions::to_string_t("backup_size_multiaz")] = ModelBase::toJson(backupSizeMultiaz_);
    }

    return val;
}

bool StorageUsage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_size_multiaz"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_size_multiaz"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSizeMultiaz(refVal);
        }
    }
    return ok;
}


int32_t StorageUsage::getBackupCount() const
{
    return backupCount_;
}

void StorageUsage::setBackupCount(int32_t value)
{
    backupCount_ = value;
    backupCountIsSet_ = true;
}

bool StorageUsage::backupCountIsSet() const
{
    return backupCountIsSet_;
}

void StorageUsage::unsetbackupCount()
{
    backupCountIsSet_ = false;
}

int32_t StorageUsage::getBackupSize() const
{
    return backupSize_;
}

void StorageUsage::setBackupSize(int32_t value)
{
    backupSize_ = value;
    backupSizeIsSet_ = true;
}

bool StorageUsage::backupSizeIsSet() const
{
    return backupSizeIsSet_;
}

void StorageUsage::unsetbackupSize()
{
    backupSizeIsSet_ = false;
}

std::string StorageUsage::getResourceId() const
{
    return resourceId_;
}

void StorageUsage::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool StorageUsage::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void StorageUsage::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string StorageUsage::getResourceName() const
{
    return resourceName_;
}

void StorageUsage::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool StorageUsage::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void StorageUsage::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string StorageUsage::getResourceType() const
{
    return resourceType_;
}

void StorageUsage::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool StorageUsage::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void StorageUsage::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

int32_t StorageUsage::getBackupSizeMultiaz() const
{
    return backupSizeMultiaz_;
}

void StorageUsage::setBackupSizeMultiaz(int32_t value)
{
    backupSizeMultiaz_ = value;
    backupSizeMultiazIsSet_ = true;
}

bool StorageUsage::backupSizeMultiazIsSet() const
{
    return backupSizeMultiazIsSet_;
}

void StorageUsage::unsetbackupSizeMultiaz()
{
    backupSizeMultiazIsSet_ = false;
}

}
}
}
}
}



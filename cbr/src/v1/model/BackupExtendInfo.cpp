

#include "huaweicloud/cbr/v1/model/BackupExtendInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupExtendInfo::BackupExtendInfo()
{
    autoTrigger_ = false;
    autoTriggerIsSet_ = false;
    bootable_ = false;
    bootableIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    supportLld_ = false;
    supportLldIsSet_ = false;
    supportedRestoreMode_ = "";
    supportedRestoreModeIsSet_ = false;
    osImagesDataIsSet_ = false;
    containSystemDisk_ = false;
    containSystemDiskIsSet_ = false;
    encrypted_ = false;
    encryptedIsSet_ = false;
    systemDisk_ = false;
    systemDiskIsSet_ = false;
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
}

BackupExtendInfo::~BackupExtendInfo() = default;

void BackupExtendInfo::validate()
{
}

web::json::value BackupExtendInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTriggerIsSet_) {
        val[utility::conversions::to_string_t("auto_trigger")] = ModelBase::toJson(autoTrigger_);
    }
    if(bootableIsSet_) {
        val[utility::conversions::to_string_t("bootable")] = ModelBase::toJson(bootable_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(supportLldIsSet_) {
        val[utility::conversions::to_string_t("support_lld")] = ModelBase::toJson(supportLld_);
    }
    if(supportedRestoreModeIsSet_) {
        val[utility::conversions::to_string_t("supported_restore_mode")] = ModelBase::toJson(supportedRestoreMode_);
    }
    if(osImagesDataIsSet_) {
        val[utility::conversions::to_string_t("os_images_data")] = ModelBase::toJson(osImagesData_);
    }
    if(containSystemDiskIsSet_) {
        val[utility::conversions::to_string_t("contain_system_disk")] = ModelBase::toJson(containSystemDisk_);
    }
    if(encryptedIsSet_) {
        val[utility::conversions::to_string_t("encrypted")] = ModelBase::toJson(encrypted_);
    }
    if(systemDiskIsSet_) {
        val[utility::conversions::to_string_t("system_disk")] = ModelBase::toJson(systemDisk_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }

    return val;
}
bool BackupExtendInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_trigger"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bootable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_lld"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_lld"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportLld(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_restore_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_restore_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedRestoreMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_images_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_images_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsImagesData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contain_system_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contain_system_disk"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainSystemDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_disk"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    return ok;
}


bool BackupExtendInfo::isAutoTrigger() const
{
    return autoTrigger_;
}

void BackupExtendInfo::setAutoTrigger(bool value)
{
    autoTrigger_ = value;
    autoTriggerIsSet_ = true;
}

bool BackupExtendInfo::autoTriggerIsSet() const
{
    return autoTriggerIsSet_;
}

void BackupExtendInfo::unsetautoTrigger()
{
    autoTriggerIsSet_ = false;
}

bool BackupExtendInfo::isBootable() const
{
    return bootable_;
}

void BackupExtendInfo::setBootable(bool value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool BackupExtendInfo::bootableIsSet() const
{
    return bootableIsSet_;
}

void BackupExtendInfo::unsetbootable()
{
    bootableIsSet_ = false;
}

std::string BackupExtendInfo::getSnapshotId() const
{
    return snapshotId_;
}

void BackupExtendInfo::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool BackupExtendInfo::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void BackupExtendInfo::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

bool BackupExtendInfo::isSupportLld() const
{
    return supportLld_;
}

void BackupExtendInfo::setSupportLld(bool value)
{
    supportLld_ = value;
    supportLldIsSet_ = true;
}

bool BackupExtendInfo::supportLldIsSet() const
{
    return supportLldIsSet_;
}

void BackupExtendInfo::unsetsupportLld()
{
    supportLldIsSet_ = false;
}

std::string BackupExtendInfo::getSupportedRestoreMode() const
{
    return supportedRestoreMode_;
}

void BackupExtendInfo::setSupportedRestoreMode(const std::string& value)
{
    supportedRestoreMode_ = value;
    supportedRestoreModeIsSet_ = true;
}

bool BackupExtendInfo::supportedRestoreModeIsSet() const
{
    return supportedRestoreModeIsSet_;
}

void BackupExtendInfo::unsetsupportedRestoreMode()
{
    supportedRestoreModeIsSet_ = false;
}

std::vector<ImageData>& BackupExtendInfo::getOsImagesData()
{
    return osImagesData_;
}

void BackupExtendInfo::setOsImagesData(const std::vector<ImageData>& value)
{
    osImagesData_ = value;
    osImagesDataIsSet_ = true;
}

bool BackupExtendInfo::osImagesDataIsSet() const
{
    return osImagesDataIsSet_;
}

void BackupExtendInfo::unsetosImagesData()
{
    osImagesDataIsSet_ = false;
}

bool BackupExtendInfo::isContainSystemDisk() const
{
    return containSystemDisk_;
}

void BackupExtendInfo::setContainSystemDisk(bool value)
{
    containSystemDisk_ = value;
    containSystemDiskIsSet_ = true;
}

bool BackupExtendInfo::containSystemDiskIsSet() const
{
    return containSystemDiskIsSet_;
}

void BackupExtendInfo::unsetcontainSystemDisk()
{
    containSystemDiskIsSet_ = false;
}

bool BackupExtendInfo::isEncrypted() const
{
    return encrypted_;
}

void BackupExtendInfo::setEncrypted(bool value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool BackupExtendInfo::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void BackupExtendInfo::unsetencrypted()
{
    encryptedIsSet_ = false;
}

bool BackupExtendInfo::isSystemDisk() const
{
    return systemDisk_;
}

void BackupExtendInfo::setSystemDisk(bool value)
{
    systemDisk_ = value;
    systemDiskIsSet_ = true;
}

bool BackupExtendInfo::systemDiskIsSet() const
{
    return systemDiskIsSet_;
}

void BackupExtendInfo::unsetsystemDisk()
{
    systemDiskIsSet_ = false;
}

bool BackupExtendInfo::isIsMultiAz() const
{
    return isMultiAz_;
}

void BackupExtendInfo::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool BackupExtendInfo::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void BackupExtendInfo::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

}
}
}
}
}



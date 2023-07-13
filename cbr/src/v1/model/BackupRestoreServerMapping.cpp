

#include "huaweicloud/cbr/v1/model/BackupRestoreServerMapping.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupRestoreServerMapping::BackupRestoreServerMapping()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

BackupRestoreServerMapping::~BackupRestoreServerMapping() = default;

void BackupRestoreServerMapping::validate()
{
}

web::json::value BackupRestoreServerMapping::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool BackupRestoreServerMapping::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}

std::string BackupRestoreServerMapping::getBackupId() const
{
    return backupId_;
}

void BackupRestoreServerMapping::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool BackupRestoreServerMapping::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void BackupRestoreServerMapping::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string BackupRestoreServerMapping::getVolumeId() const
{
    return volumeId_;
}

void BackupRestoreServerMapping::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BackupRestoreServerMapping::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BackupRestoreServerMapping::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}



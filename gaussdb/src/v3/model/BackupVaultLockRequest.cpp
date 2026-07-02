

#include "huaweicloud/gaussdb/v3/model/BackupVaultLockRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupVaultLockRequest::BackupVaultLockRequest()
{
    backupVaultlockInfoIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BackupVaultLockRequest::~BackupVaultLockRequest() = default;

void BackupVaultLockRequest::validate()
{
}

web::json::value BackupVaultLockRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupVaultlockInfoIsSet_) {
        val[utility::conversions::to_string_t("backup_vaultlock_info")] = ModelBase::toJson(backupVaultlockInfo_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool BackupVaultLockRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_vaultlock_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_vaultlock_info"));
        if(!fieldValue.is_null())
        {
            BackupVaultLockInfoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupVaultlockInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


BackupVaultLockInfoRequest BackupVaultLockRequest::getBackupVaultlockInfo() const
{
    return backupVaultlockInfo_;
}

void BackupVaultLockRequest::setBackupVaultlockInfo(const BackupVaultLockInfoRequest& value)
{
    backupVaultlockInfo_ = value;
    backupVaultlockInfoIsSet_ = true;
}

bool BackupVaultLockRequest::backupVaultlockInfoIsSet() const
{
    return backupVaultlockInfoIsSet_;
}

void BackupVaultLockRequest::unsetbackupVaultlockInfo()
{
    backupVaultlockInfoIsSet_ = false;
}

std::string BackupVaultLockRequest::getAction() const
{
    return action_;
}

void BackupVaultLockRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BackupVaultLockRequest::actionIsSet() const
{
    return actionIsSet_;
}

void BackupVaultLockRequest::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}



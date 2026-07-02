

#include "huaweicloud/gaussdb/v3/model/ShowBackupVaultLockResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowBackupVaultLockResponse::ShowBackupVaultLockResponse()
{
    backupVaultlockInfoIsSet_ = false;
}

ShowBackupVaultLockResponse::~ShowBackupVaultLockResponse() = default;

void ShowBackupVaultLockResponse::validate()
{
}

web::json::value ShowBackupVaultLockResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupVaultlockInfoIsSet_) {
        val[utility::conversions::to_string_t("backup_vaultlock_info")] = ModelBase::toJson(backupVaultlockInfo_);
    }

    return val;
}
bool ShowBackupVaultLockResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_vaultlock_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_vaultlock_info"));
        if(!fieldValue.is_null())
        {
            BackupVaultLockInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupVaultlockInfo(refVal);
        }
    }
    return ok;
}


BackupVaultLockInfo ShowBackupVaultLockResponse::getBackupVaultlockInfo() const
{
    return backupVaultlockInfo_;
}

void ShowBackupVaultLockResponse::setBackupVaultlockInfo(const BackupVaultLockInfo& value)
{
    backupVaultlockInfo_ = value;
    backupVaultlockInfoIsSet_ = true;
}

bool ShowBackupVaultLockResponse::backupVaultlockInfoIsSet() const
{
    return backupVaultlockInfoIsSet_;
}

void ShowBackupVaultLockResponse::unsetbackupVaultlockInfo()
{
    backupVaultlockInfoIsSet_ = false;
}

}
}
}
}
}



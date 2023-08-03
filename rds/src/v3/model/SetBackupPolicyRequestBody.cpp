

#include "huaweicloud/rds/v3/model/SetBackupPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBackupPolicyRequestBody::SetBackupPolicyRequestBody()
{
    backupPolicyIsSet_ = false;
    reserveBackups_ = false;
    reserveBackupsIsSet_ = false;
}

SetBackupPolicyRequestBody::~SetBackupPolicyRequestBody() = default;

void SetBackupPolicyRequestBody::validate()
{
}

web::json::value SetBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }
    if(reserveBackupsIsSet_) {
        val[utility::conversions::to_string_t("reserve_backups")] = ModelBase::toJson(reserveBackups_);
    }

    return val;
}

bool SetBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            BackupPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_backups"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveBackups(refVal);
        }
    }
    return ok;
}

BackupPolicy SetBackupPolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void SetBackupPolicyRequestBody::setBackupPolicy(const BackupPolicy& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool SetBackupPolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void SetBackupPolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

bool SetBackupPolicyRequestBody::isReserveBackups() const
{
    return reserveBackups_;
}

void SetBackupPolicyRequestBody::setReserveBackups(bool value)
{
    reserveBackups_ = value;
    reserveBackupsIsSet_ = true;
}

bool SetBackupPolicyRequestBody::reserveBackupsIsSet() const
{
    return reserveBackupsIsSet_;
}

void SetBackupPolicyRequestBody::unsetreserveBackups()
{
    reserveBackupsIsSet_ = false;
}

}
}
}
}
}



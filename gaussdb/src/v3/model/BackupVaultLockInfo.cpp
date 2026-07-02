

#include "huaweicloud/gaussdb/v3/model/BackupVaultLockInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupVaultLockInfo::BackupVaultLockInfo()
{
    lockRetentionDays_ = 0;
    lockRetentionDaysIsSet_ = false;
    lockPolicy_ = false;
    lockPolicyIsSet_ = false;
    lockStartTime_ = 0L;
    lockStartTimeIsSet_ = false;
    lockEndTime_ = 0L;
    lockEndTimeIsSet_ = false;
}

BackupVaultLockInfo::~BackupVaultLockInfo() = default;

void BackupVaultLockInfo::validate()
{
}

web::json::value BackupVaultLockInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockRetentionDaysIsSet_) {
        val[utility::conversions::to_string_t("lock_retention_days")] = ModelBase::toJson(lockRetentionDays_);
    }
    if(lockPolicyIsSet_) {
        val[utility::conversions::to_string_t("lock_policy")] = ModelBase::toJson(lockPolicy_);
    }
    if(lockStartTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_start_time")] = ModelBase::toJson(lockStartTime_);
    }
    if(lockEndTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_end_time")] = ModelBase::toJson(lockEndTime_);
    }

    return val;
}
bool BackupVaultLockInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lock_retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_policy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockEndTime(refVal);
        }
    }
    return ok;
}


int32_t BackupVaultLockInfo::getLockRetentionDays() const
{
    return lockRetentionDays_;
}

void BackupVaultLockInfo::setLockRetentionDays(int32_t value)
{
    lockRetentionDays_ = value;
    lockRetentionDaysIsSet_ = true;
}

bool BackupVaultLockInfo::lockRetentionDaysIsSet() const
{
    return lockRetentionDaysIsSet_;
}

void BackupVaultLockInfo::unsetlockRetentionDays()
{
    lockRetentionDaysIsSet_ = false;
}

bool BackupVaultLockInfo::isLockPolicy() const
{
    return lockPolicy_;
}

void BackupVaultLockInfo::setLockPolicy(bool value)
{
    lockPolicy_ = value;
    lockPolicyIsSet_ = true;
}

bool BackupVaultLockInfo::lockPolicyIsSet() const
{
    return lockPolicyIsSet_;
}

void BackupVaultLockInfo::unsetlockPolicy()
{
    lockPolicyIsSet_ = false;
}

int64_t BackupVaultLockInfo::getLockStartTime() const
{
    return lockStartTime_;
}

void BackupVaultLockInfo::setLockStartTime(int64_t value)
{
    lockStartTime_ = value;
    lockStartTimeIsSet_ = true;
}

bool BackupVaultLockInfo::lockStartTimeIsSet() const
{
    return lockStartTimeIsSet_;
}

void BackupVaultLockInfo::unsetlockStartTime()
{
    lockStartTimeIsSet_ = false;
}

int64_t BackupVaultLockInfo::getLockEndTime() const
{
    return lockEndTime_;
}

void BackupVaultLockInfo::setLockEndTime(int64_t value)
{
    lockEndTime_ = value;
    lockEndTimeIsSet_ = true;
}

bool BackupVaultLockInfo::lockEndTimeIsSet() const
{
    return lockEndTimeIsSet_;
}

void BackupVaultLockInfo::unsetlockEndTime()
{
    lockEndTimeIsSet_ = false;
}

}
}
}
}
}



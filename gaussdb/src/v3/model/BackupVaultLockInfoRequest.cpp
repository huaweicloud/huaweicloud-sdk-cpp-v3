

#include "huaweicloud/gaussdb/v3/model/BackupVaultLockInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupVaultLockInfoRequest::BackupVaultLockInfoRequest()
{
    lockRetentionDays_ = 0;
    lockRetentionDaysIsSet_ = false;
    lockPolicy_ = false;
    lockPolicyIsSet_ = false;
}

BackupVaultLockInfoRequest::~BackupVaultLockInfoRequest() = default;

void BackupVaultLockInfoRequest::validate()
{
}

web::json::value BackupVaultLockInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockRetentionDaysIsSet_) {
        val[utility::conversions::to_string_t("lock_retention_days")] = ModelBase::toJson(lockRetentionDays_);
    }
    if(lockPolicyIsSet_) {
        val[utility::conversions::to_string_t("lock_policy")] = ModelBase::toJson(lockPolicy_);
    }

    return val;
}
bool BackupVaultLockInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t BackupVaultLockInfoRequest::getLockRetentionDays() const
{
    return lockRetentionDays_;
}

void BackupVaultLockInfoRequest::setLockRetentionDays(int32_t value)
{
    lockRetentionDays_ = value;
    lockRetentionDaysIsSet_ = true;
}

bool BackupVaultLockInfoRequest::lockRetentionDaysIsSet() const
{
    return lockRetentionDaysIsSet_;
}

void BackupVaultLockInfoRequest::unsetlockRetentionDays()
{
    lockRetentionDaysIsSet_ = false;
}

bool BackupVaultLockInfoRequest::isLockPolicy() const
{
    return lockPolicy_;
}

void BackupVaultLockInfoRequest::setLockPolicy(bool value)
{
    lockPolicy_ = value;
    lockPolicyIsSet_ = true;
}

bool BackupVaultLockInfoRequest::lockPolicyIsSet() const
{
    return lockPolicyIsSet_;
}

void BackupVaultLockInfoRequest::unsetlockPolicy()
{
    lockPolicyIsSet_ = false;
}

}
}
}
}
}



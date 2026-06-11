

#include "huaweicloud/gaussdbfornosql/v3/model/BackupSpaceUsage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BackupSpaceUsage::BackupSpaceUsage()
{
    backupUsage_ = 0L;
    backupUsageIsSet_ = false;
}

BackupSpaceUsage::~BackupSpaceUsage() = default;

void BackupSpaceUsage::validate()
{
}

web::json::value BackupSpaceUsage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupUsageIsSet_) {
        val[utility::conversions::to_string_t("backup_usage")] = ModelBase::toJson(backupUsage_);
    }

    return val;
}
bool BackupSpaceUsage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_usage"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUsage(refVal);
        }
    }
    return ok;
}


int64_t BackupSpaceUsage::getBackupUsage() const
{
    return backupUsage_;
}

void BackupSpaceUsage::setBackupUsage(int64_t value)
{
    backupUsage_ = value;
    backupUsageIsSet_ = true;
}

bool BackupSpaceUsage::backupUsageIsSet() const
{
    return backupUsageIsSet_;
}

void BackupSpaceUsage::unsetbackupUsage()
{
    backupUsageIsSet_ = false;
}

}
}
}
}
}



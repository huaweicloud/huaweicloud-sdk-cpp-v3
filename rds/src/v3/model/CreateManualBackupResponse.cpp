

#include "huaweicloud/rds/v3/model/CreateManualBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateManualBackupResponse::CreateManualBackupResponse()
{
    backupIsSet_ = false;
}

CreateManualBackupResponse::~CreateManualBackupResponse() = default;

void CreateManualBackupResponse::validate()
{
}

web::json::value CreateManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }

    return val;
}

bool CreateManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            BackupInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    return ok;
}

BackupInfo CreateManualBackupResponse::getBackup() const
{
    return backup_;
}

void CreateManualBackupResponse::setBackup(const BackupInfo& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool CreateManualBackupResponse::backupIsSet() const
{
    return backupIsSet_;
}

void CreateManualBackupResponse::unsetbackup()
{
    backupIsSet_ = false;
}

}
}
}
}
}



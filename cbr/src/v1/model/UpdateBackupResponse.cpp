

#include "huaweicloud/cbr/v1/model/UpdateBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateBackupResponse::UpdateBackupResponse()
{
    backupIsSet_ = false;
}

UpdateBackupResponse::~UpdateBackupResponse() = default;

void UpdateBackupResponse::validate()
{
}

web::json::value UpdateBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }

    return val;
}

bool UpdateBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            BackupResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    return ok;
}


BackupResp UpdateBackupResponse::getBackup() const
{
    return backup_;
}

void UpdateBackupResponse::setBackup(const BackupResp& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool UpdateBackupResponse::backupIsSet() const
{
    return backupIsSet_;
}

void UpdateBackupResponse::unsetbackup()
{
    backupIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cbr/v1/model/ShowBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowBackupResponse::ShowBackupResponse()
{
    backupIsSet_ = false;
}

ShowBackupResponse::~ShowBackupResponse() = default;

void ShowBackupResponse::validate()
{
}

web::json::value ShowBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }

    return val;
}
bool ShowBackupResponse::fromJson(const web::json::value& val)
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


BackupResp ShowBackupResponse::getBackup() const
{
    return backup_;
}

void ShowBackupResponse::setBackup(const BackupResp& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool ShowBackupResponse::backupIsSet() const
{
    return backupIsSet_;
}

void ShowBackupResponse::unsetbackup()
{
    backupIsSet_ = false;
}

}
}
}
}
}



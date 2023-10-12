

#include "huaweicloud/cbr/v1/model/BackupUpdateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupUpdateReq::BackupUpdateReq()
{
    backupIsSet_ = false;
}

BackupUpdateReq::~BackupUpdateReq() = default;

void BackupUpdateReq::validate()
{
}

web::json::value BackupUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }

    return val;
}
bool BackupUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            BackupUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    return ok;
}


BackupUpdate BackupUpdateReq::getBackup() const
{
    return backup_;
}

void BackupUpdateReq::setBackup(const BackupUpdate& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool BackupUpdateReq::backupIsSet() const
{
    return backupIsSet_;
}

void BackupUpdateReq::unsetbackup()
{
    backupIsSet_ = false;
}

}
}
}
}
}



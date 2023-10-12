

#include "huaweicloud/cbr/v1/model/BackupRestoreReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupRestoreReq::BackupRestoreReq()
{
    restoreIsSet_ = false;
}

BackupRestoreReq::~BackupRestoreReq() = default;

void BackupRestoreReq::validate()
{
}

web::json::value BackupRestoreReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreIsSet_) {
        val[utility::conversions::to_string_t("restore")] = ModelBase::toJson(restore_);
    }

    return val;
}
bool BackupRestoreReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore"));
        if(!fieldValue.is_null())
        {
            BackupRestore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestore(refVal);
        }
    }
    return ok;
}


BackupRestore BackupRestoreReq::getRestore() const
{
    return restore_;
}

void BackupRestoreReq::setRestore(const BackupRestore& value)
{
    restore_ = value;
    restoreIsSet_ = true;
}

bool BackupRestoreReq::restoreIsSet() const
{
    return restoreIsSet_;
}

void BackupRestoreReq::unsetrestore()
{
    restoreIsSet_ = false;
}

}
}
}
}
}



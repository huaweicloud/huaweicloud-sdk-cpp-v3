

#include "huaweicloud/cbr/v1/model/BackupSyncReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupSyncReq::BackupSyncReq()
{
    syncIsSet_ = false;
}

BackupSyncReq::~BackupSyncReq() = default;

void BackupSyncReq::validate()
{
}

web::json::value BackupSyncReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}
bool BackupSyncReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupSync> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}


std::vector<BackupSync>& BackupSyncReq::getSync()
{
    return sync_;
}

void BackupSyncReq::setSync(const std::vector<BackupSync>& value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool BackupSyncReq::syncIsSet() const
{
    return syncIsSet_;
}

void BackupSyncReq::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}



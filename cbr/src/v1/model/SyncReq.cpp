

#include "huaweicloud/cbr/v1/model/SyncReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SyncReq::SyncReq()
{
    syncIsSet_ = false;
}

SyncReq::~SyncReq() = default;

void SyncReq::validate()
{
}

web::json::value SyncReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}
bool SyncReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            SyncParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}


SyncParam SyncReq::getSync() const
{
    return sync_;
}

void SyncReq::setSync(const SyncParam& value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool SyncReq::syncIsSet() const
{
    return syncIsSet_;
}

void SyncReq::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}



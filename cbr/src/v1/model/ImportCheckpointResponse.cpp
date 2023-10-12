

#include "huaweicloud/cbr/v1/model/ImportCheckpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ImportCheckpointResponse::ImportCheckpointResponse()
{
    syncIsSet_ = false;
}

ImportCheckpointResponse::~ImportCheckpointResponse() = default;

void ImportCheckpointResponse::validate()
{
}

web::json::value ImportCheckpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}
bool ImportCheckpointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            SyncRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}


SyncRespBody ImportCheckpointResponse::getSync() const
{
    return sync_;
}

void ImportCheckpointResponse::setSync(const SyncRespBody& value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool ImportCheckpointResponse::syncIsSet() const
{
    return syncIsSet_;
}

void ImportCheckpointResponse::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}



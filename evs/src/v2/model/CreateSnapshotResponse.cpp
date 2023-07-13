

#include "huaweicloud/evs/v2/model/CreateSnapshotResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotResponse::CreateSnapshotResponse()
{
    snapshotIsSet_ = false;
}

CreateSnapshotResponse::~CreateSnapshotResponse() = default;

void CreateSnapshotResponse::validate()
{
}

web::json::value CreateSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}

bool CreateSnapshotResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            SnapshotDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}

SnapshotDetails CreateSnapshotResponse::getSnapshot() const
{
    return snapshot_;
}

void CreateSnapshotResponse::setSnapshot(const SnapshotDetails& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool CreateSnapshotResponse::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void CreateSnapshotResponse::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



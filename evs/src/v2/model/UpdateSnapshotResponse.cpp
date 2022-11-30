

#include "huaweicloud/evs/v2/model/UpdateSnapshotResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotResponse::UpdateSnapshotResponse()
{
    snapshotIsSet_ = false;
}

UpdateSnapshotResponse::~UpdateSnapshotResponse() = default;

void UpdateSnapshotResponse::validate()
{
}

web::json::value UpdateSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}

bool UpdateSnapshotResponse::fromJson(const web::json::value& val)
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


SnapshotDetails UpdateSnapshotResponse::getSnapshot() const
{
    return snapshot_;
}

void UpdateSnapshotResponse::setSnapshot(const SnapshotDetails& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool UpdateSnapshotResponse::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void UpdateSnapshotResponse::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



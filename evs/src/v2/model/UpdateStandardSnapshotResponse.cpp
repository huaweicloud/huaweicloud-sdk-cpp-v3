

#include "huaweicloud/evs/v2/model/UpdateStandardSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateStandardSnapshotResponse::UpdateStandardSnapshotResponse()
{
    snapshotIsSet_ = false;
}

UpdateStandardSnapshotResponse::~UpdateStandardSnapshotResponse() = default;

void UpdateStandardSnapshotResponse::validate()
{
}

web::json::value UpdateStandardSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool UpdateStandardSnapshotResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            SnapshotDetailV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


SnapshotDetailV5 UpdateStandardSnapshotResponse::getSnapshot() const
{
    return snapshot_;
}

void UpdateStandardSnapshotResponse::setSnapshot(const SnapshotDetailV5& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool UpdateStandardSnapshotResponse::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void UpdateStandardSnapshotResponse::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/evs/v2/model/ShowSnapshotResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowSnapshotResponse::ShowSnapshotResponse()
{
    snapshotIsSet_ = false;
}

ShowSnapshotResponse::~ShowSnapshotResponse() = default;

void ShowSnapshotResponse::validate()
{
}

web::json::value ShowSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}

bool ShowSnapshotResponse::fromJson(const web::json::value& val)
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

SnapshotDetails ShowSnapshotResponse::getSnapshot() const
{
    return snapshot_;
}

void ShowSnapshotResponse::setSnapshot(const SnapshotDetails& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool ShowSnapshotResponse::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void ShowSnapshotResponse::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/evs/v2/model/UpdateSnapshotRequestBodyV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotRequestBodyV5::UpdateSnapshotRequestBodyV5()
{
    snapshotIsSet_ = false;
}

UpdateSnapshotRequestBodyV5::~UpdateSnapshotRequestBodyV5() = default;

void UpdateSnapshotRequestBodyV5::validate()
{
}

web::json::value UpdateSnapshotRequestBodyV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool UpdateSnapshotRequestBodyV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            CinderUpdateSnapshotOptionV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


CinderUpdateSnapshotOptionV5 UpdateSnapshotRequestBodyV5::getSnapshot() const
{
    return snapshot_;
}

void UpdateSnapshotRequestBodyV5::setSnapshot(const CinderUpdateSnapshotOptionV5& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool UpdateSnapshotRequestBodyV5::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void UpdateSnapshotRequestBodyV5::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



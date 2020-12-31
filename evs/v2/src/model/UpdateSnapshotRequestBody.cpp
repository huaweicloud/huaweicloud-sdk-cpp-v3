

#include "huaweicloud/evs/model/UpdateSnapshotRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotRequestBody::UpdateSnapshotRequestBody()
{
    snapshotIsSet_ = false;
}

UpdateSnapshotRequestBody::~UpdateSnapshotRequestBody() = default;

void UpdateSnapshotRequestBody::validate()
{
}

web::json::value UpdateSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}

bool UpdateSnapshotRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


UpdateSnapshotOption UpdateSnapshotRequestBody::getSnapshot() const
{
    return snapshot_;
}

void UpdateSnapshotRequestBody::setSnapshot(const UpdateSnapshotOption& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool UpdateSnapshotRequestBody::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void UpdateSnapshotRequestBody::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



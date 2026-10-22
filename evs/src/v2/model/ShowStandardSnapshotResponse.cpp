

#include "huaweicloud/evs/v2/model/ShowStandardSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowStandardSnapshotResponse::ShowStandardSnapshotResponse()
{
    snapshotIsSet_ = false;
}

ShowStandardSnapshotResponse::~ShowStandardSnapshotResponse() = default;

void ShowStandardSnapshotResponse::validate()
{
}

web::json::value ShowStandardSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool ShowStandardSnapshotResponse::fromJson(const web::json::value& val)
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


SnapshotDetailV5 ShowStandardSnapshotResponse::getSnapshot() const
{
    return snapshot_;
}

void ShowStandardSnapshotResponse::setSnapshot(const SnapshotDetailV5& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool ShowStandardSnapshotResponse::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void ShowStandardSnapshotResponse::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



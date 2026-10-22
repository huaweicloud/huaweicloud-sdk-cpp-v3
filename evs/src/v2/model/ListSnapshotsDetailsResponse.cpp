

#include "huaweicloud/evs/v2/model/ListSnapshotsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotsDetailsResponse::ListSnapshotsDetailsResponse()
{
    snapshotsIsSet_ = false;
}

ListSnapshotsDetailsResponse::~ListSnapshotsDetailsResponse() = default;

void ListSnapshotsDetailsResponse::validate()
{
}

web::json::value ListSnapshotsDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotsIsSet_) {
        val[utility::conversions::to_string_t("snapshots")] = ModelBase::toJson(snapshots_);
    }

    return val;
}
bool ListSnapshotsDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotDetailV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshots(refVal);
        }
    }
    return ok;
}


std::vector<SnapshotDetailV5>& ListSnapshotsDetailsResponse::getSnapshots()
{
    return snapshots_;
}

void ListSnapshotsDetailsResponse::setSnapshots(const std::vector<SnapshotDetailV5>& value)
{
    snapshots_ = value;
    snapshotsIsSet_ = true;
}

bool ListSnapshotsDetailsResponse::snapshotsIsSet() const
{
    return snapshotsIsSet_;
}

void ListSnapshotsDetailsResponse::unsetsnapshots()
{
    snapshotsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/evs/model/DeleteSnapshotRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteSnapshotRequest::DeleteSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

DeleteSnapshotRequest::~DeleteSnapshotRequest() = default;

void DeleteSnapshotRequest::validate()
{
}

web::json::value DeleteSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}

bool DeleteSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    return ok;
}


std::string DeleteSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void DeleteSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool DeleteSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void DeleteSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}



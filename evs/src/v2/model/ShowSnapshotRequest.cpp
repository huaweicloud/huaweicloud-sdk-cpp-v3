

#include "huaweicloud/evs/v2/model/ShowSnapshotRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowSnapshotRequest::ShowSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

ShowSnapshotRequest::~ShowSnapshotRequest() = default;

void ShowSnapshotRequest::validate()
{
}

web::json::value ShowSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}

bool ShowSnapshotRequest::fromJson(const web::json::value& val)
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


std::string ShowSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void ShowSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool ShowSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void ShowSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}



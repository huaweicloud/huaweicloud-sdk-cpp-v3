

#include "huaweicloud/evs/v2/model/UpdateSnapshotGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotGroupResponse::UpdateSnapshotGroupResponse()
{
    snapshotGroupIsSet_ = false;
}

UpdateSnapshotGroupResponse::~UpdateSnapshotGroupResponse() = default;

void UpdateSnapshotGroupResponse::validate()
{
}

web::json::value UpdateSnapshotGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group")] = ModelBase::toJson(snapshotGroup_);
    }

    return val;
}
bool UpdateSnapshotGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group"));
        if(!fieldValue.is_null())
        {
            SnapshotGroupDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroup(refVal);
        }
    }
    return ok;
}


SnapshotGroupDetail UpdateSnapshotGroupResponse::getSnapshotGroup() const
{
    return snapshotGroup_;
}

void UpdateSnapshotGroupResponse::setSnapshotGroup(const SnapshotGroupDetail& value)
{
    snapshotGroup_ = value;
    snapshotGroupIsSet_ = true;
}

bool UpdateSnapshotGroupResponse::snapshotGroupIsSet() const
{
    return snapshotGroupIsSet_;
}

void UpdateSnapshotGroupResponse::unsetsnapshotGroup()
{
    snapshotGroupIsSet_ = false;
}

}
}
}
}
}



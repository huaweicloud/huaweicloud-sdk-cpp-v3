

#include "huaweicloud/evs/v2/model/ShowSnapshotGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowSnapshotGroupResponse::ShowSnapshotGroupResponse()
{
    snapshotGroupIsSet_ = false;
}

ShowSnapshotGroupResponse::~ShowSnapshotGroupResponse() = default;

void ShowSnapshotGroupResponse::validate()
{
}

web::json::value ShowSnapshotGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group")] = ModelBase::toJson(snapshotGroup_);
    }

    return val;
}
bool ShowSnapshotGroupResponse::fromJson(const web::json::value& val)
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


SnapshotGroupDetail ShowSnapshotGroupResponse::getSnapshotGroup() const
{
    return snapshotGroup_;
}

void ShowSnapshotGroupResponse::setSnapshotGroup(const SnapshotGroupDetail& value)
{
    snapshotGroup_ = value;
    snapshotGroupIsSet_ = true;
}

bool ShowSnapshotGroupResponse::snapshotGroupIsSet() const
{
    return snapshotGroupIsSet_;
}

void ShowSnapshotGroupResponse::unsetsnapshotGroup()
{
    snapshotGroupIsSet_ = false;
}

}
}
}
}
}



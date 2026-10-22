

#include "huaweicloud/evs/v2/model/ListSnapshotGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotGroupResponse::ListSnapshotGroupResponse()
{
    snapshotGroupsIsSet_ = false;
}

ListSnapshotGroupResponse::~ListSnapshotGroupResponse() = default;

void ListSnapshotGroupResponse::validate()
{
}

web::json::value ListSnapshotGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupsIsSet_) {
        val[utility::conversions::to_string_t("snapshot_groups")] = ModelBase::toJson(snapshotGroups_);
    }

    return val;
}
bool ListSnapshotGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotGroupDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroups(refVal);
        }
    }
    return ok;
}


std::vector<SnapshotGroupDetail>& ListSnapshotGroupResponse::getSnapshotGroups()
{
    return snapshotGroups_;
}

void ListSnapshotGroupResponse::setSnapshotGroups(const std::vector<SnapshotGroupDetail>& value)
{
    snapshotGroups_ = value;
    snapshotGroupsIsSet_ = true;
}

bool ListSnapshotGroupResponse::snapshotGroupsIsSet() const
{
    return snapshotGroupsIsSet_;
}

void ListSnapshotGroupResponse::unsetsnapshotGroups()
{
    snapshotGroupsIsSet_ = false;
}

}
}
}
}
}



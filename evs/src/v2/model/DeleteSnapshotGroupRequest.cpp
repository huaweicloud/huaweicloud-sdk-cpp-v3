

#include "huaweicloud/evs/v2/model/DeleteSnapshotGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteSnapshotGroupRequest::DeleteSnapshotGroupRequest()
{
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
}

DeleteSnapshotGroupRequest::~DeleteSnapshotGroupRequest() = default;

void DeleteSnapshotGroupRequest::validate()
{
}

web::json::value DeleteSnapshotGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }

    return val;
}
bool DeleteSnapshotGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteSnapshotGroupRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void DeleteSnapshotGroupRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool DeleteSnapshotGroupRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void DeleteSnapshotGroupRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

}
}
}
}
}



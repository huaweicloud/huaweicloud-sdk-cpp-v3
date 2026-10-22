

#include "huaweicloud/evs/v2/model/ShowSnapshotGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowSnapshotGroupRequest::ShowSnapshotGroupRequest()
{
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
}

ShowSnapshotGroupRequest::~ShowSnapshotGroupRequest() = default;

void ShowSnapshotGroupRequest::validate()
{
}

web::json::value ShowSnapshotGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }

    return val;
}
bool ShowSnapshotGroupRequest::fromJson(const web::json::value& val)
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


std::string ShowSnapshotGroupRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void ShowSnapshotGroupRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool ShowSnapshotGroupRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void ShowSnapshotGroupRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

}
}
}
}
}



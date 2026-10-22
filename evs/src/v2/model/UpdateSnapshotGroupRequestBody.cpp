

#include "huaweicloud/evs/v2/model/UpdateSnapshotGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotGroupRequestBody::UpdateSnapshotGroupRequestBody()
{
    snapshotGroupIsSet_ = false;
}

UpdateSnapshotGroupRequestBody::~UpdateSnapshotGroupRequestBody() = default;

void UpdateSnapshotGroupRequestBody::validate()
{
}

web::json::value UpdateSnapshotGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group")] = ModelBase::toJson(snapshotGroup_);
    }

    return val;
}
bool UpdateSnapshotGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotGroupResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroup(refVal);
        }
    }
    return ok;
}


UpdateSnapshotGroupResponseBody UpdateSnapshotGroupRequestBody::getSnapshotGroup() const
{
    return snapshotGroup_;
}

void UpdateSnapshotGroupRequestBody::setSnapshotGroup(const UpdateSnapshotGroupResponseBody& value)
{
    snapshotGroup_ = value;
    snapshotGroupIsSet_ = true;
}

bool UpdateSnapshotGroupRequestBody::snapshotGroupIsSet() const
{
    return snapshotGroupIsSet_;
}

void UpdateSnapshotGroupRequestBody::unsetsnapshotGroup()
{
    snapshotGroupIsSet_ = false;
}

}
}
}
}
}



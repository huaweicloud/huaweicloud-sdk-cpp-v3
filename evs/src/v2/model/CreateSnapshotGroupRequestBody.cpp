

#include "huaweicloud/evs/v2/model/CreateSnapshotGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotGroupRequestBody::CreateSnapshotGroupRequestBody()
{
    snapshotGroupIsSet_ = false;
}

CreateSnapshotGroupRequestBody::~CreateSnapshotGroupRequestBody() = default;

void CreateSnapshotGroupRequestBody::validate()
{
}

web::json::value CreateSnapshotGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group")] = ModelBase::toJson(snapshotGroup_);
    }

    return val;
}
bool CreateSnapshotGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group"));
        if(!fieldValue.is_null())
        {
            SnapshotGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroup(refVal);
        }
    }
    return ok;
}


SnapshotGroup CreateSnapshotGroupRequestBody::getSnapshotGroup() const
{
    return snapshotGroup_;
}

void CreateSnapshotGroupRequestBody::setSnapshotGroup(const SnapshotGroup& value)
{
    snapshotGroup_ = value;
    snapshotGroupIsSet_ = true;
}

bool CreateSnapshotGroupRequestBody::snapshotGroupIsSet() const
{
    return snapshotGroupIsSet_;
}

void CreateSnapshotGroupRequestBody::unsetsnapshotGroup()
{
    snapshotGroupIsSet_ = false;
}

}
}
}
}
}



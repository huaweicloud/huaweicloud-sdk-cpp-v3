

#include "huaweicloud/evs/v2/model/CreateStandardSnapshotRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateStandardSnapshotRequestBody::CreateStandardSnapshotRequestBody()
{
    snapshotIsSet_ = false;
}

CreateStandardSnapshotRequestBody::~CreateStandardSnapshotRequestBody() = default;

void CreateStandardSnapshotRequestBody::validate()
{
}

web::json::value CreateStandardSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool CreateStandardSnapshotRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            CreateStandardSnapshot refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


CreateStandardSnapshot CreateStandardSnapshotRequestBody::getSnapshot() const
{
    return snapshot_;
}

void CreateStandardSnapshotRequestBody::setSnapshot(const CreateStandardSnapshot& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool CreateStandardSnapshotRequestBody::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void CreateStandardSnapshotRequestBody::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



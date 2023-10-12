

#include "huaweicloud/evs/v2/model/CreateSnapshotRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotRequestBody::CreateSnapshotRequestBody()
{
    snapshotIsSet_ = false;
}

CreateSnapshotRequestBody::~CreateSnapshotRequestBody() = default;

void CreateSnapshotRequestBody::validate()
{
}

web::json::value CreateSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool CreateSnapshotRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            CreateSnapshotOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


CreateSnapshotOption CreateSnapshotRequestBody::getSnapshot() const
{
    return snapshot_;
}

void CreateSnapshotRequestBody::setSnapshot(const CreateSnapshotOption& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool CreateSnapshotRequestBody::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void CreateSnapshotRequestBody::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}



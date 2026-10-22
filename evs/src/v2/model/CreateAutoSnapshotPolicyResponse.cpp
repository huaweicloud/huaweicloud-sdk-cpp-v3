

#include "huaweicloud/evs/v2/model/CreateAutoSnapshotPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateAutoSnapshotPolicyResponse::CreateAutoSnapshotPolicyResponse()
{
    snapshotPolicyIsSet_ = false;
}

CreateAutoSnapshotPolicyResponse::~CreateAutoSnapshotPolicyResponse() = default;

void CreateAutoSnapshotPolicyResponse::validate()
{
}

web::json::value CreateAutoSnapshotPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy")] = ModelBase::toJson(snapshotPolicy_);
    }

    return val;
}
bool CreateAutoSnapshotPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_policy"));
        if(!fieldValue.is_null())
        {
            GetSnapshotPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotPolicy(refVal);
        }
    }
    return ok;
}


GetSnapshotPolicy CreateAutoSnapshotPolicyResponse::getSnapshotPolicy() const
{
    return snapshotPolicy_;
}

void CreateAutoSnapshotPolicyResponse::setSnapshotPolicy(const GetSnapshotPolicy& value)
{
    snapshotPolicy_ = value;
    snapshotPolicyIsSet_ = true;
}

bool CreateAutoSnapshotPolicyResponse::snapshotPolicyIsSet() const
{
    return snapshotPolicyIsSet_;
}

void CreateAutoSnapshotPolicyResponse::unsetsnapshotPolicy()
{
    snapshotPolicyIsSet_ = false;
}

}
}
}
}
}



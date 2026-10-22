

#include "huaweicloud/evs/v2/model/UpdateAutoSnapshotPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateAutoSnapshotPolicyResponse::UpdateAutoSnapshotPolicyResponse()
{
    snapshotPolicyIsSet_ = false;
}

UpdateAutoSnapshotPolicyResponse::~UpdateAutoSnapshotPolicyResponse() = default;

void UpdateAutoSnapshotPolicyResponse::validate()
{
}

web::json::value UpdateAutoSnapshotPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy")] = ModelBase::toJson(snapshotPolicy_);
    }

    return val;
}
bool UpdateAutoSnapshotPolicyResponse::fromJson(const web::json::value& val)
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


GetSnapshotPolicy UpdateAutoSnapshotPolicyResponse::getSnapshotPolicy() const
{
    return snapshotPolicy_;
}

void UpdateAutoSnapshotPolicyResponse::setSnapshotPolicy(const GetSnapshotPolicy& value)
{
    snapshotPolicy_ = value;
    snapshotPolicyIsSet_ = true;
}

bool UpdateAutoSnapshotPolicyResponse::snapshotPolicyIsSet() const
{
    return snapshotPolicyIsSet_;
}

void UpdateAutoSnapshotPolicyResponse::unsetsnapshotPolicy()
{
    snapshotPolicyIsSet_ = false;
}

}
}
}
}
}



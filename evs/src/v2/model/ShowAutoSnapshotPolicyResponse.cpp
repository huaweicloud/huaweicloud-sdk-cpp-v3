

#include "huaweicloud/evs/v2/model/ShowAutoSnapshotPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowAutoSnapshotPolicyResponse::ShowAutoSnapshotPolicyResponse()
{
    snapshotPolicyIsSet_ = false;
}

ShowAutoSnapshotPolicyResponse::~ShowAutoSnapshotPolicyResponse() = default;

void ShowAutoSnapshotPolicyResponse::validate()
{
}

web::json::value ShowAutoSnapshotPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy")] = ModelBase::toJson(snapshotPolicy_);
    }

    return val;
}
bool ShowAutoSnapshotPolicyResponse::fromJson(const web::json::value& val)
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


GetSnapshotPolicy ShowAutoSnapshotPolicyResponse::getSnapshotPolicy() const
{
    return snapshotPolicy_;
}

void ShowAutoSnapshotPolicyResponse::setSnapshotPolicy(const GetSnapshotPolicy& value)
{
    snapshotPolicy_ = value;
    snapshotPolicyIsSet_ = true;
}

bool ShowAutoSnapshotPolicyResponse::snapshotPolicyIsSet() const
{
    return snapshotPolicyIsSet_;
}

void ShowAutoSnapshotPolicyResponse::unsetsnapshotPolicy()
{
    snapshotPolicyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/evs/v2/model/ListAutoSnapshotPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListAutoSnapshotPolicyResponse::ListAutoSnapshotPolicyResponse()
{
    snapshotPoliciesIsSet_ = false;
}

ListAutoSnapshotPolicyResponse::~ListAutoSnapshotPolicyResponse() = default;

void ListAutoSnapshotPolicyResponse::validate()
{
}

web::json::value ListAutoSnapshotPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPoliciesIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policies")] = ModelBase::toJson(snapshotPolicies_);
    }

    return val;
}
bool ListAutoSnapshotPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<GetSnapshotPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotPolicies(refVal);
        }
    }
    return ok;
}


std::vector<GetSnapshotPolicy>& ListAutoSnapshotPolicyResponse::getSnapshotPolicies()
{
    return snapshotPolicies_;
}

void ListAutoSnapshotPolicyResponse::setSnapshotPolicies(const std::vector<GetSnapshotPolicy>& value)
{
    snapshotPolicies_ = value;
    snapshotPoliciesIsSet_ = true;
}

bool ListAutoSnapshotPolicyResponse::snapshotPoliciesIsSet() const
{
    return snapshotPoliciesIsSet_;
}

void ListAutoSnapshotPolicyResponse::unsetsnapshotPolicies()
{
    snapshotPoliciesIsSet_ = false;
}

}
}
}
}
}



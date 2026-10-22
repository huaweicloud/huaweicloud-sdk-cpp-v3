

#include "huaweicloud/evs/v2/model/DeleteAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteAutoSnapshotPolicyRequest::DeleteAutoSnapshotPolicyRequest()
{
    snapshotPolicyId_ = "";
    snapshotPolicyIdIsSet_ = false;
}

DeleteAutoSnapshotPolicyRequest::~DeleteAutoSnapshotPolicyRequest() = default;

void DeleteAutoSnapshotPolicyRequest::validate()
{
}

web::json::value DeleteAutoSnapshotPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy_id")] = ModelBase::toJson(snapshotPolicyId_);
    }

    return val;
}
bool DeleteAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotPolicyId(refVal);
        }
    }
    return ok;
}


std::string DeleteAutoSnapshotPolicyRequest::getSnapshotPolicyId() const
{
    return snapshotPolicyId_;
}

void DeleteAutoSnapshotPolicyRequest::setSnapshotPolicyId(const std::string& value)
{
    snapshotPolicyId_ = value;
    snapshotPolicyIdIsSet_ = true;
}

bool DeleteAutoSnapshotPolicyRequest::snapshotPolicyIdIsSet() const
{
    return snapshotPolicyIdIsSet_;
}

void DeleteAutoSnapshotPolicyRequest::unsetsnapshotPolicyId()
{
    snapshotPolicyIdIsSet_ = false;
}

}
}
}
}
}



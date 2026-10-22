

#include "huaweicloud/evs/v2/model/ShowAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowAutoSnapshotPolicyRequest::ShowAutoSnapshotPolicyRequest()
{
    snapshotPolicyId_ = "";
    snapshotPolicyIdIsSet_ = false;
}

ShowAutoSnapshotPolicyRequest::~ShowAutoSnapshotPolicyRequest() = default;

void ShowAutoSnapshotPolicyRequest::validate()
{
}

web::json::value ShowAutoSnapshotPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy_id")] = ModelBase::toJson(snapshotPolicyId_);
    }

    return val;
}
bool ShowAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoSnapshotPolicyRequest::getSnapshotPolicyId() const
{
    return snapshotPolicyId_;
}

void ShowAutoSnapshotPolicyRequest::setSnapshotPolicyId(const std::string& value)
{
    snapshotPolicyId_ = value;
    snapshotPolicyIdIsSet_ = true;
}

bool ShowAutoSnapshotPolicyRequest::snapshotPolicyIdIsSet() const
{
    return snapshotPolicyIdIsSet_;
}

void ShowAutoSnapshotPolicyRequest::unsetsnapshotPolicyId()
{
    snapshotPolicyIdIsSet_ = false;
}

}
}
}
}
}



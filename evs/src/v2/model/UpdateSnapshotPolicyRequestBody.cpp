

#include "huaweicloud/evs/v2/model/UpdateSnapshotPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotPolicyRequestBody::UpdateSnapshotPolicyRequestBody()
{
    snapshotPolicyIsSet_ = false;
}

UpdateSnapshotPolicyRequestBody::~UpdateSnapshotPolicyRequestBody() = default;

void UpdateSnapshotPolicyRequestBody::validate()
{
}

web::json::value UpdateSnapshotPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy")] = ModelBase::toJson(snapshotPolicy_);
    }

    return val;
}
bool UpdateSnapshotPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_policy"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotPolicy(refVal);
        }
    }
    return ok;
}


UpdateSnapshotPolicy UpdateSnapshotPolicyRequestBody::getSnapshotPolicy() const
{
    return snapshotPolicy_;
}

void UpdateSnapshotPolicyRequestBody::setSnapshotPolicy(const UpdateSnapshotPolicy& value)
{
    snapshotPolicy_ = value;
    snapshotPolicyIsSet_ = true;
}

bool UpdateSnapshotPolicyRequestBody::snapshotPolicyIsSet() const
{
    return snapshotPolicyIsSet_;
}

void UpdateSnapshotPolicyRequestBody::unsetsnapshotPolicy()
{
    snapshotPolicyIsSet_ = false;
}

}
}
}
}
}



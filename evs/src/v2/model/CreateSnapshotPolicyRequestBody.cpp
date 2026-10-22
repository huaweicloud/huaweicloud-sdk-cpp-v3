

#include "huaweicloud/evs/v2/model/CreateSnapshotPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotPolicyRequestBody::CreateSnapshotPolicyRequestBody()
{
    snapshotPolicyIsSet_ = false;
}

CreateSnapshotPolicyRequestBody::~CreateSnapshotPolicyRequestBody() = default;

void CreateSnapshotPolicyRequestBody::validate()
{
}

web::json::value CreateSnapshotPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy")] = ModelBase::toJson(snapshotPolicy_);
    }

    return val;
}
bool CreateSnapshotPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_policy"));
        if(!fieldValue.is_null())
        {
            CreateSnapshotPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotPolicy(refVal);
        }
    }
    return ok;
}


CreateSnapshotPolicy CreateSnapshotPolicyRequestBody::getSnapshotPolicy() const
{
    return snapshotPolicy_;
}

void CreateSnapshotPolicyRequestBody::setSnapshotPolicy(const CreateSnapshotPolicy& value)
{
    snapshotPolicy_ = value;
    snapshotPolicyIsSet_ = true;
}

bool CreateSnapshotPolicyRequestBody::snapshotPolicyIsSet() const
{
    return snapshotPolicyIsSet_;
}

void CreateSnapshotPolicyRequestBody::unsetsnapshotPolicy()
{
    snapshotPolicyIsSet_ = false;
}

}
}
}
}
}



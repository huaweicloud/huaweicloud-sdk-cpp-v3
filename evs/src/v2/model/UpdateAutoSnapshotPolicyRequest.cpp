

#include "huaweicloud/evs/v2/model/UpdateAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateAutoSnapshotPolicyRequest::UpdateAutoSnapshotPolicyRequest()
{
    snapshotPolicyId_ = "";
    snapshotPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutoSnapshotPolicyRequest::~UpdateAutoSnapshotPolicyRequest() = default;

void UpdateAutoSnapshotPolicyRequest::validate()
{
}

web::json::value UpdateAutoSnapshotPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_policy_id")] = ModelBase::toJson(snapshotPolicyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoSnapshotPolicyRequest::getSnapshotPolicyId() const
{
    return snapshotPolicyId_;
}

void UpdateAutoSnapshotPolicyRequest::setSnapshotPolicyId(const std::string& value)
{
    snapshotPolicyId_ = value;
    snapshotPolicyIdIsSet_ = true;
}

bool UpdateAutoSnapshotPolicyRequest::snapshotPolicyIdIsSet() const
{
    return snapshotPolicyIdIsSet_;
}

void UpdateAutoSnapshotPolicyRequest::unsetsnapshotPolicyId()
{
    snapshotPolicyIdIsSet_ = false;
}

UpdateSnapshotPolicyRequestBody UpdateAutoSnapshotPolicyRequest::getBody() const
{
    return body_;
}

void UpdateAutoSnapshotPolicyRequest::setBody(const UpdateSnapshotPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutoSnapshotPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutoSnapshotPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



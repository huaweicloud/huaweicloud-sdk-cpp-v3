

#include "huaweicloud/evs/v2/model/DisassociateAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DisassociateAutoSnapshotPolicyRequest::DisassociateAutoSnapshotPolicyRequest()
{
    snapshotPolicyId_ = "";
    snapshotPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateAutoSnapshotPolicyRequest::~DisassociateAutoSnapshotPolicyRequest() = default;

void DisassociateAutoSnapshotPolicyRequest::validate()
{
}

web::json::value DisassociateAutoSnapshotPolicyRequest::toJson() const
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
bool DisassociateAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateAutoSnapshotPolicyRequest::getSnapshotPolicyId() const
{
    return snapshotPolicyId_;
}

void DisassociateAutoSnapshotPolicyRequest::setSnapshotPolicyId(const std::string& value)
{
    snapshotPolicyId_ = value;
    snapshotPolicyIdIsSet_ = true;
}

bool DisassociateAutoSnapshotPolicyRequest::snapshotPolicyIdIsSet() const
{
    return snapshotPolicyIdIsSet_;
}

void DisassociateAutoSnapshotPolicyRequest::unsetsnapshotPolicyId()
{
    snapshotPolicyIdIsSet_ = false;
}

std::vector<std::string>& DisassociateAutoSnapshotPolicyRequest::getBody()
{
    return body_;
}

void DisassociateAutoSnapshotPolicyRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateAutoSnapshotPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateAutoSnapshotPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



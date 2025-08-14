

#include "huaweicloud/iotda/v5/model/UpdateRoutingFlowControlPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingFlowControlPolicyRequest::UpdateRoutingFlowControlPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRoutingFlowControlPolicyRequest::~UpdateRoutingFlowControlPolicyRequest() = default;

void UpdateRoutingFlowControlPolicyRequest::validate()
{
}

web::json::value UpdateRoutingFlowControlPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRoutingFlowControlPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateFlowControlPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRoutingFlowControlPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRoutingFlowControlPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRoutingFlowControlPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateRoutingFlowControlPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateRoutingFlowControlPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateRoutingFlowControlPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdateFlowControlPolicy UpdateRoutingFlowControlPolicyRequest::getBody() const
{
    return body_;
}

void UpdateRoutingFlowControlPolicyRequest::setBody(const UpdateFlowControlPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRoutingFlowControlPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRemoveFirewallRuleRequest::NeutronRemoveFirewallRuleRequest()
{
    firewallPolicyId_ = "";
    firewallPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronRemoveFirewallRuleRequest::~NeutronRemoveFirewallRuleRequest() = default;

void NeutronRemoveFirewallRuleRequest::validate()
{
}

web::json::value NeutronRemoveFirewallRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy_id")] = ModelBase::toJson(firewallPolicyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronRemoveFirewallRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronRemoveFirewallRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronRemoveFirewallRuleRequest::getFirewallPolicyId() const
{
    return firewallPolicyId_;
}

void NeutronRemoveFirewallRuleRequest::setFirewallPolicyId(const std::string& value)
{
    firewallPolicyId_ = value;
    firewallPolicyIdIsSet_ = true;
}

bool NeutronRemoveFirewallRuleRequest::firewallPolicyIdIsSet() const
{
    return firewallPolicyIdIsSet_;
}

void NeutronRemoveFirewallRuleRequest::unsetfirewallPolicyId()
{
    firewallPolicyIdIsSet_ = false;
}

NeutronRemoveFirewallRuleRequestBody NeutronRemoveFirewallRuleRequest::getBody() const
{
    return body_;
}

void NeutronRemoveFirewallRuleRequest::setBody(const NeutronRemoveFirewallRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronRemoveFirewallRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronRemoveFirewallRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



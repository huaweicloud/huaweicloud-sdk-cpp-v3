

#include "huaweicloud/vpc/v2/model/NeutronAddFirewallRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronAddFirewallRuleRequest::NeutronAddFirewallRuleRequest()
{
    firewallPolicyId_ = "";
    firewallPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronAddFirewallRuleRequest::~NeutronAddFirewallRuleRequest() = default;

void NeutronAddFirewallRuleRequest::validate()
{
}

web::json::value NeutronAddFirewallRuleRequest::toJson() const
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
bool NeutronAddFirewallRuleRequest::fromJson(const web::json::value& val)
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
            NeutronInsertFirewallRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronAddFirewallRuleRequest::getFirewallPolicyId() const
{
    return firewallPolicyId_;
}

void NeutronAddFirewallRuleRequest::setFirewallPolicyId(const std::string& value)
{
    firewallPolicyId_ = value;
    firewallPolicyIdIsSet_ = true;
}

bool NeutronAddFirewallRuleRequest::firewallPolicyIdIsSet() const
{
    return firewallPolicyIdIsSet_;
}

void NeutronAddFirewallRuleRequest::unsetfirewallPolicyId()
{
    firewallPolicyIdIsSet_ = false;
}

NeutronInsertFirewallRuleRequestBody NeutronAddFirewallRuleRequest::getBody() const
{
    return body_;
}

void NeutronAddFirewallRuleRequest::setBody(const NeutronInsertFirewallRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronAddFirewallRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronAddFirewallRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



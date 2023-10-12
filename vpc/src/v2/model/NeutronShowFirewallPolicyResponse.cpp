

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallPolicyResponse::NeutronShowFirewallPolicyResponse()
{
    firewallPolicyIsSet_ = false;
}

NeutronShowFirewallPolicyResponse::~NeutronShowFirewallPolicyResponse() = default;

void NeutronShowFirewallPolicyResponse::validate()
{
}

web::json::value NeutronShowFirewallPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy")] = ModelBase::toJson(firewallPolicy_);
    }

    return val;
}
bool NeutronShowFirewallPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policy"));
        if(!fieldValue.is_null())
        {
            NeutronFirewallPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicy(refVal);
        }
    }
    return ok;
}


NeutronFirewallPolicy NeutronShowFirewallPolicyResponse::getFirewallPolicy() const
{
    return firewallPolicy_;
}

void NeutronShowFirewallPolicyResponse::setFirewallPolicy(const NeutronFirewallPolicy& value)
{
    firewallPolicy_ = value;
    firewallPolicyIsSet_ = true;
}

bool NeutronShowFirewallPolicyResponse::firewallPolicyIsSet() const
{
    return firewallPolicyIsSet_;
}

void NeutronShowFirewallPolicyResponse::unsetfirewallPolicy()
{
    firewallPolicyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallPolicyResponse::NeutronUpdateFirewallPolicyResponse()
{
    firewallPolicyIsSet_ = false;
}

NeutronUpdateFirewallPolicyResponse::~NeutronUpdateFirewallPolicyResponse() = default;

void NeutronUpdateFirewallPolicyResponse::validate()
{
}

web::json::value NeutronUpdateFirewallPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy")] = ModelBase::toJson(firewallPolicy_);
    }

    return val;
}

bool NeutronUpdateFirewallPolicyResponse::fromJson(const web::json::value& val)
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

NeutronFirewallPolicy NeutronUpdateFirewallPolicyResponse::getFirewallPolicy() const
{
    return firewallPolicy_;
}

void NeutronUpdateFirewallPolicyResponse::setFirewallPolicy(const NeutronFirewallPolicy& value)
{
    firewallPolicy_ = value;
    firewallPolicyIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyResponse::firewallPolicyIsSet() const
{
    return firewallPolicyIsSet_;
}

void NeutronUpdateFirewallPolicyResponse::unsetfirewallPolicy()
{
    firewallPolicyIsSet_ = false;
}

}
}
}
}
}



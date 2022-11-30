

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallPolicyResponse::NeutronCreateFirewallPolicyResponse()
{
    firewallPolicyIsSet_ = false;
}

NeutronCreateFirewallPolicyResponse::~NeutronCreateFirewallPolicyResponse() = default;

void NeutronCreateFirewallPolicyResponse::validate()
{
}

web::json::value NeutronCreateFirewallPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy")] = ModelBase::toJson(firewallPolicy_);
    }

    return val;
}

bool NeutronCreateFirewallPolicyResponse::fromJson(const web::json::value& val)
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


NeutronFirewallPolicy NeutronCreateFirewallPolicyResponse::getFirewallPolicy() const
{
    return firewallPolicy_;
}

void NeutronCreateFirewallPolicyResponse::setFirewallPolicy(const NeutronFirewallPolicy& value)
{
    firewallPolicy_ = value;
    firewallPolicyIsSet_ = true;
}

bool NeutronCreateFirewallPolicyResponse::firewallPolicyIsSet() const
{
    return firewallPolicyIsSet_;
}

void NeutronCreateFirewallPolicyResponse::unsetfirewallPolicy()
{
    firewallPolicyIsSet_ = false;
}

}
}
}
}
}



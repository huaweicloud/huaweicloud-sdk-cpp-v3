

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallRuleResponse::NeutronShowFirewallRuleResponse()
{
    firewallRuleIsSet_ = false;
}

NeutronShowFirewallRuleResponse::~NeutronShowFirewallRuleResponse() = default;

void NeutronShowFirewallRuleResponse::validate()
{
}

web::json::value NeutronShowFirewallRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule")] = ModelBase::toJson(firewallRule_);
    }

    return val;
}

bool NeutronShowFirewallRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rule"));
        if(!fieldValue.is_null())
        {
            NeutronFirewallRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRule(refVal);
        }
    }
    return ok;
}


NeutronFirewallRule NeutronShowFirewallRuleResponse::getFirewallRule() const
{
    return firewallRule_;
}

void NeutronShowFirewallRuleResponse::setFirewallRule(const NeutronFirewallRule& value)
{
    firewallRule_ = value;
    firewallRuleIsSet_ = true;
}

bool NeutronShowFirewallRuleResponse::firewallRuleIsSet() const
{
    return firewallRuleIsSet_;
}

void NeutronShowFirewallRuleResponse::unsetfirewallRule()
{
    firewallRuleIsSet_ = false;
}

}
}
}
}
}



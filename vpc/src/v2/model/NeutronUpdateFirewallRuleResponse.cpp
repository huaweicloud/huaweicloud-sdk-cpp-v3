

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallRuleResponse::NeutronUpdateFirewallRuleResponse()
{
    firewallRuleIsSet_ = false;
}

NeutronUpdateFirewallRuleResponse::~NeutronUpdateFirewallRuleResponse() = default;

void NeutronUpdateFirewallRuleResponse::validate()
{
}

web::json::value NeutronUpdateFirewallRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule")] = ModelBase::toJson(firewallRule_);
    }

    return val;
}

bool NeutronUpdateFirewallRuleResponse::fromJson(const web::json::value& val)
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


NeutronFirewallRule NeutronUpdateFirewallRuleResponse::getFirewallRule() const
{
    return firewallRule_;
}

void NeutronUpdateFirewallRuleResponse::setFirewallRule(const NeutronFirewallRule& value)
{
    firewallRule_ = value;
    firewallRuleIsSet_ = true;
}

bool NeutronUpdateFirewallRuleResponse::firewallRuleIsSet() const
{
    return firewallRuleIsSet_;
}

void NeutronUpdateFirewallRuleResponse::unsetfirewallRule()
{
    firewallRuleIsSet_ = false;
}

}
}
}
}
}



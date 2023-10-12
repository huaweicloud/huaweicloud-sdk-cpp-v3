

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallRuleResponse::NeutronCreateFirewallRuleResponse()
{
    firewallRuleIsSet_ = false;
}

NeutronCreateFirewallRuleResponse::~NeutronCreateFirewallRuleResponse() = default;

void NeutronCreateFirewallRuleResponse::validate()
{
}

web::json::value NeutronCreateFirewallRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule")] = ModelBase::toJson(firewallRule_);
    }

    return val;
}
bool NeutronCreateFirewallRuleResponse::fromJson(const web::json::value& val)
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


NeutronFirewallRule NeutronCreateFirewallRuleResponse::getFirewallRule() const
{
    return firewallRule_;
}

void NeutronCreateFirewallRuleResponse::setFirewallRule(const NeutronFirewallRule& value)
{
    firewallRule_ = value;
    firewallRuleIsSet_ = true;
}

bool NeutronCreateFirewallRuleResponse::firewallRuleIsSet() const
{
    return firewallRuleIsSet_;
}

void NeutronCreateFirewallRuleResponse::unsetfirewallRule()
{
    firewallRuleIsSet_ = false;
}

}
}
}
}
}



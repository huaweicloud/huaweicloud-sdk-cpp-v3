

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallRuleRequestBody::NeutronUpdateFirewallRuleRequestBody()
{
    firewallRuleIsSet_ = false;
}

NeutronUpdateFirewallRuleRequestBody::~NeutronUpdateFirewallRuleRequestBody() = default;

void NeutronUpdateFirewallRuleRequestBody::validate()
{
}

web::json::value NeutronUpdateFirewallRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule")] = ModelBase::toJson(firewallRule_);
    }

    return val;
}

bool NeutronUpdateFirewallRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rule"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallRuleOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRule(refVal);
        }
    }
    return ok;
}

NeutronUpdateFirewallRuleOption NeutronUpdateFirewallRuleRequestBody::getFirewallRule() const
{
    return firewallRule_;
}

void NeutronUpdateFirewallRuleRequestBody::setFirewallRule(const NeutronUpdateFirewallRuleOption& value)
{
    firewallRule_ = value;
    firewallRuleIsSet_ = true;
}

bool NeutronUpdateFirewallRuleRequestBody::firewallRuleIsSet() const
{
    return firewallRuleIsSet_;
}

void NeutronUpdateFirewallRuleRequestBody::unsetfirewallRule()
{
    firewallRuleIsSet_ = false;
}

}
}
}
}
}



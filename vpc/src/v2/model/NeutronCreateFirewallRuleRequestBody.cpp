

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallRuleRequestBody::NeutronCreateFirewallRuleRequestBody()
{
    firewallRuleIsSet_ = false;
}

NeutronCreateFirewallRuleRequestBody::~NeutronCreateFirewallRuleRequestBody() = default;

void NeutronCreateFirewallRuleRequestBody::validate()
{
}

web::json::value NeutronCreateFirewallRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule")] = ModelBase::toJson(firewallRule_);
    }

    return val;
}

bool NeutronCreateFirewallRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rule"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallRuleOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRule(refVal);
        }
    }
    return ok;
}

NeutronCreateFirewallRuleOption NeutronCreateFirewallRuleRequestBody::getFirewallRule() const
{
    return firewallRule_;
}

void NeutronCreateFirewallRuleRequestBody::setFirewallRule(const NeutronCreateFirewallRuleOption& value)
{
    firewallRule_ = value;
    firewallRuleIsSet_ = true;
}

bool NeutronCreateFirewallRuleRequestBody::firewallRuleIsSet() const
{
    return firewallRuleIsSet_;
}

void NeutronCreateFirewallRuleRequestBody::unsetfirewallRule()
{
    firewallRuleIsSet_ = false;
}

}
}
}
}
}



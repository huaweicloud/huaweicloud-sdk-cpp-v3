

#include "huaweicloud/vpc/v2/model/NeutronListFirewallRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallRulesResponse::NeutronListFirewallRulesResponse()
{
    firewallRulesIsSet_ = false;
    firewallRulesLinksIsSet_ = false;
}

NeutronListFirewallRulesResponse::~NeutronListFirewallRulesResponse() = default;

void NeutronListFirewallRulesResponse::validate()
{
}

web::json::value NeutronListFirewallRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRulesIsSet_) {
        val[utility::conversions::to_string_t("firewall_rules")] = ModelBase::toJson(firewallRules_);
    }
    if(firewallRulesLinksIsSet_) {
        val[utility::conversions::to_string_t("firewall_rules_links")] = ModelBase::toJson(firewallRulesLinks_);
    }

    return val;
}

bool NeutronListFirewallRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronFirewallRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firewall_rules_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rules_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRulesLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronFirewallRule>& NeutronListFirewallRulesResponse::getFirewallRules()
{
    return firewallRules_;
}

void NeutronListFirewallRulesResponse::setFirewallRules(const std::vector<NeutronFirewallRule>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronListFirewallRulesResponse::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronListFirewallRulesResponse::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListFirewallRulesResponse::getFirewallRulesLinks()
{
    return firewallRulesLinks_;
}

void NeutronListFirewallRulesResponse::setFirewallRulesLinks(const std::vector<NeutronPageLink>& value)
{
    firewallRulesLinks_ = value;
    firewallRulesLinksIsSet_ = true;
}

bool NeutronListFirewallRulesResponse::firewallRulesLinksIsSet() const
{
    return firewallRulesLinksIsSet_;
}

void NeutronListFirewallRulesResponse::unsetfirewallRulesLinks()
{
    firewallRulesLinksIsSet_ = false;
}

}
}
}
}
}



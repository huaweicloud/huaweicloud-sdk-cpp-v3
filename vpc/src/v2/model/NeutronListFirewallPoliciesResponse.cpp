

#include "huaweicloud/vpc/v2/model/NeutronListFirewallPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallPoliciesResponse::NeutronListFirewallPoliciesResponse()
{
    firewallPoliciesIsSet_ = false;
    firewallPoliciesLinksIsSet_ = false;
}

NeutronListFirewallPoliciesResponse::~NeutronListFirewallPoliciesResponse() = default;

void NeutronListFirewallPoliciesResponse::validate()
{
}

web::json::value NeutronListFirewallPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPoliciesIsSet_) {
        val[utility::conversions::to_string_t("firewall_policies")] = ModelBase::toJson(firewallPolicies_);
    }
    if(firewallPoliciesLinksIsSet_) {
        val[utility::conversions::to_string_t("firewall_policies_links")] = ModelBase::toJson(firewallPoliciesLinks_);
    }

    return val;
}
bool NeutronListFirewallPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronFirewallPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firewall_policies_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policies_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPoliciesLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronFirewallPolicy>& NeutronListFirewallPoliciesResponse::getFirewallPolicies()
{
    return firewallPolicies_;
}

void NeutronListFirewallPoliciesResponse::setFirewallPolicies(const std::vector<NeutronFirewallPolicy>& value)
{
    firewallPolicies_ = value;
    firewallPoliciesIsSet_ = true;
}

bool NeutronListFirewallPoliciesResponse::firewallPoliciesIsSet() const
{
    return firewallPoliciesIsSet_;
}

void NeutronListFirewallPoliciesResponse::unsetfirewallPolicies()
{
    firewallPoliciesIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListFirewallPoliciesResponse::getFirewallPoliciesLinks()
{
    return firewallPoliciesLinks_;
}

void NeutronListFirewallPoliciesResponse::setFirewallPoliciesLinks(const std::vector<NeutronPageLink>& value)
{
    firewallPoliciesLinks_ = value;
    firewallPoliciesLinksIsSet_ = true;
}

bool NeutronListFirewallPoliciesResponse::firewallPoliciesLinksIsSet() const
{
    return firewallPoliciesLinksIsSet_;
}

void NeutronListFirewallPoliciesResponse::unsetfirewallPoliciesLinks()
{
    firewallPoliciesLinksIsSet_ = false;
}

}
}
}
}
}



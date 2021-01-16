

#include "huaweicloud/vpc/v2/model/NeutronListFirewallGroupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallGroupsResponse::NeutronListFirewallGroupsResponse()
{
    firewallGroupsIsSet_ = false;
    firewallGroupsLinksIsSet_ = false;
}

NeutronListFirewallGroupsResponse::~NeutronListFirewallGroupsResponse() = default;

void NeutronListFirewallGroupsResponse::validate()
{
}

web::json::value NeutronListFirewallGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupsIsSet_) {
        val[utility::conversions::to_string_t("firewall_groups")] = ModelBase::toJson(firewallGroups_);
    }
    if(firewallGroupsLinksIsSet_) {
        val[utility::conversions::to_string_t("firewall_groups_links")] = ModelBase::toJson(firewallGroupsLinks_);
    }

    return val;
}

bool NeutronListFirewallGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronFirewallGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firewall_groups_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_groups_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroupsLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronFirewallGroup>& NeutronListFirewallGroupsResponse::getFirewallGroups()
{
    return firewallGroups_;
}

void NeutronListFirewallGroupsResponse::setFirewallGroups(const std::vector<NeutronFirewallGroup>& value)
{
    firewallGroups_ = value;
    firewallGroupsIsSet_ = true;
}

bool NeutronListFirewallGroupsResponse::firewallGroupsIsSet() const
{
    return firewallGroupsIsSet_;
}

void NeutronListFirewallGroupsResponse::unsetfirewallGroups()
{
    firewallGroupsIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListFirewallGroupsResponse::getFirewallGroupsLinks()
{
    return firewallGroupsLinks_;
}

void NeutronListFirewallGroupsResponse::setFirewallGroupsLinks(const std::vector<NeutronPageLink>& value)
{
    firewallGroupsLinks_ = value;
    firewallGroupsLinksIsSet_ = true;
}

bool NeutronListFirewallGroupsResponse::firewallGroupsLinksIsSet() const
{
    return firewallGroupsLinksIsSet_;
}

void NeutronListFirewallGroupsResponse::unsetfirewallGroupsLinks()
{
    firewallGroupsLinksIsSet_ = false;
}

}
}
}
}
}



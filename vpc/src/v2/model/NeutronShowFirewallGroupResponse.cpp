

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallGroupResponse::NeutronShowFirewallGroupResponse()
{
    firewallGroupIsSet_ = false;
}

NeutronShowFirewallGroupResponse::~NeutronShowFirewallGroupResponse() = default;

void NeutronShowFirewallGroupResponse::validate()
{
}

web::json::value NeutronShowFirewallGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIsSet_) {
        val[utility::conversions::to_string_t("firewall_group")] = ModelBase::toJson(firewallGroup_);
    }

    return val;
}
bool NeutronShowFirewallGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_group"));
        if(!fieldValue.is_null())
        {
            NeutronFirewallGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroup(refVal);
        }
    }
    return ok;
}


NeutronFirewallGroup NeutronShowFirewallGroupResponse::getFirewallGroup() const
{
    return firewallGroup_;
}

void NeutronShowFirewallGroupResponse::setFirewallGroup(const NeutronFirewallGroup& value)
{
    firewallGroup_ = value;
    firewallGroupIsSet_ = true;
}

bool NeutronShowFirewallGroupResponse::firewallGroupIsSet() const
{
    return firewallGroupIsSet_;
}

void NeutronShowFirewallGroupResponse::unsetfirewallGroup()
{
    firewallGroupIsSet_ = false;
}

}
}
}
}
}



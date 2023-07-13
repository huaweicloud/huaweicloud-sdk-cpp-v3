

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallGroupResponse::NeutronUpdateFirewallGroupResponse()
{
    firewallGroupIsSet_ = false;
}

NeutronUpdateFirewallGroupResponse::~NeutronUpdateFirewallGroupResponse() = default;

void NeutronUpdateFirewallGroupResponse::validate()
{
}

web::json::value NeutronUpdateFirewallGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIsSet_) {
        val[utility::conversions::to_string_t("firewall_group")] = ModelBase::toJson(firewallGroup_);
    }

    return val;
}

bool NeutronUpdateFirewallGroupResponse::fromJson(const web::json::value& val)
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

NeutronFirewallGroup NeutronUpdateFirewallGroupResponse::getFirewallGroup() const
{
    return firewallGroup_;
}

void NeutronUpdateFirewallGroupResponse::setFirewallGroup(const NeutronFirewallGroup& value)
{
    firewallGroup_ = value;
    firewallGroupIsSet_ = true;
}

bool NeutronUpdateFirewallGroupResponse::firewallGroupIsSet() const
{
    return firewallGroupIsSet_;
}

void NeutronUpdateFirewallGroupResponse::unsetfirewallGroup()
{
    firewallGroupIsSet_ = false;
}

}
}
}
}
}



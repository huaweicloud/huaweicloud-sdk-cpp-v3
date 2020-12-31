

#include "huaweicloud/vpc/model/NeutronCreateFirewallGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallGroupResponse::NeutronCreateFirewallGroupResponse()
{
    firewallGroupIsSet_ = false;
}

NeutronCreateFirewallGroupResponse::~NeutronCreateFirewallGroupResponse() = default;

void NeutronCreateFirewallGroupResponse::validate()
{
}

web::json::value NeutronCreateFirewallGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIsSet_) {
        val[utility::conversions::to_string_t("firewall_group")] = ModelBase::toJson(firewallGroup_);
    }

    return val;
}

bool NeutronCreateFirewallGroupResponse::fromJson(const web::json::value& val)
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


NeutronFirewallGroup NeutronCreateFirewallGroupResponse::getFirewallGroup() const
{
    return firewallGroup_;
}

void NeutronCreateFirewallGroupResponse::setFirewallGroup(const NeutronFirewallGroup& value)
{
    firewallGroup_ = value;
    firewallGroupIsSet_ = true;
}

bool NeutronCreateFirewallGroupResponse::firewallGroupIsSet() const
{
    return firewallGroupIsSet_;
}

void NeutronCreateFirewallGroupResponse::unsetfirewallGroup()
{
    firewallGroupIsSet_ = false;
}

}
}
}
}
}



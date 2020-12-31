

#include "huaweicloud/vpc/model/NeutronUpdateFirewallGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallGroupRequestBody::NeutronUpdateFirewallGroupRequestBody()
{
    firewallGroupIsSet_ = false;
}

NeutronUpdateFirewallGroupRequestBody::~NeutronUpdateFirewallGroupRequestBody() = default;

void NeutronUpdateFirewallGroupRequestBody::validate()
{
}

web::json::value NeutronUpdateFirewallGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIsSet_) {
        val[utility::conversions::to_string_t("firewall_group")] = ModelBase::toJson(firewallGroup_);
    }

    return val;
}

bool NeutronUpdateFirewallGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_group"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroup(refVal);
        }
    }
    return ok;
}


NeutronUpdateFirewallGroupOption NeutronUpdateFirewallGroupRequestBody::getFirewallGroup() const
{
    return firewallGroup_;
}

void NeutronUpdateFirewallGroupRequestBody::setFirewallGroup(const NeutronUpdateFirewallGroupOption& value)
{
    firewallGroup_ = value;
    firewallGroupIsSet_ = true;
}

bool NeutronUpdateFirewallGroupRequestBody::firewallGroupIsSet() const
{
    return firewallGroupIsSet_;
}

void NeutronUpdateFirewallGroupRequestBody::unsetfirewallGroup()
{
    firewallGroupIsSet_ = false;
}

}
}
}
}
}



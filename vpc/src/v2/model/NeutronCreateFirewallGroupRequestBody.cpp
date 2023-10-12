

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallGroupRequestBody::NeutronCreateFirewallGroupRequestBody()
{
    firewallGroupIsSet_ = false;
}

NeutronCreateFirewallGroupRequestBody::~NeutronCreateFirewallGroupRequestBody() = default;

void NeutronCreateFirewallGroupRequestBody::validate()
{
}

web::json::value NeutronCreateFirewallGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIsSet_) {
        val[utility::conversions::to_string_t("firewall_group")] = ModelBase::toJson(firewallGroup_);
    }

    return val;
}
bool NeutronCreateFirewallGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_group"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroup(refVal);
        }
    }
    return ok;
}


NeutronCreateFirewallGroupOption NeutronCreateFirewallGroupRequestBody::getFirewallGroup() const
{
    return firewallGroup_;
}

void NeutronCreateFirewallGroupRequestBody::setFirewallGroup(const NeutronCreateFirewallGroupOption& value)
{
    firewallGroup_ = value;
    firewallGroupIsSet_ = true;
}

bool NeutronCreateFirewallGroupRequestBody::firewallGroupIsSet() const
{
    return firewallGroupIsSet_;
}

void NeutronCreateFirewallGroupRequestBody::unsetfirewallGroup()
{
    firewallGroupIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallPolicyRequestBody::NeutronUpdateFirewallPolicyRequestBody()
{
    firewallPolicyIsSet_ = false;
}

NeutronUpdateFirewallPolicyRequestBody::~NeutronUpdateFirewallPolicyRequestBody() = default;

void NeutronUpdateFirewallPolicyRequestBody::validate()
{
}

web::json::value NeutronUpdateFirewallPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy")] = ModelBase::toJson(firewallPolicy_);
    }

    return val;
}

bool NeutronUpdateFirewallPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policy"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallPolicyOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicy(refVal);
        }
    }
    return ok;
}


NeutronUpdateFirewallPolicyOption NeutronUpdateFirewallPolicyRequestBody::getFirewallPolicy() const
{
    return firewallPolicy_;
}

void NeutronUpdateFirewallPolicyRequestBody::setFirewallPolicy(const NeutronUpdateFirewallPolicyOption& value)
{
    firewallPolicy_ = value;
    firewallPolicyIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyRequestBody::firewallPolicyIsSet() const
{
    return firewallPolicyIsSet_;
}

void NeutronUpdateFirewallPolicyRequestBody::unsetfirewallPolicy()
{
    firewallPolicyIsSet_ = false;
}

}
}
}
}
}



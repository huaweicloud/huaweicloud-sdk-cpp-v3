

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallPolicyRequestBody::NeutronCreateFirewallPolicyRequestBody()
{
    firewallPolicyIsSet_ = false;
}

NeutronCreateFirewallPolicyRequestBody::~NeutronCreateFirewallPolicyRequestBody() = default;

void NeutronCreateFirewallPolicyRequestBody::validate()
{
}

web::json::value NeutronCreateFirewallPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy")] = ModelBase::toJson(firewallPolicy_);
    }

    return val;
}
bool NeutronCreateFirewallPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policy"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallPolicyOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicy(refVal);
        }
    }
    return ok;
}


NeutronCreateFirewallPolicyOption NeutronCreateFirewallPolicyRequestBody::getFirewallPolicy() const
{
    return firewallPolicy_;
}

void NeutronCreateFirewallPolicyRequestBody::setFirewallPolicy(const NeutronCreateFirewallPolicyOption& value)
{
    firewallPolicy_ = value;
    firewallPolicyIsSet_ = true;
}

bool NeutronCreateFirewallPolicyRequestBody::firewallPolicyIsSet() const
{
    return firewallPolicyIsSet_;
}

void NeutronCreateFirewallPolicyRequestBody::unsetfirewallPolicy()
{
    firewallPolicyIsSet_ = false;
}

}
}
}
}
}



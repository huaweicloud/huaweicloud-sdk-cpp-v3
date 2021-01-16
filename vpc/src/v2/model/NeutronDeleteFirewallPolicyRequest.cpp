

#include "huaweicloud/vpc/v2/model/NeutronDeleteFirewallPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteFirewallPolicyRequest::NeutronDeleteFirewallPolicyRequest()
{
    firewallPolicyId_ = "";
    firewallPolicyIdIsSet_ = false;
}

NeutronDeleteFirewallPolicyRequest::~NeutronDeleteFirewallPolicyRequest() = default;

void NeutronDeleteFirewallPolicyRequest::validate()
{
}

web::json::value NeutronDeleteFirewallPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy_id")] = ModelBase::toJson(firewallPolicyId_);
    }

    return val;
}

bool NeutronDeleteFirewallPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallPolicyId(refVal);
        }
    }
    return ok;
}


std::string NeutronDeleteFirewallPolicyRequest::getFirewallPolicyId() const
{
    return firewallPolicyId_;
}

void NeutronDeleteFirewallPolicyRequest::setFirewallPolicyId(const std::string& value)
{
    firewallPolicyId_ = value;
    firewallPolicyIdIsSet_ = true;
}

bool NeutronDeleteFirewallPolicyRequest::firewallPolicyIdIsSet() const
{
    return firewallPolicyIdIsSet_;
}

void NeutronDeleteFirewallPolicyRequest::unsetfirewallPolicyId()
{
    firewallPolicyIdIsSet_ = false;
}

}
}
}
}
}



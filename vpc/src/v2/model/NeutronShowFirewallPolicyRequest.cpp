

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallPolicyRequest::NeutronShowFirewallPolicyRequest()
{
    firewallPolicyId_ = "";
    firewallPolicyIdIsSet_ = false;
}

NeutronShowFirewallPolicyRequest::~NeutronShowFirewallPolicyRequest() = default;

void NeutronShowFirewallPolicyRequest::validate()
{
}

web::json::value NeutronShowFirewallPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy_id")] = ModelBase::toJson(firewallPolicyId_);
    }

    return val;
}

bool NeutronShowFirewallPolicyRequest::fromJson(const web::json::value& val)
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


std::string NeutronShowFirewallPolicyRequest::getFirewallPolicyId() const
{
    return firewallPolicyId_;
}

void NeutronShowFirewallPolicyRequest::setFirewallPolicyId(const std::string& value)
{
    firewallPolicyId_ = value;
    firewallPolicyIdIsSet_ = true;
}

bool NeutronShowFirewallPolicyRequest::firewallPolicyIdIsSet() const
{
    return firewallPolicyIdIsSet_;
}

void NeutronShowFirewallPolicyRequest::unsetfirewallPolicyId()
{
    firewallPolicyIdIsSet_ = false;
}

}
}
}
}
}



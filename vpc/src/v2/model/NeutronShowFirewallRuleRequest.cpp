

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallRuleRequest::NeutronShowFirewallRuleRequest()
{
    firewallRuleId_ = "";
    firewallRuleIdIsSet_ = false;
}

NeutronShowFirewallRuleRequest::~NeutronShowFirewallRuleRequest() = default;

void NeutronShowFirewallRuleRequest::validate()
{
}

web::json::value NeutronShowFirewallRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule_id")] = ModelBase::toJson(firewallRuleId_);
    }

    return val;
}

bool NeutronShowFirewallRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRuleId(refVal);
        }
    }
    return ok;
}


std::string NeutronShowFirewallRuleRequest::getFirewallRuleId() const
{
    return firewallRuleId_;
}

void NeutronShowFirewallRuleRequest::setFirewallRuleId(const std::string& value)
{
    firewallRuleId_ = value;
    firewallRuleIdIsSet_ = true;
}

bool NeutronShowFirewallRuleRequest::firewallRuleIdIsSet() const
{
    return firewallRuleIdIsSet_;
}

void NeutronShowFirewallRuleRequest::unsetfirewallRuleId()
{
    firewallRuleIdIsSet_ = false;
}

}
}
}
}
}



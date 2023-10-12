

#include "huaweicloud/vpc/v2/model/NeutronDeleteFirewallRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteFirewallRuleRequest::NeutronDeleteFirewallRuleRequest()
{
    firewallRuleId_ = "";
    firewallRuleIdIsSet_ = false;
}

NeutronDeleteFirewallRuleRequest::~NeutronDeleteFirewallRuleRequest() = default;

void NeutronDeleteFirewallRuleRequest::validate()
{
}

web::json::value NeutronDeleteFirewallRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule_id")] = ModelBase::toJson(firewallRuleId_);
    }

    return val;
}
bool NeutronDeleteFirewallRuleRequest::fromJson(const web::json::value& val)
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


std::string NeutronDeleteFirewallRuleRequest::getFirewallRuleId() const
{
    return firewallRuleId_;
}

void NeutronDeleteFirewallRuleRequest::setFirewallRuleId(const std::string& value)
{
    firewallRuleId_ = value;
    firewallRuleIdIsSet_ = true;
}

bool NeutronDeleteFirewallRuleRequest::firewallRuleIdIsSet() const
{
    return firewallRuleIdIsSet_;
}

void NeutronDeleteFirewallRuleRequest::unsetfirewallRuleId()
{
    firewallRuleIdIsSet_ = false;
}

}
}
}
}
}



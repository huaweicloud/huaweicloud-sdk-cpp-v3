

#include "huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRemoveFirewallRuleRequestBody::NeutronRemoveFirewallRuleRequestBody()
{
    firewallRuleId_ = "";
    firewallRuleIdIsSet_ = false;
}

NeutronRemoveFirewallRuleRequestBody::~NeutronRemoveFirewallRuleRequestBody() = default;

void NeutronRemoveFirewallRuleRequestBody::validate()
{
}

web::json::value NeutronRemoveFirewallRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule_id")] = ModelBase::toJson(firewallRuleId_);
    }

    return val;
}

bool NeutronRemoveFirewallRuleRequestBody::fromJson(const web::json::value& val)
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

std::string NeutronRemoveFirewallRuleRequestBody::getFirewallRuleId() const
{
    return firewallRuleId_;
}

void NeutronRemoveFirewallRuleRequestBody::setFirewallRuleId(const std::string& value)
{
    firewallRuleId_ = value;
    firewallRuleIdIsSet_ = true;
}

bool NeutronRemoveFirewallRuleRequestBody::firewallRuleIdIsSet() const
{
    return firewallRuleIdIsSet_;
}

void NeutronRemoveFirewallRuleRequestBody::unsetfirewallRuleId()
{
    firewallRuleIdIsSet_ = false;
}

}
}
}
}
}



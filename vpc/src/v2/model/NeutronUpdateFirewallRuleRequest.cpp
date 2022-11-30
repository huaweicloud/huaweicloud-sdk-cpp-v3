

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallRuleRequest::NeutronUpdateFirewallRuleRequest()
{
    firewallRuleId_ = "";
    firewallRuleIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateFirewallRuleRequest::~NeutronUpdateFirewallRuleRequest() = default;

void NeutronUpdateFirewallRuleRequest::validate()
{
}

web::json::value NeutronUpdateFirewallRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule_id")] = ModelBase::toJson(firewallRuleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdateFirewallRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateFirewallRuleRequest::getFirewallRuleId() const
{
    return firewallRuleId_;
}

void NeutronUpdateFirewallRuleRequest::setFirewallRuleId(const std::string& value)
{
    firewallRuleId_ = value;
    firewallRuleIdIsSet_ = true;
}

bool NeutronUpdateFirewallRuleRequest::firewallRuleIdIsSet() const
{
    return firewallRuleIdIsSet_;
}

void NeutronUpdateFirewallRuleRequest::unsetfirewallRuleId()
{
    firewallRuleIdIsSet_ = false;
}

NeutronUpdateFirewallRuleRequestBody NeutronUpdateFirewallRuleRequest::getBody() const
{
    return body_;
}

void NeutronUpdateFirewallRuleRequest::setBody(const NeutronUpdateFirewallRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateFirewallRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateFirewallRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



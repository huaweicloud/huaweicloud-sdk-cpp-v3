

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallPolicyRequest::NeutronUpdateFirewallPolicyRequest()
{
    firewallPolicyId_ = "";
    firewallPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateFirewallPolicyRequest::~NeutronUpdateFirewallPolicyRequest() = default;

void NeutronUpdateFirewallPolicyRequest::validate()
{
}

web::json::value NeutronUpdateFirewallPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_policy_id")] = ModelBase::toJson(firewallPolicyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdateFirewallPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateFirewallPolicyRequest::getFirewallPolicyId() const
{
    return firewallPolicyId_;
}

void NeutronUpdateFirewallPolicyRequest::setFirewallPolicyId(const std::string& value)
{
    firewallPolicyId_ = value;
    firewallPolicyIdIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyRequest::firewallPolicyIdIsSet() const
{
    return firewallPolicyIdIsSet_;
}

void NeutronUpdateFirewallPolicyRequest::unsetfirewallPolicyId()
{
    firewallPolicyIdIsSet_ = false;
}

NeutronUpdateFirewallPolicyRequestBody NeutronUpdateFirewallPolicyRequest::getBody() const
{
    return body_;
}

void NeutronUpdateFirewallPolicyRequest::setBody(const NeutronUpdateFirewallPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateFirewallPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



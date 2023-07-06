

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallGroupRequest::NeutronUpdateFirewallGroupRequest()
{
    firewallGroupId_ = "";
    firewallGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateFirewallGroupRequest::~NeutronUpdateFirewallGroupRequest() = default;

void NeutronUpdateFirewallGroupRequest::validate()
{
}

web::json::value NeutronUpdateFirewallGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_group_id")] = ModelBase::toJson(firewallGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdateFirewallGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFirewallGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronUpdateFirewallGroupRequest::getFirewallGroupId() const
{
    return firewallGroupId_;
}

void NeutronUpdateFirewallGroupRequest::setFirewallGroupId(const std::string& value)
{
    firewallGroupId_ = value;
    firewallGroupIdIsSet_ = true;
}

bool NeutronUpdateFirewallGroupRequest::firewallGroupIdIsSet() const
{
    return firewallGroupIdIsSet_;
}

void NeutronUpdateFirewallGroupRequest::unsetfirewallGroupId()
{
    firewallGroupIdIsSet_ = false;
}

NeutronUpdateFirewallGroupRequestBody NeutronUpdateFirewallGroupRequest::getBody() const
{
    return body_;
}

void NeutronUpdateFirewallGroupRequest::setBody(const NeutronUpdateFirewallGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateFirewallGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateFirewallGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



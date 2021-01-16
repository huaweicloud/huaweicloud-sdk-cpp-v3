

#include "huaweicloud/vpc/v2/model/NeutronShowFirewallGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowFirewallGroupRequest::NeutronShowFirewallGroupRequest()
{
    firewallGroupId_ = "";
    firewallGroupIdIsSet_ = false;
}

NeutronShowFirewallGroupRequest::~NeutronShowFirewallGroupRequest() = default;

void NeutronShowFirewallGroupRequest::validate()
{
}

web::json::value NeutronShowFirewallGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_group_id")] = ModelBase::toJson(firewallGroupId_);
    }

    return val;
}

bool NeutronShowFirewallGroupRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NeutronShowFirewallGroupRequest::getFirewallGroupId() const
{
    return firewallGroupId_;
}

void NeutronShowFirewallGroupRequest::setFirewallGroupId(const std::string& value)
{
    firewallGroupId_ = value;
    firewallGroupIdIsSet_ = true;
}

bool NeutronShowFirewallGroupRequest::firewallGroupIdIsSet() const
{
    return firewallGroupIdIsSet_;
}

void NeutronShowFirewallGroupRequest::unsetfirewallGroupId()
{
    firewallGroupIdIsSet_ = false;
}

}
}
}
}
}



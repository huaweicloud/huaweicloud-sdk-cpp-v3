

#include "huaweicloud/vpc/v2/model/NeutronDeleteFirewallGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteFirewallGroupRequest::NeutronDeleteFirewallGroupRequest()
{
    firewallGroupId_ = "";
    firewallGroupIdIsSet_ = false;
}

NeutronDeleteFirewallGroupRequest::~NeutronDeleteFirewallGroupRequest() = default;

void NeutronDeleteFirewallGroupRequest::validate()
{
}

web::json::value NeutronDeleteFirewallGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallGroupIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_group_id")] = ModelBase::toJson(firewallGroupId_);
    }

    return val;
}

bool NeutronDeleteFirewallGroupRequest::fromJson(const web::json::value& val)
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


std::string NeutronDeleteFirewallGroupRequest::getFirewallGroupId() const
{
    return firewallGroupId_;
}

void NeutronDeleteFirewallGroupRequest::setFirewallGroupId(const std::string& value)
{
    firewallGroupId_ = value;
    firewallGroupIdIsSet_ = true;
}

bool NeutronDeleteFirewallGroupRequest::firewallGroupIdIsSet() const
{
    return firewallGroupIdIsSet_;
}

void NeutronDeleteFirewallGroupRequest::unsetfirewallGroupId()
{
    firewallGroupIdIsSet_ = false;
}

}
}
}
}
}



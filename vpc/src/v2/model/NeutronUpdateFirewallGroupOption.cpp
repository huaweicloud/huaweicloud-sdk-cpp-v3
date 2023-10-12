

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallGroupOption::NeutronUpdateFirewallGroupOption()
{
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    egressFirewallPolicyId_ = "";
    egressFirewallPolicyIdIsSet_ = false;
    ingressFirewallPolicyId_ = "";
    ingressFirewallPolicyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    portsIsSet_ = false;
}

NeutronUpdateFirewallGroupOption::~NeutronUpdateFirewallGroupOption() = default;

void NeutronUpdateFirewallGroupOption::validate()
{
}

web::json::value NeutronUpdateFirewallGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(egressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("egress_firewall_policy_id")] = ModelBase::toJson(egressFirewallPolicyId_);
    }
    if(ingressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("ingress_firewall_policy_id")] = ModelBase::toJson(ingressFirewallPolicyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }

    return val;
}
bool NeutronUpdateFirewallGroupOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("egress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("egress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEgressFirewallPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ingress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressFirewallPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    return ok;
}


bool NeutronUpdateFirewallGroupOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronUpdateFirewallGroupOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string NeutronUpdateFirewallGroupOption::getDescription() const
{
    return description_;
}

void NeutronUpdateFirewallGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronUpdateFirewallGroupOption::getEgressFirewallPolicyId() const
{
    return egressFirewallPolicyId_;
}

void NeutronUpdateFirewallGroupOption::setEgressFirewallPolicyId(const std::string& value)
{
    egressFirewallPolicyId_ = value;
    egressFirewallPolicyIdIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::egressFirewallPolicyIdIsSet() const
{
    return egressFirewallPolicyIdIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetegressFirewallPolicyId()
{
    egressFirewallPolicyIdIsSet_ = false;
}

std::string NeutronUpdateFirewallGroupOption::getIngressFirewallPolicyId() const
{
    return ingressFirewallPolicyId_;
}

void NeutronUpdateFirewallGroupOption::setIngressFirewallPolicyId(const std::string& value)
{
    ingressFirewallPolicyId_ = value;
    ingressFirewallPolicyIdIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::ingressFirewallPolicyIdIsSet() const
{
    return ingressFirewallPolicyIdIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetingressFirewallPolicyId()
{
    ingressFirewallPolicyIdIsSet_ = false;
}

std::string NeutronUpdateFirewallGroupOption::getName() const
{
    return name_;
}

void NeutronUpdateFirewallGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronUpdateFirewallGroupOption::getPorts()
{
    return ports_;
}

void NeutronUpdateFirewallGroupOption::setPorts(const std::vector<std::string>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool NeutronUpdateFirewallGroupOption::portsIsSet() const
{
    return portsIsSet_;
}

void NeutronUpdateFirewallGroupOption::unsetports()
{
    portsIsSet_ = false;
}

}
}
}
}
}



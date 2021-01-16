

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallGroupOption::NeutronCreateFirewallGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    ingressFirewallPolicyId_ = "";
    ingressFirewallPolicyIdIsSet_ = false;
    egressFirewallPolicyId_ = "";
    egressFirewallPolicyIdIsSet_ = false;
    portsIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
}

NeutronCreateFirewallGroupOption::~NeutronCreateFirewallGroupOption() = default;

void NeutronCreateFirewallGroupOption::validate()
{
}

web::json::value NeutronCreateFirewallGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ingressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("ingress_firewall_policy_id")] = ModelBase::toJson(ingressFirewallPolicyId_);
    }
    if(egressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("egress_firewall_policy_id")] = ModelBase::toJson(egressFirewallPolicyId_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }

    return val;
}

bool NeutronCreateFirewallGroupOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ingress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressFirewallPolicyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    return ok;
}


std::string NeutronCreateFirewallGroupOption::getName() const
{
    return name_;
}

void NeutronCreateFirewallGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronCreateFirewallGroupOption::getDescription() const
{
    return description_;
}

void NeutronCreateFirewallGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronCreateFirewallGroupOption::getIngressFirewallPolicyId() const
{
    return ingressFirewallPolicyId_;
}

void NeutronCreateFirewallGroupOption::setIngressFirewallPolicyId(const std::string& value)
{
    ingressFirewallPolicyId_ = value;
    ingressFirewallPolicyIdIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::ingressFirewallPolicyIdIsSet() const
{
    return ingressFirewallPolicyIdIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetingressFirewallPolicyId()
{
    ingressFirewallPolicyIdIsSet_ = false;
}

std::string NeutronCreateFirewallGroupOption::getEgressFirewallPolicyId() const
{
    return egressFirewallPolicyId_;
}

void NeutronCreateFirewallGroupOption::setEgressFirewallPolicyId(const std::string& value)
{
    egressFirewallPolicyId_ = value;
    egressFirewallPolicyIdIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::egressFirewallPolicyIdIsSet() const
{
    return egressFirewallPolicyIdIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetegressFirewallPolicyId()
{
    egressFirewallPolicyIdIsSet_ = false;
}

std::vector<std::string>& NeutronCreateFirewallGroupOption::getPorts()
{
    return ports_;
}

void NeutronCreateFirewallGroupOption::setPorts(const std::vector<std::string>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::portsIsSet() const
{
    return portsIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetports()
{
    portsIsSet_ = false;
}

bool NeutronCreateFirewallGroupOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronCreateFirewallGroupOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronCreateFirewallGroupOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronCreateFirewallGroupOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

}
}
}
}
}



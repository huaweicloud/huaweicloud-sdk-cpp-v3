

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallPolicyOption::NeutronUpdateFirewallPolicyOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    firewallRulesIsSet_ = false;
    audited_ = false;
    auditedIsSet_ = false;
}

NeutronUpdateFirewallPolicyOption::~NeutronUpdateFirewallPolicyOption() = default;

void NeutronUpdateFirewallPolicyOption::validate()
{
}

web::json::value NeutronUpdateFirewallPolicyOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(firewallRulesIsSet_) {
        val[utility::conversions::to_string_t("firewall_rules")] = ModelBase::toJson(firewallRules_);
    }
    if(auditedIsSet_) {
        val[utility::conversions::to_string_t("audited")] = ModelBase::toJson(audited_);
    }

    return val;
}
bool NeutronUpdateFirewallPolicyOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("firewall_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audited"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudited(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateFirewallPolicyOption::getName() const
{
    return name_;
}

void NeutronUpdateFirewallPolicyOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateFirewallPolicyOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronUpdateFirewallPolicyOption::getDescription() const
{
    return description_;
}

void NeutronUpdateFirewallPolicyOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronUpdateFirewallPolicyOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& NeutronUpdateFirewallPolicyOption::getFirewallRules()
{
    return firewallRules_;
}

void NeutronUpdateFirewallPolicyOption::setFirewallRules(const std::vector<std::string>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyOption::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronUpdateFirewallPolicyOption::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

bool NeutronUpdateFirewallPolicyOption::isAudited() const
{
    return audited_;
}

void NeutronUpdateFirewallPolicyOption::setAudited(bool value)
{
    audited_ = value;
    auditedIsSet_ = true;
}

bool NeutronUpdateFirewallPolicyOption::auditedIsSet() const
{
    return auditedIsSet_;
}

void NeutronUpdateFirewallPolicyOption::unsetaudited()
{
    auditedIsSet_ = false;
}

}
}
}
}
}



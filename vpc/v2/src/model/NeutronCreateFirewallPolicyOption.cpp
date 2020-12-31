

#include "huaweicloud/vpc/model/NeutronCreateFirewallPolicyOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallPolicyOption::NeutronCreateFirewallPolicyOption()
{
    audited_ = false;
    auditedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    firewallRulesIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

NeutronCreateFirewallPolicyOption::~NeutronCreateFirewallPolicyOption() = default;

void NeutronCreateFirewallPolicyOption::validate()
{
}

web::json::value NeutronCreateFirewallPolicyOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditedIsSet_) {
        val[utility::conversions::to_string_t("audited")] = ModelBase::toJson(audited_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(firewallRulesIsSet_) {
        val[utility::conversions::to_string_t("firewall_rules")] = ModelBase::toJson(firewallRules_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool NeutronCreateFirewallPolicyOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audited"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudited(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


bool NeutronCreateFirewallPolicyOption::isAudited() const
{
    return audited_;
}

void NeutronCreateFirewallPolicyOption::setAudited(bool value)
{
    audited_ = value;
    auditedIsSet_ = true;
}

bool NeutronCreateFirewallPolicyOption::auditedIsSet() const
{
    return auditedIsSet_;
}

void NeutronCreateFirewallPolicyOption::unsetaudited()
{
    auditedIsSet_ = false;
}

std::string NeutronCreateFirewallPolicyOption::getDescription() const
{
    return description_;
}

void NeutronCreateFirewallPolicyOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronCreateFirewallPolicyOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronCreateFirewallPolicyOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& NeutronCreateFirewallPolicyOption::getFirewallRules()
{
    return firewallRules_;
}

void NeutronCreateFirewallPolicyOption::setFirewallRules(const std::vector<std::string>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronCreateFirewallPolicyOption::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronCreateFirewallPolicyOption::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

std::string NeutronCreateFirewallPolicyOption::getName() const
{
    return name_;
}

void NeutronCreateFirewallPolicyOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateFirewallPolicyOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateFirewallPolicyOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



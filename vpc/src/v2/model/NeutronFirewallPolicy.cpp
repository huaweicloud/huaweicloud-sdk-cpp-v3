

#include "huaweicloud/vpc/v2/model/NeutronFirewallPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronFirewallPolicy::NeutronFirewallPolicy()
{
    audited_ = false;
    auditedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    firewallRulesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

NeutronFirewallPolicy::~NeutronFirewallPolicy() = default;

void NeutronFirewallPolicy::validate()
{
}

web::json::value NeutronFirewallPolicy::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}

bool NeutronFirewallPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}

bool NeutronFirewallPolicy::isAudited() const
{
    return audited_;
}

void NeutronFirewallPolicy::setAudited(bool value)
{
    audited_ = value;
    auditedIsSet_ = true;
}

bool NeutronFirewallPolicy::auditedIsSet() const
{
    return auditedIsSet_;
}

void NeutronFirewallPolicy::unsetaudited()
{
    auditedIsSet_ = false;
}

std::string NeutronFirewallPolicy::getDescription() const
{
    return description_;
}

void NeutronFirewallPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronFirewallPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronFirewallPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& NeutronFirewallPolicy::getFirewallRules()
{
    return firewallRules_;
}

void NeutronFirewallPolicy::setFirewallRules(const std::vector<std::string>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronFirewallPolicy::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronFirewallPolicy::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

std::string NeutronFirewallPolicy::getId() const
{
    return id_;
}

void NeutronFirewallPolicy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronFirewallPolicy::idIsSet() const
{
    return idIsSet_;
}

void NeutronFirewallPolicy::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronFirewallPolicy::getName() const
{
    return name_;
}

void NeutronFirewallPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronFirewallPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronFirewallPolicy::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronFirewallPolicy::isPublic() const
{
    return public_;
}

void NeutronFirewallPolicy::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool NeutronFirewallPolicy::publicIsSet() const
{
    return publicIsSet_;
}

void NeutronFirewallPolicy::unsetpublic()
{
    publicIsSet_ = false;
}

std::string NeutronFirewallPolicy::getTenantId() const
{
    return tenantId_;
}

void NeutronFirewallPolicy::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronFirewallPolicy::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronFirewallPolicy::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronFirewallPolicy::getProjectId() const
{
    return projectId_;
}

void NeutronFirewallPolicy::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronFirewallPolicy::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronFirewallPolicy::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



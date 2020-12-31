

#include "huaweicloud/vpc/model/NeutronRemoveFirewallRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRemoveFirewallRuleResponse::NeutronRemoveFirewallRuleResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    firewallRulesIsSet_ = false;
    audited_ = false;
    auditedIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

NeutronRemoveFirewallRuleResponse::~NeutronRemoveFirewallRuleResponse() = default;

void NeutronRemoveFirewallRuleResponse::validate()
{
}

web::json::value NeutronRemoveFirewallRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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

bool NeutronRemoveFirewallRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string NeutronRemoveFirewallRuleResponse::getId() const
{
    return id_;
}

void NeutronRemoveFirewallRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronRemoveFirewallRuleResponse::getName() const
{
    return name_;
}

void NeutronRemoveFirewallRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronRemoveFirewallRuleResponse::getDescription() const
{
    return description_;
}

void NeutronRemoveFirewallRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& NeutronRemoveFirewallRuleResponse::getFirewallRules()
{
    return firewallRules_;
}

void NeutronRemoveFirewallRuleResponse::setFirewallRules(const std::vector<std::string>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

bool NeutronRemoveFirewallRuleResponse::isAudited() const
{
    return audited_;
}

void NeutronRemoveFirewallRuleResponse::setAudited(bool value)
{
    audited_ = value;
    auditedIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::auditedIsSet() const
{
    return auditedIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetaudited()
{
    auditedIsSet_ = false;
}

bool NeutronRemoveFirewallRuleResponse::isPublic() const
{
    return public_;
}

void NeutronRemoveFirewallRuleResponse::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::publicIsSet() const
{
    return publicIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetpublic()
{
    publicIsSet_ = false;
}

std::string NeutronRemoveFirewallRuleResponse::getTenantId() const
{
    return tenantId_;
}

void NeutronRemoveFirewallRuleResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronRemoveFirewallRuleResponse::getProjectId() const
{
    return projectId_;
}

void NeutronRemoveFirewallRuleResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronRemoveFirewallRuleResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronRemoveFirewallRuleResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



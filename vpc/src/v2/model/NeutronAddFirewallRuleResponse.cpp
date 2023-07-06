

#include "huaweicloud/vpc/v2/model/NeutronAddFirewallRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronAddFirewallRuleResponse::NeutronAddFirewallRuleResponse()
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

NeutronAddFirewallRuleResponse::~NeutronAddFirewallRuleResponse() = default;

void NeutronAddFirewallRuleResponse::validate()
{
}

web::json::value NeutronAddFirewallRuleResponse::toJson() const
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

bool NeutronAddFirewallRuleResponse::fromJson(const web::json::value& val)
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

std::string NeutronAddFirewallRuleResponse::getId() const
{
    return id_;
}

void NeutronAddFirewallRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronAddFirewallRuleResponse::getName() const
{
    return name_;
}

void NeutronAddFirewallRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronAddFirewallRuleResponse::getDescription() const
{
    return description_;
}

void NeutronAddFirewallRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& NeutronAddFirewallRuleResponse::getFirewallRules()
{
    return firewallRules_;
}

void NeutronAddFirewallRuleResponse::setFirewallRules(const std::vector<std::string>& value)
{
    firewallRules_ = value;
    firewallRulesIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::firewallRulesIsSet() const
{
    return firewallRulesIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetfirewallRules()
{
    firewallRulesIsSet_ = false;
}

bool NeutronAddFirewallRuleResponse::isAudited() const
{
    return audited_;
}

void NeutronAddFirewallRuleResponse::setAudited(bool value)
{
    audited_ = value;
    auditedIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::auditedIsSet() const
{
    return auditedIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetaudited()
{
    auditedIsSet_ = false;
}

bool NeutronAddFirewallRuleResponse::isPublic() const
{
    return public_;
}

void NeutronAddFirewallRuleResponse::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::publicIsSet() const
{
    return publicIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetpublic()
{
    publicIsSet_ = false;
}

std::string NeutronAddFirewallRuleResponse::getTenantId() const
{
    return tenantId_;
}

void NeutronAddFirewallRuleResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronAddFirewallRuleResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronAddFirewallRuleResponse::getProjectId() const
{
    return projectId_;
}

void NeutronAddFirewallRuleResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronAddFirewallRuleResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronAddFirewallRuleResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



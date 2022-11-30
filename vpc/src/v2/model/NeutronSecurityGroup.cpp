

#include "huaweicloud/vpc/v2/model/NeutronSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronSecurityGroup::NeutronSecurityGroup()
{
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    securityGroupRulesIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronSecurityGroup::~NeutronSecurityGroup() = default;

void NeutronSecurityGroup::validate()
{
}

web::json::value NeutronSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(securityGroupRulesIsSet_) {
        val[utility::conversions::to_string_t("security_group_rules")] = ModelBase::toJson(securityGroupRules_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool NeutronSecurityGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_group_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronSecurityGroupRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string NeutronSecurityGroup::getDescription() const
{
    return description_;
}

void NeutronSecurityGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronSecurityGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronSecurityGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronSecurityGroup::getId() const
{
    return id_;
}

void NeutronSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void NeutronSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronSecurityGroup::getName() const
{
    return name_;
}

void NeutronSecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronSecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronSecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

std::vector<NeutronSecurityGroupRule>& NeutronSecurityGroup::getSecurityGroupRules()
{
    return securityGroupRules_;
}

void NeutronSecurityGroup::setSecurityGroupRules(const std::vector<NeutronSecurityGroupRule>& value)
{
    securityGroupRules_ = value;
    securityGroupRulesIsSet_ = true;
}

bool NeutronSecurityGroup::securityGroupRulesIsSet() const
{
    return securityGroupRulesIsSet_;
}

void NeutronSecurityGroup::unsetsecurityGroupRules()
{
    securityGroupRulesIsSet_ = false;
}

std::string NeutronSecurityGroup::getTenantId() const
{
    return tenantId_;
}

void NeutronSecurityGroup::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronSecurityGroup::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronSecurityGroup::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronSecurityGroup::getProjectId() const
{
    return projectId_;
}

void NeutronSecurityGroup::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronSecurityGroup::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronSecurityGroup::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronSecurityGroup::getCreatedAt() const
{
    return createdAt_;
}

void NeutronSecurityGroup::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronSecurityGroup::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronSecurityGroup::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronSecurityGroup::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronSecurityGroup::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronSecurityGroup::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronSecurityGroup::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}



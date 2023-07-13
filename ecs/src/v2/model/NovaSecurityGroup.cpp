

#include "huaweicloud/ecs/v2/model/NovaSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSecurityGroup::NovaSecurityGroup()
{
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    rulesIsSet_ = false;
}

NovaSecurityGroup::~NovaSecurityGroup() = default;

void NovaSecurityGroup::validate()
{
}

web::json::value NovaSecurityGroup::toJson() const
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
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}

bool NovaSecurityGroup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaSecurityGroupCommonRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}

std::string NovaSecurityGroup::getDescription() const
{
    return description_;
}

void NovaSecurityGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NovaSecurityGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NovaSecurityGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NovaSecurityGroup::getId() const
{
    return id_;
}

void NovaSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void NovaSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

std::string NovaSecurityGroup::getName() const
{
    return name_;
}

void NovaSecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaSecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void NovaSecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaSecurityGroup::getTenantId() const
{
    return tenantId_;
}

void NovaSecurityGroup::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NovaSecurityGroup::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NovaSecurityGroup::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::vector<NovaSecurityGroupCommonRule>& NovaSecurityGroup::getRules()
{
    return rules_;
}

void NovaSecurityGroup::setRules(const std::vector<NovaSecurityGroupCommonRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool NovaSecurityGroup::rulesIsSet() const
{
    return rulesIsSet_;
}

void NovaSecurityGroup::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cbr/v1/model/OrganizationPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicy::OrganizationPolicy()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    policyEnabled_ = false;
    policyEnabledIsSet_ = false;
    policyOperationDefinitionIsSet_ = false;
    policyTriggerIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    effectiveScope_ = "";
    effectiveScopeIsSet_ = false;
}

OrganizationPolicy::~OrganizationPolicy() = default;

void OrganizationPolicy::validate()
{
}

web::json::value OrganizationPolicy::toJson() const
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
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(policyEnabledIsSet_) {
        val[utility::conversions::to_string_t("policy_enabled")] = ModelBase::toJson(policyEnabled_);
    }
    if(policyOperationDefinitionIsSet_) {
        val[utility::conversions::to_string_t("policy_operation_definition")] = ModelBase::toJson(policyOperationDefinition_);
    }
    if(policyTriggerIsSet_) {
        val[utility::conversions::to_string_t("policy_trigger")] = ModelBase::toJson(policyTrigger_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(effectiveScopeIsSet_) {
        val[utility::conversions::to_string_t("effective_scope")] = ModelBase::toJson(effectiveScope_);
    }

    return val;
}
bool OrganizationPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_operation_definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_operation_definition"));
        if(!fieldValue.is_null())
        {
            PolicyoODCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyOperationDefinition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_trigger"));
        if(!fieldValue.is_null())
        {
            PolicyTriggerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveScope(refVal);
        }
    }
    return ok;
}


std::string OrganizationPolicy::getId() const
{
    return id_;
}

void OrganizationPolicy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OrganizationPolicy::idIsSet() const
{
    return idIsSet_;
}

void OrganizationPolicy::unsetid()
{
    idIsSet_ = false;
}

std::string OrganizationPolicy::getName() const
{
    return name_;
}

void OrganizationPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OrganizationPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void OrganizationPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::string OrganizationPolicy::getDescription() const
{
    return description_;
}

void OrganizationPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OrganizationPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OrganizationPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OrganizationPolicy::getOperationType() const
{
    return operationType_;
}

void OrganizationPolicy::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool OrganizationPolicy::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void OrganizationPolicy::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string OrganizationPolicy::getDomainId() const
{
    return domainId_;
}

void OrganizationPolicy::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool OrganizationPolicy::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void OrganizationPolicy::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string OrganizationPolicy::getPolicyName() const
{
    return policyName_;
}

void OrganizationPolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool OrganizationPolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void OrganizationPolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

bool OrganizationPolicy::isPolicyEnabled() const
{
    return policyEnabled_;
}

void OrganizationPolicy::setPolicyEnabled(bool value)
{
    policyEnabled_ = value;
    policyEnabledIsSet_ = true;
}

bool OrganizationPolicy::policyEnabledIsSet() const
{
    return policyEnabledIsSet_;
}

void OrganizationPolicy::unsetpolicyEnabled()
{
    policyEnabledIsSet_ = false;
}

PolicyoODCreate OrganizationPolicy::getPolicyOperationDefinition() const
{
    return policyOperationDefinition_;
}

void OrganizationPolicy::setPolicyOperationDefinition(const PolicyoODCreate& value)
{
    policyOperationDefinition_ = value;
    policyOperationDefinitionIsSet_ = true;
}

bool OrganizationPolicy::policyOperationDefinitionIsSet() const
{
    return policyOperationDefinitionIsSet_;
}

void OrganizationPolicy::unsetpolicyOperationDefinition()
{
    policyOperationDefinitionIsSet_ = false;
}

PolicyTriggerReq OrganizationPolicy::getPolicyTrigger() const
{
    return policyTrigger_;
}

void OrganizationPolicy::setPolicyTrigger(const PolicyTriggerReq& value)
{
    policyTrigger_ = value;
    policyTriggerIsSet_ = true;
}

bool OrganizationPolicy::policyTriggerIsSet() const
{
    return policyTriggerIsSet_;
}

void OrganizationPolicy::unsetpolicyTrigger()
{
    policyTriggerIsSet_ = false;
}

std::string OrganizationPolicy::getStatus() const
{
    return status_;
}

void OrganizationPolicy::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OrganizationPolicy::statusIsSet() const
{
    return statusIsSet_;
}

void OrganizationPolicy::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OrganizationPolicy::getDomainName() const
{
    return domainName_;
}

void OrganizationPolicy::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool OrganizationPolicy::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void OrganizationPolicy::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string OrganizationPolicy::getEffectiveScope() const
{
    return effectiveScope_;
}

void OrganizationPolicy::setEffectiveScope(const std::string& value)
{
    effectiveScope_ = value;
    effectiveScopeIsSet_ = true;
}

bool OrganizationPolicy::effectiveScopeIsSet() const
{
    return effectiveScopeIsSet_;
}

void OrganizationPolicy::unseteffectiveScope()
{
    effectiveScopeIsSet_ = false;
}

}
}
}
}
}



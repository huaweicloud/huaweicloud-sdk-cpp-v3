

#include "huaweicloud/cbr/v1/model/OrganizationPolicyCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicyCreate::OrganizationPolicyCreate()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    policyEnabled_ = false;
    policyEnabledIsSet_ = false;
    policyOperationDefinitionIsSet_ = false;
    policyTriggerIsSet_ = false;
}

OrganizationPolicyCreate::~OrganizationPolicyCreate() = default;

void OrganizationPolicyCreate::validate()
{
}

web::json::value OrganizationPolicyCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
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

    return val;
}
bool OrganizationPolicyCreate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
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
    return ok;
}


std::string OrganizationPolicyCreate::getName() const
{
    return name_;
}

void OrganizationPolicyCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OrganizationPolicyCreate::nameIsSet() const
{
    return nameIsSet_;
}

void OrganizationPolicyCreate::unsetname()
{
    nameIsSet_ = false;
}

std::string OrganizationPolicyCreate::getDescription() const
{
    return description_;
}

void OrganizationPolicyCreate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OrganizationPolicyCreate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OrganizationPolicyCreate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OrganizationPolicyCreate::getOperationType() const
{
    return operationType_;
}

void OrganizationPolicyCreate::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool OrganizationPolicyCreate::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void OrganizationPolicyCreate::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string OrganizationPolicyCreate::getPolicyName() const
{
    return policyName_;
}

void OrganizationPolicyCreate::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool OrganizationPolicyCreate::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void OrganizationPolicyCreate::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

bool OrganizationPolicyCreate::isPolicyEnabled() const
{
    return policyEnabled_;
}

void OrganizationPolicyCreate::setPolicyEnabled(bool value)
{
    policyEnabled_ = value;
    policyEnabledIsSet_ = true;
}

bool OrganizationPolicyCreate::policyEnabledIsSet() const
{
    return policyEnabledIsSet_;
}

void OrganizationPolicyCreate::unsetpolicyEnabled()
{
    policyEnabledIsSet_ = false;
}

PolicyoODCreate OrganizationPolicyCreate::getPolicyOperationDefinition() const
{
    return policyOperationDefinition_;
}

void OrganizationPolicyCreate::setPolicyOperationDefinition(const PolicyoODCreate& value)
{
    policyOperationDefinition_ = value;
    policyOperationDefinitionIsSet_ = true;
}

bool OrganizationPolicyCreate::policyOperationDefinitionIsSet() const
{
    return policyOperationDefinitionIsSet_;
}

void OrganizationPolicyCreate::unsetpolicyOperationDefinition()
{
    policyOperationDefinitionIsSet_ = false;
}

PolicyTriggerReq OrganizationPolicyCreate::getPolicyTrigger() const
{
    return policyTrigger_;
}

void OrganizationPolicyCreate::setPolicyTrigger(const PolicyTriggerReq& value)
{
    policyTrigger_ = value;
    policyTriggerIsSet_ = true;
}

bool OrganizationPolicyCreate::policyTriggerIsSet() const
{
    return policyTriggerIsSet_;
}

void OrganizationPolicyCreate::unsetpolicyTrigger()
{
    policyTriggerIsSet_ = false;
}

}
}
}
}
}



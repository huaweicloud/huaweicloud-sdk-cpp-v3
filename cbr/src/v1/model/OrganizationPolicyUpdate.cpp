

#include "huaweicloud/cbr/v1/model/OrganizationPolicyUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicyUpdate::OrganizationPolicyUpdate()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    policyEnabled_ = false;
    policyEnabledIsSet_ = false;
    policyOperationDefinitionIsSet_ = false;
    policyTriggerIsSet_ = false;
}

OrganizationPolicyUpdate::~OrganizationPolicyUpdate() = default;

void OrganizationPolicyUpdate::validate()
{
}

web::json::value OrganizationPolicyUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
bool OrganizationPolicyUpdate::fromJson(const web::json::value& val)
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


std::string OrganizationPolicyUpdate::getName() const
{
    return name_;
}

void OrganizationPolicyUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OrganizationPolicyUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void OrganizationPolicyUpdate::unsetname()
{
    nameIsSet_ = false;
}

std::string OrganizationPolicyUpdate::getDescription() const
{
    return description_;
}

void OrganizationPolicyUpdate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OrganizationPolicyUpdate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OrganizationPolicyUpdate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OrganizationPolicyUpdate::getPolicyName() const
{
    return policyName_;
}

void OrganizationPolicyUpdate::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool OrganizationPolicyUpdate::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void OrganizationPolicyUpdate::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

bool OrganizationPolicyUpdate::isPolicyEnabled() const
{
    return policyEnabled_;
}

void OrganizationPolicyUpdate::setPolicyEnabled(bool value)
{
    policyEnabled_ = value;
    policyEnabledIsSet_ = true;
}

bool OrganizationPolicyUpdate::policyEnabledIsSet() const
{
    return policyEnabledIsSet_;
}

void OrganizationPolicyUpdate::unsetpolicyEnabled()
{
    policyEnabledIsSet_ = false;
}

PolicyoODCreate OrganizationPolicyUpdate::getPolicyOperationDefinition() const
{
    return policyOperationDefinition_;
}

void OrganizationPolicyUpdate::setPolicyOperationDefinition(const PolicyoODCreate& value)
{
    policyOperationDefinition_ = value;
    policyOperationDefinitionIsSet_ = true;
}

bool OrganizationPolicyUpdate::policyOperationDefinitionIsSet() const
{
    return policyOperationDefinitionIsSet_;
}

void OrganizationPolicyUpdate::unsetpolicyOperationDefinition()
{
    policyOperationDefinitionIsSet_ = false;
}

PolicyTriggerReq OrganizationPolicyUpdate::getPolicyTrigger() const
{
    return policyTrigger_;
}

void OrganizationPolicyUpdate::setPolicyTrigger(const PolicyTriggerReq& value)
{
    policyTrigger_ = value;
    policyTriggerIsSet_ = true;
}

bool OrganizationPolicyUpdate::policyTriggerIsSet() const
{
    return policyTriggerIsSet_;
}

void OrganizationPolicyUpdate::unsetpolicyTrigger()
{
    policyTriggerIsSet_ = false;
}

}
}
}
}
}



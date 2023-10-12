

#include "huaweicloud/cbr/v1/model/Policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Policy::Policy()
{
    enabled_ = false;
    enabledIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    operationDefinitionIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    triggerIsSet_ = false;
    associatedVaultsIsSet_ = false;
}

Policy::~Policy() = default;

void Policy::validate()
{
}

web::json::value Policy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(operationDefinitionIsSet_) {
        val[utility::conversions::to_string_t("operation_definition")] = ModelBase::toJson(operationDefinition_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }
    if(associatedVaultsIsSet_) {
        val[utility::conversions::to_string_t("associated_vaults")] = ModelBase::toJson(associatedVaults_);
    }

    return val;
}
bool Policy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operation_definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_definition"));
        if(!fieldValue.is_null())
        {
            PolicyoODCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationDefinition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger"));
        if(!fieldValue.is_null())
        {
            PolicyTriggerResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_vaults"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_vaults"));
        if(!fieldValue.is_null())
        {
            std::vector<PolicyAssociateVault> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedVaults(refVal);
        }
    }
    return ok;
}


bool Policy::isEnabled() const
{
    return enabled_;
}

void Policy::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool Policy::enabledIsSet() const
{
    return enabledIsSet_;
}

void Policy::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string Policy::getId() const
{
    return id_;
}

void Policy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Policy::idIsSet() const
{
    return idIsSet_;
}

void Policy::unsetid()
{
    idIsSet_ = false;
}

std::string Policy::getName() const
{
    return name_;
}

void Policy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Policy::nameIsSet() const
{
    return nameIsSet_;
}

void Policy::unsetname()
{
    nameIsSet_ = false;
}

PolicyoODCreate Policy::getOperationDefinition() const
{
    return operationDefinition_;
}

void Policy::setOperationDefinition(const PolicyoODCreate& value)
{
    operationDefinition_ = value;
    operationDefinitionIsSet_ = true;
}

bool Policy::operationDefinitionIsSet() const
{
    return operationDefinitionIsSet_;
}

void Policy::unsetoperationDefinition()
{
    operationDefinitionIsSet_ = false;
}

std::string Policy::getOperationType() const
{
    return operationType_;
}

void Policy::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool Policy::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void Policy::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

PolicyTriggerResp Policy::getTrigger() const
{
    return trigger_;
}

void Policy::setTrigger(const PolicyTriggerResp& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool Policy::triggerIsSet() const
{
    return triggerIsSet_;
}

void Policy::unsettrigger()
{
    triggerIsSet_ = false;
}

std::vector<PolicyAssociateVault>& Policy::getAssociatedVaults()
{
    return associatedVaults_;
}

void Policy::setAssociatedVaults(const std::vector<PolicyAssociateVault>& value)
{
    associatedVaults_ = value;
    associatedVaultsIsSet_ = true;
}

bool Policy::associatedVaultsIsSet() const
{
    return associatedVaultsIsSet_;
}

void Policy::unsetassociatedVaults()
{
    associatedVaultsIsSet_ = false;
}

}
}
}
}
}



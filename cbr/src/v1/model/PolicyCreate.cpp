

#include "huaweicloud/cbr/v1/model/PolicyCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyCreate::PolicyCreate()
{
    enabled_ = false;
    enabledIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    operationDefinitionIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    triggerIsSet_ = false;
}

PolicyCreate::~PolicyCreate() = default;

void PolicyCreate::validate()
{
}

web::json::value PolicyCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
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

    return val;
}
bool PolicyCreate::fromJson(const web::json::value& val)
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
            PolicyTriggerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    return ok;
}


bool PolicyCreate::isEnabled() const
{
    return enabled_;
}

void PolicyCreate::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool PolicyCreate::enabledIsSet() const
{
    return enabledIsSet_;
}

void PolicyCreate::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string PolicyCreate::getName() const
{
    return name_;
}

void PolicyCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PolicyCreate::nameIsSet() const
{
    return nameIsSet_;
}

void PolicyCreate::unsetname()
{
    nameIsSet_ = false;
}

PolicyoODCreate PolicyCreate::getOperationDefinition() const
{
    return operationDefinition_;
}

void PolicyCreate::setOperationDefinition(const PolicyoODCreate& value)
{
    operationDefinition_ = value;
    operationDefinitionIsSet_ = true;
}

bool PolicyCreate::operationDefinitionIsSet() const
{
    return operationDefinitionIsSet_;
}

void PolicyCreate::unsetoperationDefinition()
{
    operationDefinitionIsSet_ = false;
}

std::string PolicyCreate::getOperationType() const
{
    return operationType_;
}

void PolicyCreate::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool PolicyCreate::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void PolicyCreate::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

PolicyTriggerReq PolicyCreate::getTrigger() const
{
    return trigger_;
}

void PolicyCreate::setTrigger(const PolicyTriggerReq& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool PolicyCreate::triggerIsSet() const
{
    return triggerIsSet_;
}

void PolicyCreate::unsettrigger()
{
    triggerIsSet_ = false;
}

}
}
}
}
}



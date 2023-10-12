

#include "huaweicloud/cbr/v1/model/PolicyUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyUpdate::PolicyUpdate()
{
    enabled_ = false;
    enabledIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    operationDefinitionIsSet_ = false;
    triggerIsSet_ = false;
}

PolicyUpdate::~PolicyUpdate() = default;

void PolicyUpdate::validate()
{
}

web::json::value PolicyUpdate::toJson() const
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
    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }

    return val;
}
bool PolicyUpdate::fromJson(const web::json::value& val)
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


bool PolicyUpdate::isEnabled() const
{
    return enabled_;
}

void PolicyUpdate::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool PolicyUpdate::enabledIsSet() const
{
    return enabledIsSet_;
}

void PolicyUpdate::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string PolicyUpdate::getName() const
{
    return name_;
}

void PolicyUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PolicyUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void PolicyUpdate::unsetname()
{
    nameIsSet_ = false;
}

PolicyoODCreate PolicyUpdate::getOperationDefinition() const
{
    return operationDefinition_;
}

void PolicyUpdate::setOperationDefinition(const PolicyoODCreate& value)
{
    operationDefinition_ = value;
    operationDefinitionIsSet_ = true;
}

bool PolicyUpdate::operationDefinitionIsSet() const
{
    return operationDefinitionIsSet_;
}

void PolicyUpdate::unsetoperationDefinition()
{
    operationDefinitionIsSet_ = false;
}

PolicyTriggerReq PolicyUpdate::getTrigger() const
{
    return trigger_;
}

void PolicyUpdate::setTrigger(const PolicyTriggerReq& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool PolicyUpdate::triggerIsSet() const
{
    return triggerIsSet_;
}

void PolicyUpdate::unsettrigger()
{
    triggerIsSet_ = false;
}

}
}
}
}
}



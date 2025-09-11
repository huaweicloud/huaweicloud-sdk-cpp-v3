

#include "huaweicloud/functiongraph/v2/model/Trigger.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Trigger::Trigger()
{
    triggerName_ = "";
    triggerNameIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    triggerConfigIsSet_ = false;
}

Trigger::~Trigger() = default;

void Trigger::validate()
{
}

web::json::value Trigger::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerNameIsSet_) {
        val[utility::conversions::to_string_t("trigger_name")] = ModelBase::toJson(triggerName_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(triggerConfigIsSet_) {
        val[utility::conversions::to_string_t("trigger_config")] = ModelBase::toJson(triggerConfig_);
    }

    return val;
}
bool Trigger::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_config"));
        if(!fieldValue.is_null())
        {
            OBSTriggerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerConfig(refVal);
        }
    }
    return ok;
}


std::string Trigger::getTriggerName() const
{
    return triggerName_;
}

void Trigger::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool Trigger::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void Trigger::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::string Trigger::getTriggerType() const
{
    return triggerType_;
}

void Trigger::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool Trigger::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void Trigger::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

bool Trigger::isEnabled() const
{
    return enabled_;
}

void Trigger::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool Trigger::enabledIsSet() const
{
    return enabledIsSet_;
}

void Trigger::unsetenabled()
{
    enabledIsSet_ = false;
}

OBSTriggerConfig Trigger::getTriggerConfig() const
{
    return triggerConfig_;
}

void Trigger::setTriggerConfig(const OBSTriggerConfig& value)
{
    triggerConfig_ = value;
    triggerConfigIsSet_ = true;
}

bool Trigger::triggerConfigIsSet() const
{
    return triggerConfigIsSet_;
}

void Trigger::unsettriggerConfig()
{
    triggerConfigIsSet_ = false;
}

}
}
}
}
}



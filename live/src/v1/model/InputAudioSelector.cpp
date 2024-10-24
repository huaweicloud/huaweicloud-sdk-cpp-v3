

#include "huaweicloud/live/v1/model/InputAudioSelector.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




InputAudioSelector::InputAudioSelector()
{
    name_ = "";
    nameIsSet_ = false;
    selectorSettingsIsSet_ = false;
}

InputAudioSelector::~InputAudioSelector() = default;

void InputAudioSelector::validate()
{
}

web::json::value InputAudioSelector::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(selectorSettingsIsSet_) {
        val[utility::conversions::to_string_t("selector_settings")] = ModelBase::toJson(selectorSettings_);
    }

    return val;
}
bool InputAudioSelector::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("selector_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selector_settings"));
        if(!fieldValue.is_null())
        {
            AudioSelectorSettings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectorSettings(refVal);
        }
    }
    return ok;
}


std::string InputAudioSelector::getName() const
{
    return name_;
}

void InputAudioSelector::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InputAudioSelector::nameIsSet() const
{
    return nameIsSet_;
}

void InputAudioSelector::unsetname()
{
    nameIsSet_ = false;
}

AudioSelectorSettings InputAudioSelector::getSelectorSettings() const
{
    return selectorSettings_;
}

void InputAudioSelector::setSelectorSettings(const AudioSelectorSettings& value)
{
    selectorSettings_ = value;
    selectorSettingsIsSet_ = true;
}

bool InputAudioSelector::selectorSettingsIsSet() const
{
    return selectorSettingsIsSet_;
}

void InputAudioSelector::unsetselectorSettings()
{
    selectorSettingsIsSet_ = false;
}

}
}
}
}
}



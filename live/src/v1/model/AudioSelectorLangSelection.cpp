

#include "huaweicloud/live/v1/model/AudioSelectorLangSelection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AudioSelectorLangSelection::AudioSelectorLangSelection()
{
    languageCode_ = "";
    languageCodeIsSet_ = false;
    languageSelectionPolicy_ = "";
    languageSelectionPolicyIsSet_ = false;
}

AudioSelectorLangSelection::~AudioSelectorLangSelection() = default;

void AudioSelectorLangSelection::validate()
{
}

web::json::value AudioSelectorLangSelection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageCodeIsSet_) {
        val[utility::conversions::to_string_t("language_code")] = ModelBase::toJson(languageCode_);
    }
    if(languageSelectionPolicyIsSet_) {
        val[utility::conversions::to_string_t("language_selection_policy")] = ModelBase::toJson(languageSelectionPolicy_);
    }

    return val;
}
bool AudioSelectorLangSelection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language_selection_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_selection_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageSelectionPolicy(refVal);
        }
    }
    return ok;
}


std::string AudioSelectorLangSelection::getLanguageCode() const
{
    return languageCode_;
}

void AudioSelectorLangSelection::setLanguageCode(const std::string& value)
{
    languageCode_ = value;
    languageCodeIsSet_ = true;
}

bool AudioSelectorLangSelection::languageCodeIsSet() const
{
    return languageCodeIsSet_;
}

void AudioSelectorLangSelection::unsetlanguageCode()
{
    languageCodeIsSet_ = false;
}

std::string AudioSelectorLangSelection::getLanguageSelectionPolicy() const
{
    return languageSelectionPolicy_;
}

void AudioSelectorLangSelection::setLanguageSelectionPolicy(const std::string& value)
{
    languageSelectionPolicy_ = value;
    languageSelectionPolicyIsSet_ = true;
}

bool AudioSelectorLangSelection::languageSelectionPolicyIsSet() const
{
    return languageSelectionPolicyIsSet_;
}

void AudioSelectorLangSelection::unsetlanguageSelectionPolicy()
{
    languageSelectionPolicyIsSet_ = false;
}

}
}
}
}
}



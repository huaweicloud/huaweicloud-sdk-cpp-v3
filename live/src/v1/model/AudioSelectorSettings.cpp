

#include "huaweicloud/live/v1/model/AudioSelectorSettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AudioSelectorSettings::AudioSelectorSettings()
{
    audioLanguageSelectionIsSet_ = false;
    audioPidSelectionIsSet_ = false;
    audioHlsSelectionIsSet_ = false;
}

AudioSelectorSettings::~AudioSelectorSettings() = default;

void AudioSelectorSettings::validate()
{
}

web::json::value AudioSelectorSettings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioLanguageSelectionIsSet_) {
        val[utility::conversions::to_string_t("audio_language_selection")] = ModelBase::toJson(audioLanguageSelection_);
    }
    if(audioPidSelectionIsSet_) {
        val[utility::conversions::to_string_t("audio_pid_selection")] = ModelBase::toJson(audioPidSelection_);
    }
    if(audioHlsSelectionIsSet_) {
        val[utility::conversions::to_string_t("audio_hls_selection")] = ModelBase::toJson(audioHlsSelection_);
    }

    return val;
}
bool AudioSelectorSettings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_language_selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_language_selection"));
        if(!fieldValue.is_null())
        {
            AudioSelectorLangSelection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioLanguageSelection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_pid_selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_pid_selection"));
        if(!fieldValue.is_null())
        {
            AudioSelectorPidSelection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioPidSelection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_hls_selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_hls_selection"));
        if(!fieldValue.is_null())
        {
            AudioSelectorHlsSelection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioHlsSelection(refVal);
        }
    }
    return ok;
}


AudioSelectorLangSelection AudioSelectorSettings::getAudioLanguageSelection() const
{
    return audioLanguageSelection_;
}

void AudioSelectorSettings::setAudioLanguageSelection(const AudioSelectorLangSelection& value)
{
    audioLanguageSelection_ = value;
    audioLanguageSelectionIsSet_ = true;
}

bool AudioSelectorSettings::audioLanguageSelectionIsSet() const
{
    return audioLanguageSelectionIsSet_;
}

void AudioSelectorSettings::unsetaudioLanguageSelection()
{
    audioLanguageSelectionIsSet_ = false;
}

AudioSelectorPidSelection AudioSelectorSettings::getAudioPidSelection() const
{
    return audioPidSelection_;
}

void AudioSelectorSettings::setAudioPidSelection(const AudioSelectorPidSelection& value)
{
    audioPidSelection_ = value;
    audioPidSelectionIsSet_ = true;
}

bool AudioSelectorSettings::audioPidSelectionIsSet() const
{
    return audioPidSelectionIsSet_;
}

void AudioSelectorSettings::unsetaudioPidSelection()
{
    audioPidSelectionIsSet_ = false;
}

AudioSelectorHlsSelection AudioSelectorSettings::getAudioHlsSelection() const
{
    return audioHlsSelection_;
}

void AudioSelectorSettings::setAudioHlsSelection(const AudioSelectorHlsSelection& value)
{
    audioHlsSelection_ = value;
    audioHlsSelectionIsSet_ = true;
}

bool AudioSelectorSettings::audioHlsSelectionIsSet() const
{
    return audioHlsSelectionIsSet_;
}

void AudioSelectorSettings::unsetaudioHlsSelection()
{
    audioHlsSelectionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ShootScript.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScript::ShootScript()
{
    scriptType_ = "";
    scriptTypeIsSet_ = false;
    textConfigIsSet_ = false;
    audioDuration_ = 0.0f;
    audioDurationIsSet_ = false;
    audioDriveActionConfigIsSet_ = false;
    audioDriveFileExternalUrl_ = "";
    audioDriveFileExternalUrlIsSet_ = false;
    backgroundConfigIsSet_ = false;
    layerConfigIsSet_ = false;
    audioConfigIsSet_ = false;
}

ShootScript::~ShootScript() = default;

void ShootScript::validate()
{
}

web::json::value ShootScript::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptTypeIsSet_) {
        val[utility::conversions::to_string_t("script_type")] = ModelBase::toJson(scriptType_);
    }
    if(textConfigIsSet_) {
        val[utility::conversions::to_string_t("text_config")] = ModelBase::toJson(textConfig_);
    }
    if(audioDurationIsSet_) {
        val[utility::conversions::to_string_t("audio_duration")] = ModelBase::toJson(audioDuration_);
    }
    if(audioDriveActionConfigIsSet_) {
        val[utility::conversions::to_string_t("audio_drive_action_config")] = ModelBase::toJson(audioDriveActionConfig_);
    }
    if(audioDriveFileExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_drive_file_external_url")] = ModelBase::toJson(audioDriveFileExternalUrl_);
    }
    if(backgroundConfigIsSet_) {
        val[utility::conversions::to_string_t("background_config")] = ModelBase::toJson(backgroundConfig_);
    }
    if(layerConfigIsSet_) {
        val[utility::conversions::to_string_t("layer_config")] = ModelBase::toJson(layerConfig_);
    }
    if(audioConfigIsSet_) {
        val[utility::conversions::to_string_t("audio_config")] = ModelBase::toJson(audioConfig_);
    }

    return val;
}
bool ShootScript::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_config"));
        if(!fieldValue.is_null())
        {
            TextConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_drive_action_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_drive_action_config"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioDriveActionConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDriveActionConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_drive_file_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_drive_file_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDriveFileExternalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_config"));
        if(!fieldValue.is_null())
        {
            std::vector<BackgroundConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_config"));
        if(!fieldValue.is_null())
        {
            std::vector<LayerConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_config"));
        if(!fieldValue.is_null())
        {
            AudioInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioConfig(refVal);
        }
    }
    return ok;
}


std::string ShootScript::getScriptType() const
{
    return scriptType_;
}

void ShootScript::setScriptType(const std::string& value)
{
    scriptType_ = value;
    scriptTypeIsSet_ = true;
}

bool ShootScript::scriptTypeIsSet() const
{
    return scriptTypeIsSet_;
}

void ShootScript::unsetscriptType()
{
    scriptTypeIsSet_ = false;
}

TextConfig ShootScript::getTextConfig() const
{
    return textConfig_;
}

void ShootScript::setTextConfig(const TextConfig& value)
{
    textConfig_ = value;
    textConfigIsSet_ = true;
}

bool ShootScript::textConfigIsSet() const
{
    return textConfigIsSet_;
}

void ShootScript::unsettextConfig()
{
    textConfigIsSet_ = false;
}

float ShootScript::getAudioDuration() const
{
    return audioDuration_;
}

void ShootScript::setAudioDuration(float value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool ShootScript::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void ShootScript::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

std::vector<AudioDriveActionConfig>& ShootScript::getAudioDriveActionConfig()
{
    return audioDriveActionConfig_;
}

void ShootScript::setAudioDriveActionConfig(const std::vector<AudioDriveActionConfig>& value)
{
    audioDriveActionConfig_ = value;
    audioDriveActionConfigIsSet_ = true;
}

bool ShootScript::audioDriveActionConfigIsSet() const
{
    return audioDriveActionConfigIsSet_;
}

void ShootScript::unsetaudioDriveActionConfig()
{
    audioDriveActionConfigIsSet_ = false;
}

std::string ShootScript::getAudioDriveFileExternalUrl() const
{
    return audioDriveFileExternalUrl_;
}

void ShootScript::setAudioDriveFileExternalUrl(const std::string& value)
{
    audioDriveFileExternalUrl_ = value;
    audioDriveFileExternalUrlIsSet_ = true;
}

bool ShootScript::audioDriveFileExternalUrlIsSet() const
{
    return audioDriveFileExternalUrlIsSet_;
}

void ShootScript::unsetaudioDriveFileExternalUrl()
{
    audioDriveFileExternalUrlIsSet_ = false;
}

std::vector<BackgroundConfigInfo>& ShootScript::getBackgroundConfig()
{
    return backgroundConfig_;
}

void ShootScript::setBackgroundConfig(const std::vector<BackgroundConfigInfo>& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool ShootScript::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void ShootScript::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& ShootScript::getLayerConfig()
{
    return layerConfig_;
}

void ShootScript::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool ShootScript::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void ShootScript::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

AudioInfo ShootScript::getAudioConfig() const
{
    return audioConfig_;
}

void ShootScript::setAudioConfig(const AudioInfo& value)
{
    audioConfig_ = value;
    audioConfigIsSet_ = true;
}

bool ShootScript::audioConfigIsSet() const
{
    return audioConfigIsSet_;
}

void ShootScript::unsetaudioConfig()
{
    audioConfigIsSet_ = false;
}

}
}
}
}
}



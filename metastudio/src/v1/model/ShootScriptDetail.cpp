

#include "huaweicloud/metastudio/v1/model/ShootScriptDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptDetail::ShootScriptDetail()
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
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
}

ShootScriptDetail::~ShootScriptDetail() = default;

void ShootScriptDetail::validate()
{
}

web::json::value ShootScriptDetail::toJson() const
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
    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_url")] = ModelBase::toJson(thumbnailUrl_);
    }

    return val;
}
bool ShootScriptDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailUrl(refVal);
        }
    }
    return ok;
}


std::string ShootScriptDetail::getScriptType() const
{
    return scriptType_;
}

void ShootScriptDetail::setScriptType(const std::string& value)
{
    scriptType_ = value;
    scriptTypeIsSet_ = true;
}

bool ShootScriptDetail::scriptTypeIsSet() const
{
    return scriptTypeIsSet_;
}

void ShootScriptDetail::unsetscriptType()
{
    scriptTypeIsSet_ = false;
}

TextConfig ShootScriptDetail::getTextConfig() const
{
    return textConfig_;
}

void ShootScriptDetail::setTextConfig(const TextConfig& value)
{
    textConfig_ = value;
    textConfigIsSet_ = true;
}

bool ShootScriptDetail::textConfigIsSet() const
{
    return textConfigIsSet_;
}

void ShootScriptDetail::unsettextConfig()
{
    textConfigIsSet_ = false;
}

float ShootScriptDetail::getAudioDuration() const
{
    return audioDuration_;
}

void ShootScriptDetail::setAudioDuration(float value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool ShootScriptDetail::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void ShootScriptDetail::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

std::vector<AudioDriveActionConfig>& ShootScriptDetail::getAudioDriveActionConfig()
{
    return audioDriveActionConfig_;
}

void ShootScriptDetail::setAudioDriveActionConfig(const std::vector<AudioDriveActionConfig>& value)
{
    audioDriveActionConfig_ = value;
    audioDriveActionConfigIsSet_ = true;
}

bool ShootScriptDetail::audioDriveActionConfigIsSet() const
{
    return audioDriveActionConfigIsSet_;
}

void ShootScriptDetail::unsetaudioDriveActionConfig()
{
    audioDriveActionConfigIsSet_ = false;
}

std::string ShootScriptDetail::getAudioDriveFileExternalUrl() const
{
    return audioDriveFileExternalUrl_;
}

void ShootScriptDetail::setAudioDriveFileExternalUrl(const std::string& value)
{
    audioDriveFileExternalUrl_ = value;
    audioDriveFileExternalUrlIsSet_ = true;
}

bool ShootScriptDetail::audioDriveFileExternalUrlIsSet() const
{
    return audioDriveFileExternalUrlIsSet_;
}

void ShootScriptDetail::unsetaudioDriveFileExternalUrl()
{
    audioDriveFileExternalUrlIsSet_ = false;
}

std::vector<BackgroundConfigInfo>& ShootScriptDetail::getBackgroundConfig()
{
    return backgroundConfig_;
}

void ShootScriptDetail::setBackgroundConfig(const std::vector<BackgroundConfigInfo>& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool ShootScriptDetail::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void ShootScriptDetail::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& ShootScriptDetail::getLayerConfig()
{
    return layerConfig_;
}

void ShootScriptDetail::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool ShootScriptDetail::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void ShootScriptDetail::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

AudioInfo ShootScriptDetail::getAudioConfig() const
{
    return audioConfig_;
}

void ShootScriptDetail::setAudioConfig(const AudioInfo& value)
{
    audioConfig_ = value;
    audioConfigIsSet_ = true;
}

bool ShootScriptDetail::audioConfigIsSet() const
{
    return audioConfigIsSet_;
}

void ShootScriptDetail::unsetaudioConfig()
{
    audioConfigIsSet_ = false;
}

std::string ShootScriptDetail::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void ShootScriptDetail::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool ShootScriptDetail::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void ShootScriptDetail::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

}
}
}
}
}



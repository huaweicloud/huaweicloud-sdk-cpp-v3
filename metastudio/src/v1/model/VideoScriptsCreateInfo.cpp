

#include "huaweicloud/metastudio/v1/model/VideoScriptsCreateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoScriptsCreateInfo::VideoScriptsCreateInfo()
{
    scriptName_ = "";
    scriptNameIsSet_ = false;
    scriptDescription_ = "";
    scriptDescriptionIsSet_ = false;
    viewMode_ = "";
    viewModeIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    modelAssetType_ = "";
    modelAssetTypeIsSet_ = false;
    voiceConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    sceneAssetId_ = "";
    sceneAssetIdIsSet_ = false;
    privData_ = "";
    privDataIsSet_ = false;
    backgroundMusicConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    audioFilesIsSet_ = false;
    actionConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
}

VideoScriptsCreateInfo::~VideoScriptsCreateInfo() = default;

void VideoScriptsCreateInfo::validate()
{
}

web::json::value VideoScriptsCreateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptNameIsSet_) {
        val[utility::conversions::to_string_t("script_name")] = ModelBase::toJson(scriptName_);
    }
    if(scriptDescriptionIsSet_) {
        val[utility::conversions::to_string_t("script_description")] = ModelBase::toJson(scriptDescription_);
    }
    if(viewModeIsSet_) {
        val[utility::conversions::to_string_t("view_mode")] = ModelBase::toJson(viewMode_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(modelAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("model_asset_type")] = ModelBase::toJson(modelAssetType_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(sceneAssetIdIsSet_) {
        val[utility::conversions::to_string_t("scene_asset_id")] = ModelBase::toJson(sceneAssetId_);
    }
    if(privDataIsSet_) {
        val[utility::conversions::to_string_t("priv_data")] = ModelBase::toJson(privData_);
    }
    if(backgroundMusicConfigIsSet_) {
        val[utility::conversions::to_string_t("background_music_config")] = ModelBase::toJson(backgroundMusicConfig_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(audioFilesIsSet_) {
        val[utility::conversions::to_string_t("audio_files")] = ModelBase::toJson(audioFiles_);
    }
    if(actionConfigIsSet_) {
        val[utility::conversions::to_string_t("action_config")] = ModelBase::toJson(actionConfig_);
    }
    if(shootScriptsIsSet_) {
        val[utility::conversions::to_string_t("shoot_scripts")] = ModelBase::toJson(shootScripts_);
    }

    return val;
}
bool VideoScriptsCreateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config"));
        if(!fieldValue.is_null())
        {
            VoiceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            VideoConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priv_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priv_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_music_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_music_config"));
        if(!fieldValue.is_null())
        {
            BackgroundMusicConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundMusicConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_files"));
        if(!fieldValue.is_null())
        {
            ShootScriptAudioFiles refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_config"));
        if(!fieldValue.is_null())
        {
            ActionConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shoot_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<ShootScriptItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    return ok;
}


std::string VideoScriptsCreateInfo::getScriptName() const
{
    return scriptName_;
}

void VideoScriptsCreateInfo::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool VideoScriptsCreateInfo::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void VideoScriptsCreateInfo::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getScriptDescription() const
{
    return scriptDescription_;
}

void VideoScriptsCreateInfo::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool VideoScriptsCreateInfo::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void VideoScriptsCreateInfo::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getViewMode() const
{
    return viewMode_;
}

void VideoScriptsCreateInfo::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool VideoScriptsCreateInfo::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void VideoScriptsCreateInfo::unsetviewMode()
{
    viewModeIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void VideoScriptsCreateInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool VideoScriptsCreateInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void VideoScriptsCreateInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getModelAssetType() const
{
    return modelAssetType_;
}

void VideoScriptsCreateInfo::setModelAssetType(const std::string& value)
{
    modelAssetType_ = value;
    modelAssetTypeIsSet_ = true;
}

bool VideoScriptsCreateInfo::modelAssetTypeIsSet() const
{
    return modelAssetTypeIsSet_;
}

void VideoScriptsCreateInfo::unsetmodelAssetType()
{
    modelAssetTypeIsSet_ = false;
}

VoiceConfig VideoScriptsCreateInfo::getVoiceConfig() const
{
    return voiceConfig_;
}

void VideoScriptsCreateInfo::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool VideoScriptsCreateInfo::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void VideoScriptsCreateInfo::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig VideoScriptsCreateInfo::getVideoConfig() const
{
    return videoConfig_;
}

void VideoScriptsCreateInfo::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool VideoScriptsCreateInfo::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void VideoScriptsCreateInfo::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getSceneAssetId() const
{
    return sceneAssetId_;
}

void VideoScriptsCreateInfo::setSceneAssetId(const std::string& value)
{
    sceneAssetId_ = value;
    sceneAssetIdIsSet_ = true;
}

bool VideoScriptsCreateInfo::sceneAssetIdIsSet() const
{
    return sceneAssetIdIsSet_;
}

void VideoScriptsCreateInfo::unsetsceneAssetId()
{
    sceneAssetIdIsSet_ = false;
}

std::string VideoScriptsCreateInfo::getPrivData() const
{
    return privData_;
}

void VideoScriptsCreateInfo::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool VideoScriptsCreateInfo::privDataIsSet() const
{
    return privDataIsSet_;
}

void VideoScriptsCreateInfo::unsetprivData()
{
    privDataIsSet_ = false;
}

BackgroundMusicConfig VideoScriptsCreateInfo::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void VideoScriptsCreateInfo::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool VideoScriptsCreateInfo::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void VideoScriptsCreateInfo::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig VideoScriptsCreateInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void VideoScriptsCreateInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool VideoScriptsCreateInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void VideoScriptsCreateInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ShootScriptAudioFiles VideoScriptsCreateInfo::getAudioFiles() const
{
    return audioFiles_;
}

void VideoScriptsCreateInfo::setAudioFiles(const ShootScriptAudioFiles& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool VideoScriptsCreateInfo::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void VideoScriptsCreateInfo::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

ActionConfig VideoScriptsCreateInfo::getActionConfig() const
{
    return actionConfig_;
}

void VideoScriptsCreateInfo::setActionConfig(const ActionConfig& value)
{
    actionConfig_ = value;
    actionConfigIsSet_ = true;
}

bool VideoScriptsCreateInfo::actionConfigIsSet() const
{
    return actionConfigIsSet_;
}

void VideoScriptsCreateInfo::unsetactionConfig()
{
    actionConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& VideoScriptsCreateInfo::getShootScripts()
{
    return shootScripts_;
}

void VideoScriptsCreateInfo::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool VideoScriptsCreateInfo::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void VideoScriptsCreateInfo::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

}
}
}
}
}



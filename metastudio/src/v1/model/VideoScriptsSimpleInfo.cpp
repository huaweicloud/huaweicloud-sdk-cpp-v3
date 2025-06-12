

#include "huaweicloud/metastudio/v1/model/VideoScriptsSimpleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoScriptsSimpleInfo::VideoScriptsSimpleInfo()
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
}

VideoScriptsSimpleInfo::~VideoScriptsSimpleInfo() = default;

void VideoScriptsSimpleInfo::validate()
{
}

web::json::value VideoScriptsSimpleInfo::toJson() const
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

    return val;
}
bool VideoScriptsSimpleInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string VideoScriptsSimpleInfo::getScriptName() const
{
    return scriptName_;
}

void VideoScriptsSimpleInfo::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool VideoScriptsSimpleInfo::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void VideoScriptsSimpleInfo::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getScriptDescription() const
{
    return scriptDescription_;
}

void VideoScriptsSimpleInfo::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool VideoScriptsSimpleInfo::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void VideoScriptsSimpleInfo::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getViewMode() const
{
    return viewMode_;
}

void VideoScriptsSimpleInfo::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool VideoScriptsSimpleInfo::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void VideoScriptsSimpleInfo::unsetviewMode()
{
    viewModeIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void VideoScriptsSimpleInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool VideoScriptsSimpleInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void VideoScriptsSimpleInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getModelAssetType() const
{
    return modelAssetType_;
}

void VideoScriptsSimpleInfo::setModelAssetType(const std::string& value)
{
    modelAssetType_ = value;
    modelAssetTypeIsSet_ = true;
}

bool VideoScriptsSimpleInfo::modelAssetTypeIsSet() const
{
    return modelAssetTypeIsSet_;
}

void VideoScriptsSimpleInfo::unsetmodelAssetType()
{
    modelAssetTypeIsSet_ = false;
}

VoiceConfig VideoScriptsSimpleInfo::getVoiceConfig() const
{
    return voiceConfig_;
}

void VideoScriptsSimpleInfo::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool VideoScriptsSimpleInfo::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void VideoScriptsSimpleInfo::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig VideoScriptsSimpleInfo::getVideoConfig() const
{
    return videoConfig_;
}

void VideoScriptsSimpleInfo::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool VideoScriptsSimpleInfo::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void VideoScriptsSimpleInfo::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getSceneAssetId() const
{
    return sceneAssetId_;
}

void VideoScriptsSimpleInfo::setSceneAssetId(const std::string& value)
{
    sceneAssetId_ = value;
    sceneAssetIdIsSet_ = true;
}

bool VideoScriptsSimpleInfo::sceneAssetIdIsSet() const
{
    return sceneAssetIdIsSet_;
}

void VideoScriptsSimpleInfo::unsetsceneAssetId()
{
    sceneAssetIdIsSet_ = false;
}

std::string VideoScriptsSimpleInfo::getPrivData() const
{
    return privData_;
}

void VideoScriptsSimpleInfo::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool VideoScriptsSimpleInfo::privDataIsSet() const
{
    return privDataIsSet_;
}

void VideoScriptsSimpleInfo::unsetprivData()
{
    privDataIsSet_ = false;
}

BackgroundMusicConfig VideoScriptsSimpleInfo::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void VideoScriptsSimpleInfo::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool VideoScriptsSimpleInfo::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void VideoScriptsSimpleInfo::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig VideoScriptsSimpleInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void VideoScriptsSimpleInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool VideoScriptsSimpleInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void VideoScriptsSimpleInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ShootScriptAudioFiles VideoScriptsSimpleInfo::getAudioFiles() const
{
    return audioFiles_;
}

void VideoScriptsSimpleInfo::setAudioFiles(const ShootScriptAudioFiles& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool VideoScriptsSimpleInfo::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void VideoScriptsSimpleInfo::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

ActionConfig VideoScriptsSimpleInfo::getActionConfig() const
{
    return actionConfig_;
}

void VideoScriptsSimpleInfo::setActionConfig(const ActionConfig& value)
{
    actionConfig_ = value;
    actionConfigIsSet_ = true;
}

bool VideoScriptsSimpleInfo::actionConfigIsSet() const
{
    return actionConfigIsSet_;
}

void VideoScriptsSimpleInfo::unsetactionConfig()
{
    actionConfigIsSet_ = false;
}

}
}
}
}
}



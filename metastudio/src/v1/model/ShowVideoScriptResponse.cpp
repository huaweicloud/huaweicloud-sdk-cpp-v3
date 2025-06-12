

#include "huaweicloud/metastudio/v1/model/ShowVideoScriptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVideoScriptResponse::ShowVideoScriptResponse()
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
    scriptId_ = "";
    scriptIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    scriptCoverUrl_ = "";
    scriptCoverUrlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowVideoScriptResponse::~ShowVideoScriptResponse() = default;

void ShowVideoScriptResponse::validate()
{
}

web::json::value ShowVideoScriptResponse::toJson() const
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
    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(scriptCoverUrlIsSet_) {
        val[utility::conversions::to_string_t("script_cover_url")] = ModelBase::toJson(scriptCoverUrl_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowVideoScriptResponse::fromJson(const web::json::value& val)
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
            std::vector<ShootScriptShowItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowVideoScriptResponse::getScriptName() const
{
    return scriptName_;
}

void ShowVideoScriptResponse::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool ShowVideoScriptResponse::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void ShowVideoScriptResponse::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string ShowVideoScriptResponse::getScriptDescription() const
{
    return scriptDescription_;
}

void ShowVideoScriptResponse::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool ShowVideoScriptResponse::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void ShowVideoScriptResponse::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string ShowVideoScriptResponse::getViewMode() const
{
    return viewMode_;
}

void ShowVideoScriptResponse::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool ShowVideoScriptResponse::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void ShowVideoScriptResponse::unsetviewMode()
{
    viewModeIsSet_ = false;
}

std::string ShowVideoScriptResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void ShowVideoScriptResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool ShowVideoScriptResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void ShowVideoScriptResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string ShowVideoScriptResponse::getModelAssetType() const
{
    return modelAssetType_;
}

void ShowVideoScriptResponse::setModelAssetType(const std::string& value)
{
    modelAssetType_ = value;
    modelAssetTypeIsSet_ = true;
}

bool ShowVideoScriptResponse::modelAssetTypeIsSet() const
{
    return modelAssetTypeIsSet_;
}

void ShowVideoScriptResponse::unsetmodelAssetType()
{
    modelAssetTypeIsSet_ = false;
}

VoiceConfig ShowVideoScriptResponse::getVoiceConfig() const
{
    return voiceConfig_;
}

void ShowVideoScriptResponse::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool ShowVideoScriptResponse::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void ShowVideoScriptResponse::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig ShowVideoScriptResponse::getVideoConfig() const
{
    return videoConfig_;
}

void ShowVideoScriptResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool ShowVideoScriptResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void ShowVideoScriptResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string ShowVideoScriptResponse::getSceneAssetId() const
{
    return sceneAssetId_;
}

void ShowVideoScriptResponse::setSceneAssetId(const std::string& value)
{
    sceneAssetId_ = value;
    sceneAssetIdIsSet_ = true;
}

bool ShowVideoScriptResponse::sceneAssetIdIsSet() const
{
    return sceneAssetIdIsSet_;
}

void ShowVideoScriptResponse::unsetsceneAssetId()
{
    sceneAssetIdIsSet_ = false;
}

std::string ShowVideoScriptResponse::getPrivData() const
{
    return privData_;
}

void ShowVideoScriptResponse::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool ShowVideoScriptResponse::privDataIsSet() const
{
    return privDataIsSet_;
}

void ShowVideoScriptResponse::unsetprivData()
{
    privDataIsSet_ = false;
}

BackgroundMusicConfig ShowVideoScriptResponse::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void ShowVideoScriptResponse::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool ShowVideoScriptResponse::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void ShowVideoScriptResponse::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig ShowVideoScriptResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void ShowVideoScriptResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ShowVideoScriptResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ShowVideoScriptResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ShootScriptAudioFiles ShowVideoScriptResponse::getAudioFiles() const
{
    return audioFiles_;
}

void ShowVideoScriptResponse::setAudioFiles(const ShootScriptAudioFiles& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool ShowVideoScriptResponse::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void ShowVideoScriptResponse::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

ActionConfig ShowVideoScriptResponse::getActionConfig() const
{
    return actionConfig_;
}

void ShowVideoScriptResponse::setActionConfig(const ActionConfig& value)
{
    actionConfig_ = value;
    actionConfigIsSet_ = true;
}

bool ShowVideoScriptResponse::actionConfigIsSet() const
{
    return actionConfigIsSet_;
}

void ShowVideoScriptResponse::unsetactionConfig()
{
    actionConfigIsSet_ = false;
}

std::vector<ShootScriptShowItem>& ShowVideoScriptResponse::getShootScripts()
{
    return shootScripts_;
}

void ShowVideoScriptResponse::setShootScripts(const std::vector<ShootScriptShowItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool ShowVideoScriptResponse::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void ShowVideoScriptResponse::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

std::string ShowVideoScriptResponse::getScriptId() const
{
    return scriptId_;
}

void ShowVideoScriptResponse::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool ShowVideoScriptResponse::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void ShowVideoScriptResponse::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string ShowVideoScriptResponse::getCreateTime() const
{
    return createTime_;
}

void ShowVideoScriptResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowVideoScriptResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowVideoScriptResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowVideoScriptResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowVideoScriptResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowVideoScriptResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowVideoScriptResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowVideoScriptResponse::getScriptCoverUrl() const
{
    return scriptCoverUrl_;
}

void ShowVideoScriptResponse::setScriptCoverUrl(const std::string& value)
{
    scriptCoverUrl_ = value;
    scriptCoverUrlIsSet_ = true;
}

bool ShowVideoScriptResponse::scriptCoverUrlIsSet() const
{
    return scriptCoverUrlIsSet_;
}

void ShowVideoScriptResponse::unsetscriptCoverUrl()
{
    scriptCoverUrlIsSet_ = false;
}

std::string ShowVideoScriptResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowVideoScriptResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowVideoScriptResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowVideoScriptResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



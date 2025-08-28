

#include "huaweicloud/metastudio/v1/model/CreateVideoScriptsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateVideoScriptsReq::CreateVideoScriptsReq()
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
    privData_ = "";
    privDataIsSet_ = false;
    backgroundMusicConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    audioFilesIsSet_ = false;
    actionConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
}

CreateVideoScriptsReq::~CreateVideoScriptsReq() = default;

void CreateVideoScriptsReq::validate()
{
}

web::json::value CreateVideoScriptsReq::toJson() const
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
bool CreateVideoScriptsReq::fromJson(const web::json::value& val)
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


std::string CreateVideoScriptsReq::getScriptName() const
{
    return scriptName_;
}

void CreateVideoScriptsReq::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool CreateVideoScriptsReq::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void CreateVideoScriptsReq::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string CreateVideoScriptsReq::getScriptDescription() const
{
    return scriptDescription_;
}

void CreateVideoScriptsReq::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool CreateVideoScriptsReq::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void CreateVideoScriptsReq::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string CreateVideoScriptsReq::getViewMode() const
{
    return viewMode_;
}

void CreateVideoScriptsReq::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool CreateVideoScriptsReq::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void CreateVideoScriptsReq::unsetviewMode()
{
    viewModeIsSet_ = false;
}

std::string CreateVideoScriptsReq::getModelAssetId() const
{
    return modelAssetId_;
}

void CreateVideoScriptsReq::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool CreateVideoScriptsReq::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void CreateVideoScriptsReq::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string CreateVideoScriptsReq::getModelAssetType() const
{
    return modelAssetType_;
}

void CreateVideoScriptsReq::setModelAssetType(const std::string& value)
{
    modelAssetType_ = value;
    modelAssetTypeIsSet_ = true;
}

bool CreateVideoScriptsReq::modelAssetTypeIsSet() const
{
    return modelAssetTypeIsSet_;
}

void CreateVideoScriptsReq::unsetmodelAssetType()
{
    modelAssetTypeIsSet_ = false;
}

VoiceConfig CreateVideoScriptsReq::getVoiceConfig() const
{
    return voiceConfig_;
}

void CreateVideoScriptsReq::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool CreateVideoScriptsReq::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void CreateVideoScriptsReq::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig CreateVideoScriptsReq::getVideoConfig() const
{
    return videoConfig_;
}

void CreateVideoScriptsReq::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreateVideoScriptsReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreateVideoScriptsReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string CreateVideoScriptsReq::getPrivData() const
{
    return privData_;
}

void CreateVideoScriptsReq::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool CreateVideoScriptsReq::privDataIsSet() const
{
    return privDataIsSet_;
}

void CreateVideoScriptsReq::unsetprivData()
{
    privDataIsSet_ = false;
}

BackgroundMusicConfig CreateVideoScriptsReq::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void CreateVideoScriptsReq::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool CreateVideoScriptsReq::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void CreateVideoScriptsReq::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig CreateVideoScriptsReq::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateVideoScriptsReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateVideoScriptsReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateVideoScriptsReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ShootScriptAudioFiles CreateVideoScriptsReq::getAudioFiles() const
{
    return audioFiles_;
}

void CreateVideoScriptsReq::setAudioFiles(const ShootScriptAudioFiles& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool CreateVideoScriptsReq::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void CreateVideoScriptsReq::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

ActionConfig CreateVideoScriptsReq::getActionConfig() const
{
    return actionConfig_;
}

void CreateVideoScriptsReq::setActionConfig(const ActionConfig& value)
{
    actionConfig_ = value;
    actionConfigIsSet_ = true;
}

bool CreateVideoScriptsReq::actionConfigIsSet() const
{
    return actionConfigIsSet_;
}

void CreateVideoScriptsReq::unsetactionConfig()
{
    actionConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& CreateVideoScriptsReq::getShootScripts()
{
    return shootScripts_;
}

void CreateVideoScriptsReq::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool CreateVideoScriptsReq::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void CreateVideoScriptsReq::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

}
}
}
}
}



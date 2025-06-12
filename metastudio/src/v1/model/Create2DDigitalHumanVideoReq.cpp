

#include "huaweicloud/metastudio/v1/model/Create2DDigitalHumanVideoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Create2DDigitalHumanVideoReq::Create2DDigitalHumanVideoReq()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    voiceConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
    outputAssetConfigIsSet_ = false;
    backgroundMusicConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
    actionConfigIsSet_ = false;
}

Create2DDigitalHumanVideoReq::~Create2DDigitalHumanVideoReq() = default;

void Create2DDigitalHumanVideoReq::validate()
{
}

web::json::value Create2DDigitalHumanVideoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(shootScriptsIsSet_) {
        val[utility::conversions::to_string_t("shoot_scripts")] = ModelBase::toJson(shootScripts_);
    }
    if(outputAssetConfigIsSet_) {
        val[utility::conversions::to_string_t("output_asset_config")] = ModelBase::toJson(outputAssetConfig_);
    }
    if(backgroundMusicConfigIsSet_) {
        val[utility::conversions::to_string_t("background_music_config")] = ModelBase::toJson(backgroundMusicConfig_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }
    if(actionConfigIsSet_) {
        val[utility::conversions::to_string_t("action_config")] = ModelBase::toJson(actionConfig_);
    }

    return val;
}
bool Create2DDigitalHumanVideoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("shoot_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<ShootScriptItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_asset_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_asset_config"));
        if(!fieldValue.is_null())
        {
            OutputAssetConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputAssetConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            CallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
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


std::string Create2DDigitalHumanVideoReq::getScriptId() const
{
    return scriptId_;
}

void Create2DDigitalHumanVideoReq::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string Create2DDigitalHumanVideoReq::getModelAssetId() const
{
    return modelAssetId_;
}

void Create2DDigitalHumanVideoReq::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig Create2DDigitalHumanVideoReq::getVoiceConfig() const
{
    return voiceConfig_;
}

void Create2DDigitalHumanVideoReq::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig Create2DDigitalHumanVideoReq::getVideoConfig() const
{
    return videoConfig_;
}

void Create2DDigitalHumanVideoReq::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& Create2DDigitalHumanVideoReq::getShootScripts()
{
    return shootScripts_;
}

void Create2DDigitalHumanVideoReq::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

OutputAssetConfig Create2DDigitalHumanVideoReq::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void Create2DDigitalHumanVideoReq::setOutputAssetConfig(const OutputAssetConfig& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

BackgroundMusicConfig Create2DDigitalHumanVideoReq::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void Create2DDigitalHumanVideoReq::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig Create2DDigitalHumanVideoReq::getReviewConfig() const
{
    return reviewConfig_;
}

void Create2DDigitalHumanVideoReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

CallBackConfig Create2DDigitalHumanVideoReq::getCallbackConfig() const
{
    return callbackConfig_;
}

void Create2DDigitalHumanVideoReq::setCallbackConfig(const CallBackConfig& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

ActionConfig Create2DDigitalHumanVideoReq::getActionConfig() const
{
    return actionConfig_;
}

void Create2DDigitalHumanVideoReq::setActionConfig(const ActionConfig& value)
{
    actionConfig_ = value;
    actionConfigIsSet_ = true;
}

bool Create2DDigitalHumanVideoReq::actionConfigIsSet() const
{
    return actionConfigIsSet_;
}

void Create2DDigitalHumanVideoReq::unsetactionConfig()
{
    actionConfigIsSet_ = false;
}

}
}
}
}
}



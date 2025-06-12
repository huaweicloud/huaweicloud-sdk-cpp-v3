

#include "huaweicloud/metastudio/v1/model/CreatePhotoDigitalHumanVideoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePhotoDigitalHumanVideoReq::CreatePhotoDigitalHumanVideoReq()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    humanImage_ = "";
    humanImageIsSet_ = false;
    voiceConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
    outputAssetConfigIsSet_ = false;
    backgroundMusicConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
}

CreatePhotoDigitalHumanVideoReq::~CreatePhotoDigitalHumanVideoReq() = default;

void CreatePhotoDigitalHumanVideoReq::validate()
{
}

web::json::value CreatePhotoDigitalHumanVideoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(humanImageIsSet_) {
        val[utility::conversions::to_string_t("human_image")] = ModelBase::toJson(humanImage_);
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

    return val;
}
bool CreatePhotoDigitalHumanVideoReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImage(refVal);
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
            PhotoVideoConfig refVal;
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
    return ok;
}


std::string CreatePhotoDigitalHumanVideoReq::getScriptId() const
{
    return scriptId_;
}

void CreatePhotoDigitalHumanVideoReq::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string CreatePhotoDigitalHumanVideoReq::getHumanImage() const
{
    return humanImage_;
}

void CreatePhotoDigitalHumanVideoReq::setHumanImage(const std::string& value)
{
    humanImage_ = value;
    humanImageIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::humanImageIsSet() const
{
    return humanImageIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsethumanImage()
{
    humanImageIsSet_ = false;
}

VoiceConfig CreatePhotoDigitalHumanVideoReq::getVoiceConfig() const
{
    return voiceConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

PhotoVideoConfig CreatePhotoDigitalHumanVideoReq::getVideoConfig() const
{
    return videoConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setVideoConfig(const PhotoVideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& CreatePhotoDigitalHumanVideoReq::getShootScripts()
{
    return shootScripts_;
}

void CreatePhotoDigitalHumanVideoReq::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

OutputAssetConfig CreatePhotoDigitalHumanVideoReq::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setOutputAssetConfig(const OutputAssetConfig& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

BackgroundMusicConfig CreatePhotoDigitalHumanVideoReq::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

ReviewConfig CreatePhotoDigitalHumanVideoReq::getReviewConfig() const
{
    return reviewConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

CallBackConfig CreatePhotoDigitalHumanVideoReq::getCallbackConfig() const
{
    return callbackConfig_;
}

void CreatePhotoDigitalHumanVideoReq::setCallbackConfig(const CallBackConfig& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void CreatePhotoDigitalHumanVideoReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}



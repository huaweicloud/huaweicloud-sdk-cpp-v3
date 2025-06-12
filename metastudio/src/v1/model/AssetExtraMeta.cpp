

#include "huaweicloud/metastudio/v1/model/AssetExtraMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssetExtraMeta::AssetExtraMeta()
{
    humanModelMetaIsSet_ = false;
    voiceModelMetaIsSet_ = false;
    pptMetaIsSet_ = false;
    animationMetaIsSet_ = false;
    sceneMetaIsSet_ = false;
    materialMetaIsSet_ = false;
    humanModel2dMetaIsSet_ = false;
    imageMetaIsSet_ = false;
    videoMetaIsSet_ = false;
    audioMetaIsSet_ = false;
}

AssetExtraMeta::~AssetExtraMeta() = default;

void AssetExtraMeta::validate()
{
}

web::json::value AssetExtraMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(humanModelMetaIsSet_) {
        val[utility::conversions::to_string_t("human_model_meta")] = ModelBase::toJson(humanModelMeta_);
    }
    if(voiceModelMetaIsSet_) {
        val[utility::conversions::to_string_t("voice_model_meta")] = ModelBase::toJson(voiceModelMeta_);
    }
    if(pptMetaIsSet_) {
        val[utility::conversions::to_string_t("ppt_meta")] = ModelBase::toJson(pptMeta_);
    }
    if(animationMetaIsSet_) {
        val[utility::conversions::to_string_t("animation_meta")] = ModelBase::toJson(animationMeta_);
    }
    if(sceneMetaIsSet_) {
        val[utility::conversions::to_string_t("scene_meta")] = ModelBase::toJson(sceneMeta_);
    }
    if(materialMetaIsSet_) {
        val[utility::conversions::to_string_t("material_meta")] = ModelBase::toJson(materialMeta_);
    }
    if(humanModel2dMetaIsSet_) {
        val[utility::conversions::to_string_t("human_model_2d_meta")] = ModelBase::toJson(humanModel2dMeta_);
    }
    if(imageMetaIsSet_) {
        val[utility::conversions::to_string_t("image_meta")] = ModelBase::toJson(imageMeta_);
    }
    if(videoMetaIsSet_) {
        val[utility::conversions::to_string_t("video_meta")] = ModelBase::toJson(videoMeta_);
    }
    if(audioMetaIsSet_) {
        val[utility::conversions::to_string_t("audio_meta")] = ModelBase::toJson(audioMeta_);
    }

    return val;
}
bool AssetExtraMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("human_model_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_model_meta"));
        if(!fieldValue.is_null())
        {
            HumanModelAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanModelMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_model_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_model_meta"));
        if(!fieldValue.is_null())
        {
            VoiceModelAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceModelMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ppt_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ppt_meta"));
        if(!fieldValue.is_null())
        {
            PPTAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPptMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("animation_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("animation_meta"));
        if(!fieldValue.is_null())
        {
            AnimationAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnimationMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_meta"));
        if(!fieldValue.is_null())
        {
            SceneAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("material_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("material_meta"));
        if(!fieldValue.is_null())
        {
            MaterialAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("human_model_2d_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_model_2d_meta"));
        if(!fieldValue.is_null())
        {
            HumanModel2DAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanModel2dMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_meta"));
        if(!fieldValue.is_null())
        {
            ImageAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_meta"));
        if(!fieldValue.is_null())
        {
            VideoAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_meta"));
        if(!fieldValue.is_null())
        {
            AudioAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioMeta(refVal);
        }
    }
    return ok;
}


HumanModelAssetMeta AssetExtraMeta::getHumanModelMeta() const
{
    return humanModelMeta_;
}

void AssetExtraMeta::setHumanModelMeta(const HumanModelAssetMeta& value)
{
    humanModelMeta_ = value;
    humanModelMetaIsSet_ = true;
}

bool AssetExtraMeta::humanModelMetaIsSet() const
{
    return humanModelMetaIsSet_;
}

void AssetExtraMeta::unsethumanModelMeta()
{
    humanModelMetaIsSet_ = false;
}

VoiceModelAssetMeta AssetExtraMeta::getVoiceModelMeta() const
{
    return voiceModelMeta_;
}

void AssetExtraMeta::setVoiceModelMeta(const VoiceModelAssetMeta& value)
{
    voiceModelMeta_ = value;
    voiceModelMetaIsSet_ = true;
}

bool AssetExtraMeta::voiceModelMetaIsSet() const
{
    return voiceModelMetaIsSet_;
}

void AssetExtraMeta::unsetvoiceModelMeta()
{
    voiceModelMetaIsSet_ = false;
}

PPTAssetMeta AssetExtraMeta::getPptMeta() const
{
    return pptMeta_;
}

void AssetExtraMeta::setPptMeta(const PPTAssetMeta& value)
{
    pptMeta_ = value;
    pptMetaIsSet_ = true;
}

bool AssetExtraMeta::pptMetaIsSet() const
{
    return pptMetaIsSet_;
}

void AssetExtraMeta::unsetpptMeta()
{
    pptMetaIsSet_ = false;
}

AnimationAssetMeta AssetExtraMeta::getAnimationMeta() const
{
    return animationMeta_;
}

void AssetExtraMeta::setAnimationMeta(const AnimationAssetMeta& value)
{
    animationMeta_ = value;
    animationMetaIsSet_ = true;
}

bool AssetExtraMeta::animationMetaIsSet() const
{
    return animationMetaIsSet_;
}

void AssetExtraMeta::unsetanimationMeta()
{
    animationMetaIsSet_ = false;
}

SceneAssetMeta AssetExtraMeta::getSceneMeta() const
{
    return sceneMeta_;
}

void AssetExtraMeta::setSceneMeta(const SceneAssetMeta& value)
{
    sceneMeta_ = value;
    sceneMetaIsSet_ = true;
}

bool AssetExtraMeta::sceneMetaIsSet() const
{
    return sceneMetaIsSet_;
}

void AssetExtraMeta::unsetsceneMeta()
{
    sceneMetaIsSet_ = false;
}

MaterialAssetMeta AssetExtraMeta::getMaterialMeta() const
{
    return materialMeta_;
}

void AssetExtraMeta::setMaterialMeta(const MaterialAssetMeta& value)
{
    materialMeta_ = value;
    materialMetaIsSet_ = true;
}

bool AssetExtraMeta::materialMetaIsSet() const
{
    return materialMetaIsSet_;
}

void AssetExtraMeta::unsetmaterialMeta()
{
    materialMetaIsSet_ = false;
}

HumanModel2DAssetMeta AssetExtraMeta::getHumanModel2dMeta() const
{
    return humanModel2dMeta_;
}

void AssetExtraMeta::setHumanModel2dMeta(const HumanModel2DAssetMeta& value)
{
    humanModel2dMeta_ = value;
    humanModel2dMetaIsSet_ = true;
}

bool AssetExtraMeta::humanModel2dMetaIsSet() const
{
    return humanModel2dMetaIsSet_;
}

void AssetExtraMeta::unsethumanModel2dMeta()
{
    humanModel2dMetaIsSet_ = false;
}

ImageAssetMeta AssetExtraMeta::getImageMeta() const
{
    return imageMeta_;
}

void AssetExtraMeta::setImageMeta(const ImageAssetMeta& value)
{
    imageMeta_ = value;
    imageMetaIsSet_ = true;
}

bool AssetExtraMeta::imageMetaIsSet() const
{
    return imageMetaIsSet_;
}

void AssetExtraMeta::unsetimageMeta()
{
    imageMetaIsSet_ = false;
}

VideoAssetMeta AssetExtraMeta::getVideoMeta() const
{
    return videoMeta_;
}

void AssetExtraMeta::setVideoMeta(const VideoAssetMeta& value)
{
    videoMeta_ = value;
    videoMetaIsSet_ = true;
}

bool AssetExtraMeta::videoMetaIsSet() const
{
    return videoMetaIsSet_;
}

void AssetExtraMeta::unsetvideoMeta()
{
    videoMetaIsSet_ = false;
}

AudioAssetMeta AssetExtraMeta::getAudioMeta() const
{
    return audioMeta_;
}

void AssetExtraMeta::setAudioMeta(const AudioAssetMeta& value)
{
    audioMeta_ = value;
    audioMetaIsSet_ = true;
}

bool AssetExtraMeta::audioMetaIsSet() const
{
    return audioMetaIsSet_;
}

void AssetExtraMeta::unsetaudioMeta()
{
    audioMetaIsSet_ = false;
}

}
}
}
}
}



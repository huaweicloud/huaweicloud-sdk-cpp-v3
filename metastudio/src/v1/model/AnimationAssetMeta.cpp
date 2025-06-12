

#include "huaweicloud/metastudio/v1/model/AnimationAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AnimationAssetMeta::AnimationAssetMeta()
{
    styleId_ = "";
    styleIdIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    autoAnalysis_ = false;
    autoAnalysisIsSet_ = false;
    voiceDelay_ = 0.0f;
    voiceDelayIsSet_ = false;
    animationInsertRestriction_ = "";
    animationInsertRestrictionIsSet_ = false;
}

AnimationAssetMeta::~AnimationAssetMeta() = default;

void AnimationAssetMeta::validate()
{
}

web::json::value AnimationAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(autoAnalysisIsSet_) {
        val[utility::conversions::to_string_t("auto_analysis")] = ModelBase::toJson(autoAnalysis_);
    }
    if(voiceDelayIsSet_) {
        val[utility::conversions::to_string_t("voice_delay")] = ModelBase::toJson(voiceDelay_);
    }
    if(animationInsertRestrictionIsSet_) {
        val[utility::conversions::to_string_t("animation_insert_restriction")] = ModelBase::toJson(animationInsertRestriction_);
    }

    return val;
}
bool AnimationAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_analysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoAnalysis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_delay"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("animation_insert_restriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("animation_insert_restriction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnimationInsertRestriction(refVal);
        }
    }
    return ok;
}


std::string AnimationAssetMeta::getStyleId() const
{
    return styleId_;
}

void AnimationAssetMeta::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool AnimationAssetMeta::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void AnimationAssetMeta::unsetstyleId()
{
    styleIdIsSet_ = false;
}

float AnimationAssetMeta::getDuration() const
{
    return duration_;
}

void AnimationAssetMeta::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AnimationAssetMeta::durationIsSet() const
{
    return durationIsSet_;
}

void AnimationAssetMeta::unsetduration()
{
    durationIsSet_ = false;
}

bool AnimationAssetMeta::isAutoAnalysis() const
{
    return autoAnalysis_;
}

void AnimationAssetMeta::setAutoAnalysis(bool value)
{
    autoAnalysis_ = value;
    autoAnalysisIsSet_ = true;
}

bool AnimationAssetMeta::autoAnalysisIsSet() const
{
    return autoAnalysisIsSet_;
}

void AnimationAssetMeta::unsetautoAnalysis()
{
    autoAnalysisIsSet_ = false;
}

float AnimationAssetMeta::getVoiceDelay() const
{
    return voiceDelay_;
}

void AnimationAssetMeta::setVoiceDelay(float value)
{
    voiceDelay_ = value;
    voiceDelayIsSet_ = true;
}

bool AnimationAssetMeta::voiceDelayIsSet() const
{
    return voiceDelayIsSet_;
}

void AnimationAssetMeta::unsetvoiceDelay()
{
    voiceDelayIsSet_ = false;
}

std::string AnimationAssetMeta::getAnimationInsertRestriction() const
{
    return animationInsertRestriction_;
}

void AnimationAssetMeta::setAnimationInsertRestriction(const std::string& value)
{
    animationInsertRestriction_ = value;
    animationInsertRestrictionIsSet_ = true;
}

bool AnimationAssetMeta::animationInsertRestrictionIsSet() const
{
    return animationInsertRestrictionIsSet_;
}

void AnimationAssetMeta::unsetanimationInsertRestriction()
{
    animationInsertRestrictionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/mpc/v1/model/VideoCommon.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoCommon::VideoCommon()
{
    outputPolicy_ = "";
    outputPolicyIsSet_ = false;
    codec_ = 0;
    codecIsSet_ = false;
    profile_ = 0;
    profileIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    preset_ = 0;
    presetIsSet_ = false;
    maxIframesInterval_ = 0;
    maxIframesIntervalIsSet_ = false;
    bframesCount_ = 0;
    bframesCountIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
    blackCut_ = 0;
    blackCutIsSet_ = false;
}

VideoCommon::~VideoCommon() = default;

void VideoCommon::validate()
{
}

web::json::value VideoCommon::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputPolicyIsSet_) {
        val[utility::conversions::to_string_t("output_policy")] = ModelBase::toJson(outputPolicy_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(presetIsSet_) {
        val[utility::conversions::to_string_t("preset")] = ModelBase::toJson(preset_);
    }
    if(maxIframesIntervalIsSet_) {
        val[utility::conversions::to_string_t("max_iframes_interval")] = ModelBase::toJson(maxIframesInterval_);
    }
    if(bframesCountIsSet_) {
        val[utility::conversions::to_string_t("bframes_count")] = ModelBase::toJson(bframesCount_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(blackCutIsSet_) {
        val[utility::conversions::to_string_t("black_cut")] = ModelBase::toJson(blackCut_);
    }

    return val;
}
bool VideoCommon::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_iframes_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_iframes_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxIframesInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bframes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bframes_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBframesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("black_cut"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("black_cut"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackCut(refVal);
        }
    }
    return ok;
}


std::string VideoCommon::getOutputPolicy() const
{
    return outputPolicy_;
}

void VideoCommon::setOutputPolicy(const std::string& value)
{
    outputPolicy_ = value;
    outputPolicyIsSet_ = true;
}

bool VideoCommon::outputPolicyIsSet() const
{
    return outputPolicyIsSet_;
}

void VideoCommon::unsetoutputPolicy()
{
    outputPolicyIsSet_ = false;
}

int32_t VideoCommon::getCodec() const
{
    return codec_;
}

void VideoCommon::setCodec(int32_t value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool VideoCommon::codecIsSet() const
{
    return codecIsSet_;
}

void VideoCommon::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t VideoCommon::getProfile() const
{
    return profile_;
}

void VideoCommon::setProfile(int32_t value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool VideoCommon::profileIsSet() const
{
    return profileIsSet_;
}

void VideoCommon::unsetprofile()
{
    profileIsSet_ = false;
}

int32_t VideoCommon::getLevel() const
{
    return level_;
}

void VideoCommon::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool VideoCommon::levelIsSet() const
{
    return levelIsSet_;
}

void VideoCommon::unsetlevel()
{
    levelIsSet_ = false;
}

int32_t VideoCommon::getPreset() const
{
    return preset_;
}

void VideoCommon::setPreset(int32_t value)
{
    preset_ = value;
    presetIsSet_ = true;
}

bool VideoCommon::presetIsSet() const
{
    return presetIsSet_;
}

void VideoCommon::unsetpreset()
{
    presetIsSet_ = false;
}

int32_t VideoCommon::getMaxIframesInterval() const
{
    return maxIframesInterval_;
}

void VideoCommon::setMaxIframesInterval(int32_t value)
{
    maxIframesInterval_ = value;
    maxIframesIntervalIsSet_ = true;
}

bool VideoCommon::maxIframesIntervalIsSet() const
{
    return maxIframesIntervalIsSet_;
}

void VideoCommon::unsetmaxIframesInterval()
{
    maxIframesIntervalIsSet_ = false;
}

int32_t VideoCommon::getBframesCount() const
{
    return bframesCount_;
}

void VideoCommon::setBframesCount(int32_t value)
{
    bframesCount_ = value;
    bframesCountIsSet_ = true;
}

bool VideoCommon::bframesCountIsSet() const
{
    return bframesCountIsSet_;
}

void VideoCommon::unsetbframesCount()
{
    bframesCountIsSet_ = false;
}

int32_t VideoCommon::getFrameRate() const
{
    return frameRate_;
}

void VideoCommon::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool VideoCommon::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void VideoCommon::unsetframeRate()
{
    frameRateIsSet_ = false;
}

int32_t VideoCommon::getBlackCut() const
{
    return blackCut_;
}

void VideoCommon::setBlackCut(int32_t value)
{
    blackCut_ = value;
    blackCutIsSet_ = true;
}

bool VideoCommon::blackCutIsSet() const
{
    return blackCutIsSet_;
}

void VideoCommon::unsetblackCut()
{
    blackCutIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/mpc/v1/model/Video.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Video::Video()
{
    outputPolicy_ = "";
    outputPolicyIsSet_ = false;
    codec_ = 0;
    codecIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
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
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    blackCut_ = 0;
    blackCutIsSet_ = false;
}

Video::~Video() = default;

void Video::validate()
{
}

web::json::value Video::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputPolicyIsSet_) {
        val[utility::conversions::to_string_t("output_policy")] = ModelBase::toJson(outputPolicy_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
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
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(blackCutIsSet_) {
        val[utility::conversions::to_string_t("black_cut")] = ModelBase::toJson(blackCut_);
    }

    return val;
}

bool Video::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
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


std::string Video::getOutputPolicy() const
{
    return outputPolicy_;
}

void Video::setOutputPolicy(const std::string& value)
{
    outputPolicy_ = value;
    outputPolicyIsSet_ = true;
}

bool Video::outputPolicyIsSet() const
{
    return outputPolicyIsSet_;
}

void Video::unsetoutputPolicy()
{
    outputPolicyIsSet_ = false;
}

int32_t Video::getCodec() const
{
    return codec_;
}

void Video::setCodec(int32_t value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool Video::codecIsSet() const
{
    return codecIsSet_;
}

void Video::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t Video::getBitrate() const
{
    return bitrate_;
}

void Video::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool Video::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void Video::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t Video::getProfile() const
{
    return profile_;
}

void Video::setProfile(int32_t value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool Video::profileIsSet() const
{
    return profileIsSet_;
}

void Video::unsetprofile()
{
    profileIsSet_ = false;
}

int32_t Video::getLevel() const
{
    return level_;
}

void Video::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool Video::levelIsSet() const
{
    return levelIsSet_;
}

void Video::unsetlevel()
{
    levelIsSet_ = false;
}

int32_t Video::getPreset() const
{
    return preset_;
}

void Video::setPreset(int32_t value)
{
    preset_ = value;
    presetIsSet_ = true;
}

bool Video::presetIsSet() const
{
    return presetIsSet_;
}

void Video::unsetpreset()
{
    presetIsSet_ = false;
}

int32_t Video::getMaxIframesInterval() const
{
    return maxIframesInterval_;
}

void Video::setMaxIframesInterval(int32_t value)
{
    maxIframesInterval_ = value;
    maxIframesIntervalIsSet_ = true;
}

bool Video::maxIframesIntervalIsSet() const
{
    return maxIframesIntervalIsSet_;
}

void Video::unsetmaxIframesInterval()
{
    maxIframesIntervalIsSet_ = false;
}

int32_t Video::getBframesCount() const
{
    return bframesCount_;
}

void Video::setBframesCount(int32_t value)
{
    bframesCount_ = value;
    bframesCountIsSet_ = true;
}

bool Video::bframesCountIsSet() const
{
    return bframesCountIsSet_;
}

void Video::unsetbframesCount()
{
    bframesCountIsSet_ = false;
}

int32_t Video::getFrameRate() const
{
    return frameRate_;
}

void Video::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool Video::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void Video::unsetframeRate()
{
    frameRateIsSet_ = false;
}

int32_t Video::getWidth() const
{
    return width_;
}

void Video::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool Video::widthIsSet() const
{
    return widthIsSet_;
}

void Video::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t Video::getHeight() const
{
    return height_;
}

void Video::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool Video::heightIsSet() const
{
    return heightIsSet_;
}

void Video::unsetheight()
{
    heightIsSet_ = false;
}

int32_t Video::getBlackCut() const
{
    return blackCut_;
}

void Video::setBlackCut(int32_t value)
{
    blackCut_ = value;
    blackCutIsSet_ = true;
}

bool Video::blackCutIsSet() const
{
    return blackCutIsSet_;
}

void Video::unsetblackCut()
{
    blackCutIsSet_ = false;
}

}
}
}
}
}



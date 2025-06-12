

#include "huaweicloud/metastudio/v1/model/VideoConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoConfig::VideoConfig()
{
    clipMode_ = "";
    clipModeIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    frameRate_ = "";
    frameRateIsSet_ = false;
    isSubtitleEnable_ = false;
    isSubtitleEnableIsSet_ = false;
    subtitleConfigIsSet_ = false;
    dx_ = 0;
    dxIsSet_ = false;
    dy_ = 0;
    dyIsSet_ = false;
    isEnableSuperResolution_ = false;
    isEnableSuperResolutionIsSet_ = false;
    isEndAtFirstFrame_ = false;
    isEndAtFirstFrameIsSet_ = false;
    outputExternalUrl_ = "";
    outputExternalUrlIsSet_ = false;
}

VideoConfig::~VideoConfig() = default;

void VideoConfig::validate()
{
}

web::json::value VideoConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clipModeIsSet_) {
        val[utility::conversions::to_string_t("clip_mode")] = ModelBase::toJson(clipMode_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(isSubtitleEnableIsSet_) {
        val[utility::conversions::to_string_t("is_subtitle_enable")] = ModelBase::toJson(isSubtitleEnable_);
    }
    if(subtitleConfigIsSet_) {
        val[utility::conversions::to_string_t("subtitle_config")] = ModelBase::toJson(subtitleConfig_);
    }
    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(isEnableSuperResolutionIsSet_) {
        val[utility::conversions::to_string_t("is_enable_super_resolution")] = ModelBase::toJson(isEnableSuperResolution_);
    }
    if(isEndAtFirstFrameIsSet_) {
        val[utility::conversions::to_string_t("is_end_at_first_frame")] = ModelBase::toJson(isEndAtFirstFrame_);
    }
    if(outputExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("output_external_url")] = ModelBase::toJson(outputExternalUrl_);
    }

    return val;
}
bool VideoConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clip_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clip_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClipMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_subtitle_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_subtitle_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSubtitleEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_config"));
        if(!fieldValue.is_null())
        {
            SubtitleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_enable_super_resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_enable_super_resolution"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnableSuperResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_end_at_first_frame"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_end_at_first_frame"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEndAtFirstFrame(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputExternalUrl(refVal);
        }
    }
    return ok;
}


std::string VideoConfig::getClipMode() const
{
    return clipMode_;
}

void VideoConfig::setClipMode(const std::string& value)
{
    clipMode_ = value;
    clipModeIsSet_ = true;
}

bool VideoConfig::clipModeIsSet() const
{
    return clipModeIsSet_;
}

void VideoConfig::unsetclipMode()
{
    clipModeIsSet_ = false;
}

std::string VideoConfig::getCodec() const
{
    return codec_;
}

void VideoConfig::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool VideoConfig::codecIsSet() const
{
    return codecIsSet_;
}

void VideoConfig::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t VideoConfig::getBitrate() const
{
    return bitrate_;
}

void VideoConfig::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool VideoConfig::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void VideoConfig::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t VideoConfig::getWidth() const
{
    return width_;
}

void VideoConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VideoConfig::widthIsSet() const
{
    return widthIsSet_;
}

void VideoConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VideoConfig::getHeight() const
{
    return height_;
}

void VideoConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VideoConfig::heightIsSet() const
{
    return heightIsSet_;
}

void VideoConfig::unsetheight()
{
    heightIsSet_ = false;
}

std::string VideoConfig::getFrameRate() const
{
    return frameRate_;
}

void VideoConfig::setFrameRate(const std::string& value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool VideoConfig::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void VideoConfig::unsetframeRate()
{
    frameRateIsSet_ = false;
}

bool VideoConfig::isIsSubtitleEnable() const
{
    return isSubtitleEnable_;
}

void VideoConfig::setIsSubtitleEnable(bool value)
{
    isSubtitleEnable_ = value;
    isSubtitleEnableIsSet_ = true;
}

bool VideoConfig::isSubtitleEnableIsSet() const
{
    return isSubtitleEnableIsSet_;
}

void VideoConfig::unsetisSubtitleEnable()
{
    isSubtitleEnableIsSet_ = false;
}

SubtitleConfig VideoConfig::getSubtitleConfig() const
{
    return subtitleConfig_;
}

void VideoConfig::setSubtitleConfig(const SubtitleConfig& value)
{
    subtitleConfig_ = value;
    subtitleConfigIsSet_ = true;
}

bool VideoConfig::subtitleConfigIsSet() const
{
    return subtitleConfigIsSet_;
}

void VideoConfig::unsetsubtitleConfig()
{
    subtitleConfigIsSet_ = false;
}

int32_t VideoConfig::getDx() const
{
    return dx_;
}

void VideoConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool VideoConfig::dxIsSet() const
{
    return dxIsSet_;
}

void VideoConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t VideoConfig::getDy() const
{
    return dy_;
}

void VideoConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool VideoConfig::dyIsSet() const
{
    return dyIsSet_;
}

void VideoConfig::unsetdy()
{
    dyIsSet_ = false;
}

bool VideoConfig::isIsEnableSuperResolution() const
{
    return isEnableSuperResolution_;
}

void VideoConfig::setIsEnableSuperResolution(bool value)
{
    isEnableSuperResolution_ = value;
    isEnableSuperResolutionIsSet_ = true;
}

bool VideoConfig::isEnableSuperResolutionIsSet() const
{
    return isEnableSuperResolutionIsSet_;
}

void VideoConfig::unsetisEnableSuperResolution()
{
    isEnableSuperResolutionIsSet_ = false;
}

bool VideoConfig::isIsEndAtFirstFrame() const
{
    return isEndAtFirstFrame_;
}

void VideoConfig::setIsEndAtFirstFrame(bool value)
{
    isEndAtFirstFrame_ = value;
    isEndAtFirstFrameIsSet_ = true;
}

bool VideoConfig::isEndAtFirstFrameIsSet() const
{
    return isEndAtFirstFrameIsSet_;
}

void VideoConfig::unsetisEndAtFirstFrame()
{
    isEndAtFirstFrameIsSet_ = false;
}

std::string VideoConfig::getOutputExternalUrl() const
{
    return outputExternalUrl_;
}

void VideoConfig::setOutputExternalUrl(const std::string& value)
{
    outputExternalUrl_ = value;
    outputExternalUrlIsSet_ = true;
}

bool VideoConfig::outputExternalUrlIsSet() const
{
    return outputExternalUrlIsSet_;
}

void VideoConfig::unsetoutputExternalUrl()
{
    outputExternalUrlIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/mpc/v1/model/QualityEnhanceVideo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




QualityEnhanceVideo::QualityEnhanceVideo()
{
    videoDenoiseIsSet_ = false;
    videoSharpIsSet_ = false;
    videoContrastIsSet_ = false;
    videoSuperresolutionIsSet_ = false;
    videoDeblockIsSet_ = false;
    videoSaturationIsSet_ = false;
}

QualityEnhanceVideo::~QualityEnhanceVideo() = default;

void QualityEnhanceVideo::validate()
{
}

web::json::value QualityEnhanceVideo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoDenoiseIsSet_) {
        val[utility::conversions::to_string_t("video_denoise")] = ModelBase::toJson(videoDenoise_);
    }
    if(videoSharpIsSet_) {
        val[utility::conversions::to_string_t("video_sharp")] = ModelBase::toJson(videoSharp_);
    }
    if(videoContrastIsSet_) {
        val[utility::conversions::to_string_t("video_contrast")] = ModelBase::toJson(videoContrast_);
    }
    if(videoSuperresolutionIsSet_) {
        val[utility::conversions::to_string_t("video_superresolution")] = ModelBase::toJson(videoSuperresolution_);
    }
    if(videoDeblockIsSet_) {
        val[utility::conversions::to_string_t("video_deblock")] = ModelBase::toJson(videoDeblock_);
    }
    if(videoSaturationIsSet_) {
        val[utility::conversions::to_string_t("video_saturation")] = ModelBase::toJson(videoSaturation_);
    }

    return val;
}

bool QualityEnhanceVideo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_denoise"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_denoise"));
        if(!fieldValue.is_null())
        {
            VideoDenoise refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoDenoise(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_sharp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_sharp"));
        if(!fieldValue.is_null())
        {
            VideoSharp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSharp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_contrast"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_contrast"));
        if(!fieldValue.is_null())
        {
            VideoContrast refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoContrast(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_superresolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_superresolution"));
        if(!fieldValue.is_null())
        {
            VideoSuperresolution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSuperresolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_deblock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_deblock"));
        if(!fieldValue.is_null())
        {
            VideoDeblock refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoDeblock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_saturation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_saturation"));
        if(!fieldValue.is_null())
        {
            VideoSaturation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSaturation(refVal);
        }
    }
    return ok;
}

VideoDenoise QualityEnhanceVideo::getVideoDenoise() const
{
    return videoDenoise_;
}

void QualityEnhanceVideo::setVideoDenoise(const VideoDenoise& value)
{
    videoDenoise_ = value;
    videoDenoiseIsSet_ = true;
}

bool QualityEnhanceVideo::videoDenoiseIsSet() const
{
    return videoDenoiseIsSet_;
}

void QualityEnhanceVideo::unsetvideoDenoise()
{
    videoDenoiseIsSet_ = false;
}

VideoSharp QualityEnhanceVideo::getVideoSharp() const
{
    return videoSharp_;
}

void QualityEnhanceVideo::setVideoSharp(const VideoSharp& value)
{
    videoSharp_ = value;
    videoSharpIsSet_ = true;
}

bool QualityEnhanceVideo::videoSharpIsSet() const
{
    return videoSharpIsSet_;
}

void QualityEnhanceVideo::unsetvideoSharp()
{
    videoSharpIsSet_ = false;
}

VideoContrast QualityEnhanceVideo::getVideoContrast() const
{
    return videoContrast_;
}

void QualityEnhanceVideo::setVideoContrast(const VideoContrast& value)
{
    videoContrast_ = value;
    videoContrastIsSet_ = true;
}

bool QualityEnhanceVideo::videoContrastIsSet() const
{
    return videoContrastIsSet_;
}

void QualityEnhanceVideo::unsetvideoContrast()
{
    videoContrastIsSet_ = false;
}

VideoSuperresolution QualityEnhanceVideo::getVideoSuperresolution() const
{
    return videoSuperresolution_;
}

void QualityEnhanceVideo::setVideoSuperresolution(const VideoSuperresolution& value)
{
    videoSuperresolution_ = value;
    videoSuperresolutionIsSet_ = true;
}

bool QualityEnhanceVideo::videoSuperresolutionIsSet() const
{
    return videoSuperresolutionIsSet_;
}

void QualityEnhanceVideo::unsetvideoSuperresolution()
{
    videoSuperresolutionIsSet_ = false;
}

VideoDeblock QualityEnhanceVideo::getVideoDeblock() const
{
    return videoDeblock_;
}

void QualityEnhanceVideo::setVideoDeblock(const VideoDeblock& value)
{
    videoDeblock_ = value;
    videoDeblockIsSet_ = true;
}

bool QualityEnhanceVideo::videoDeblockIsSet() const
{
    return videoDeblockIsSet_;
}

void QualityEnhanceVideo::unsetvideoDeblock()
{
    videoDeblockIsSet_ = false;
}

VideoSaturation QualityEnhanceVideo::getVideoSaturation() const
{
    return videoSaturation_;
}

void QualityEnhanceVideo::setVideoSaturation(const VideoSaturation& value)
{
    videoSaturation_ = value;
    videoSaturationIsSet_ = true;
}

bool QualityEnhanceVideo::videoSaturationIsSet() const
{
    return videoSaturationIsSet_;
}

void QualityEnhanceVideo::unsetvideoSaturation()
{
    videoSaturationIsSet_ = false;
}

}
}
}
}
}



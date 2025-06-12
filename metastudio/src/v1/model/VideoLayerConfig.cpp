

#include "huaweicloud/metastudio/v1/model/VideoLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoLayerConfig::VideoLayerConfig()
{
    videoUrl_ = "";
    videoUrlIsSet_ = false;
    videoCoverUrl_ = "";
    videoCoverUrlIsSet_ = false;
    loopCount_ = 0;
    loopCountIsSet_ = false;
    videoSound_ = 0;
    videoSoundIsSet_ = false;
    isPlayTheEntireVideo_ = false;
    isPlayTheEntireVideoIsSet_ = false;
}

VideoLayerConfig::~VideoLayerConfig() = default;

void VideoLayerConfig::validate()
{
}

web::json::value VideoLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoUrlIsSet_) {
        val[utility::conversions::to_string_t("video_url")] = ModelBase::toJson(videoUrl_);
    }
    if(videoCoverUrlIsSet_) {
        val[utility::conversions::to_string_t("video_cover_url")] = ModelBase::toJson(videoCoverUrl_);
    }
    if(loopCountIsSet_) {
        val[utility::conversions::to_string_t("loop_count")] = ModelBase::toJson(loopCount_);
    }
    if(videoSoundIsSet_) {
        val[utility::conversions::to_string_t("video_sound")] = ModelBase::toJson(videoSound_);
    }
    if(isPlayTheEntireVideoIsSet_) {
        val[utility::conversions::to_string_t("is_play_the_entire_video")] = ModelBase::toJson(isPlayTheEntireVideo_);
    }

    return val;
}
bool VideoLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("loop_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loop_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoopCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_sound"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_sound"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSound(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_play_the_entire_video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_play_the_entire_video"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPlayTheEntireVideo(refVal);
        }
    }
    return ok;
}


std::string VideoLayerConfig::getVideoUrl() const
{
    return videoUrl_;
}

void VideoLayerConfig::setVideoUrl(const std::string& value)
{
    videoUrl_ = value;
    videoUrlIsSet_ = true;
}

bool VideoLayerConfig::videoUrlIsSet() const
{
    return videoUrlIsSet_;
}

void VideoLayerConfig::unsetvideoUrl()
{
    videoUrlIsSet_ = false;
}

std::string VideoLayerConfig::getVideoCoverUrl() const
{
    return videoCoverUrl_;
}

void VideoLayerConfig::setVideoCoverUrl(const std::string& value)
{
    videoCoverUrl_ = value;
    videoCoverUrlIsSet_ = true;
}

bool VideoLayerConfig::videoCoverUrlIsSet() const
{
    return videoCoverUrlIsSet_;
}

void VideoLayerConfig::unsetvideoCoverUrl()
{
    videoCoverUrlIsSet_ = false;
}

int32_t VideoLayerConfig::getLoopCount() const
{
    return loopCount_;
}

void VideoLayerConfig::setLoopCount(int32_t value)
{
    loopCount_ = value;
    loopCountIsSet_ = true;
}

bool VideoLayerConfig::loopCountIsSet() const
{
    return loopCountIsSet_;
}

void VideoLayerConfig::unsetloopCount()
{
    loopCountIsSet_ = false;
}

int32_t VideoLayerConfig::getVideoSound() const
{
    return videoSound_;
}

void VideoLayerConfig::setVideoSound(int32_t value)
{
    videoSound_ = value;
    videoSoundIsSet_ = true;
}

bool VideoLayerConfig::videoSoundIsSet() const
{
    return videoSoundIsSet_;
}

void VideoLayerConfig::unsetvideoSound()
{
    videoSoundIsSet_ = false;
}

bool VideoLayerConfig::isIsPlayTheEntireVideo() const
{
    return isPlayTheEntireVideo_;
}

void VideoLayerConfig::setIsPlayTheEntireVideo(bool value)
{
    isPlayTheEntireVideo_ = value;
    isPlayTheEntireVideoIsSet_ = true;
}

bool VideoLayerConfig::isPlayTheEntireVideoIsSet() const
{
    return isPlayTheEntireVideoIsSet_;
}

void VideoLayerConfig::unsetisPlayTheEntireVideo()
{
    isPlayTheEntireVideoIsSet_ = false;
}

}
}
}
}
}



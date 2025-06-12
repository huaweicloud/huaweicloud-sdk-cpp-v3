

#include "huaweicloud/metastudio/v1/model/SmartVideoLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartVideoLayerConfig::SmartVideoLayerConfig()
{
    videoUrl_ = "";
    videoUrlIsSet_ = false;
    videoCoverUrl_ = "";
    videoCoverUrlIsSet_ = false;
    displayDuration_ = 0;
    displayDurationIsSet_ = false;
}

SmartVideoLayerConfig::~SmartVideoLayerConfig() = default;

void SmartVideoLayerConfig::validate()
{
}

web::json::value SmartVideoLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoUrlIsSet_) {
        val[utility::conversions::to_string_t("video_url")] = ModelBase::toJson(videoUrl_);
    }
    if(videoCoverUrlIsSet_) {
        val[utility::conversions::to_string_t("video_cover_url")] = ModelBase::toJson(videoCoverUrl_);
    }
    if(displayDurationIsSet_) {
        val[utility::conversions::to_string_t("display_duration")] = ModelBase::toJson(displayDuration_);
    }

    return val;
}
bool SmartVideoLayerConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayDuration(refVal);
        }
    }
    return ok;
}


std::string SmartVideoLayerConfig::getVideoUrl() const
{
    return videoUrl_;
}

void SmartVideoLayerConfig::setVideoUrl(const std::string& value)
{
    videoUrl_ = value;
    videoUrlIsSet_ = true;
}

bool SmartVideoLayerConfig::videoUrlIsSet() const
{
    return videoUrlIsSet_;
}

void SmartVideoLayerConfig::unsetvideoUrl()
{
    videoUrlIsSet_ = false;
}

std::string SmartVideoLayerConfig::getVideoCoverUrl() const
{
    return videoCoverUrl_;
}

void SmartVideoLayerConfig::setVideoCoverUrl(const std::string& value)
{
    videoCoverUrl_ = value;
    videoCoverUrlIsSet_ = true;
}

bool SmartVideoLayerConfig::videoCoverUrlIsSet() const
{
    return videoCoverUrlIsSet_;
}

void SmartVideoLayerConfig::unsetvideoCoverUrl()
{
    videoCoverUrlIsSet_ = false;
}

int32_t SmartVideoLayerConfig::getDisplayDuration() const
{
    return displayDuration_;
}

void SmartVideoLayerConfig::setDisplayDuration(int32_t value)
{
    displayDuration_ = value;
    displayDurationIsSet_ = true;
}

bool SmartVideoLayerConfig::displayDurationIsSet() const
{
    return displayDurationIsSet_;
}

void SmartVideoLayerConfig::unsetdisplayDuration()
{
    displayDurationIsSet_ = false;
}

}
}
}
}
}



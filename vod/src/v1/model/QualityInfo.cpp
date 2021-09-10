

#include "huaweicloud/vod/v1/model/QualityInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




QualityInfo::QualityInfo()
{
    videoIsSet_ = false;
    audioIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
}

QualityInfo::~QualityInfo() = default;

void QualityInfo::validate()
{
}

web::json::value QualityInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}

bool QualityInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            VideoTemplateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            AudioTemplateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


VideoTemplateInfo QualityInfo::getVideo() const
{
    return video_;
}

void QualityInfo::setVideo(const VideoTemplateInfo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool QualityInfo::videoIsSet() const
{
    return videoIsSet_;
}

void QualityInfo::unsetvideo()
{
    videoIsSet_ = false;
}

AudioTemplateInfo QualityInfo::getAudio() const
{
    return audio_;
}

void QualityInfo::setAudio(const AudioTemplateInfo& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool QualityInfo::audioIsSet() const
{
    return audioIsSet_;
}

void QualityInfo::unsetaudio()
{
    audioIsSet_ = false;
}

std::string QualityInfo::getFormat() const
{
    return format_;
}

void QualityInfo::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool QualityInfo::formatIsSet() const
{
    return formatIsSet_;
}

void QualityInfo::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}



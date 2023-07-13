

#include "huaweicloud/vod/v1/model/QualityInfoList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




QualityInfoList::QualityInfoList()
{
    videoIsSet_ = false;
    audioIsSet_ = false;
}

QualityInfoList::~QualityInfoList() = default;

void QualityInfoList::validate()
{
}

web::json::value QualityInfoList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }

    return val;
}

bool QualityInfoList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            VideoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            AudioInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    return ok;
}

VideoInfo QualityInfoList::getVideo() const
{
    return video_;
}

void QualityInfoList::setVideo(const VideoInfo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool QualityInfoList::videoIsSet() const
{
    return videoIsSet_;
}

void QualityInfoList::unsetvideo()
{
    videoIsSet_ = false;
}

AudioInfo QualityInfoList::getAudio() const
{
    return audio_;
}

void QualityInfoList::setAudio(const AudioInfo& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool QualityInfoList::audioIsSet() const
{
    return audioIsSet_;
}

void QualityInfoList::unsetaudio()
{
    audioIsSet_ = false;
}

}
}
}
}
}



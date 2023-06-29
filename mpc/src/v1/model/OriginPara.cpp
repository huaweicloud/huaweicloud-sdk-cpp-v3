

#include "huaweicloud/mpc/v1/model/OriginPara.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OriginPara::OriginPara()
{
    duration_ = 0;
    durationIsSet_ = false;
    durationMs_ = 0L;
    durationMsIsSet_ = false;
    fileFormat_ = "";
    fileFormatIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
}

OriginPara::~OriginPara() = default;

void OriginPara::validate()
{
}

web::json::value OriginPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(durationMsIsSet_) {
        val[utility::conversions::to_string_t("duration_ms")] = ModelBase::toJson(durationMs_);
    }
    if(fileFormatIsSet_) {
        val[utility::conversions::to_string_t("file_format")] = ModelBase::toJson(fileFormat_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }

    return val;
}

bool OriginPara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration_ms"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDurationMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileFormat(refVal);
        }
    }
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


int32_t OriginPara::getDuration() const
{
    return duration_;
}

void OriginPara::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OriginPara::durationIsSet() const
{
    return durationIsSet_;
}

void OriginPara::unsetduration()
{
    durationIsSet_ = false;
}

int64_t OriginPara::getDurationMs() const
{
    return durationMs_;
}

void OriginPara::setDurationMs(int64_t value)
{
    durationMs_ = value;
    durationMsIsSet_ = true;
}

bool OriginPara::durationMsIsSet() const
{
    return durationMsIsSet_;
}

void OriginPara::unsetdurationMs()
{
    durationMsIsSet_ = false;
}

std::string OriginPara::getFileFormat() const
{
    return fileFormat_;
}

void OriginPara::setFileFormat(const std::string& value)
{
    fileFormat_ = value;
    fileFormatIsSet_ = true;
}

bool OriginPara::fileFormatIsSet() const
{
    return fileFormatIsSet_;
}

void OriginPara::unsetfileFormat()
{
    fileFormatIsSet_ = false;
}

VideoInfo OriginPara::getVideo() const
{
    return video_;
}

void OriginPara::setVideo(const VideoInfo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool OriginPara::videoIsSet() const
{
    return videoIsSet_;
}

void OriginPara::unsetvideo()
{
    videoIsSet_ = false;
}

AudioInfo OriginPara::getAudio() const
{
    return audio_;
}

void OriginPara::setAudio(const AudioInfo& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool OriginPara::audioIsSet() const
{
    return audioIsSet_;
}

void OriginPara::unsetaudio()
{
    audioIsSet_ = false;
}

}
}
}
}
}



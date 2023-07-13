

#include "huaweicloud/mpc/v1/model/SourceInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




SourceInfo::SourceInfo()
{
    duration_ = 0;
    durationIsSet_ = false;
    durationMs_ = 0L;
    durationMsIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    videoInfoIsSet_ = false;
    audioInfoIsSet_ = false;
}

SourceInfo::~SourceInfo() = default;

void SourceInfo::validate()
{
}

web::json::value SourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(durationMsIsSet_) {
        val[utility::conversions::to_string_t("duration_ms")] = ModelBase::toJson(durationMs_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(videoInfoIsSet_) {
        val[utility::conversions::to_string_t("video_info")] = ModelBase::toJson(videoInfo_);
    }
    if(audioInfoIsSet_) {
        val[utility::conversions::to_string_t("audio_info")] = ModelBase::toJson(audioInfo_);
    }

    return val;
}

bool SourceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_info"));
        if(!fieldValue.is_null())
        {
            VideoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_info"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioInfo(refVal);
        }
    }
    return ok;
}

int32_t SourceInfo::getDuration() const
{
    return duration_;
}

void SourceInfo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool SourceInfo::durationIsSet() const
{
    return durationIsSet_;
}

void SourceInfo::unsetduration()
{
    durationIsSet_ = false;
}

int64_t SourceInfo::getDurationMs() const
{
    return durationMs_;
}

void SourceInfo::setDurationMs(int64_t value)
{
    durationMs_ = value;
    durationMsIsSet_ = true;
}

bool SourceInfo::durationMsIsSet() const
{
    return durationMsIsSet_;
}

void SourceInfo::unsetdurationMs()
{
    durationMsIsSet_ = false;
}

std::string SourceInfo::getFormat() const
{
    return format_;
}

void SourceInfo::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool SourceInfo::formatIsSet() const
{
    return formatIsSet_;
}

void SourceInfo::unsetformat()
{
    formatIsSet_ = false;
}

int64_t SourceInfo::getSize() const
{
    return size_;
}

void SourceInfo::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SourceInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void SourceInfo::unsetsize()
{
    sizeIsSet_ = false;
}

VideoInfo SourceInfo::getVideoInfo() const
{
    return videoInfo_;
}

void SourceInfo::setVideoInfo(const VideoInfo& value)
{
    videoInfo_ = value;
    videoInfoIsSet_ = true;
}

bool SourceInfo::videoInfoIsSet() const
{
    return videoInfoIsSet_;
}

void SourceInfo::unsetvideoInfo()
{
    videoInfoIsSet_ = false;
}

std::vector<AudioInfo>& SourceInfo::getAudioInfo()
{
    return audioInfo_;
}

void SourceInfo::setAudioInfo(const std::vector<AudioInfo>& value)
{
    audioInfo_ = value;
    audioInfoIsSet_ = true;
}

bool SourceInfo::audioInfoIsSet() const
{
    return audioInfoIsSet_;
}

void SourceInfo::unsetaudioInfo()
{
    audioInfoIsSet_ = false;
}

}
}
}
}
}



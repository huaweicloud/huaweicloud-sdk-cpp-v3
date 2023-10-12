

#include "huaweicloud/mpc/v1/model/MetaData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MetaData::MetaData()
{
    size_ = 0L;
    sizeIsSet_ = false;
    durationMs_ = 0.0;
    durationMsIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    bitrate_ = 0L;
    bitrateIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
}

MetaData::~MetaData() = default;

void MetaData::validate()
{
}

web::json::value MetaData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(durationMsIsSet_) {
        val[utility::conversions::to_string_t("duration_ms")] = ModelBase::toJson(durationMs_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }

    return val;
}
bool MetaData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration_ms"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDurationMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    return ok;
}


int64_t MetaData::getSize() const
{
    return size_;
}

void MetaData::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MetaData::sizeIsSet() const
{
    return sizeIsSet_;
}

void MetaData::unsetsize()
{
    sizeIsSet_ = false;
}

double MetaData::getDurationMs() const
{
    return durationMs_;
}

void MetaData::setDurationMs(double value)
{
    durationMs_ = value;
    durationMsIsSet_ = true;
}

bool MetaData::durationMsIsSet() const
{
    return durationMsIsSet_;
}

void MetaData::unsetdurationMs()
{
    durationMsIsSet_ = false;
}

int64_t MetaData::getDuration() const
{
    return duration_;
}

void MetaData::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool MetaData::durationIsSet() const
{
    return durationIsSet_;
}

void MetaData::unsetduration()
{
    durationIsSet_ = false;
}

std::string MetaData::getFormat() const
{
    return format_;
}

void MetaData::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool MetaData::formatIsSet() const
{
    return formatIsSet_;
}

void MetaData::unsetformat()
{
    formatIsSet_ = false;
}

int64_t MetaData::getBitrate() const
{
    return bitrate_;
}

void MetaData::setBitrate(int64_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool MetaData::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void MetaData::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::vector<VideoInfo>& MetaData::getVideo()
{
    return video_;
}

void MetaData::setVideo(const std::vector<VideoInfo>& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool MetaData::videoIsSet() const
{
    return videoIsSet_;
}

void MetaData::unsetvideo()
{
    videoIsSet_ = false;
}

std::vector<AudioInfo>& MetaData::getAudio()
{
    return audio_;
}

void MetaData::setAudio(const std::vector<AudioInfo>& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool MetaData::audioIsSet() const
{
    return audioIsSet_;
}

void MetaData::unsetaudio()
{
    audioIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/live/v1/model/OnlineInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




OnlineInfo::OnlineInfo()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    videoCodec_ = "";
    videoCodecIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    videoFrameRate_ = 0L;
    videoFrameRateIsSet_ = false;
    audioFrameRate_ = 0L;
    audioFrameRateIsSet_ = false;
    videoBitrate_ = 0L;
    videoBitrateIsSet_ = false;
    audioBitrate_ = 0L;
    audioBitrateIsSet_ = false;
    resolution_ = "";
    resolutionIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

OnlineInfo::~OnlineInfo() = default;

void OnlineInfo::validate()
{
}

web::json::value OnlineInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(videoFrameRateIsSet_) {
        val[utility::conversions::to_string_t("video_frame_rate")] = ModelBase::toJson(videoFrameRate_);
    }
    if(audioFrameRateIsSet_) {
        val[utility::conversions::to_string_t("audio_frame_rate")] = ModelBase::toJson(audioFrameRate_);
    }
    if(videoBitrateIsSet_) {
        val[utility::conversions::to_string_t("video_bitrate")] = ModelBase::toJson(videoBitrate_);
    }
    if(audioBitrateIsSet_) {
        val[utility::conversions::to_string_t("audio_bitrate")] = ModelBase::toJson(audioBitrate_);
    }
    if(resolutionIsSet_) {
        val[utility::conversions::to_string_t("resolution")] = ModelBase::toJson(resolution_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}

bool OnlineInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_frame_rate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_frame_rate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string OnlineInfo::getPublishDomain() const
{
    return publishDomain_;
}

void OnlineInfo::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool OnlineInfo::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void OnlineInfo::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string OnlineInfo::getApp() const
{
    return app_;
}

void OnlineInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool OnlineInfo::appIsSet() const
{
    return appIsSet_;
}

void OnlineInfo::unsetapp()
{
    appIsSet_ = false;
}

std::string OnlineInfo::getStream() const
{
    return stream_;
}

void OnlineInfo::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool OnlineInfo::streamIsSet() const
{
    return streamIsSet_;
}

void OnlineInfo::unsetstream()
{
    streamIsSet_ = false;
}

std::string OnlineInfo::getVideoCodec() const
{
    return videoCodec_;
}

void OnlineInfo::setVideoCodec(const std::string& value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool OnlineInfo::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void OnlineInfo::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

std::string OnlineInfo::getAudioCodec() const
{
    return audioCodec_;
}

void OnlineInfo::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool OnlineInfo::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void OnlineInfo::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

int64_t OnlineInfo::getVideoFrameRate() const
{
    return videoFrameRate_;
}

void OnlineInfo::setVideoFrameRate(int64_t value)
{
    videoFrameRate_ = value;
    videoFrameRateIsSet_ = true;
}

bool OnlineInfo::videoFrameRateIsSet() const
{
    return videoFrameRateIsSet_;
}

void OnlineInfo::unsetvideoFrameRate()
{
    videoFrameRateIsSet_ = false;
}

int64_t OnlineInfo::getAudioFrameRate() const
{
    return audioFrameRate_;
}

void OnlineInfo::setAudioFrameRate(int64_t value)
{
    audioFrameRate_ = value;
    audioFrameRateIsSet_ = true;
}

bool OnlineInfo::audioFrameRateIsSet() const
{
    return audioFrameRateIsSet_;
}

void OnlineInfo::unsetaudioFrameRate()
{
    audioFrameRateIsSet_ = false;
}

int64_t OnlineInfo::getVideoBitrate() const
{
    return videoBitrate_;
}

void OnlineInfo::setVideoBitrate(int64_t value)
{
    videoBitrate_ = value;
    videoBitrateIsSet_ = true;
}

bool OnlineInfo::videoBitrateIsSet() const
{
    return videoBitrateIsSet_;
}

void OnlineInfo::unsetvideoBitrate()
{
    videoBitrateIsSet_ = false;
}

int64_t OnlineInfo::getAudioBitrate() const
{
    return audioBitrate_;
}

void OnlineInfo::setAudioBitrate(int64_t value)
{
    audioBitrate_ = value;
    audioBitrateIsSet_ = true;
}

bool OnlineInfo::audioBitrateIsSet() const
{
    return audioBitrateIsSet_;
}

void OnlineInfo::unsetaudioBitrate()
{
    audioBitrateIsSet_ = false;
}

std::string OnlineInfo::getResolution() const
{
    return resolution_;
}

void OnlineInfo::setResolution(const std::string& value)
{
    resolution_ = value;
    resolutionIsSet_ = true;
}

bool OnlineInfo::resolutionIsSet() const
{
    return resolutionIsSet_;
}

void OnlineInfo::unsetresolution()
{
    resolutionIsSet_ = false;
}

std::string OnlineInfo::getClientIp() const
{
    return clientIp_;
}

void OnlineInfo::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool OnlineInfo::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void OnlineInfo::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string OnlineInfo::getStartTime() const
{
    return startTime_;
}

void OnlineInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OnlineInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OnlineInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}



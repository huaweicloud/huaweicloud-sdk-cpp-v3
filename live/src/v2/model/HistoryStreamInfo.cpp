

#include "huaweicloud/live/v2/model/HistoryStreamInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




HistoryStreamInfo::HistoryStreamInfo()
{
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    videoCodec_ = "";
    videoCodecIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

HistoryStreamInfo::~HistoryStreamInfo() = default;

void HistoryStreamInfo::validate()
{
}

web::json::value HistoryStreamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool HistoryStreamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string HistoryStreamInfo::getDomain() const
{
    return domain_;
}

void HistoryStreamInfo::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool HistoryStreamInfo::domainIsSet() const
{
    return domainIsSet_;
}

void HistoryStreamInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string HistoryStreamInfo::getApp() const
{
    return app_;
}

void HistoryStreamInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool HistoryStreamInfo::appIsSet() const
{
    return appIsSet_;
}

void HistoryStreamInfo::unsetapp()
{
    appIsSet_ = false;
}

std::string HistoryStreamInfo::getStream() const
{
    return stream_;
}

void HistoryStreamInfo::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool HistoryStreamInfo::streamIsSet() const
{
    return streamIsSet_;
}

void HistoryStreamInfo::unsetstream()
{
    streamIsSet_ = false;
}

int32_t HistoryStreamInfo::getType() const
{
    return type_;
}

void HistoryStreamInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HistoryStreamInfo::typeIsSet() const
{
    return typeIsSet_;
}

void HistoryStreamInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string HistoryStreamInfo::getVideoCodec() const
{
    return videoCodec_;
}

void HistoryStreamInfo::setVideoCodec(const std::string& value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool HistoryStreamInfo::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void HistoryStreamInfo::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

std::string HistoryStreamInfo::getAudioCodec() const
{
    return audioCodec_;
}

void HistoryStreamInfo::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool HistoryStreamInfo::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void HistoryStreamInfo::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

std::string HistoryStreamInfo::getClientIp() const
{
    return clientIp_;
}

void HistoryStreamInfo::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool HistoryStreamInfo::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void HistoryStreamInfo::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string HistoryStreamInfo::getStartTime() const
{
    return startTime_;
}

void HistoryStreamInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HistoryStreamInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HistoryStreamInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string HistoryStreamInfo::getEndTime() const
{
    return endTime_;
}

void HistoryStreamInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HistoryStreamInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HistoryStreamInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vod/v1/model/Common.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Common::Common()
{
    pvc_ = "";
    pvcIsSet_ = false;
    pvcVersion_ = "";
    pvcVersionIsSet_ = false;
    videoCodec_ = "";
    videoCodecIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    hlsInterval_ = 0;
    hlsIntervalIsSet_ = false;
}

Common::~Common() = default;

void Common::validate()
{
}

web::json::value Common::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pvcIsSet_) {
        val[utility::conversions::to_string_t("pvc")] = ModelBase::toJson(pvc_);
    }
    if(pvcVersionIsSet_) {
        val[utility::conversions::to_string_t("pvc_version")] = ModelBase::toJson(pvcVersion_);
    }
    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(hlsIntervalIsSet_) {
        val[utility::conversions::to_string_t("hls_interval")] = ModelBase::toJson(hlsInterval_);
    }

    return val;
}

bool Common::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pvc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pvc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPvc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pvc_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pvc_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPvcVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hls_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsInterval(refVal);
        }
    }
    return ok;
}

std::string Common::getPvc() const
{
    return pvc_;
}

void Common::setPvc(const std::string& value)
{
    pvc_ = value;
    pvcIsSet_ = true;
}

bool Common::pvcIsSet() const
{
    return pvcIsSet_;
}

void Common::unsetpvc()
{
    pvcIsSet_ = false;
}

std::string Common::getPvcVersion() const
{
    return pvcVersion_;
}

void Common::setPvcVersion(const std::string& value)
{
    pvcVersion_ = value;
    pvcVersionIsSet_ = true;
}

bool Common::pvcVersionIsSet() const
{
    return pvcVersionIsSet_;
}

void Common::unsetpvcVersion()
{
    pvcVersionIsSet_ = false;
}

std::string Common::getVideoCodec() const
{
    return videoCodec_;
}

void Common::setVideoCodec(const std::string& value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool Common::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void Common::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

std::string Common::getAudioCodec() const
{
    return audioCodec_;
}

void Common::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool Common::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void Common::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

int32_t Common::getHlsInterval() const
{
    return hlsInterval_;
}

void Common::setHlsInterval(int32_t value)
{
    hlsInterval_ = value;
    hlsIntervalIsSet_ = true;
}

bool Common::hlsIntervalIsSet() const
{
    return hlsIntervalIsSet_;
}

void Common::unsethlsInterval()
{
    hlsIntervalIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vod/v1/model/CommonInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CommonInfo::CommonInfo()
{
    pvc_ = false;
    pvcIsSet_ = false;
    videoCodec_ = "";
    videoCodecIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    isBlackCut_ = false;
    isBlackCutIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    hlsInterval_ = 0;
    hlsIntervalIsSet_ = false;
    upsample_ = false;
    upsampleIsSet_ = false;
    adaptation_ = "";
    adaptationIsSet_ = false;
}

CommonInfo::~CommonInfo() = default;

void CommonInfo::validate()
{
}

web::json::value CommonInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pvcIsSet_) {
        val[utility::conversions::to_string_t("pvc")] = ModelBase::toJson(pvc_);
    }
    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(isBlackCutIsSet_) {
        val[utility::conversions::to_string_t("is_black_cut")] = ModelBase::toJson(isBlackCut_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(hlsIntervalIsSet_) {
        val[utility::conversions::to_string_t("hls_interval")] = ModelBase::toJson(hlsInterval_);
    }
    if(upsampleIsSet_) {
        val[utility::conversions::to_string_t("upsample")] = ModelBase::toJson(upsample_);
    }
    if(adaptationIsSet_) {
        val[utility::conversions::to_string_t("adaptation")] = ModelBase::toJson(adaptation_);
    }

    return val;
}

bool CommonInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pvc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pvc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPvc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_black_cut"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_black_cut"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBlackCut(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hls_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upsample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upsample"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpsample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adaptation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adaptation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdaptation(refVal);
        }
    }
    return ok;
}

bool CommonInfo::isPvc() const
{
    return pvc_;
}

void CommonInfo::setPvc(bool value)
{
    pvc_ = value;
    pvcIsSet_ = true;
}

bool CommonInfo::pvcIsSet() const
{
    return pvcIsSet_;
}

void CommonInfo::unsetpvc()
{
    pvcIsSet_ = false;
}

std::string CommonInfo::getVideoCodec() const
{
    return videoCodec_;
}

void CommonInfo::setVideoCodec(const std::string& value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool CommonInfo::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void CommonInfo::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

std::string CommonInfo::getAudioCodec() const
{
    return audioCodec_;
}

void CommonInfo::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool CommonInfo::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void CommonInfo::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

bool CommonInfo::isIsBlackCut() const
{
    return isBlackCut_;
}

void CommonInfo::setIsBlackCut(bool value)
{
    isBlackCut_ = value;
    isBlackCutIsSet_ = true;
}

bool CommonInfo::isBlackCutIsSet() const
{
    return isBlackCutIsSet_;
}

void CommonInfo::unsetisBlackCut()
{
    isBlackCutIsSet_ = false;
}

std::string CommonInfo::getFormat() const
{
    return format_;
}

void CommonInfo::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool CommonInfo::formatIsSet() const
{
    return formatIsSet_;
}

void CommonInfo::unsetformat()
{
    formatIsSet_ = false;
}

int32_t CommonInfo::getHlsInterval() const
{
    return hlsInterval_;
}

void CommonInfo::setHlsInterval(int32_t value)
{
    hlsInterval_ = value;
    hlsIntervalIsSet_ = true;
}

bool CommonInfo::hlsIntervalIsSet() const
{
    return hlsIntervalIsSet_;
}

void CommonInfo::unsethlsInterval()
{
    hlsIntervalIsSet_ = false;
}

bool CommonInfo::isUpsample() const
{
    return upsample_;
}

void CommonInfo::setUpsample(bool value)
{
    upsample_ = value;
    upsampleIsSet_ = true;
}

bool CommonInfo::upsampleIsSet() const
{
    return upsampleIsSet_;
}

void CommonInfo::unsetupsample()
{
    upsampleIsSet_ = false;
}

std::string CommonInfo::getAdaptation() const
{
    return adaptation_;
}

void CommonInfo::setAdaptation(const std::string& value)
{
    adaptation_ = value;
    adaptationIsSet_ = true;
}

bool CommonInfo::adaptationIsSet() const
{
    return adaptationIsSet_;
}

void CommonInfo::unsetadaptation()
{
    adaptationIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/VideoAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoAssetMeta::VideoAssetMeta()
{
    videoCodec_ = "";
    videoCodecIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    frameRate_ = "";
    frameRateIsSet_ = false;
    videoBitRate_ = 0;
    videoBitRateIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    audioBitRate_ = 0;
    audioBitRateIsSet_ = false;
    audioChannels_ = 0;
    audioChannelsIsSet_ = false;
    sample_ = 0;
    sampleIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    videoTranscodingStatus_ = "";
    videoTranscodingStatusIsSet_ = false;
    errorInfoIsSet_ = false;
}

VideoAssetMeta::~VideoAssetMeta() = default;

void VideoAssetMeta::validate()
{
}

web::json::value VideoAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(videoBitRateIsSet_) {
        val[utility::conversions::to_string_t("video_bit_rate")] = ModelBase::toJson(videoBitRate_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(audioBitRateIsSet_) {
        val[utility::conversions::to_string_t("audio_bit_rate")] = ModelBase::toJson(audioBitRate_);
    }
    if(audioChannelsIsSet_) {
        val[utility::conversions::to_string_t("audio_channels")] = ModelBase::toJson(audioChannels_);
    }
    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(videoTranscodingStatusIsSet_) {
        val[utility::conversions::to_string_t("video_transcoding_status")] = ModelBase::toJson(videoTranscodingStatus_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }

    return val;
}
bool VideoAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_bit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_bit_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoBitRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("audio_bit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_bit_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioBitRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_channels"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioChannels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_transcoding_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_transcoding_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoTranscodingStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    return ok;
}


std::string VideoAssetMeta::getVideoCodec() const
{
    return videoCodec_;
}

void VideoAssetMeta::setVideoCodec(const std::string& value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool VideoAssetMeta::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void VideoAssetMeta::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

int32_t VideoAssetMeta::getWidth() const
{
    return width_;
}

void VideoAssetMeta::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VideoAssetMeta::widthIsSet() const
{
    return widthIsSet_;
}

void VideoAssetMeta::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VideoAssetMeta::getHeight() const
{
    return height_;
}

void VideoAssetMeta::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VideoAssetMeta::heightIsSet() const
{
    return heightIsSet_;
}

void VideoAssetMeta::unsetheight()
{
    heightIsSet_ = false;
}

std::string VideoAssetMeta::getFrameRate() const
{
    return frameRate_;
}

void VideoAssetMeta::setFrameRate(const std::string& value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool VideoAssetMeta::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void VideoAssetMeta::unsetframeRate()
{
    frameRateIsSet_ = false;
}

int32_t VideoAssetMeta::getVideoBitRate() const
{
    return videoBitRate_;
}

void VideoAssetMeta::setVideoBitRate(int32_t value)
{
    videoBitRate_ = value;
    videoBitRateIsSet_ = true;
}

bool VideoAssetMeta::videoBitRateIsSet() const
{
    return videoBitRateIsSet_;
}

void VideoAssetMeta::unsetvideoBitRate()
{
    videoBitRateIsSet_ = false;
}

int32_t VideoAssetMeta::getDuration() const
{
    return duration_;
}

void VideoAssetMeta::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool VideoAssetMeta::durationIsSet() const
{
    return durationIsSet_;
}

void VideoAssetMeta::unsetduration()
{
    durationIsSet_ = false;
}

std::string VideoAssetMeta::getAudioCodec() const
{
    return audioCodec_;
}

void VideoAssetMeta::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool VideoAssetMeta::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void VideoAssetMeta::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

int32_t VideoAssetMeta::getAudioBitRate() const
{
    return audioBitRate_;
}

void VideoAssetMeta::setAudioBitRate(int32_t value)
{
    audioBitRate_ = value;
    audioBitRateIsSet_ = true;
}

bool VideoAssetMeta::audioBitRateIsSet() const
{
    return audioBitRateIsSet_;
}

void VideoAssetMeta::unsetaudioBitRate()
{
    audioBitRateIsSet_ = false;
}

int32_t VideoAssetMeta::getAudioChannels() const
{
    return audioChannels_;
}

void VideoAssetMeta::setAudioChannels(int32_t value)
{
    audioChannels_ = value;
    audioChannelsIsSet_ = true;
}

bool VideoAssetMeta::audioChannelsIsSet() const
{
    return audioChannelsIsSet_;
}

void VideoAssetMeta::unsetaudioChannels()
{
    audioChannelsIsSet_ = false;
}

int32_t VideoAssetMeta::getSample() const
{
    return sample_;
}

void VideoAssetMeta::setSample(int32_t value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool VideoAssetMeta::sampleIsSet() const
{
    return sampleIsSet_;
}

void VideoAssetMeta::unsetsample()
{
    sampleIsSet_ = false;
}

std::string VideoAssetMeta::getMode() const
{
    return mode_;
}

void VideoAssetMeta::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool VideoAssetMeta::modeIsSet() const
{
    return modeIsSet_;
}

void VideoAssetMeta::unsetmode()
{
    modeIsSet_ = false;
}

std::string VideoAssetMeta::getVideoTranscodingStatus() const
{
    return videoTranscodingStatus_;
}

void VideoAssetMeta::setVideoTranscodingStatus(const std::string& value)
{
    videoTranscodingStatus_ = value;
    videoTranscodingStatusIsSet_ = true;
}

bool VideoAssetMeta::videoTranscodingStatusIsSet() const
{
    return videoTranscodingStatusIsSet_;
}

void VideoAssetMeta::unsetvideoTranscodingStatus()
{
    videoTranscodingStatusIsSet_ = false;
}

ErrorResponse VideoAssetMeta::getErrorInfo() const
{
    return errorInfo_;
}

void VideoAssetMeta::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool VideoAssetMeta::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void VideoAssetMeta::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}



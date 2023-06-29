

#include "huaweicloud/mpc/v1/model/OutputSetting.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputSetting::OutputSetting()
{
    format_ = "";
    formatIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
    hlsIsSet_ = false;
    outputIsSet_ = false;
}

OutputSetting::~OutputSetting() = default;

void OutputSetting::validate()
{
}

web::json::value OutputSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(hlsIsSet_) {
        val[utility::conversions::to_string_t("hls")] = ModelBase::toJson(hls_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}

bool OutputSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            EditVideoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            EditAudioInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls"));
        if(!fieldValue.is_null())
        {
            EditHlsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string OutputSetting::getFormat() const
{
    return format_;
}

void OutputSetting::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool OutputSetting::formatIsSet() const
{
    return formatIsSet_;
}

void OutputSetting::unsetformat()
{
    formatIsSet_ = false;
}

EditVideoInfo OutputSetting::getVideo() const
{
    return video_;
}

void OutputSetting::setVideo(const EditVideoInfo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool OutputSetting::videoIsSet() const
{
    return videoIsSet_;
}

void OutputSetting::unsetvideo()
{
    videoIsSet_ = false;
}

EditAudioInfo OutputSetting::getAudio() const
{
    return audio_;
}

void OutputSetting::setAudio(const EditAudioInfo& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool OutputSetting::audioIsSet() const
{
    return audioIsSet_;
}

void OutputSetting::unsetaudio()
{
    audioIsSet_ = false;
}

EditHlsInfo OutputSetting::getHls() const
{
    return hls_;
}

void OutputSetting::setHls(const EditHlsInfo& value)
{
    hls_ = value;
    hlsIsSet_ = true;
}

bool OutputSetting::hlsIsSet() const
{
    return hlsIsSet_;
}

void OutputSetting::unsethls()
{
    hlsIsSet_ = false;
}

ObsObjInfo OutputSetting::getOutput() const
{
    return output_;
}

void OutputSetting::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool OutputSetting::outputIsSet() const
{
    return outputIsSet_;
}

void OutputSetting::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/mpc/v1/model/AvParameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AvParameters::AvParameters()
{
    videoIsSet_ = false;
    audioIsSet_ = false;
    commonIsSet_ = false;
    outputIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
}

AvParameters::~AvParameters() = default;

void AvParameters::validate()
{
}

web::json::value AvParameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }

    return val;
}
bool AvParameters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            VideoParameters refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            Audio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            Common refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilename(refVal);
        }
    }
    return ok;
}


VideoParameters AvParameters::getVideo() const
{
    return video_;
}

void AvParameters::setVideo(const VideoParameters& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool AvParameters::videoIsSet() const
{
    return videoIsSet_;
}

void AvParameters::unsetvideo()
{
    videoIsSet_ = false;
}

Audio AvParameters::getAudio() const
{
    return audio_;
}

void AvParameters::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool AvParameters::audioIsSet() const
{
    return audioIsSet_;
}

void AvParameters::unsetaudio()
{
    audioIsSet_ = false;
}

Common AvParameters::getCommon() const
{
    return common_;
}

void AvParameters::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool AvParameters::commonIsSet() const
{
    return commonIsSet_;
}

void AvParameters::unsetcommon()
{
    commonIsSet_ = false;
}

ObsObjInfo AvParameters::getOutput() const
{
    return output_;
}

void AvParameters::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool AvParameters::outputIsSet() const
{
    return outputIsSet_;
}

void AvParameters::unsetoutput()
{
    outputIsSet_ = false;
}

std::string AvParameters::getOutputFilename() const
{
    return outputFilename_;
}

void AvParameters::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool AvParameters::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void AvParameters::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

}
}
}
}
}



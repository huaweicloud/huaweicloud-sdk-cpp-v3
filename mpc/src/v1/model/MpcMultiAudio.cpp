

#include "huaweicloud/mpc/v1/model/MpcMultiAudio.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MpcMultiAudio::MpcMultiAudio()
{
    outputIsSet_ = false;
    audioFilesIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
}

MpcMultiAudio::~MpcMultiAudio() = default;

void MpcMultiAudio::validate()
{
}

web::json::value MpcMultiAudio::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(audioFilesIsSet_) {
        val[utility::conversions::to_string_t("audio_files")] = ModelBase::toJson(audioFiles_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }

    return val;
}
bool MpcMultiAudio::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_files"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFiles(refVal);
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


ObsObjInfo MpcMultiAudio::getOutput() const
{
    return output_;
}

void MpcMultiAudio::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool MpcMultiAudio::outputIsSet() const
{
    return outputIsSet_;
}

void MpcMultiAudio::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<AudioFile>& MpcMultiAudio::getAudioFiles()
{
    return audioFiles_;
}

void MpcMultiAudio::setAudioFiles(const std::vector<AudioFile>& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool MpcMultiAudio::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void MpcMultiAudio::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

std::string MpcMultiAudio::getOutputFilename() const
{
    return outputFilename_;
}

void MpcMultiAudio::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool MpcMultiAudio::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void MpcMultiAudio::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

}
}
}
}
}



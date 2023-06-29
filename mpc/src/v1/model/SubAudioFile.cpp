

#include "huaweicloud/mpc/v1/model/SubAudioFile.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




SubAudioFile::SubAudioFile()
{
    tracksInfoIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
}

SubAudioFile::~SubAudioFile() = default;

void SubAudioFile::validate()
{
}

web::json::value SubAudioFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tracksInfoIsSet_) {
        val[utility::conversions::to_string_t("tracks_info")] = ModelBase::toJson(tracksInfo_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }

    return val;
}

bool SubAudioFile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tracks_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracks_info"));
        if(!fieldValue.is_null())
        {
            std::vector<TracksInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracksInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
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


std::vector<TracksInfo>& SubAudioFile::getTracksInfo()
{
    return tracksInfo_;
}

void SubAudioFile::setTracksInfo(const std::vector<TracksInfo>& value)
{
    tracksInfo_ = value;
    tracksInfoIsSet_ = true;
}

bool SubAudioFile::tracksInfoIsSet() const
{
    return tracksInfoIsSet_;
}

void SubAudioFile::unsettracksInfo()
{
    tracksInfoIsSet_ = false;
}

ObsObjInfo SubAudioFile::getInput() const
{
    return input_;
}

void SubAudioFile::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool SubAudioFile::inputIsSet() const
{
    return inputIsSet_;
}

void SubAudioFile::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo SubAudioFile::getOutput() const
{
    return output_;
}

void SubAudioFile::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool SubAudioFile::outputIsSet() const
{
    return outputIsSet_;
}

void SubAudioFile::unsetoutput()
{
    outputIsSet_ = false;
}

std::string SubAudioFile::getOutputFilename() const
{
    return outputFilename_;
}

void SubAudioFile::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool SubAudioFile::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void SubAudioFile::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

}
}
}
}
}



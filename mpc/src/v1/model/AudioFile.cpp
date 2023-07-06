

#include "huaweicloud/mpc/v1/model/AudioFile.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AudioFile::AudioFile()
{
    tracksInfoIsSet_ = false;
    inputIsSet_ = false;
}

AudioFile::~AudioFile() = default;

void AudioFile::validate()
{
}

web::json::value AudioFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tracksInfoIsSet_) {
        val[utility::conversions::to_string_t("tracks_info")] = ModelBase::toJson(tracksInfo_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }

    return val;
}

bool AudioFile::fromJson(const web::json::value& val)
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
    return ok;
}

std::vector<TracksInfo>& AudioFile::getTracksInfo()
{
    return tracksInfo_;
}

void AudioFile::setTracksInfo(const std::vector<TracksInfo>& value)
{
    tracksInfo_ = value;
    tracksInfoIsSet_ = true;
}

bool AudioFile::tracksInfoIsSet() const
{
    return tracksInfoIsSet_;
}

void AudioFile::unsettracksInfo()
{
    tracksInfoIsSet_ = false;
}

ObsObjInfo AudioFile::getInput() const
{
    return input_;
}

void AudioFile::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool AudioFile::inputIsSet() const
{
    return inputIsSet_;
}

void AudioFile::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}



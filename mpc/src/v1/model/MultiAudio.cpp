

#include "huaweicloud/mpc/v1/model/MultiAudio.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MultiAudio::MultiAudio()
{
    tracksInfoIsSet_ = false;
    audioFilesIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
}

MultiAudio::~MultiAudio() = default;

void MultiAudio::validate()
{
}

web::json::value MultiAudio::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tracksInfoIsSet_) {
        val[utility::conversions::to_string_t("tracks_info")] = ModelBase::toJson(tracksInfo_);
    }
    if(audioFilesIsSet_) {
        val[utility::conversions::to_string_t("audio_files")] = ModelBase::toJson(audioFiles_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }

    return val;
}
bool MultiAudio::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_files"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLanguage(refVal);
        }
    }
    return ok;
}


std::vector<TracksInfo>& MultiAudio::getTracksInfo()
{
    return tracksInfo_;
}

void MultiAudio::setTracksInfo(const std::vector<TracksInfo>& value)
{
    tracksInfo_ = value;
    tracksInfoIsSet_ = true;
}

bool MultiAudio::tracksInfoIsSet() const
{
    return tracksInfoIsSet_;
}

void MultiAudio::unsettracksInfo()
{
    tracksInfoIsSet_ = false;
}

std::vector<AudioFile>& MultiAudio::getAudioFiles()
{
    return audioFiles_;
}

void MultiAudio::setAudioFiles(const std::vector<AudioFile>& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool MultiAudio::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void MultiAudio::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

std::string MultiAudio::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void MultiAudio::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool MultiAudio::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void MultiAudio::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

}
}
}
}
}



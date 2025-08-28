

#include "huaweicloud/metastudio/v1/model/TtsJobFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtsJobFile::TtsJobFile()
{
    audioFileUrl_ = "";
    audioFileUrlIsSet_ = false;
    audioInfoFileUrl_ = "";
    audioInfoFileUrlIsSet_ = false;
    audioSrtFileUrl_ = "";
    audioSrtFileUrlIsSet_ = false;
    audioActionFileUrl_ = "";
    audioActionFileUrlIsSet_ = false;
}

TtsJobFile::~TtsJobFile() = default;

void TtsJobFile::validate()
{
}

web::json::value TtsJobFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFileUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_url")] = ModelBase::toJson(audioFileUrl_);
    }
    if(audioInfoFileUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_info_file_url")] = ModelBase::toJson(audioInfoFileUrl_);
    }
    if(audioSrtFileUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_srt_file_url")] = ModelBase::toJson(audioSrtFileUrl_);
    }
    if(audioActionFileUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_action_file_url")] = ModelBase::toJson(audioActionFileUrl_);
    }

    return val;
}
bool TtsJobFile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_info_file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_info_file_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioInfoFileUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_srt_file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_srt_file_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSrtFileUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_action_file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_action_file_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioActionFileUrl(refVal);
        }
    }
    return ok;
}


std::string TtsJobFile::getAudioFileUrl() const
{
    return audioFileUrl_;
}

void TtsJobFile::setAudioFileUrl(const std::string& value)
{
    audioFileUrl_ = value;
    audioFileUrlIsSet_ = true;
}

bool TtsJobFile::audioFileUrlIsSet() const
{
    return audioFileUrlIsSet_;
}

void TtsJobFile::unsetaudioFileUrl()
{
    audioFileUrlIsSet_ = false;
}

std::string TtsJobFile::getAudioInfoFileUrl() const
{
    return audioInfoFileUrl_;
}

void TtsJobFile::setAudioInfoFileUrl(const std::string& value)
{
    audioInfoFileUrl_ = value;
    audioInfoFileUrlIsSet_ = true;
}

bool TtsJobFile::audioInfoFileUrlIsSet() const
{
    return audioInfoFileUrlIsSet_;
}

void TtsJobFile::unsetaudioInfoFileUrl()
{
    audioInfoFileUrlIsSet_ = false;
}

std::string TtsJobFile::getAudioSrtFileUrl() const
{
    return audioSrtFileUrl_;
}

void TtsJobFile::setAudioSrtFileUrl(const std::string& value)
{
    audioSrtFileUrl_ = value;
    audioSrtFileUrlIsSet_ = true;
}

bool TtsJobFile::audioSrtFileUrlIsSet() const
{
    return audioSrtFileUrlIsSet_;
}

void TtsJobFile::unsetaudioSrtFileUrl()
{
    audioSrtFileUrlIsSet_ = false;
}

std::string TtsJobFile::getAudioActionFileUrl() const
{
    return audioActionFileUrl_;
}

void TtsJobFile::setAudioActionFileUrl(const std::string& value)
{
    audioActionFileUrl_ = value;
    audioActionFileUrlIsSet_ = true;
}

bool TtsJobFile::audioActionFileUrlIsSet() const
{
    return audioActionFileUrlIsSet_;
}

void TtsJobFile::unsetaudioActionFileUrl()
{
    audioActionFileUrlIsSet_ = false;
}

}
}
}
}
}



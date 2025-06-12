

#include "huaweicloud/metastudio/v1/model/PreviewInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PreviewInfo::PreviewInfo()
{
    textSha256_ = "";
    textSha256IsSet_ = false;
    audioFileDownloadUrl_ = "";
    audioFileDownloadUrlIsSet_ = false;
    actionFileDownloadUrl_ = "";
    actionFileDownloadUrlIsSet_ = false;
    audioDuration_ = 0.0f;
    audioDurationIsSet_ = false;
}

PreviewInfo::~PreviewInfo() = default;

void PreviewInfo::validate()
{
}

web::json::value PreviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textSha256IsSet_) {
        val[utility::conversions::to_string_t("text_sha256")] = ModelBase::toJson(textSha256_);
    }
    if(audioFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_download_url")] = ModelBase::toJson(audioFileDownloadUrl_);
    }
    if(actionFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("action_file_download_url")] = ModelBase::toJson(actionFileDownloadUrl_);
    }
    if(audioDurationIsSet_) {
        val[utility::conversions::to_string_t("audio_duration")] = ModelBase::toJson(audioDuration_);
    }

    return val;
}
bool PreviewInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text_sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDuration(refVal);
        }
    }
    return ok;
}


std::string PreviewInfo::getTextSha256() const
{
    return textSha256_;
}

void PreviewInfo::setTextSha256(const std::string& value)
{
    textSha256_ = value;
    textSha256IsSet_ = true;
}

bool PreviewInfo::textSha256IsSet() const
{
    return textSha256IsSet_;
}

void PreviewInfo::unsettextSha256()
{
    textSha256IsSet_ = false;
}

std::string PreviewInfo::getAudioFileDownloadUrl() const
{
    return audioFileDownloadUrl_;
}

void PreviewInfo::setAudioFileDownloadUrl(const std::string& value)
{
    audioFileDownloadUrl_ = value;
    audioFileDownloadUrlIsSet_ = true;
}

bool PreviewInfo::audioFileDownloadUrlIsSet() const
{
    return audioFileDownloadUrlIsSet_;
}

void PreviewInfo::unsetaudioFileDownloadUrl()
{
    audioFileDownloadUrlIsSet_ = false;
}

std::string PreviewInfo::getActionFileDownloadUrl() const
{
    return actionFileDownloadUrl_;
}

void PreviewInfo::setActionFileDownloadUrl(const std::string& value)
{
    actionFileDownloadUrl_ = value;
    actionFileDownloadUrlIsSet_ = true;
}

bool PreviewInfo::actionFileDownloadUrlIsSet() const
{
    return actionFileDownloadUrlIsSet_;
}

void PreviewInfo::unsetactionFileDownloadUrl()
{
    actionFileDownloadUrlIsSet_ = false;
}

float PreviewInfo::getAudioDuration() const
{
    return audioDuration_;
}

void PreviewInfo::setAudioDuration(float value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool PreviewInfo::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void PreviewInfo::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

}
}
}
}
}



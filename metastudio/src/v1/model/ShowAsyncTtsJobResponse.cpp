

#include "huaweicloud/metastudio/v1/model/ShowAsyncTtsJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsyncTtsJobResponse::ShowAsyncTtsJobResponse()
{
    state_ = "";
    stateIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    audioFileUrl_ = "";
    audioFileUrlIsSet_ = false;
    audioInfoFileUrl_ = "";
    audioInfoFileUrlIsSet_ = false;
    audioSrtFileUrl_ = "";
    audioSrtFileUrlIsSet_ = false;
    audioActionFileUrl_ = "";
    audioActionFileUrlIsSet_ = false;
}

ShowAsyncTtsJobResponse::~ShowAsyncTtsJobResponse() = default;

void ShowAsyncTtsJobResponse::validate()
{
}

web::json::value ShowAsyncTtsJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
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
bool ShowAsyncTtsJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
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


std::string ShowAsyncTtsJobResponse::getState() const
{
    return state_;
}

void ShowAsyncTtsJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowAsyncTtsJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getCode() const
{
    return code_;
}

void ShowAsyncTtsJobResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowAsyncTtsJobResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getMessage() const
{
    return message_;
}

void ShowAsyncTtsJobResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowAsyncTtsJobResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getAudioFileUrl() const
{
    return audioFileUrl_;
}

void ShowAsyncTtsJobResponse::setAudioFileUrl(const std::string& value)
{
    audioFileUrl_ = value;
    audioFileUrlIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::audioFileUrlIsSet() const
{
    return audioFileUrlIsSet_;
}

void ShowAsyncTtsJobResponse::unsetaudioFileUrl()
{
    audioFileUrlIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getAudioInfoFileUrl() const
{
    return audioInfoFileUrl_;
}

void ShowAsyncTtsJobResponse::setAudioInfoFileUrl(const std::string& value)
{
    audioInfoFileUrl_ = value;
    audioInfoFileUrlIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::audioInfoFileUrlIsSet() const
{
    return audioInfoFileUrlIsSet_;
}

void ShowAsyncTtsJobResponse::unsetaudioInfoFileUrl()
{
    audioInfoFileUrlIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getAudioSrtFileUrl() const
{
    return audioSrtFileUrl_;
}

void ShowAsyncTtsJobResponse::setAudioSrtFileUrl(const std::string& value)
{
    audioSrtFileUrl_ = value;
    audioSrtFileUrlIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::audioSrtFileUrlIsSet() const
{
    return audioSrtFileUrlIsSet_;
}

void ShowAsyncTtsJobResponse::unsetaudioSrtFileUrl()
{
    audioSrtFileUrlIsSet_ = false;
}

std::string ShowAsyncTtsJobResponse::getAudioActionFileUrl() const
{
    return audioActionFileUrl_;
}

void ShowAsyncTtsJobResponse::setAudioActionFileUrl(const std::string& value)
{
    audioActionFileUrl_ = value;
    audioActionFileUrlIsSet_ = true;
}

bool ShowAsyncTtsJobResponse::audioActionFileUrlIsSet() const
{
    return audioActionFileUrlIsSet_;
}

void ShowAsyncTtsJobResponse::unsetaudioActionFileUrl()
{
    audioActionFileUrlIsSet_ = false;
}

}
}
}
}
}



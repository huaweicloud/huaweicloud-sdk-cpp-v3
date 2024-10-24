

#include "huaweicloud/live/v1/model/EncoderSettingsExpand_audio_descriptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




EncoderSettingsExpand_audio_descriptions::EncoderSettingsExpand_audio_descriptions()
{
    name_ = "";
    nameIsSet_ = false;
    audioSelectorName_ = "";
    audioSelectorNameIsSet_ = false;
    languageCodeControl_ = "";
    languageCodeControlIsSet_ = false;
    languageCode_ = "";
    languageCodeIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
}

EncoderSettingsExpand_audio_descriptions::~EncoderSettingsExpand_audio_descriptions() = default;

void EncoderSettingsExpand_audio_descriptions::validate()
{
}

web::json::value EncoderSettingsExpand_audio_descriptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(audioSelectorNameIsSet_) {
        val[utility::conversions::to_string_t("audio_selector_name")] = ModelBase::toJson(audioSelectorName_);
    }
    if(languageCodeControlIsSet_) {
        val[utility::conversions::to_string_t("language_code_control")] = ModelBase::toJson(languageCodeControl_);
    }
    if(languageCodeIsSet_) {
        val[utility::conversions::to_string_t("language_code")] = ModelBase::toJson(languageCode_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }

    return val;
}
bool EncoderSettingsExpand_audio_descriptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_selector_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_selector_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSelectorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language_code_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_code_control"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageCodeControl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    return ok;
}


std::string EncoderSettingsExpand_audio_descriptions::getName() const
{
    return name_;
}

void EncoderSettingsExpand_audio_descriptions::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EncoderSettingsExpand_audio_descriptions::nameIsSet() const
{
    return nameIsSet_;
}

void EncoderSettingsExpand_audio_descriptions::unsetname()
{
    nameIsSet_ = false;
}

std::string EncoderSettingsExpand_audio_descriptions::getAudioSelectorName() const
{
    return audioSelectorName_;
}

void EncoderSettingsExpand_audio_descriptions::setAudioSelectorName(const std::string& value)
{
    audioSelectorName_ = value;
    audioSelectorNameIsSet_ = true;
}

bool EncoderSettingsExpand_audio_descriptions::audioSelectorNameIsSet() const
{
    return audioSelectorNameIsSet_;
}

void EncoderSettingsExpand_audio_descriptions::unsetaudioSelectorName()
{
    audioSelectorNameIsSet_ = false;
}

std::string EncoderSettingsExpand_audio_descriptions::getLanguageCodeControl() const
{
    return languageCodeControl_;
}

void EncoderSettingsExpand_audio_descriptions::setLanguageCodeControl(const std::string& value)
{
    languageCodeControl_ = value;
    languageCodeControlIsSet_ = true;
}

bool EncoderSettingsExpand_audio_descriptions::languageCodeControlIsSet() const
{
    return languageCodeControlIsSet_;
}

void EncoderSettingsExpand_audio_descriptions::unsetlanguageCodeControl()
{
    languageCodeControlIsSet_ = false;
}

std::string EncoderSettingsExpand_audio_descriptions::getLanguageCode() const
{
    return languageCode_;
}

void EncoderSettingsExpand_audio_descriptions::setLanguageCode(const std::string& value)
{
    languageCode_ = value;
    languageCodeIsSet_ = true;
}

bool EncoderSettingsExpand_audio_descriptions::languageCodeIsSet() const
{
    return languageCodeIsSet_;
}

void EncoderSettingsExpand_audio_descriptions::unsetlanguageCode()
{
    languageCodeIsSet_ = false;
}

std::string EncoderSettingsExpand_audio_descriptions::getStreamName() const
{
    return streamName_;
}

void EncoderSettingsExpand_audio_descriptions::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool EncoderSettingsExpand_audio_descriptions::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void EncoderSettingsExpand_audio_descriptions::unsetstreamName()
{
    streamNameIsSet_ = false;
}

}
}
}
}
}



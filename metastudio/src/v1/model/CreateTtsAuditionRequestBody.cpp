

#include "huaweicloud/metastudio/v1/model/CreateTtsAuditionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsAuditionRequestBody::CreateTtsAuditionRequestBody()
{
    text_ = "";
    textIsSet_ = false;
    ttsText_ = "";
    ttsTextIsSet_ = false;
    emotion_ = "";
    emotionIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    style_ = "";
    styleIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
    isVocabularyConfigEnable_ = false;
    isVocabularyConfigEnableIsSet_ = false;
}

CreateTtsAuditionRequestBody::~CreateTtsAuditionRequestBody() = default;

void CreateTtsAuditionRequestBody::validate()
{
}

web::json::value CreateTtsAuditionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(ttsTextIsSet_) {
        val[utility::conversions::to_string_t("tts_text")] = ModelBase::toJson(ttsText_);
    }
    if(emotionIsSet_) {
        val[utility::conversions::to_string_t("emotion")] = ModelBase::toJson(emotion_);
    }
    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }
    if(pitchIsSet_) {
        val[utility::conversions::to_string_t("pitch")] = ModelBase::toJson(pitch_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(styleIsSet_) {
        val[utility::conversions::to_string_t("style")] = ModelBase::toJson(style_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }
    if(isVocabularyConfigEnableIsSet_) {
        val[utility::conversions::to_string_t("is_vocabulary_config_enable")] = ModelBase::toJson(isVocabularyConfigEnable_);
    }

    return val;
}
bool CreateTtsAuditionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tts_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tts_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtsText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emotion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmotion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pitch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pitch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channels"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_vocabulary_config_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_vocabulary_config_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsVocabularyConfigEnable(refVal);
        }
    }
    return ok;
}


std::string CreateTtsAuditionRequestBody::getText() const
{
    return text_;
}

void CreateTtsAuditionRequestBody::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::textIsSet() const
{
    return textIsSet_;
}

void CreateTtsAuditionRequestBody::unsettext()
{
    textIsSet_ = false;
}

std::string CreateTtsAuditionRequestBody::getTtsText() const
{
    return ttsText_;
}

void CreateTtsAuditionRequestBody::setTtsText(const std::string& value)
{
    ttsText_ = value;
    ttsTextIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::ttsTextIsSet() const
{
    return ttsTextIsSet_;
}

void CreateTtsAuditionRequestBody::unsetttsText()
{
    ttsTextIsSet_ = false;
}

std::string CreateTtsAuditionRequestBody::getEmotion() const
{
    return emotion_;
}

void CreateTtsAuditionRequestBody::setEmotion(const std::string& value)
{
    emotion_ = value;
    emotionIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::emotionIsSet() const
{
    return emotionIsSet_;
}

void CreateTtsAuditionRequestBody::unsetemotion()
{
    emotionIsSet_ = false;
}

int32_t CreateTtsAuditionRequestBody::getSpeed() const
{
    return speed_;
}

void CreateTtsAuditionRequestBody::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::speedIsSet() const
{
    return speedIsSet_;
}

void CreateTtsAuditionRequestBody::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t CreateTtsAuditionRequestBody::getPitch() const
{
    return pitch_;
}

void CreateTtsAuditionRequestBody::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::pitchIsSet() const
{
    return pitchIsSet_;
}

void CreateTtsAuditionRequestBody::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t CreateTtsAuditionRequestBody::getVolume() const
{
    return volume_;
}

void CreateTtsAuditionRequestBody::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateTtsAuditionRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateTtsAuditionRequestBody::getBusinessType() const
{
    return businessType_;
}

void CreateTtsAuditionRequestBody::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void CreateTtsAuditionRequestBody::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string CreateTtsAuditionRequestBody::getStyle() const
{
    return style_;
}

void CreateTtsAuditionRequestBody::setStyle(const std::string& value)
{
    style_ = value;
    styleIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::styleIsSet() const
{
    return styleIsSet_;
}

void CreateTtsAuditionRequestBody::unsetstyle()
{
    styleIsSet_ = false;
}

int32_t CreateTtsAuditionRequestBody::getChannels() const
{
    return channels_;
}

void CreateTtsAuditionRequestBody::setChannels(int32_t value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::channelsIsSet() const
{
    return channelsIsSet_;
}

void CreateTtsAuditionRequestBody::unsetchannels()
{
    channelsIsSet_ = false;
}

bool CreateTtsAuditionRequestBody::isIsVocabularyConfigEnable() const
{
    return isVocabularyConfigEnable_;
}

void CreateTtsAuditionRequestBody::setIsVocabularyConfigEnable(bool value)
{
    isVocabularyConfigEnable_ = value;
    isVocabularyConfigEnableIsSet_ = true;
}

bool CreateTtsAuditionRequestBody::isVocabularyConfigEnableIsSet() const
{
    return isVocabularyConfigEnableIsSet_;
}

void CreateTtsAuditionRequestBody::unsetisVocabularyConfigEnable()
{
    isVocabularyConfigEnableIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/SmartChatVoiceConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatVoiceConfig::SmartChatVoiceConfig()
{
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
    provider_ = "";
    providerIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    languageDesc_ = "";
    languageDescIsSet_ = false;
}

SmartChatVoiceConfig::~SmartChatVoiceConfig() = default;

void SmartChatVoiceConfig::validate()
{
}

web::json::value SmartChatVoiceConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceAssetIdIsSet_) {
        val[utility::conversions::to_string_t("voice_asset_id")] = ModelBase::toJson(voiceAssetId_);
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
    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(languageDescIsSet_) {
        val[utility::conversions::to_string_t("language_desc")] = ModelBase::toJson(languageDesc_);
    }

    return val;
}
bool SmartChatVoiceConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("voice_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageDesc(refVal);
        }
    }
    return ok;
}


std::string SmartChatVoiceConfig::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void SmartChatVoiceConfig::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool SmartChatVoiceConfig::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void SmartChatVoiceConfig::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

int32_t SmartChatVoiceConfig::getSpeed() const
{
    return speed_;
}

void SmartChatVoiceConfig::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool SmartChatVoiceConfig::speedIsSet() const
{
    return speedIsSet_;
}

void SmartChatVoiceConfig::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t SmartChatVoiceConfig::getPitch() const
{
    return pitch_;
}

void SmartChatVoiceConfig::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool SmartChatVoiceConfig::pitchIsSet() const
{
    return pitchIsSet_;
}

void SmartChatVoiceConfig::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t SmartChatVoiceConfig::getVolume() const
{
    return volume_;
}

void SmartChatVoiceConfig::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool SmartChatVoiceConfig::volumeIsSet() const
{
    return volumeIsSet_;
}

void SmartChatVoiceConfig::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string SmartChatVoiceConfig::getProvider() const
{
    return provider_;
}

void SmartChatVoiceConfig::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool SmartChatVoiceConfig::providerIsSet() const
{
    return providerIsSet_;
}

void SmartChatVoiceConfig::unsetprovider()
{
    providerIsSet_ = false;
}

std::string SmartChatVoiceConfig::getLanguage() const
{
    return language_;
}

void SmartChatVoiceConfig::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SmartChatVoiceConfig::languageIsSet() const
{
    return languageIsSet_;
}

void SmartChatVoiceConfig::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string SmartChatVoiceConfig::getLanguageDesc() const
{
    return languageDesc_;
}

void SmartChatVoiceConfig::setLanguageDesc(const std::string& value)
{
    languageDesc_ = value;
    languageDescIsSet_ = true;
}

bool SmartChatVoiceConfig::languageDescIsSet() const
{
    return languageDescIsSet_;
}

void SmartChatVoiceConfig::unsetlanguageDesc()
{
    languageDescIsSet_ = false;
}

}
}
}
}
}



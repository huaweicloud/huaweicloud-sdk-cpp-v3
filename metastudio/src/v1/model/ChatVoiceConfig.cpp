

#include "huaweicloud/metastudio/v1/model/ChatVoiceConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ChatVoiceConfig::ChatVoiceConfig()
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
}

ChatVoiceConfig::~ChatVoiceConfig() = default;

void ChatVoiceConfig::validate()
{
}

web::json::value ChatVoiceConfig::toJson() const
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

    return val;
}
bool ChatVoiceConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ChatVoiceConfig::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void ChatVoiceConfig::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool ChatVoiceConfig::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void ChatVoiceConfig::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

int32_t ChatVoiceConfig::getSpeed() const
{
    return speed_;
}

void ChatVoiceConfig::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool ChatVoiceConfig::speedIsSet() const
{
    return speedIsSet_;
}

void ChatVoiceConfig::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t ChatVoiceConfig::getPitch() const
{
    return pitch_;
}

void ChatVoiceConfig::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool ChatVoiceConfig::pitchIsSet() const
{
    return pitchIsSet_;
}

void ChatVoiceConfig::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t ChatVoiceConfig::getVolume() const
{
    return volume_;
}

void ChatVoiceConfig::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ChatVoiceConfig::volumeIsSet() const
{
    return volumeIsSet_;
}

void ChatVoiceConfig::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string ChatVoiceConfig::getProvider() const
{
    return provider_;
}

void ChatVoiceConfig::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool ChatVoiceConfig::providerIsSet() const
{
    return providerIsSet_;
}

void ChatVoiceConfig::unsetprovider()
{
    providerIsSet_ = false;
}

std::string ChatVoiceConfig::getLanguage() const
{
    return language_;
}

void ChatVoiceConfig::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ChatVoiceConfig::languageIsSet() const
{
    return languageIsSet_;
}

void ChatVoiceConfig::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}



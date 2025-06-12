

#include "huaweicloud/metastudio/v1/model/VoiceConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceConfig::VoiceConfig()
{
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
}

VoiceConfig::~VoiceConfig() = default;

void VoiceConfig::validate()
{
}

web::json::value VoiceConfig::toJson() const
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

    return val;
}
bool VoiceConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string VoiceConfig::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void VoiceConfig::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool VoiceConfig::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void VoiceConfig::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

int32_t VoiceConfig::getSpeed() const
{
    return speed_;
}

void VoiceConfig::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool VoiceConfig::speedIsSet() const
{
    return speedIsSet_;
}

void VoiceConfig::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t VoiceConfig::getPitch() const
{
    return pitch_;
}

void VoiceConfig::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool VoiceConfig::pitchIsSet() const
{
    return pitchIsSet_;
}

void VoiceConfig::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t VoiceConfig::getVolume() const
{
    return volume_;
}

void VoiceConfig::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool VoiceConfig::volumeIsSet() const
{
    return volumeIsSet_;
}

void VoiceConfig::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}



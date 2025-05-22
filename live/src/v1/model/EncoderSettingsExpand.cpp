

#include "huaweicloud/live/v1/model/EncoderSettingsExpand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




EncoderSettingsExpand::EncoderSettingsExpand()
{
    audioDescriptionsIsSet_ = false;
    videoDescriptionsIsSet_ = false;
}

EncoderSettingsExpand::~EncoderSettingsExpand() = default;

void EncoderSettingsExpand::validate()
{
}

web::json::value EncoderSettingsExpand::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioDescriptionsIsSet_) {
        val[utility::conversions::to_string_t("audio_descriptions")] = ModelBase::toJson(audioDescriptions_);
    }
    if(videoDescriptionsIsSet_) {
        val[utility::conversions::to_string_t("video_descriptions")] = ModelBase::toJson(videoDescriptions_);
    }

    return val;
}
bool EncoderSettingsExpand::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_descriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_descriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<EncoderSettingsExpand_audio_descriptions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDescriptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_descriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_descriptions"));
        if(!fieldValue.is_null())
        {
            VideoDescriptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoDescriptions(refVal);
        }
    }
    return ok;
}


std::vector<EncoderSettingsExpand_audio_descriptions>& EncoderSettingsExpand::getAudioDescriptions()
{
    return audioDescriptions_;
}

void EncoderSettingsExpand::setAudioDescriptions(const std::vector<EncoderSettingsExpand_audio_descriptions>& value)
{
    audioDescriptions_ = value;
    audioDescriptionsIsSet_ = true;
}

bool EncoderSettingsExpand::audioDescriptionsIsSet() const
{
    return audioDescriptionsIsSet_;
}

void EncoderSettingsExpand::unsetaudioDescriptions()
{
    audioDescriptionsIsSet_ = false;
}

VideoDescriptions EncoderSettingsExpand::getVideoDescriptions() const
{
    return videoDescriptions_;
}

void EncoderSettingsExpand::setVideoDescriptions(const VideoDescriptions& value)
{
    videoDescriptions_ = value;
    videoDescriptionsIsSet_ = true;
}

bool EncoderSettingsExpand::videoDescriptionsIsSet() const
{
    return videoDescriptionsIsSet_;
}

void EncoderSettingsExpand::unsetvideoDescriptions()
{
    videoDescriptionsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/AudioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AudioInfo::AudioInfo()
{
    audioId_ = 0;
    audioIdIsSet_ = false;
}

AudioInfo::~AudioInfo() = default;

void AudioInfo::validate()
{
}

web::json::value AudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioIdIsSet_) {
        val[utility::conversions::to_string_t("audio_id")] = ModelBase::toJson(audioId_);
    }

    return val;
}
bool AudioInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioId(refVal);
        }
    }
    return ok;
}


int32_t AudioInfo::getAudioId() const
{
    return audioId_;
}

void AudioInfo::setAudioId(int32_t value)
{
    audioId_ = value;
    audioIdIsSet_ = true;
}

bool AudioInfo::audioIdIsSet() const
{
    return audioIdIsSet_;
}

void AudioInfo::unsetaudioId()
{
    audioIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/CreateTTSAReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTTSAReq::CreateTTSAReq()
{
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    scriptType_ = "";
    scriptTypeIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
    audioFileDownloadUrl_ = "";
    audioFileDownloadUrlIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
    emotion_ = "";
    emotionIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    cameraPosition_ = "";
    cameraPositionIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
}

CreateTTSAReq::~CreateTTSAReq() = default;

void CreateTTSAReq::validate()
{
}

web::json::value CreateTTSAReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceAssetIdIsSet_) {
        val[utility::conversions::to_string_t("voice_asset_id")] = ModelBase::toJson(voiceAssetId_);
    }
    if(scriptTypeIsSet_) {
        val[utility::conversions::to_string_t("script_type")] = ModelBase::toJson(scriptType_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(audioFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_download_url")] = ModelBase::toJson(audioFileDownloadUrl_);
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
    if(emotionIsSet_) {
        val[utility::conversions::to_string_t("emotion")] = ModelBase::toJson(emotion_);
    }
    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(cameraPositionIsSet_) {
        val[utility::conversions::to_string_t("camera_position")] = ModelBase::toJson(cameraPosition_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }

    return val;
}
bool CreateTTSAReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("script_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("emotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emotion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmotion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("camera_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("camera_position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCameraPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    return ok;
}


std::string CreateTTSAReq::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void CreateTTSAReq::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool CreateTTSAReq::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void CreateTTSAReq::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

std::string CreateTTSAReq::getScriptType() const
{
    return scriptType_;
}

void CreateTTSAReq::setScriptType(const std::string& value)
{
    scriptType_ = value;
    scriptTypeIsSet_ = true;
}

bool CreateTTSAReq::scriptTypeIsSet() const
{
    return scriptTypeIsSet_;
}

void CreateTTSAReq::unsetscriptType()
{
    scriptTypeIsSet_ = false;
}

std::string CreateTTSAReq::getText() const
{
    return text_;
}

void CreateTTSAReq::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool CreateTTSAReq::textIsSet() const
{
    return textIsSet_;
}

void CreateTTSAReq::unsettext()
{
    textIsSet_ = false;
}

std::string CreateTTSAReq::getAudioFileDownloadUrl() const
{
    return audioFileDownloadUrl_;
}

void CreateTTSAReq::setAudioFileDownloadUrl(const std::string& value)
{
    audioFileDownloadUrl_ = value;
    audioFileDownloadUrlIsSet_ = true;
}

bool CreateTTSAReq::audioFileDownloadUrlIsSet() const
{
    return audioFileDownloadUrlIsSet_;
}

void CreateTTSAReq::unsetaudioFileDownloadUrl()
{
    audioFileDownloadUrlIsSet_ = false;
}

int32_t CreateTTSAReq::getSpeed() const
{
    return speed_;
}

void CreateTTSAReq::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool CreateTTSAReq::speedIsSet() const
{
    return speedIsSet_;
}

void CreateTTSAReq::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t CreateTTSAReq::getPitch() const
{
    return pitch_;
}

void CreateTTSAReq::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool CreateTTSAReq::pitchIsSet() const
{
    return pitchIsSet_;
}

void CreateTTSAReq::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t CreateTTSAReq::getVolume() const
{
    return volume_;
}

void CreateTTSAReq::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateTTSAReq::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateTTSAReq::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateTTSAReq::getEmotion() const
{
    return emotion_;
}

void CreateTTSAReq::setEmotion(const std::string& value)
{
    emotion_ = value;
    emotionIsSet_ = true;
}

bool CreateTTSAReq::emotionIsSet() const
{
    return emotionIsSet_;
}

void CreateTTSAReq::unsetemotion()
{
    emotionIsSet_ = false;
}

std::string CreateTTSAReq::getStyleId() const
{
    return styleId_;
}

void CreateTTSAReq::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool CreateTTSAReq::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void CreateTTSAReq::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string CreateTTSAReq::getCameraPosition() const
{
    return cameraPosition_;
}

void CreateTTSAReq::setCameraPosition(const std::string& value)
{
    cameraPosition_ = value;
    cameraPositionIsSet_ = true;
}

bool CreateTTSAReq::cameraPositionIsSet() const
{
    return cameraPositionIsSet_;
}

void CreateTTSAReq::unsetcameraPosition()
{
    cameraPositionIsSet_ = false;
}

std::string CreateTTSAReq::getJobType() const
{
    return jobType_;
}

void CreateTTSAReq::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool CreateTTSAReq::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void CreateTTSAReq::unsetjobType()
{
    jobTypeIsSet_ = false;
}

}
}
}
}
}



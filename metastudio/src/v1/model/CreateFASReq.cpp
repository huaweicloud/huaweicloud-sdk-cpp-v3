

#include "huaweicloud/metastudio/v1/model/CreateFASReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateFASReq::CreateFASReq()
{
    audioFileDownloadUrl_ = "";
    audioFileDownloadUrlIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
    emotion_ = 0;
    emotionIsSet_ = false;
}

CreateFASReq::~CreateFASReq() = default;

void CreateFASReq::validate()
{
}

web::json::value CreateFASReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_download_url")] = ModelBase::toJson(audioFileDownloadUrl_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(emotionIsSet_) {
        val[utility::conversions::to_string_t("emotion")] = ModelBase::toJson(emotion_);
    }

    return val;
}
bool CreateFASReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emotion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmotion(refVal);
        }
    }
    return ok;
}


std::string CreateFASReq::getAudioFileDownloadUrl() const
{
    return audioFileDownloadUrl_;
}

void CreateFASReq::setAudioFileDownloadUrl(const std::string& value)
{
    audioFileDownloadUrl_ = value;
    audioFileDownloadUrlIsSet_ = true;
}

bool CreateFASReq::audioFileDownloadUrlIsSet() const
{
    return audioFileDownloadUrlIsSet_;
}

void CreateFASReq::unsetaudioFileDownloadUrl()
{
    audioFileDownloadUrlIsSet_ = false;
}

int32_t CreateFASReq::getFrameRate() const
{
    return frameRate_;
}

void CreateFASReq::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool CreateFASReq::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void CreateFASReq::unsetframeRate()
{
    frameRateIsSet_ = false;
}

int32_t CreateFASReq::getEmotion() const
{
    return emotion_;
}

void CreateFASReq::setEmotion(int32_t value)
{
    emotion_ = value;
    emotionIsSet_ = true;
}

bool CreateFASReq::emotionIsSet() const
{
    return emotionIsSet_;
}

void CreateFASReq::unsetemotion()
{
    emotionIsSet_ = false;
}

}
}
}
}
}



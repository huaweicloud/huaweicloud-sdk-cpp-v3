

#include "huaweicloud/metastudio/v1/model/CreateAsyncTtsJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsyncTtsJobRequestBody::CreateAsyncTtsJobRequestBody()
{
    text_ = "";
    textIsSet_ = false;
    ttsText_ = "";
    ttsTextIsSet_ = false;
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    needTimestamp_ = false;
    needTimestampIsSet_ = false;
    silenceFlag_ = false;
    silenceFlagIsSet_ = false;
    silenceTimeMs_ = 0;
    silenceTimeMsIsSet_ = false;
    callbackConfigIsSet_ = false;
    genSrt_ = false;
    genSrtIsSet_ = false;
    srtLen_ = 0L;
    srtLenIsSet_ = false;
    srtLineLimit_ = 0;
    srtLineLimitIsSet_ = false;
    sliceSegments_ = false;
    sliceSegmentsIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
    outputExternalUrl_ = "";
    outputExternalUrlIsSet_ = false;
    srtOutputExternalUrl_ = "";
    srtOutputExternalUrlIsSet_ = false;
    actionOutputExternalUrl_ = "";
    actionOutputExternalUrlIsSet_ = false;
    isVocabularyConfigEnable_ = false;
    isVocabularyConfigEnableIsSet_ = false;
    isConcurrentResource_ = false;
    isConcurrentResourceIsSet_ = false;
}

CreateAsyncTtsJobRequestBody::~CreateAsyncTtsJobRequestBody() = default;

void CreateAsyncTtsJobRequestBody::validate()
{
}

web::json::value CreateAsyncTtsJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(ttsTextIsSet_) {
        val[utility::conversions::to_string_t("tts_text")] = ModelBase::toJson(ttsText_);
    }
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
    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(needTimestampIsSet_) {
        val[utility::conversions::to_string_t("need_timestamp")] = ModelBase::toJson(needTimestamp_);
    }
    if(silenceFlagIsSet_) {
        val[utility::conversions::to_string_t("silence_flag")] = ModelBase::toJson(silenceFlag_);
    }
    if(silenceTimeMsIsSet_) {
        val[utility::conversions::to_string_t("silence_time_ms")] = ModelBase::toJson(silenceTimeMs_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }
    if(genSrtIsSet_) {
        val[utility::conversions::to_string_t("gen_srt")] = ModelBase::toJson(genSrt_);
    }
    if(srtLenIsSet_) {
        val[utility::conversions::to_string_t("srt_len")] = ModelBase::toJson(srtLen_);
    }
    if(srtLineLimitIsSet_) {
        val[utility::conversions::to_string_t("srt_line_limit")] = ModelBase::toJson(srtLineLimit_);
    }
    if(sliceSegmentsIsSet_) {
        val[utility::conversions::to_string_t("slice_segments")] = ModelBase::toJson(sliceSegments_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }
    if(outputExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("output_external_url")] = ModelBase::toJson(outputExternalUrl_);
    }
    if(srtOutputExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("srt_output_external_url")] = ModelBase::toJson(srtOutputExternalUrl_);
    }
    if(actionOutputExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("action_output_external_url")] = ModelBase::toJson(actionOutputExternalUrl_);
    }
    if(isVocabularyConfigEnableIsSet_) {
        val[utility::conversions::to_string_t("is_vocabulary_config_enable")] = ModelBase::toJson(isVocabularyConfigEnable_);
    }
    if(isConcurrentResourceIsSet_) {
        val[utility::conversions::to_string_t("is_concurrent_resource")] = ModelBase::toJson(isConcurrentResource_);
    }

    return val;
}
bool CreateAsyncTtsJobRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_timestamp"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("silence_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("silence_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSilenceFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("silence_time_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("silence_time_ms"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSilenceTimeMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            TtsCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gen_srt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gen_srt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenSrt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("srt_len"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("srt_len"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrtLen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("srt_line_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("srt_line_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrtLineLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slice_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slice_segments"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSliceSegments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputExternalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("srt_output_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("srt_output_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrtOutputExternalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_output_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_output_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionOutputExternalUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_concurrent_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_concurrent_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConcurrentResource(refVal);
        }
    }
    return ok;
}


std::string CreateAsyncTtsJobRequestBody::getText() const
{
    return text_;
}

void CreateAsyncTtsJobRequestBody::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::textIsSet() const
{
    return textIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsettext()
{
    textIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getTtsText() const
{
    return ttsText_;
}

void CreateAsyncTtsJobRequestBody::setTtsText(const std::string& value)
{
    ttsText_ = value;
    ttsTextIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::ttsTextIsSet() const
{
    return ttsTextIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetttsText()
{
    ttsTextIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void CreateAsyncTtsJobRequestBody::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getSpeed() const
{
    return speed_;
}

void CreateAsyncTtsJobRequestBody::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::speedIsSet() const
{
    return speedIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getPitch() const
{
    return pitch_;
}

void CreateAsyncTtsJobRequestBody::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::pitchIsSet() const
{
    return pitchIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getVolume() const
{
    return volume_;
}

void CreateAsyncTtsJobRequestBody::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getAudioFormat() const
{
    return audioFormat_;
}

void CreateAsyncTtsJobRequestBody::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isNeedTimestamp() const
{
    return needTimestamp_;
}

void CreateAsyncTtsJobRequestBody::setNeedTimestamp(bool value)
{
    needTimestamp_ = value;
    needTimestampIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::needTimestampIsSet() const
{
    return needTimestampIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetneedTimestamp()
{
    needTimestampIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isSilenceFlag() const
{
    return silenceFlag_;
}

void CreateAsyncTtsJobRequestBody::setSilenceFlag(bool value)
{
    silenceFlag_ = value;
    silenceFlagIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::silenceFlagIsSet() const
{
    return silenceFlagIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsilenceFlag()
{
    silenceFlagIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getSilenceTimeMs() const
{
    return silenceTimeMs_;
}

void CreateAsyncTtsJobRequestBody::setSilenceTimeMs(int32_t value)
{
    silenceTimeMs_ = value;
    silenceTimeMsIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::silenceTimeMsIsSet() const
{
    return silenceTimeMsIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsilenceTimeMs()
{
    silenceTimeMsIsSet_ = false;
}

TtsCallBackConfig CreateAsyncTtsJobRequestBody::getCallbackConfig() const
{
    return callbackConfig_;
}

void CreateAsyncTtsJobRequestBody::setCallbackConfig(const TtsCallBackConfig& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isGenSrt() const
{
    return genSrt_;
}

void CreateAsyncTtsJobRequestBody::setGenSrt(bool value)
{
    genSrt_ = value;
    genSrtIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::genSrtIsSet() const
{
    return genSrtIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetgenSrt()
{
    genSrtIsSet_ = false;
}

int64_t CreateAsyncTtsJobRequestBody::getSrtLen() const
{
    return srtLen_;
}

void CreateAsyncTtsJobRequestBody::setSrtLen(int64_t value)
{
    srtLen_ = value;
    srtLenIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::srtLenIsSet() const
{
    return srtLenIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsrtLen()
{
    srtLenIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getSrtLineLimit() const
{
    return srtLineLimit_;
}

void CreateAsyncTtsJobRequestBody::setSrtLineLimit(int32_t value)
{
    srtLineLimit_ = value;
    srtLineLimitIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::srtLineLimitIsSet() const
{
    return srtLineLimitIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsrtLineLimit()
{
    srtLineLimitIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isSliceSegments() const
{
    return sliceSegments_;
}

void CreateAsyncTtsJobRequestBody::setSliceSegments(bool value)
{
    sliceSegments_ = value;
    sliceSegmentsIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::sliceSegmentsIsSet() const
{
    return sliceSegmentsIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsliceSegments()
{
    sliceSegmentsIsSet_ = false;
}

int32_t CreateAsyncTtsJobRequestBody::getChannels() const
{
    return channels_;
}

void CreateAsyncTtsJobRequestBody::setChannels(int32_t value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::channelsIsSet() const
{
    return channelsIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetchannels()
{
    channelsIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getOutputExternalUrl() const
{
    return outputExternalUrl_;
}

void CreateAsyncTtsJobRequestBody::setOutputExternalUrl(const std::string& value)
{
    outputExternalUrl_ = value;
    outputExternalUrlIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::outputExternalUrlIsSet() const
{
    return outputExternalUrlIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetoutputExternalUrl()
{
    outputExternalUrlIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getSrtOutputExternalUrl() const
{
    return srtOutputExternalUrl_;
}

void CreateAsyncTtsJobRequestBody::setSrtOutputExternalUrl(const std::string& value)
{
    srtOutputExternalUrl_ = value;
    srtOutputExternalUrlIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::srtOutputExternalUrlIsSet() const
{
    return srtOutputExternalUrlIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetsrtOutputExternalUrl()
{
    srtOutputExternalUrlIsSet_ = false;
}

std::string CreateAsyncTtsJobRequestBody::getActionOutputExternalUrl() const
{
    return actionOutputExternalUrl_;
}

void CreateAsyncTtsJobRequestBody::setActionOutputExternalUrl(const std::string& value)
{
    actionOutputExternalUrl_ = value;
    actionOutputExternalUrlIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::actionOutputExternalUrlIsSet() const
{
    return actionOutputExternalUrlIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetactionOutputExternalUrl()
{
    actionOutputExternalUrlIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isIsVocabularyConfigEnable() const
{
    return isVocabularyConfigEnable_;
}

void CreateAsyncTtsJobRequestBody::setIsVocabularyConfigEnable(bool value)
{
    isVocabularyConfigEnable_ = value;
    isVocabularyConfigEnableIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::isVocabularyConfigEnableIsSet() const
{
    return isVocabularyConfigEnableIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetisVocabularyConfigEnable()
{
    isVocabularyConfigEnableIsSet_ = false;
}

bool CreateAsyncTtsJobRequestBody::isIsConcurrentResource() const
{
    return isConcurrentResource_;
}

void CreateAsyncTtsJobRequestBody::setIsConcurrentResource(bool value)
{
    isConcurrentResource_ = value;
    isConcurrentResourceIsSet_ = true;
}

bool CreateAsyncTtsJobRequestBody::isConcurrentResourceIsSet() const
{
    return isConcurrentResourceIsSet_;
}

void CreateAsyncTtsJobRequestBody::unsetisConcurrentResource()
{
    isConcurrentResourceIsSet_ = false;
}

}
}
}
}
}



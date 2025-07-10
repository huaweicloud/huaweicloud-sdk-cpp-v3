
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateAsyncTtsJobRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateAsyncTtsJobRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TtsCallBackConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 文本转语音任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateAsyncTtsJobRequestBody
    : public ModelBase
{
public:
    CreateAsyncTtsJobRequestBody();
    virtual ~CreateAsyncTtsJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAsyncTtsJobRequestBody members

    /// <summary>
    /// 待合成文本
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 发送给tts的待合成文本
    /// </summary>

    std::string getTtsText() const;
    bool ttsTextIsSet() const;
    void unsetttsText();
    void setTtsText(const std::string& value);

    /// <summary>
    /// 音色ID，获取方式详见[获取音色ID](metastudio_02_0054.xml)。  不同Region的计费标准详见[预置音色计费标准](metastudio_02_0060.xml)。
    /// </summary>

    std::string getVoiceAssetId() const;
    bool voiceAssetIdIsSet() const;
    void unsetvoiceAssetId();
    void setVoiceAssetId(const std::string& value);

    /// <summary>
    /// 语速。 * 当取值为“100”时，表示一个成年人正常的语速，约为250字/分钟。 * 50表示0.5倍语速，100表示正常语速，200表示2倍语速。
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 音高。
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量。
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);

    /// <summary>
    /// 输出音频文件格式。默认WAV。 * WAV：wav格式。 * MP3：mp3格式。
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 是否需要时间戳。false为不需要，true为需要返回时间戳信息。默认值为false。
    /// </summary>

    bool isNeedTimestamp() const;
    bool needTimestampIsSet() const;
    void unsetneedTimestamp();
    void setNeedTimestamp(bool value);

    /// <summary>
    /// 异常时是否返回静默音频流
    /// </summary>

    bool isSilenceFlag() const;
    bool silenceFlagIsSet() const;
    void unsetsilenceFlag();
    void setSilenceFlag(bool value);

    /// <summary>
    /// 异常时返回的静默音频流时长，单位毫秒。
    /// </summary>

    int32_t getSilenceTimeMs() const;
    bool silenceTimeMsIsSet() const;
    void unsetsilenceTimeMs();
    void setSilenceTimeMs(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TtsCallBackConfig getCallbackConfig() const;
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const TtsCallBackConfig& value);

    /// <summary>
    /// 是否开启字幕
    /// </summary>

    bool isGenSrt() const;
    bool genSrtIsSet() const;
    void unsetgenSrt();
    void setGenSrt(bool value);

    /// <summary>
    /// 字幕最大长度限制
    /// </summary>

    int64_t getSrtLen() const;
    bool srtLenIsSet() const;
    void unsetsrtLen();
    void setSrtLen(int64_t value);

    /// <summary>
    /// 字幕行数限制，默认为1
    /// </summary>

    int32_t getSrtLineLimit() const;
    bool srtLineLimitIsSet() const;
    void unsetsrtLineLimit();
    void setSrtLineLimit(int32_t value);

    /// <summary>
    /// 是否对文本进行分段
    /// </summary>

    bool isSliceSegments() const;
    bool sliceSegmentsIsSet() const;
    void unsetsliceSegments();
    void setSliceSegments(bool value);

    /// <summary>
    /// 声道。（单声道|双声道） 默认值1，最小值1，最大值2。
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);

    /// <summary>
    /// 音频文件上传的外部URL &gt; * 需要先申请开通白名单， 才允许将音频等文件上传到外部URL。
    /// </summary>

    std::string getOutputExternalUrl() const;
    bool outputExternalUrlIsSet() const;
    void unsetoutputExternalUrl();
    void setOutputExternalUrl(const std::string& value);

    /// <summary>
    /// 字幕文件上传的外部URL &gt; * 需要先申请开通白名单， 才允许将字幕等文件上传到外部URL。
    /// </summary>

    std::string getSrtOutputExternalUrl() const;
    bool srtOutputExternalUrlIsSet() const;
    void unsetsrtOutputExternalUrl();
    void setSrtOutputExternalUrl(const std::string& value);

    /// <summary>
    /// 动作信息文件上传的外部URL &gt; * 需要先申请开通白名单， 才允许将时间戳等文件上传到外部URL。
    /// </summary>

    std::string getActionOutputExternalUrl() const;
    bool actionOutputExternalUrlIsSet() const;
    void unsetactionOutputExternalUrl();
    void setActionOutputExternalUrl(const std::string& value);

    /// <summary>
    /// 是否应用当前租户的读法配置
    /// </summary>

    bool isIsVocabularyConfigEnable() const;
    bool isVocabularyConfigEnableIsSet() const;
    void unsetisVocabularyConfigEnable();
    void setIsVocabularyConfigEnable(bool value);

    /// <summary>
    /// 是否使用包周期路数资源进行计费
    /// </summary>

    bool isIsConcurrentResource() const;
    bool isConcurrentResourceIsSet() const;
    void unsetisConcurrentResource();
    void setIsConcurrentResource(bool value);

    /// <summary>
    /// 优先级（0-10），0为最高优先级，默认5
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    std::string text_;
    bool textIsSet_;
    std::string ttsText_;
    bool ttsTextIsSet_;
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;
    std::string audioFormat_;
    bool audioFormatIsSet_;
    bool needTimestamp_;
    bool needTimestampIsSet_;
    bool silenceFlag_;
    bool silenceFlagIsSet_;
    int32_t silenceTimeMs_;
    bool silenceTimeMsIsSet_;
    TtsCallBackConfig callbackConfig_;
    bool callbackConfigIsSet_;
    bool genSrt_;
    bool genSrtIsSet_;
    int64_t srtLen_;
    bool srtLenIsSet_;
    int32_t srtLineLimit_;
    bool srtLineLimitIsSet_;
    bool sliceSegments_;
    bool sliceSegmentsIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    std::string outputExternalUrl_;
    bool outputExternalUrlIsSet_;
    std::string srtOutputExternalUrl_;
    bool srtOutputExternalUrlIsSet_;
    std::string actionOutputExternalUrl_;
    bool actionOutputExternalUrlIsSet_;
    bool isVocabularyConfigEnable_;
    bool isVocabularyConfigEnableIsSet_;
    bool isConcurrentResource_;
    bool isConcurrentResourceIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateAsyncTtsJobRequestBody_H_

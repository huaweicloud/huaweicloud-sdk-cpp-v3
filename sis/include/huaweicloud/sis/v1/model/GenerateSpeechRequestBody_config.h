
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_config_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_config_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 语音合成配置信息。
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  GenerateSpeechRequestBody_config
    : public ModelBase
{
public:
    GenerateSpeechRequestBody_config();
    virtual ~GenerateSpeechRequestBody_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateSpeechRequestBody_config members

    /// <summary>
    /// 语音格式头：wav、mp3、pcm。 默认：wav
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 采样率：8kHz、16kHz、24kHz。 默认：24kHz
    /// </summary>

    std::string getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(const std::string& value);

    /// <summary>
    /// 音色名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// 语速：-500~500。 默认：0
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 音高：-500~500。 默认：0
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量：0~100。 默认：50
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);


protected:
    std::string audioFormat_;
    bool audioFormatIsSet_;
    std::string sampleRate_;
    bool sampleRateIsSet_;
    std::string voiceName_;
    bool voiceNameIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_config_H_

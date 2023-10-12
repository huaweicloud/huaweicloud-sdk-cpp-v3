
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioTemplateInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioTemplateInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板音频信息
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AudioTemplateInfo
    : public ModelBase
{
public:
    AudioTemplateInfo();
    virtual ~AudioTemplateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioTemplateInfo members

    /// <summary>
    /// 音频采样率(有效值范围) - 1：AUDIO_SAMPLE_AUTO - 2：AUDIO_SAMPLE_22050 - 3：AUDIO_SAMPLE_32000 - 4：AUDIO_SAMPLE_44100 - 5：AUDIO_SAMPLE_48000 - 6：AUDIO_SAMPLE_96000  默认值为1。
    /// </summary>

    int32_t getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(int32_t value);

    /// <summary>
    /// 音频码率（单位：Kbps）。
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 声道数(有效值范围) - 1：AUDIO_CHANNELS_1 - 2：AUDIO_CHANNELS_2
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);


protected:
    int32_t sampleRate_;
    bool sampleRateIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t channels_;
    bool channelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioTemplateInfo_H_

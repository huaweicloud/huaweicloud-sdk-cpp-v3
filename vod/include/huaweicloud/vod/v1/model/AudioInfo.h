
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AudioInfo
    : public ModelBase
{
public:
    AudioInfo();
    virtual ~AudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AudioInfo members

    /// <summary>
    /// 音频采样率(有效值范围)&lt;br/&gt; AUDIO_SAMPLE_AUTO (default), AUDIO_SAMPLE_22050：22050Hz&lt;br/&gt; AUDIO_SAMPLE_32000：32000Hz&lt;br/&gt; AUDIO_SAMPLE_44100：44100Hz&lt;br/&gt; AUDIO_SAMPLE_48000：48000Hz&lt;br/&gt; AUDIO_SAMPLE_96000：96000Hz&lt;br/&gt; 
    /// </summary>

    std::string getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(const std::string& value);

    /// <summary>
    /// 音频码率（单位：Kbps）&lt;br/&gt; 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 声道数(有效值范围)&lt;br/&gt; AUDIO_CHANNELS_1:单声道&lt;br/&gt; AUDIO_CHANNELS_2：双声道&lt;br/&gt; AUDIO_CHANNELS_5_1：5.1声道&lt;br/&gt; 
    /// </summary>

    std::string getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(const std::string& value);


protected:
    std::string sampleRate_;
    bool sampleRateIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    std::string channels_;
    bool channelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AudioInfo_H_

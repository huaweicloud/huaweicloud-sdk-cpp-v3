
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Audio_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Audio_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/mpc/v1/model/OutputPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  Audio
    : public ModelBase
{
public:
    Audio();
    virtual ~Audio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Audio members

    /// <summary>
    /// 输出策略。  取值如下： - discard - transcode  &gt;- 当视频参数中的“output_policy”为\&quot;discard\&quot;，且音频参数中的“output_policy”为“transcode”时，表示只输出音频。 &gt;- 当视频参数中的“output_policy”为\&quot;transcode\&quot;，且音频参数中的“output_policy”为“discard”时，表示只输出视频。 &gt;- 同时为\&quot;discard\&quot;时不合法。 &gt;- 同时为“transcode”时，表示输出音视频。 
    /// </summary>

    std::string getOutputPolicy() const;
    bool outputPolicyIsSet() const;
    void unsetoutputPolicy();
    void setOutputPolicy(const std::string& value);

    /// <summary>
    /// 音频编码格式。  取值如下：  - 1：AAC格式。 - 2：HEAAC1格式 。 - 3：HEAAC2格式。 - 4：MP3格式 。 
    /// </summary>

    int32_t getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(int32_t value);

    /// <summary>
    /// 音频采样率。  取值如下：  - 1：AUDIO_SAMPLE_AUTO - 2：AUDIO_SAMPLE_22050（22050Hz） - 3：AUDIO_SAMPLE_32000（32000Hz） - 4：AUDIO_SAMPLE_44100（44100Hz） - 5：AUDIO_SAMPLE_48000（48000Hz） - 6：AUDIO_SAMPLE_96000（96000Hz） 
    /// </summary>

    int32_t getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(int32_t value);

    /// <summary>
    /// 音频码率。  取值范围：0或[8,1000]。  单位：kbit/s。 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 声道数。  取值如下： - 1：AUDIO_CHANNELS_1 - 2：AUDIO_CHANNELS_2 - 6：AUDIO_CHANNELS_5_1 
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);


protected:
    std::string outputPolicy_;
    bool outputPolicyIsSet_;
    int32_t codec_;
    bool codecIsSet_;
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

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Audio_H_

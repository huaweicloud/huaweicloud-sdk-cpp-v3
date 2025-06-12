
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音频元数据，自动提取获得。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AudioAssetMeta
    : public ModelBase
{
public:
    AudioAssetMeta();
    virtual ~AudioAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioAssetMeta members

    /// <summary>
    /// **参数解释**： 时长,单位秒。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释**： 音频编码格式。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及
    /// </summary>

    std::string getAudioCodec() const;
    bool audioCodecIsSet() const;
    void unsetaudioCodec();
    void setAudioCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 音频平均码率,单位kbps。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getAudioBitRate() const;
    bool audioBitRateIsSet() const;
    void unsetaudioBitRate();
    void setAudioBitRate(int32_t value);

    /// <summary>
    /// **参数解释**： 音频声道数。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getAudioChannels() const;
    bool audioChannelsIsSet() const;
    void unsetaudioChannels();
    void setAudioChannels(int32_t value);

    /// <summary>
    /// **参数解释**： 采样率,HZ。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    std::string audioCodec_;
    bool audioCodecIsSet_;
    int32_t audioBitRate_;
    bool audioBitRateIsSet_;
    int32_t audioChannels_;
    bool audioChannelsIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioAssetMeta_H_

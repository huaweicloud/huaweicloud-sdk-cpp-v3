
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 语音配置参数。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceConfig
    : public ModelBase
{
public:
    VoiceConfig();
    virtual ~VoiceConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceConfig members

    /// <summary>
    /// **参数解释**： 音色资产ID，可以从资产库中查询。 音色ID的查询操作，详见[查询预置音色ID](metastudio_02_0054.xml)。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getVoiceAssetId() const;
    bool voiceAssetIdIsSet() const;
    void unsetvoiceAssetId();
    void setVoiceAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 语速。50表示0.5倍语速，100表示正常语速，200表示2倍语速。 当取值为“100”时，表示一个成年人的正常语速，约为250字/分钟。  **约束限制**： 不涉及。
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// **参数解释**： 音高。 **约束限制**： 不涉及。
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// **参数解释**： 音量。 **约束限制**： 不涉及。
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);


protected:
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceConfig_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceModelAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceModelAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VoiceLanguage.h>
#include <huaweicloud/metastudio/v1/model/VoiceCapability.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ExternalVoiceAssetMeta.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音色模型元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceModelAssetMeta
    : public ModelBase
{
public:
    VoiceModelAssetMeta();
    virtual ~VoiceModelAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceModelAssetMeta members

    /// <summary>
    /// **参数解释**： 展示顺序。 **约束限制**： 不涉及。
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// **参数解释**： 声音资产类型。 **约束限制**： 不涉及。 **取值范围**： * COMMON：通用情感模型 * CLONE：语音克隆模型
    /// </summary>

    std::string getModelType() const;
    bool modelTypeIsSet() const;
    void unsetmodelType();
    void setModelType(const std::string& value);

    /// <summary>
    /// **参数解释**： 声音性别。 **约束限制**： 不涉及。 **取值范围**： * UNKNOW：未知性别声音 * MALE：男性声音 * FEMALE：女性声音
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// **参数解释**： 声音语言。 **约束限制**： 不涉及。 **取值范围**： * UNKNOW：未知 * CN：中文 * EN：英文 * GER：德语 * fr：法语 * Kr：韩语 * por：葡萄牙语 * JPN：日语 * Ita：意大利语 * ESP：西班牙语 * DBH：东北话 * GT：港台 * GXH：广西话 * HBH：湖北话 * SXH：陕西话 * SCH：四川话 * YY：粤语 * Russian: 俄罗斯语 * Filipino: 菲律宾语 * Dutch: 荷兰语 * Indonesian: 印尼语 * Vietnamese: 越南语 * Arabic: 阿拉伯语 * Turkish: 土耳其语 * Malay: 马来语 * Thai: 泰语 * Finnish: 芬兰语
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**： 声音语言。 **约束限制**： 不涉及。 **取值范围**： * UNKNOW：未知 * CN：中文 * EN：英文 * GER：德语 * fr：法语 * Kr：韩语 * por：葡萄牙语 * JPN：日语 * Ita：意大利语 * ESP：西班牙语 * DBH：东北话 * GT：港台 * GXH：广西话 * HBH：湖北话 * SXH：陕西话 * SCH：四川话 * YY：粤语 * Russian: 俄罗斯语 * Filipino: 菲律宾语 * Dutch: 荷兰语 * Indonesian: 印尼语 * Vietnamese: 越南语 * Arabic: 阿拉伯语 * Turkish: 土耳其语 * Malay: 马来语 * Thai: 泰语 * Finnish: 芬兰语
    /// </summary>

    std::vector<VoiceLanguage>& getLanguages();
    bool languagesIsSet() const;
    void unsetlanguages();
    void setLanguages(const std::vector<VoiceLanguage>& value);

    /// <summary>
    /// **参数解释**： 语速缩放比例。 **约束限制**： 不涉及
    /// </summary>

    float getSpeedRatio() const;
    bool speedRatioIsSet() const;
    void unsetspeedRatio();
    void setSpeedRatio(float value);

    /// <summary>
    /// **参数解释**： 音量缩放比例。 **约束限制**： 不涉及
    /// </summary>

    float getVolumeRatio() const;
    bool volumeRatioIsSet() const;
    void unsetvolumeRatio();
    void setVolumeRatio(float value);

    /// <summary>
    /// **参数解释**： 该音色是否支持实时合成。 **约束限制**： 支持实时合成的音色，可以用于直播和智能交互场景。否则只能用于视频制作。 **取值范围**： * true: 支持实时合成 * false: 不支持实时合成
    /// </summary>

    bool isIsRealtimeVoice() const;
    bool isRealtimeVoiceIsSet() const;
    void unsetisRealtimeVoice();
    void setIsRealtimeVoice(bool value);

    /// <summary>
    /// 风格参考
    /// </summary>

    std::string getStyle() const;
    bool styleIsSet() const;
    void unsetstyle();
    void setStyle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceCapability getVoiceCapability() const;
    bool voiceCapabilityIsSet() const;
    void unsetvoiceCapability();
    void setVoiceCapability(const VoiceCapability& value);

    /// <summary>
    /// 
    /// </summary>

    ExternalVoiceAssetMeta getExternalVoiceMeta() const;
    bool externalVoiceMetaIsSet() const;
    void unsetexternalVoiceMeta();
    void setExternalVoiceMeta(const ExternalVoiceAssetMeta& value);

    /// <summary>
    /// 是否支持vc。
    /// </summary>

    bool isIsSupportVcProcess() const;
    bool isSupportVcProcessIsSet() const;
    void unsetisSupportVcProcess();
    void setIsSupportVcProcess(bool value);

    /// <summary>
    /// 是否支持泰语文本自动分句。
    /// </summary>

    bool isIsSupportThaiAutoSplit() const;
    bool isSupportThaiAutoSplitIsSet() const;
    void unsetisSupportThaiAutoSplit();
    void setIsSupportThaiAutoSplit(bool value);

    /// <summary>
    /// 是否是Flexus版本声音。
    /// </summary>

    bool isIsFlexus() const;
    bool isFlexusIsSet() const;
    void unsetisFlexus();
    void setIsFlexus(bool value);


protected:
    int32_t order_;
    bool orderIsSet_;
    std::string modelType_;
    bool modelTypeIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::vector<VoiceLanguage> languages_;
    bool languagesIsSet_;
    float speedRatio_;
    bool speedRatioIsSet_;
    float volumeRatio_;
    bool volumeRatioIsSet_;
    bool isRealtimeVoice_;
    bool isRealtimeVoiceIsSet_;
    std::string style_;
    bool styleIsSet_;
    VoiceCapability voiceCapability_;
    bool voiceCapabilityIsSet_;
    ExternalVoiceAssetMeta externalVoiceMeta_;
    bool externalVoiceMetaIsSet_;
    bool isSupportVcProcess_;
    bool isSupportVcProcessIsSet_;
    bool isSupportThaiAutoSplit_;
    bool isSupportThaiAutoSplitIsSet_;
    bool isFlexus_;
    bool isFlexusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceModelAssetMeta_H_

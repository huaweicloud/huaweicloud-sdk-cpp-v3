
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceCapability_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceCapability_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音色资产支持的能力集。 &gt; 音色能力集只允许查询，不允许设置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceCapability
    : public ModelBase
{
public:
    VoiceCapability();
    virtual ~VoiceCapability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceCapability members

    /// <summary>
    /// **参数解释**： 该声音是否支持英文音标。 **约束限制**： 不涉及 **取值范围**： * true: 支持英文音标 * false: 不支持英文音标
    /// </summary>

    bool isIsSupportPhonemeEn() const;
    bool isSupportPhonemeEnIsSet() const;
    void unsetisSupportPhonemeEn();
    void setIsSupportPhonemeEn(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持中文多音字。 **约束限制**： 不涉及 **取值范围**： * true: 支持中文多音字 * false: 不支持中文多音字
    /// </summary>

    bool isIsSupportPhoneme() const;
    bool isSupportPhonemeIsSet() const;
    void unsetisSupportPhoneme();
    void setIsSupportPhoneme(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持停顿。 **约束限制**： 不涉及 **取值范围**： * true: 支持停顿 * false: 不支持停顿
    /// </summary>

    bool isIsSupportBreakTime() const;
    bool isSupportBreakTimeIsSet() const;
    void unsetisSupportBreakTime();
    void setIsSupportBreakTime(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持韵律。 **约束限制**： 不涉及 **取值范围**： * true: 支持韵律 * false: 不支持韵律
    /// </summary>

    bool isIsSupportBreakStrength() const;
    bool isSupportBreakStrengthIsSet() const;
    void unsetisSupportBreakStrength();
    void setIsSupportBreakStrength(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持全局语速。 **约束限制**： 不涉及 **取值范围**： * true: 支持全局语速 * false: 不支持全局语速
    /// </summary>

    bool isIsSupportSpeed() const;
    bool isSupportSpeedIsSet() const;
    void unsetisSupportSpeed();
    void setIsSupportSpeed(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持局部语速。 **约束限制**： 不涉及 **取值范围**： * true: 支持局部语速 * false: 不支持局部语速
    /// </summary>

    bool isIsSupportProsody() const;
    bool isSupportProsodyIsSet() const;
    void unsetisSupportProsody();
    void setIsSupportProsody(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持SSML的say-as标签。 **约束限制**： 不涉及 **取值范围**： * true: 支持SSML的say-as标签 * false: 不支持SSML的say-as标签
    /// </summary>

    bool isIsSupportSsmlSayAs() const;
    bool isSupportSsmlSayAsIsSet() const;
    void unsetisSupportSsmlSayAs();
    void setIsSupportSsmlSayAs(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持SSML的sub标签。 **约束限制**： 不涉及 **取值范围**： * true: 支持SSML的sub标签 * false: 不支持SSML的sub标签
    /// </summary>

    bool isIsSupportSsmlSub() const;
    bool isSupportSsmlSubIsSet() const;
    void unsetisSupportSsmlSub();
    void setIsSupportSsmlSub(bool value);

    /// <summary>
    /// **参数解释**： 该声音是否支持连读。 **约束限制**： 不涉及 **取值范围**： * true: 支持连读 * false: 不支持连读
    /// </summary>

    bool isIsSupportWord() const;
    bool isSupportWordIsSet() const;
    void unsetisSupportWord();
    void setIsSupportWord(bool value);

    /// <summary>
    /// 是否支持缓存。
    /// </summary>

    bool isIsSupportVoiceCache() const;
    bool isSupportVoiceCacheIsSet() const;
    void unsetisSupportVoiceCache();
    void setIsSupportVoiceCache(bool value);

    /// <summary>
    /// **参数解释**： 合成率。 **约束限制**： 不涉及 **取值范围**： * 0-50
    /// </summary>

    float getConversionRate() const;
    bool conversionRateIsSet() const;
    void unsetconversionRate();
    void setConversionRate(float value);

    /// <summary>
    /// **参数解释**： 英语的合成率。 **约束限制**： 不涉及 **取值范围**： * 0-50
    /// </summary>

    float getConversionRateEn() const;
    bool conversionRateEnIsSet() const;
    void unsetconversionRateEn();
    void setConversionRateEn(float value);

    /// <summary>
    /// 是否支持生成STR字幕文件。
    /// </summary>

    bool isIsSupportSrt() const;
    bool isSupportSrtIsSet() const;
    void unsetisSupportSrt();
    void setIsSupportSrt(bool value);


protected:
    bool isSupportPhonemeEn_;
    bool isSupportPhonemeEnIsSet_;
    bool isSupportPhoneme_;
    bool isSupportPhonemeIsSet_;
    bool isSupportBreakTime_;
    bool isSupportBreakTimeIsSet_;
    bool isSupportBreakStrength_;
    bool isSupportBreakStrengthIsSet_;
    bool isSupportSpeed_;
    bool isSupportSpeedIsSet_;
    bool isSupportProsody_;
    bool isSupportProsodyIsSet_;
    bool isSupportSsmlSayAs_;
    bool isSupportSsmlSayAsIsSet_;
    bool isSupportSsmlSub_;
    bool isSupportSsmlSubIsSet_;
    bool isSupportWord_;
    bool isSupportWordIsSet_;
    bool isSupportVoiceCache_;
    bool isSupportVoiceCacheIsSet_;
    float conversionRate_;
    bool conversionRateIsSet_;
    float conversionRateEn_;
    bool conversionRateEnIsSet_;
    bool isSupportSrt_;
    bool isSupportSrtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceCapability_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/TriggerProcess.h>
#include <huaweicloud/metastudio/v1/model/HitCondition.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 互动规则配置信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InteractionRuleInfo
    : public ModelBase
{
public:
    InteractionRuleInfo();
    virtual ~InteractionRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InteractionRuleInfo members

    /// <summary>
    /// **参数解释**： 规则索引。用于触发规则时索引具体规则。 **约束限制**： 无需用户填写。 **取值范围**： 字符0-64位 **默认取值**： 不涉及。
    /// </summary>

    std::string getRuleIndex() const;
    bool ruleIndexIsSet() const;
    void unsetruleIndex();
    void setRuleIndex(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则名称。 **约束限制**： 不涉及。 **取值范围**： 字符0-256位 **默认取值**： 不涉及。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否启用。 **约束限制**： 不涉及。 **取值范围**： * true：启用 * fasle：不启用  **默认取值**： true
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释**： 规则匹配直播事件类型。接口的取值范围[0,100]，实际业务取值如下所示： * 1：弹幕事件  * 2：用户入场事件  * 3：用户点赞事件 * 4：用户送礼事件  * 10: 预置话术事件  请以实际业务取值为准。 &gt; * 1,2,3,4：与LiveEventReport中的event.type对应。 &gt; * 10：匹配预置剧本  **约束限制**： 不涉及。 **默认取值**： 不涉及
    /// </summary>

    int32_t getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    HitCondition getHitCondition() const;
    bool hitConditionIsSet() const;
    void unsethitCondition();
    void setHitCondition(const HitCondition& value);

    /// <summary>
    /// 
    /// </summary>

    TriggerProcess getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const TriggerProcess& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);


protected:
    std::string ruleIndex_;
    bool ruleIndexIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    int32_t eventType_;
    bool eventTypeIsSet_;
    HitCondition hitCondition_;
    bool hitConditionIsSet_;
    TriggerProcess trigger_;
    bool triggerIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleInfo_H_

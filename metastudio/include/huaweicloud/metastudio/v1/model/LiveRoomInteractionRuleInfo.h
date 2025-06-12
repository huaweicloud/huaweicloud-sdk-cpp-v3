
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionRuleInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionRuleInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/InteractionRuleInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/TriggerProcess.h>
#include <huaweicloud/metastudio/v1/model/HitCondition.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播使用互动规则配置信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveRoomInteractionRuleInfo
    : public ModelBase
{
public:
    LiveRoomInteractionRuleInfo();
    virtual ~LiveRoomInteractionRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveRoomInteractionRuleInfo members

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

    /// <summary>
    /// **参数解释**： 互动规则库ID。从互动库导入时携带互动库ID。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 互动规则库名称。从互动库导入时携带互动库名称。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则启用场景。启用部分场景时填写。如果不填写则适用所有场景。 **约束限制**： 不涉及。 **取值范围**： 对应直播间场景列表，最大100个场景，这边也对应100个。 条目填写场景名称，字符长度1-256。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getEnabledScenes();
    bool enabledScenesIsSet() const;
    void unsetenabledScenes();
    void setEnabledScenes(const std::vector<std::string>& value);


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
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::vector<std::string> enabledScenes_;
    bool enabledScenesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionRuleInfo_H_

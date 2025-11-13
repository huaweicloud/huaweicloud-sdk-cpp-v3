
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractionRuleReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractionRuleReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/TriggerProcess.h>
#include <huaweicloud/metastudio/v1/model/HitCondition.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单条互动规则增加请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateInteractionRuleReq
    : public ModelBase
{
public:
    CreateInteractionRuleReq();
    virtual ~CreateInteractionRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInteractionRuleReq members

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 事件类型。 * 1：弹幕事件 * 2：用户入场事件 * 3：用户点赞事件 * 4：用户送礼事件 * 10: 预置话术事件
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


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t eventType_;
    bool eventTypeIsSet_;
    HitCondition hitCondition_;
    bool hitConditionIsSet_;
    TriggerProcess trigger_;
    bool triggerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractionRuleReq_H_


#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/SqlNotificationSaveRule.h>
#include <huaweicloud/lts/v2/model/KeywordsRequest.h>
#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/Frequency.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateKeywordsAlarmRuleRequestBody
    : public ModelBase
{
public:
    UpdateKeywordsAlarmRuleRequestBody();
    virtual ~UpdateKeywordsAlarmRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeywordsAlarmRuleRequestBody members

    /// <summary>
    /// 关键词告警规则id
    /// </summary>

    std::string getKeywordsAlarmRuleId() const;
    bool keywordsAlarmRuleIdIsSet() const;
    void unsetkeywordsAlarmRuleId();
    void setKeywordsAlarmRuleId(const std::string& value);

    /// <summary>
    /// 关键词告警名称
    /// </summary>

    std::string getKeywordsAlarmRuleName() const;
    bool keywordsAlarmRuleNameIsSet() const;
    void unsetkeywordsAlarmRuleName();
    void setKeywordsAlarmRuleName(const std::string& value);

    /// <summary>
    /// 关键词告警信息描述
    /// </summary>

    std::string getKeywordsAlarmRuleDescription() const;
    bool keywordsAlarmRuleDescriptionIsSet() const;
    void unsetkeywordsAlarmRuleDescription();
    void setKeywordsAlarmRuleDescription(const std::string& value);

    /// <summary>
    /// 关键词详细信息
    /// </summary>

    std::vector<KeywordsRequest>& getKeywordsRequests();
    bool keywordsRequestsIsSet() const;
    void unsetkeywordsRequests();
    void setKeywordsRequests(const std::vector<KeywordsRequest>& value);

    /// <summary>
    /// 
    /// </summary>

    Frequency getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const Frequency& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    std::string getKeywordsAlarmLevel() const;
    bool keywordsAlarmLevelIsSet() const;
    void unsetkeywordsAlarmLevel();
    void setKeywordsAlarmLevel(const std::string& value);

    /// <summary>
    /// 是否发送
    /// </summary>

    bool isKeywordsAlarmSend() const;
    bool keywordsAlarmSendIsSet() const;
    void unsetkeywordsAlarmSend();
    void setKeywordsAlarmSend(bool value);

    /// <summary>
    /// 发送主题 0:不变 1:新增 2:修改 3:删除
    /// </summary>

    int32_t getKeywordsAlarmSendCode() const;
    bool keywordsAlarmSendCodeIsSet() const;
    void unsetkeywordsAlarmSendCode();
    void setKeywordsAlarmSendCode(int32_t value);

    /// <summary>
    /// domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SqlNotificationSaveRule getNotificationSaveRule() const;
    bool notificationSaveRuleIsSet() const;
    void unsetnotificationSaveRule();
    void setNotificationSaveRule(const SqlNotificationSaveRule& value);

    /// <summary>
    /// 触发条件：触发次数;默认为1
    /// </summary>

    int32_t getTriggerConditionCount() const;
    bool triggerConditionCountIsSet() const;
    void unsettriggerConditionCount();
    void setTriggerConditionCount(int32_t value);

    /// <summary>
    /// 触发条件：触发周期;默认为1
    /// </summary>

    int32_t getTriggerConditionFrequency() const;
    bool triggerConditionFrequencyIsSet() const;
    void unsettriggerConditionFrequency();
    void setTriggerConditionFrequency(int32_t value);

    /// <summary>
    /// 是否打开恢复通知;默认false
    /// </summary>

    bool isWhetherRecoveryPolicy() const;
    bool whetherRecoveryPolicyIsSet() const;
    void unsetwhetherRecoveryPolicy();
    void setWhetherRecoveryPolicy(bool value);

    /// <summary>
    /// 恢复策略周期;默认为3
    /// </summary>

    int32_t getRecoveryPolicy() const;
    bool recoveryPolicyIsSet() const;
    void unsetrecoveryPolicy();
    void setRecoveryPolicy(int32_t value);

    /// <summary>
    /// 通知频率,单位(分钟)
    /// </summary>

    int32_t getNotificationFrequency() const;
    bool notificationFrequencyIsSet() const;
    void unsetnotificationFrequency();
    void setNotificationFrequency(int32_t value);

    /// <summary>
    /// 告警行动规则名称 &gt;alarm_action_rule_name和notification_save_rule可以选填一个，如果都填，优先选择alarm_action_rule_name
    /// </summary>

    std::string getAlarmActionRuleName() const;
    bool alarmActionRuleNameIsSet() const;
    void unsetalarmActionRuleName();
    void setAlarmActionRuleName(const std::string& value);


protected:
    std::string keywordsAlarmRuleId_;
    bool keywordsAlarmRuleIdIsSet_;
    std::string keywordsAlarmRuleName_;
    bool keywordsAlarmRuleNameIsSet_;
    std::string keywordsAlarmRuleDescription_;
    bool keywordsAlarmRuleDescriptionIsSet_;
    std::vector<KeywordsRequest> keywordsRequests_;
    bool keywordsRequestsIsSet_;
    Frequency frequency_;
    bool frequencyIsSet_;
    std::string keywordsAlarmLevel_;
    bool keywordsAlarmLevelIsSet_;
    bool keywordsAlarmSend_;
    bool keywordsAlarmSendIsSet_;
    int32_t keywordsAlarmSendCode_;
    bool keywordsAlarmSendCodeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    SqlNotificationSaveRule notificationSaveRule_;
    bool notificationSaveRuleIsSet_;
    int32_t triggerConditionCount_;
    bool triggerConditionCountIsSet_;
    int32_t triggerConditionFrequency_;
    bool triggerConditionFrequencyIsSet_;
    bool whetherRecoveryPolicy_;
    bool whetherRecoveryPolicyIsSet_;
    int32_t recoveryPolicy_;
    bool recoveryPolicyIsSet_;
    int32_t notificationFrequency_;
    bool notificationFrequencyIsSet_;
    std::string alarmActionRuleName_;
    bool alarmActionRuleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequestBody_H_

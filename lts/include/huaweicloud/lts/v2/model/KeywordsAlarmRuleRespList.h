
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmRuleRespList_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmRuleRespList_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Topics.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  KeywordsAlarmRuleRespList
    : public ModelBase
{
public:
    KeywordsAlarmRuleRespList();
    virtual ~KeywordsAlarmRuleRespList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeywordsAlarmRuleRespList members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 关键词告警id
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
    /// 条件
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

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
    /// domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 创建时间(毫秒时间戳)
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间(毫秒时间戳)
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 主题
    /// </summary>

    std::vector<Topics>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<Topics>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

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


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string keywordsAlarmRuleId_;
    bool keywordsAlarmRuleIdIsSet_;
    std::string keywordsAlarmRuleName_;
    bool keywordsAlarmRuleNameIsSet_;
    std::string keywordsAlarmRuleDescription_;
    bool keywordsAlarmRuleDescriptionIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::vector<KeywordsRequest> keywordsRequests_;
    bool keywordsRequestsIsSet_;
    Frequency frequency_;
    bool frequencyIsSet_;
    std::string keywordsAlarmLevel_;
    bool keywordsAlarmLevelIsSet_;
    bool keywordsAlarmSend_;
    bool keywordsAlarmSendIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t triggerConditionCount_;
    bool triggerConditionCountIsSet_;
    int32_t triggerConditionFrequency_;
    bool triggerConditionFrequencyIsSet_;
    bool whetherRecoveryPolicy_;
    bool whetherRecoveryPolicyIsSet_;
    int32_t recoveryPolicy_;
    bool recoveryPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmRuleRespList_H_

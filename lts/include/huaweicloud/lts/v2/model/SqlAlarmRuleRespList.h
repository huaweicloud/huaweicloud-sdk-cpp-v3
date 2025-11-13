
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlAlarmRuleRespList_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlAlarmRuleRespList_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/TagsResBody.h>
#include <huaweicloud/lts/v2/model/Topics.h>
#include <string>
#include <huaweicloud/lts/v2/model/FrequencyRespBody.h>
#include <huaweicloud/lts/v2/model/SqlRequestResponse.h>
#include <vector>

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
class HUAWEICLOUD_LTS_V2_EXPORT  SqlAlarmRuleRespList
    : public ModelBase
{
public:
    SqlAlarmRuleRespList();
    virtual ~SqlAlarmRuleRespList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlAlarmRuleRespList members

    /// <summary>
    /// SQL告警名称
    /// </summary>

    std::string getSqlAlarmRuleName() const;
    bool sqlAlarmRuleNameIsSet() const;
    void unsetsqlAlarmRuleName();
    void setSqlAlarmRuleName(const std::string& value);

    /// <summary>
    /// 是否管道符sql查询
    /// </summary>

    bool isIsCssSql() const;
    bool isCssSqlIsSet() const;
    void unsetisCssSql();
    void setIsCssSql(bool value);

    /// <summary>
    /// SQL告警规则id
    /// </summary>

    std::string getSqlAlarmRuleId() const;
    bool sqlAlarmRuleIdIsSet() const;
    void unsetsqlAlarmRuleId();
    void setSqlAlarmRuleId(const std::string& value);

    /// <summary>
    /// SQL告警信息描述
    /// </summary>

    std::string getSqlAlarmRuleDescription() const;
    bool sqlAlarmRuleDescriptionIsSet() const;
    void unsetsqlAlarmRuleDescription();
    void setSqlAlarmRuleDescription(const std::string& value);

    /// <summary>
    /// SQL详细信息
    /// </summary>

    std::vector<SqlRequestResponse>& getSqlRequests();
    bool sqlRequestsIsSet() const;
    void unsetsqlRequests();
    void setSqlRequests(const std::vector<SqlRequestResponse>& value);

    /// <summary>
    /// 
    /// </summary>

    FrequencyRespBody getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const FrequencyRespBody& value);

    /// <summary>
    /// 条件表达式
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

    /// <summary>
    /// 主题信息
    /// </summary>

    std::vector<Topics>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<Topics>& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    std::string getSqlAlarmLevel() const;
    bool sqlAlarmLevelIsSet() const;
    void unsetsqlAlarmLevel();
    void setSqlAlarmLevel(const std::string& value);

    /// <summary>
    /// domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 创建时间（毫秒时间戳）
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间（毫秒时间戳）
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 消息模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 告警状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 触发条件：触发周期;默认为1
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

    /// <summary>
    /// **参数解释：** 告警标签信息。
    /// </summary>

    std::vector<TagsResBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsResBody>& value);


protected:
    std::string sqlAlarmRuleName_;
    bool sqlAlarmRuleNameIsSet_;
    bool isCssSql_;
    bool isCssSqlIsSet_;
    std::string sqlAlarmRuleId_;
    bool sqlAlarmRuleIdIsSet_;
    std::string sqlAlarmRuleDescription_;
    bool sqlAlarmRuleDescriptionIsSet_;
    std::vector<SqlRequestResponse> sqlRequests_;
    bool sqlRequestsIsSet_;
    FrequencyRespBody frequency_;
    bool frequencyIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;
    std::string sqlAlarmLevel_;
    bool sqlAlarmLevelIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
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
    int32_t notificationFrequency_;
    bool notificationFrequencyIsSet_;
    std::string alarmActionRuleName_;
    bool alarmActionRuleNameIsSet_;
    std::vector<TagsResBody> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlAlarmRuleRespList_H_

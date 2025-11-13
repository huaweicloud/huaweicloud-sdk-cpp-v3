
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSqlAlarmRuleRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSqlAlarmRuleRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateSqlAlarmRuleFrequency.h>
#include <huaweicloud/lts/v2/model/TagsRequestBody.h>
#include <huaweicloud/lts/v2/model/SqlRequest.h>
#include <string>
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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateSqlAlarmRuleRequestBody
    : public ModelBase
{
public:
    CreateSqlAlarmRuleRequestBody();
    virtual ~CreateSqlAlarmRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSqlAlarmRuleRequestBody members

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
    /// SQL告警信息描述
    /// </summary>

    std::string getSqlAlarmRuleDescription() const;
    bool sqlAlarmRuleDescriptionIsSet() const;
    void unsetsqlAlarmRuleDescription();
    void setSqlAlarmRuleDescription(const std::string& value);

    /// <summary>
    /// SQL详细信息
    /// </summary>

    std::vector<SqlRequest>& getSqlRequests();
    bool sqlRequestsIsSet() const;
    void unsetsqlRequests();
    void setSqlRequests(const std::vector<SqlRequest>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSqlAlarmRuleFrequency getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const CreateSqlAlarmRuleFrequency& value);

    /// <summary>
    /// 条件表达式
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

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

    /// <summary>
    /// **参数解释：** 告警标签信息。标签是以键值对（key-value）的形式表示，key和value为一一对应关系。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<TagsRequestBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsRequestBody>& value);

    /// <summary>
    /// **参数解释：** 企业项目id信息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string sqlAlarmRuleName_;
    bool sqlAlarmRuleNameIsSet_;
    bool isCssSql_;
    bool isCssSqlIsSet_;
    std::string sqlAlarmRuleDescription_;
    bool sqlAlarmRuleDescriptionIsSet_;
    std::vector<SqlRequest> sqlRequests_;
    bool sqlRequestsIsSet_;
    CreateSqlAlarmRuleFrequency frequency_;
    bool frequencyIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::string sqlAlarmLevel_;
    bool sqlAlarmLevelIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
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
    std::vector<TagsRequestBody> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSqlAlarmRuleRequestBody_H_

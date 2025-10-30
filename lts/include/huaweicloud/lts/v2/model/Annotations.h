
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/Results.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  Annotations
    : public ModelBase
{
public:
    Annotations();
    virtual ~Annotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Annotations members

    /// <summary>
    /// 告警列表详情
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 日志组/流id,名称
    /// </summary>

    std::string getLogInfo() const;
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const std::string& value);

    /// <summary>
    /// 当前值
    /// </summary>

    std::string getCurrentValue() const;
    bool currentValueIsSet() const;
    void unsetcurrentValue();
    void setCurrentValue(const std::string& value);

    /// <summary>
    /// (sql/关键词)告警详情原始数据
    /// </summary>

    std::string getOldAnnotations() const;
    bool oldAnnotationsIsSet() const;
    void unsetoldAnnotations();
    void setOldAnnotations(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警行动规则名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAlarmActionRuleName() const;
    bool alarmActionRuleNameIsSet() const;
    void unsetalarmActionRuleName();
    void setAlarmActionRuleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警规则别名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAlarmRuleAlias() const;
    bool alarmRuleAliasIsSet() const;
    void unsetalarmRuleAlias();
    void setAlarmRuleAlias(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警规则url。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAlarmRuleUrl() const;
    bool alarmRuleUrlIsSet() const;
    void unsetalarmRuleUrl();
    void setAlarmRuleUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警触发状态。 **取值范围：** - 触发(firing) - 恢复(resolved)
    /// </summary>

    std::string getAlarmStatus() const;
    bool alarmStatusIsSet() const;
    void unsetalarmStatus();
    void setAlarmStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警触发条件表达式。 **取值范围：** 不涉及。
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警触发表达式带值。例如：条件表达式为pv &gt; 0，则condition_expression_with_value取值为：100 &gt; 0。 **取值范围：** 不涉及。
    /// </summary>

    std::string getConditionExpressionWithValue() const;
    bool conditionExpressionWithValueIsSet() const;
    void unsetconditionExpressionWithValue();
    void setConditionExpressionWithValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 通知频率。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNotificationFrequency() const;
    bool notificationFrequencyIsSet() const;
    void unsetnotificationFrequency();
    void setNotificationFrequency(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启告警恢复开关。 **取值范围：** - true： 开启告警恢复 - false： 关闭告警恢复
    /// </summary>

    bool isRecoveryPolicy() const;
    bool recoveryPolicyIsSet() const;
    void unsetrecoveryPolicy();
    void setRecoveryPolicy(bool value);

    /// <summary>
    /// **参数解释：** 告警通知的详细信息。
    /// </summary>

    std::vector<Results>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<Results>& value);

    /// <summary>
    /// **参数解释：** 告警统计周期。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警规则类型。 **取值范围：** - sql： sql告警 - keywords： 关键词告警
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string logInfo_;
    bool logInfoIsSet_;
    std::string currentValue_;
    bool currentValueIsSet_;
    std::string oldAnnotations_;
    bool oldAnnotationsIsSet_;
    std::string alarmActionRuleName_;
    bool alarmActionRuleNameIsSet_;
    std::string alarmRuleAlias_;
    bool alarmRuleAliasIsSet_;
    std::string alarmRuleUrl_;
    bool alarmRuleUrlIsSet_;
    std::string alarmStatus_;
    bool alarmStatusIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::string conditionExpressionWithValue_;
    bool conditionExpressionWithValueIsSet_;
    std::string notificationFrequency_;
    bool notificationFrequencyIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    bool recoveryPolicy_;
    bool recoveryPolicyIsSet_;
    std::vector<Results> results_;
    bool resultsIsSet_;
    std::string frequency_;
    bool frequencyIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_

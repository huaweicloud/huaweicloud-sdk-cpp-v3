
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Topics.h>
#include <huaweicloud/lts/v2/model/KeywordsResBody.h>
#include <string>
#include <huaweicloud/lts/v2/model/FrequencyRespBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateKeywordsAlarmRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateKeywordsAlarmRuleResponse();
    virtual ~UpdateKeywordsAlarmRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeywordsAlarmRuleResponse members

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
    /// 规则名称
    /// </summary>

    std::string getAlarmRuleAlias() const;
    bool alarmRuleAliasIsSet() const;
    void unsetalarmRuleAlias();
    void setAlarmRuleAlias(const std::string& value);

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

    std::vector<KeywordsResBody>& getKeywordsRequests();
    bool keywordsRequestsIsSet() const;
    void unsetkeywordsRequests();
    void setKeywordsRequests(const std::vector<KeywordsResBody>& value);

    /// <summary>
    /// 
    /// </summary>

    FrequencyRespBody getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const FrequencyRespBody& value);

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
    /// 邮件附加信息语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 通知主题
    /// </summary>

    std::vector<Topics>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<Topics>& value);

    /// <summary>
    /// 情况表述
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

    /// <summary>
    /// 索引id
    /// </summary>

    std::string getIndexId() const;
    bool indexIdIsSet() const;
    void unsetindexId();
    void setIndexId(const std::string& value);

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
    std::string alarmRuleAlias_;
    bool alarmRuleAliasIsSet_;
    std::string keywordsAlarmRuleDescription_;
    bool keywordsAlarmRuleDescriptionIsSet_;
    std::vector<KeywordsResBody> keywordsRequests_;
    bool keywordsRequestsIsSet_;
    FrequencyRespBody frequency_;
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
    std::string language_;
    bool languageIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::string indexId_;
    bool indexIdIsSet_;
    int32_t notificationFrequency_;
    bool notificationFrequencyIsSet_;
    std::string alarmActionRuleName_;
    bool alarmActionRuleNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleResponse_H_

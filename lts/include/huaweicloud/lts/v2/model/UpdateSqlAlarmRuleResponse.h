
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSqlAlarmRuleResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSqlAlarmRuleResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/SqlRequest.h>
#include <huaweicloud/lts/v2/model/Topics.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateSqlAlarmRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSqlAlarmRuleResponse();
    virtual ~UpdateSqlAlarmRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSqlAlarmRuleResponse members

    /// <summary>
    /// 测试
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    std::string getIndexId() const;
    bool indexIdIsSet() const;
    void unsetindexId();
    void setIndexId(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// SQL告警名称
    /// </summary>

    std::string getSqlAlarmRuleName() const;
    bool sqlAlarmRuleNameIsSet() const;
    void unsetsqlAlarmRuleName();
    void setSqlAlarmRuleName(const std::string& value);

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

    std::vector<SqlRequest>& getSqlRequests();
    bool sqlRequestsIsSet() const;
    void unsetsqlRequests();
    void setSqlRequests(const std::vector<SqlRequest>& value);

    /// <summary>
    /// 
    /// </summary>

    Frequency getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const Frequency& value);

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
    /// 是否发送
    /// </summary>

    bool isSqlAlarmSend() const;
    bool sqlAlarmSendIsSet() const;
    void unsetsqlAlarmSend();
    void setSqlAlarmSend(bool value);

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


protected:
    std::string id_;
    bool idIsSet_;
    std::string indexId_;
    bool indexIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string sqlAlarmRuleName_;
    bool sqlAlarmRuleNameIsSet_;
    std::string sqlAlarmRuleId_;
    bool sqlAlarmRuleIdIsSet_;
    std::string sqlAlarmRuleDescription_;
    bool sqlAlarmRuleDescriptionIsSet_;
    std::vector<SqlRequest> sqlRequests_;
    bool sqlRequestsIsSet_;
    Frequency frequency_;
    bool frequencyIsSet_;
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::string sqlAlarmLevel_;
    bool sqlAlarmLevelIsSet_;
    bool sqlAlarmSend_;
    bool sqlAlarmSendIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSqlAlarmRuleResponse_H_

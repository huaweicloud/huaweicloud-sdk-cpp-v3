
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlAutoSqlLimiting_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlAutoSqlLimiting_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  NodeSqlAutoSqlLimiting
    : public ModelBase
{
public:
    NodeSqlAutoSqlLimiting();
    virtual ~NodeSqlAutoSqlLimiting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSqlAutoSqlLimiting members

    /// <summary>
    /// **参数解释**：  节点ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为no07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  自治限流规则每天生效开始时间。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  自治限流规则每天生效开始时间。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  限流策略CPU利用率和活跃会话数的关联关系。  **取值范围**：    - and：且。   - or：或。  **默认取值**：  不涉及。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// **参数解释**：  限流策略CPU利用率。  **约束限制**：  不涉及。  **取值范围**：  [70~100]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getCpuUsage() const;
    bool cpuUsageIsSet() const;
    void unsetcpuUsage();
    void setCpuUsage(int32_t value);

    /// <summary>
    /// **参数解释**：  限流策略活跃会话数。  **约束限制**：  不涉及。  **取值范围**：  [1~5000]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getActiveSessions() const;
    bool activeSessionsIsSet() const;
    void unsetactiveSessions();
    void setActiveSessions(int32_t value);

    /// <summary>
    /// **参数解释**：  每次最大限流时长（分钟）。  **取值范围**：  [1~1440]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getClearTime() const;
    bool clearTimeIsSet() const;
    void unsetclearTime();
    void setClearTime(int32_t value);

    /// <summary>
    /// **参数解释**：  限流策略满足限流条件的事件持续时间（分钟）。  **取值范围**：  [2~60]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释**：  最大并发数。  **取值范围**：  [0~1000000000]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    int32_t cpuUsage_;
    bool cpuUsageIsSet_;
    int32_t activeSessions_;
    bool activeSessionsIsSet_;
    int32_t clearTime_;
    bool clearTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlAutoSqlLimiting_H_

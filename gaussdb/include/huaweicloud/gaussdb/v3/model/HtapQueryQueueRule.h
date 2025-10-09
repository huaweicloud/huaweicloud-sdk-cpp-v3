
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapQueryQueueRule_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapQueryQueueRule_H_


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
/// **参数解释**：  HTAP标准版查询队列规则。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认值**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapQueryQueueRule
    : public ModelBase
{
public:
    HtapQueryQueueRule();
    virtual ~HtapQueryQueueRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapQueryQueueRule members

    /// <summary>
    /// **参数解释**：  查询队列中的查询数量上限。  **约束限制**：  不涉及。  **取值范围**：  非负整数。  **默认值**：  1024。
    /// </summary>

    int32_t getQueryQueueMaxQueuedQueries() const;
    bool queryQueueMaxQueuedQueriesIsSet() const;
    void unsetqueryQueueMaxQueuedQueries();
    void setQueryQueueMaxQueuedQueries(int32_t value);

    /// <summary>
    /// **参数解释**：  查询阻塞时间上限。  **约束限制**：  不涉及。  **取值范围**：  非负整数。  **默认值**：  300。
    /// </summary>

    int32_t getQueryQueuePendingTimeoutSecond() const;
    bool queryQueuePendingTimeoutSecondIsSet() const;
    void unsetqueryQueuePendingTimeoutSecond();
    void setQueryQueuePendingTimeoutSecond(int32_t value);

    /// <summary>
    /// **参数解释**：  查询队列并发值。  **约束限制**：  不涉及。  **取值范围**：  0~100的整数，0表示没有限制。  **默认值**：  0。
    /// </summary>

    int32_t getQueryQueueConcurrencyLimit() const;
    bool queryQueueConcurrencyLimitIsSet() const;
    void unsetqueryQueueConcurrencyLimit();
    void setQueryQueueConcurrencyLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  内存使用百分比。  **约束限制**：  不涉及。  **取值范围**：  0~100的整数，0表示没有限制。  **默认值**：  0。
    /// </summary>

    int32_t getQueryQueueMemUsedPctLimit() const;
    bool queryQueueMemUsedPctLimitIsSet() const;
    void unsetqueryQueueMemUsedPctLimit();
    void setQueryQueueMemUsedPctLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  CPU使用百分比。  **约束限制**：  不涉及。  **取值范围**：  0~100的整数，0表示没有限制。  **默认值**：  0。
    /// </summary>

    int32_t getQueryQueueCpuUsedPctLimit() const;
    bool queryQueueCpuUsedPctLimitIsSet() const;
    void unsetqueryQueueCpuUsedPctLimit();
    void setQueryQueueCpuUsedPctLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  查询队列开关状态。  **约束限制**：  不涉及。  **取值范围**：  - true：表示开启。 - false：表示关闭。  **默认值**：  false。
    /// </summary>

    std::string getEnableQueryQueueSelect() const;
    bool enableQueryQueueSelectIsSet() const;
    void unsetenableQueryQueueSelect();
    void setEnableQueryQueueSelect(const std::string& value);


protected:
    int32_t queryQueueMaxQueuedQueries_;
    bool queryQueueMaxQueuedQueriesIsSet_;
    int32_t queryQueuePendingTimeoutSecond_;
    bool queryQueuePendingTimeoutSecondIsSet_;
    int32_t queryQueueConcurrencyLimit_;
    bool queryQueueConcurrencyLimitIsSet_;
    int32_t queryQueueMemUsedPctLimit_;
    bool queryQueueMemUsedPctLimitIsSet_;
    int32_t queryQueueCpuUsedPctLimit_;
    bool queryQueueCpuUsedPctLimitIsSet_;
    std::string enableQueryQueueSelect_;
    bool enableQueryQueueSelectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapQueryQueueRule_H_

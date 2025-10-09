
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingCondition_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingCondition_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/MetricCondition.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**：  变配条件。  **约束限制**：  至少各定义一个CPU使用率和内存使用率指标条件，最多各定义两个。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScalingCondition
    : public ModelBase
{
public:
    ScalingCondition();
    virtual ~ScalingCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScalingCondition members

    /// <summary>
    /// **参数描述**:  变配条件名称。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字和中划线组成，且长度不超过32个字符，不能为空。  **默认取值**：  不涉及。
    /// </summary>

    std::string getConditionId() const;
    bool conditionIdIsSet() const;
    void unsetconditionId();
    void setConditionId(const std::string& value);

    /// <summary>
    /// **参数描述**：  持续时间，单位是毫秒。  **约束限制**：  不涉及。  **取值范围**：  2000-5000。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释**:  间隔时间，单位是毫秒。  **约束限制**：  不涉及。  **取值范围**：  1000-5000。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// **参数描述**:  指标变配条件。  **约束条件**：  不涉及。
    /// </summary>

    std::vector<MetricCondition>& getMetricConditions();
    bool metricConditionsIsSet() const;
    void unsetmetricConditions();
    void setMetricConditions(const std::vector<MetricCondition>& value);


protected:
    std::string conditionId_;
    bool conditionIdIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::vector<MetricCondition> metricConditions_;
    bool metricConditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingCondition_H_

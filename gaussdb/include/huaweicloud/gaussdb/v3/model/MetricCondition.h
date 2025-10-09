
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MetricCondition_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MetricCondition_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MetricCondition
    : public ModelBase
{
public:
    MetricCondition();
    virtual ~MetricCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricCondition members

    /// <summary>
    /// **参数描述**:  指标名称。  **约束限制**：  不涉及。  **取值范围**： - cpuTotalUsage：CPU使用率。 - memoryTotalUsage：内存使用率。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// **参数描述**：  指标变配阈值。  **约束限制**：  取值为百分比的10000倍，比如50%对应的参数值为5000。  **取值范围**：  6000-8000。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMetricValue() const;
    bool metricValueIsSet() const;
    void unsetmetricValue();
    void setMetricValue(int32_t value);

    /// <summary>
    /// **参数描述**：  比较模式。  **约束限制**：  不涉及。。  **取值范围**：  GT：大于。  **默认取值**：  不涉及。
    /// </summary>

    std::string getCompareMode() const;
    bool compareModeIsSet() const;
    void unsetcompareMode();
    void setCompareMode(const std::string& value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    int32_t metricValue_;
    bool metricValueIsSet_;
    std::string compareMode_;
    bool compareModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MetricCondition_H_

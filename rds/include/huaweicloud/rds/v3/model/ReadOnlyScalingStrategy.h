
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadOnlyScalingStrategy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadOnlyScalingStrategy_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 只读自动变配策略。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ReadOnlyScalingStrategy
    : public ModelBase
{
public:
    ReadOnlyScalingStrategy();
    virtual ~ReadOnlyScalingStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReadOnlyScalingStrategy members

    /// <summary>
    /// **参数解释**：  只读扩容开关。  **约束限制**：  不涉及。  **取值范围**：  - ON：开启 - OFF：关闭  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyEnlargeEnabled() const;
    bool readOnlyEnlargeEnabledIsSet() const;
    void unsetreadOnlyEnlargeEnabled();
    void setReadOnlyEnlargeEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：  只读缩容开关。  **约束限制**：  不涉及。  **取值范围**：  - ON：开启 - OFF：关闭  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyReduceEnabled() const;
    bool readOnlyReduceEnabledIsSet() const;
    void unsetreadOnlyReduceEnabled();
    void setReadOnlyReduceEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：  观测窗口时间，单位秒。  **约束限制**：  不涉及。  **取值范围**：  - 120 - 300 - 600 - 900 - 1800  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyMonitorCycle() const;
    bool readOnlyMonitorCycleIsSet() const;
    void unsetreadOnlyMonitorCycle();
    void setReadOnlyMonitorCycle(const std::string& value);

    /// <summary>
    /// **参数解释**：  静默期，单位秒。  **约束限制**：  不涉及。  **取值范围**：  - 300 - 600 - 1800 - 3600 - 7200 - 10800 - 86400 - 604800  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlySilenceCycle() const;
    bool readOnlySilenceCycleIsSet() const;
    void unsetreadOnlySilenceCycle();
    void setReadOnlySilenceCycle(const std::string& value);

    /// <summary>
    /// **参数解释**：  只读最大节点数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMaxReadOnlyCount() const;
    bool maxReadOnlyCountIsSet() const;
    void unsetmaxReadOnlyCount();
    void setMaxReadOnlyCount(const std::string& value);

    /// <summary>
    /// **参数解释**：  只读扩容阈值。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyEnlargeThreshold() const;
    bool readOnlyEnlargeThresholdIsSet() const;
    void unsetreadOnlyEnlargeThreshold();
    void setReadOnlyEnlargeThreshold(const std::string& value);

    /// <summary>
    /// **参数解释**：  扩容新增只读规格。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyFlavor() const;
    bool readOnlyFlavorIsSet() const;
    void unsetreadOnlyFlavor();
    void setReadOnlyFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：  只读最小节点数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMinReadOnlyCount() const;
    bool minReadOnlyCountIsSet() const;
    void unsetminReadOnlyCount();
    void setMinReadOnlyCount(const std::string& value);

    /// <summary>
    /// **参数解释**：  只读缩容阈值。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getReadOnlyReduceThreshold() const;
    bool readOnlyReduceThresholdIsSet() const;
    void unsetreadOnlyReduceThreshold();
    void setReadOnlyReduceThreshold(const std::string& value);


protected:
    std::string readOnlyEnlargeEnabled_;
    bool readOnlyEnlargeEnabledIsSet_;
    std::string readOnlyReduceEnabled_;
    bool readOnlyReduceEnabledIsSet_;
    std::string readOnlyMonitorCycle_;
    bool readOnlyMonitorCycleIsSet_;
    std::string readOnlySilenceCycle_;
    bool readOnlySilenceCycleIsSet_;
    std::string maxReadOnlyCount_;
    bool maxReadOnlyCountIsSet_;
    std::string readOnlyEnlargeThreshold_;
    bool readOnlyEnlargeThresholdIsSet_;
    std::string readOnlyFlavor_;
    bool readOnlyFlavorIsSet_;
    std::string minReadOnlyCount_;
    bool minReadOnlyCountIsSet_;
    std::string readOnlyReduceThreshold_;
    bool readOnlyReduceThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadOnlyScalingStrategy_H_

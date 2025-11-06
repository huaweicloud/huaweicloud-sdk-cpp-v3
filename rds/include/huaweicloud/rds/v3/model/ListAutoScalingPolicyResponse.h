
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListAutoScalingPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutoScalingPolicyResponse();
    virtual ~ListAutoScalingPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutoScalingPolicyResponse members

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否开启autoScaling，OFF为关闭，ON为开启  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  观察窗口，单位秒  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMonitorCycle() const;
    bool monitorCycleIsSet() const;
    void unsetmonitorCycle();
    void setMonitorCycle(int32_t value);

    /// <summary>
    /// **参数解释**：  静默期，单位秒  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getSilenceCycle() const;
    bool silenceCycleIsSet() const;
    void unsetsilenceCycle();
    void setSilenceCycle(int32_t value);

    /// <summary>
    /// **参数解释**：  自动升配触发阈值，单位百分比  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getEnlargeThreshold() const;
    bool enlargeThresholdIsSet() const;
    void unsetenlargeThreshold();
    void setEnlargeThreshold(int32_t value);

    /// <summary>
    /// **参数解释**：  最大变配规格上限  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMaxFlavor() const;
    bool maxFlavorIsSet() const;
    void unsetmaxFlavor();
    void setMaxFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：  自动降配状态，on为自动降配开启；off为关闭  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getReduceEnabled() const;
    bool reduceEnabledIsSet() const;
    void unsetreduceEnabled();
    void setReduceEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：  自动降配触发阈值  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getReduceThreshold() const;
    bool reduceThresholdIsSet() const;
    void unsetreduceThreshold();
    void setReduceThreshold(int32_t value);

    /// <summary>
    /// **参数解释**：  最大变配规格下限  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMinFlavor() const;
    bool minFlavorIsSet() const;
    void unsetminFlavor();
    void setMinFlavor(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t monitorCycle_;
    bool monitorCycleIsSet_;
    int32_t silenceCycle_;
    bool silenceCycleIsSet_;
    int32_t enlargeThreshold_;
    bool enlargeThresholdIsSet_;
    std::string maxFlavor_;
    bool maxFlavorIsSet_;
    std::string reduceEnabled_;
    bool reduceEnabledIsSet_;
    int32_t reduceThreshold_;
    bool reduceThresholdIsSet_;
    std::string minFlavor_;
    bool minFlavorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingPolicyResponse_H_

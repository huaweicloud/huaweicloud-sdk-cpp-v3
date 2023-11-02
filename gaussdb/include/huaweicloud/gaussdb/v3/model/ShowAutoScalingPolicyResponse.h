
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/ScalingStrategyInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAutoScalingPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoScalingPolicyResponse();
    virtual ~ShowAutoScalingPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoScalingPolicyResponse members

    /// <summary>
    /// 自动变配策略ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 自动变配开关状态。  取值：  - ON：已开启 - OFF：已关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 监测周期（单位：秒）。 在整个观测窗口期内，若CPU平均使用率大于等于设定值，则在观测窗口结束后，进行扩容。
    /// </summary>

    int32_t getMonitorCycle() const;
    bool monitorCycleIsSet() const;
    void unsetmonitorCycle();
    void setMonitorCycle(int32_t value);

    /// <summary>
    /// 静默周期（单位：秒）。 两次自动扩容或自动回缩的最小间隔时间。
    /// </summary>

    int32_t getSilenceCycle() const;
    bool silenceCycleIsSet() const;
    void unsetsilenceCycle();
    void setSilenceCycle(int32_t value);

    /// <summary>
    /// 扩容阈值（百分比数值），指CPU平均使用率。
    /// </summary>

    int32_t getEnlargeThreshold() const;
    bool enlargeThresholdIsSet() const;
    void unsetenlargeThreshold();
    void setEnlargeThreshold(int32_t value);

    /// <summary>
    /// 扩容规格上限。
    /// </summary>

    std::string getMaxFlavor() const;
    bool maxFlavorIsSet() const;
    void unsetmaxFlavor();
    void setMaxFlavor(const std::string& value);

    /// <summary>
    /// 自动回缩开关状态。  取值：  - true：已开启 - false：已关闭
    /// </summary>

    bool isReduceEnabled() const;
    bool reduceEnabledIsSet() const;
    void unsetreduceEnabled();
    void setReduceEnabled(bool value);

    /// <summary>
    /// 缩容规格下限。
    /// </summary>

    std::string getMinFlavor() const;
    bool minFlavorIsSet() const;
    void unsetminFlavor();
    void setMinFlavor(const std::string& value);

    /// <summary>
    /// 静默期开始时间（上一次变更结束时间）。  格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getSilenceStartAt() const;
    bool silenceStartAtIsSet() const;
    void unsetsilenceStartAt();
    void setSilenceStartAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScalingStrategyInfo getScalingStrategy() const;
    bool scalingStrategyIsSet() const;
    void unsetscalingStrategy();
    void setScalingStrategy(const ScalingStrategyInfo& value);

    /// <summary>
    /// 只读节点数量上限。
    /// </summary>

    int32_t getMaxReadOnlyCount() const;
    bool maxReadOnlyCountIsSet() const;
    void unsetmaxReadOnlyCount();
    void setMaxReadOnlyCount(int32_t value);

    /// <summary>
    /// 只读节点数量下限。
    /// </summary>

    int32_t getMinReadOnlyCount() const;
    bool minReadOnlyCountIsSet() const;
    void unsetminReadOnlyCount();
    void setMinReadOnlyCount(int32_t value);

    /// <summary>
    /// 只读节点读写分离权重。
    /// </summary>

    int32_t getReadOnlyWeight() const;
    bool readOnlyWeightIsSet() const;
    void unsetreadOnlyWeight();
    void setReadOnlyWeight(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
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
    bool reduceEnabled_;
    bool reduceEnabledIsSet_;
    std::string minFlavor_;
    bool minFlavorIsSet_;
    std::string silenceStartAt_;
    bool silenceStartAtIsSet_;
    ScalingStrategyInfo scalingStrategy_;
    bool scalingStrategyIsSet_;
    int32_t maxReadOnlyCount_;
    bool maxReadOnlyCountIsSet_;
    int32_t minReadOnlyCount_;
    bool minReadOnlyCountIsSet_;
    int32_t readOnlyWeight_;
    bool readOnlyWeightIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingPolicyResponse_H_

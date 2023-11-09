
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoScalingPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoScalingPolicyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScalingStrategyReqInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置自动变配策略请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateAutoScalingPolicyRequestBody
    : public ModelBase
{
public:
    UpdateAutoScalingPolicyRequestBody();
    virtual ~UpdateAutoScalingPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutoScalingPolicyRequestBody members

    /// <summary>
    /// 自动变配开关状态。  取值：  - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 监测周期（单位：秒）。 在整个观测窗口期内，若CPU平均使用率大于等于设定值，则在观测窗口结束后，进行扩容。  取值范围：300、600、900、1800。  status为ON时必填。
    /// </summary>

    int32_t getMonitorCycle() const;
    bool monitorCycleIsSet() const;
    void unsetmonitorCycle();
    void setMonitorCycle(int32_t value);

    /// <summary>
    /// 静默周期（单位：秒）。 两次自动扩容或自动回缩的最小间隔时间。  取值范围：300、600、1800、3600、7200、10800、86400、604800。  status为ON时必填。
    /// </summary>

    int32_t getSilenceCycle() const;
    bool silenceCycleIsSet() const;
    void unsetsilenceCycle();
    void setSilenceCycle(int32_t value);

    /// <summary>
    /// CPU平均使用率（百分比数值）。  取值范围：50-100。  status为ON时必填。
    /// </summary>

    int32_t getEnlargeThreshold() const;
    bool enlargeThresholdIsSet() const;
    void unsetenlargeThreshold();
    void setEnlargeThreshold(int32_t value);

    /// <summary>
    /// 扩容规格上限。开启扩缩规格时必填。
    /// </summary>

    std::string getMaxFlavor() const;
    bool maxFlavorIsSet() const;
    void unsetmaxFlavor();
    void setMaxFlavor(const std::string& value);

    /// <summary>
    /// 是否开启自动回缩。开启自动变配时必填。 - true：是。 - false：否。
    /// </summary>

    bool isReduceEnabled() const;
    bool reduceEnabledIsSet() const;
    void unsetreduceEnabled();
    void setReduceEnabled(bool value);

    /// <summary>
    /// 只读节点数量上限。开启增删只读节点时必填。
    /// </summary>

    int32_t getMaxReadOnlyCount() const;
    bool maxReadOnlyCountIsSet() const;
    void unsetmaxReadOnlyCount();
    void setMaxReadOnlyCount(int32_t value);

    /// <summary>
    /// 只读节点读写分离权重。开启增删只读节点时必填。
    /// </summary>

    int32_t getReadOnlyWeight() const;
    bool readOnlyWeightIsSet() const;
    void unsetreadOnlyWeight();
    void setReadOnlyWeight(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ScalingStrategyReqInfo getScalingStrategy() const;
    bool scalingStrategyIsSet() const;
    void unsetscalingStrategy();
    void setScalingStrategy(const ScalingStrategyReqInfo& value);


protected:
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
    int32_t maxReadOnlyCount_;
    bool maxReadOnlyCountIsSet_;
    int32_t readOnlyWeight_;
    bool readOnlyWeightIsSet_;
    ScalingStrategyReqInfo scalingStrategy_;
    bool scalingStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoScalingPolicyRequestBody_H_

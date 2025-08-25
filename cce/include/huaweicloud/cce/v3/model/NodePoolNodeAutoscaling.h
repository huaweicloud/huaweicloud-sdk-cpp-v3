
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolNodeAutoscaling_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolNodeAutoscaling_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池自动伸缩相关配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolNodeAutoscaling
    : public ModelBase
{
public:
    NodePoolNodeAutoscaling();
    virtual ~NodePoolNodeAutoscaling();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolNodeAutoscaling members

    /// <summary>
    /// 是否开启自动扩缩容
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 若开启自动扩缩容，最小能缩容的节点个数。不可大于集群规格所允许的节点上限
    /// </summary>

    int32_t getMinNodeCount() const;
    bool minNodeCountIsSet() const;
    void unsetminNodeCount();
    void setMinNodeCount(int32_t value);

    /// <summary>
    /// 若开启自动扩缩容，最大能扩容的节点个数，应大于等于 minNodeCount，且不超过集群规格对应的节点数量上限。
    /// </summary>

    int32_t getMaxNodeCount() const;
    bool maxNodeCountIsSet() const;
    void unsetmaxNodeCount();
    void setMaxNodeCount(int32_t value);

    /// <summary>
    /// 节点保留时间，单位为分钟，扩容出来的节点在这个时间内不会被缩掉
    /// </summary>

    int32_t getScaleDownCooldownTime() const;
    bool scaleDownCooldownTimeIsSet() const;
    void unsetscaleDownCooldownTime();
    void setScaleDownCooldownTime(int32_t value);

    /// <summary>
    /// 节点池权重，更高的权重在扩容时拥有更高的优先级
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释**： 缩容非必要时间。单位为分钟，该参数用于指定在确定可以进行缩容操作之前，节点处于不需要状态的持续时间。 当节点在指定的这段时间内一直处于不需要的状态时，autoscaler 插件才会考虑对其进行缩容操作。 这样可以避免因资源的短暂波动而频繁触发缩容，增强系统的稳定性。如果未设置该参数，autoscaler 插件插件会使用默认的时间阈值。 **约束限制**： 不涉及 **取值范围**： 0-2147483647。 &gt; 注意：如果传值为-1，代表取值为空。  **默认取值**： 默认为空
    /// </summary>

    int32_t getScaleDownUnneededTime() const;
    bool scaleDownUnneededTimeIsSet() const;
    void unsetscaleDownUnneededTime();
    void setScaleDownUnneededTime(int32_t value);

    /// <summary>
    /// **参数解释**： 缩容利用率阈值。运行在该节点上的所有 Pod 的 CPU 或内存总和除以该节点相应的可分配资源， 当该比值低于此阈值时，该节点可被考虑进行缩容。例如，设置为 0.3 表示当资源利用率低于 30% 时， 会触发缩容操作的评估。如果未设置该参数，autoscaler 插件会使用默认的利用率阈值。 **约束限制**： 不涉及 **取值范围**： 0-1。 &gt; 注意：如果传值为-1，代表取值为空。  **默认取值**： 默认为空
    /// </summary>

    float getScaleDownUtilizationThreshold() const;
    bool scaleDownUtilizationThresholdIsSet() const;
    void unsetscaleDownUtilizationThreshold();
    void setScaleDownUtilizationThreshold(float value);


protected:
    bool enable_;
    bool enableIsSet_;
    int32_t minNodeCount_;
    bool minNodeCountIsSet_;
    int32_t maxNodeCount_;
    bool maxNodeCountIsSet_;
    int32_t scaleDownCooldownTime_;
    bool scaleDownCooldownTimeIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    int32_t scaleDownUnneededTime_;
    bool scaleDownUnneededTimeIsSet_;
    float scaleDownUtilizationThreshold_;
    bool scaleDownUtilizationThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolNodeAutoscaling_H_

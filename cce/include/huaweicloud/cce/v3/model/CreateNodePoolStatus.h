
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateNodePoolStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateNodePoolStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePoolCondition.h>
#include <huaweicloud/cce/v3/model/ScaleGroupStatus.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateNodePoolStatus
    : public ModelBase
{
public:
    CreateNodePoolStatus();
    virtual ~CreateNodePoolStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNodePoolStatus members

    /// <summary>
    /// 当前节点池中所有节点数量（不含删除中的节点）。
    /// </summary>

    int32_t getCurrentNode() const;
    bool currentNodeIsSet() const;
    void unsetcurrentNode();
    void setCurrentNode(int32_t value);

    /// <summary>
    /// 当前节点池中处于创建流程中的节点数量。
    /// </summary>

    int32_t getCreatingNode() const;
    bool creatingNodeIsSet() const;
    void unsetcreatingNode();
    void setCreatingNode(int32_t value);

    /// <summary>
    /// 当前节点池中删除中的节点数量。
    /// </summary>

    int32_t getDeletingNode() const;
    bool deletingNodeIsSet() const;
    void unsetdeletingNode();
    void setDeletingNode(int32_t value);

    /// <summary>
    /// 节点池状态。 - 空值：可用（节点池当前节点数已达到预期，且无伸缩中的节点） - Synchronizing：伸缩中（节点池当前节点数未达到预期，且无伸缩中的节点） - Synchronized：伸缩等待中（节点池当前节点数未达到预期，或者存在伸缩中的节点） - SoldOut：节点池当前不可扩容（兼容字段，标记节点池资源售罄、资源配额不足等不可扩容状态） &gt; 上述节点池状态已废弃，仅兼容保留，不建议使用，替代感知方式如下： &gt; - 节点池扩缩状态：可通过currentNode/creatingNode/deletingNode节点状态统计信息，精确感知当前节点池扩缩状态。 &gt; - 节点池可扩容状态：可通过conditions感知节点池详细状态，其中\&quot;Scalable\&quot;可替代SoldOut语义。 - Deleting：删除中 - Error：错误 
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 节点池当前详细状态列表，详情参见Condition类型定义。 
    /// </summary>

    std::vector<NodePoolCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<NodePoolCondition>& value);

    /// <summary>
    /// 伸缩组当前详细状态信息，详情参见ScaleGroupStatus类型定义
    /// </summary>

    std::vector<ScaleGroupStatus>& getScaleGroupStatuses();
    bool scaleGroupStatusesIsSet() const;
    void unsetscaleGroupStatuses();
    void setScaleGroupStatuses(const std::vector<ScaleGroupStatus>& value);


protected:
    int32_t currentNode_;
    bool currentNodeIsSet_;
    int32_t creatingNode_;
    bool creatingNodeIsSet_;
    int32_t deletingNode_;
    bool deletingNodeIsSet_;
    std::string phase_;
    bool phaseIsSet_;
    std::vector<NodePoolCondition> conditions_;
    bool conditionsIsSet_;
    std::vector<ScaleGroupStatus> scaleGroupStatuses_;
    bool scaleGroupStatusesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateNodePoolStatus_H_

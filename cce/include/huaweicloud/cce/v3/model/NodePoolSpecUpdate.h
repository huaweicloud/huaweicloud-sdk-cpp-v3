
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpecUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpecUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeManagement.h>
#include <huaweicloud/cce/v3/model/NodeSpecUpdate.h>
#include <string>
#include <huaweicloud/cce/v3/model/NodePoolNodeAutoscaling.h>
#include <huaweicloud/cce/v3/model/ExtensionScaleGroup.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolSpecUpdate
    : public ModelBase
{
public:
    NodePoolSpecUpdate();
    virtual ~NodePoolSpecUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolSpecUpdate members

    /// <summary>
    /// 
    /// </summary>

    NodeSpecUpdate getNodeTemplate() const;
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const NodeSpecUpdate& value);

    /// <summary>
    /// **参数解释：** 节点池期望节点个数。 **约束限制：** 更新节点池时，此字段为必填字段。 &gt; 注意：如果更新节点池时不填此字段，节点池期望节点个数将取默认值0，如果此时节点池节点个数大于0将导致节点池缩容。  **取值范围：** 大于0，小于集群节点规模。 **默认取值：** 0
    /// </summary>

    int32_t getInitialNodeCount() const;
    bool initialNodeCountIsSet() const;
    void unsetinitialNodeCount();
    void setInitialNodeCount(int32_t value);

    /// <summary>
    /// **参数解释：** 该参数用于控制更新节点池时 **节点池期望节点个数(spec.initialNodeCount)** 的默认行为。当该参数未设置或者为false时，如果用户请求Body体中未设置spec.initialNodeCount，更新时将自动初始化spec.initialNodeCount为0。当该参数为true时，将忽略spec.initialNodeCount参数。 &gt; 当用户不需要更新节点池spec.initialNodeCount时，必须显示的设置该参数为true，同时在更新节点池Body体中不设置spec.initialNodeCount。  **约束限制：** 不涉及 **取值范围：** - false：更新节点池时，如果spec.initialNodeCount参数未设置，将初始化spec.initialNodeCount为0。 &gt; 如果节点池当前spec.initialNodeCount 不等于0将导致节点池缩容。  - true：更新节点池时，忽略spec.initialNodeCount参数，节点池spec.initialNodeCount参数将保持原样。  **默认取值：** false
    /// </summary>

    bool isIgnoreInitialNodeCount() const;
    bool ignoreInitialNodeCountIsSet() const;
    void unsetignoreInitialNodeCount();
    void setIgnoreInitialNodeCount(bool value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolNodeAutoscaling getAutoscaling() const;
    bool autoscalingIsSet() const;
    void unsetautoscaling();
    void setAutoscaling(const NodePoolNodeAutoscaling& value);

    /// <summary>
    /// 
    /// </summary>

    NodeManagement getNodeManagementUpdate() const;
    bool nodeManagementUpdateIsSet() const;
    void unsetnodeManagementUpdate();
    void setNodeManagementUpdate(const NodeManagement& value);

    /// <summary>
    /// **参数解释：** 是否同步K8S污点。 **约束限制**： 不涉及 **取值范围：** - 填写为refresh，K8S污点的改动将会被同步更新到存量节点上。 - 填写为ignore，节点池K8S污点将不会同步更新到存量节点上。  **默认取值：** 无
    /// </summary>

    std::string getTaintPolicyOnExistingNodes() const;
    bool taintPolicyOnExistingNodesIsSet() const;
    void unsettaintPolicyOnExistingNodes();
    void setTaintPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否同步K8S标签。 **约束限制**： 不涉及 **取值范围：** - 填写为refresh，K8S标签的改动将会被同步更新到存量节点上。 - 填写为ignore，K8S标签将不会同步更新到存量节点上。  **默认取值：** 无
    /// </summary>

    std::string getLabelPolicyOnExistingNodes() const;
    bool labelPolicyOnExistingNodesIsSet() const;
    void unsetlabelPolicyOnExistingNodes();
    void setLabelPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否同步节点池资源标签。 **约束限制**： 不涉及 **取值范围：** - 填写为refresh，节点池资源标签标签的改动将会被同步更新到存量节点上。 - 填写为ignore，节点池资源标签标签将不会同步更新到存量节点上。  **默认取值：** 无
    /// </summary>

    std::string getUserTagsPolicyOnExistingNodes() const;
    bool userTagsPolicyOnExistingNodesIsSet() const;
    void unsetuserTagsPolicyOnExistingNodes();
    void setUserTagsPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// 节点池扩展伸缩组配置列表，详情参见ExtensionScaleGroup类型定义
    /// </summary>

    std::vector<ExtensionScaleGroup>& getExtensionScaleGroups();
    bool extensionScaleGroupsIsSet() const;
    void unsetextensionScaleGroups();
    void setExtensionScaleGroups(const std::vector<ExtensionScaleGroup>& value);


protected:
    NodeSpecUpdate nodeTemplate_;
    bool nodeTemplateIsSet_;
    int32_t initialNodeCount_;
    bool initialNodeCountIsSet_;
    bool ignoreInitialNodeCount_;
    bool ignoreInitialNodeCountIsSet_;
    NodePoolNodeAutoscaling autoscaling_;
    bool autoscalingIsSet_;
    NodeManagement nodeManagementUpdate_;
    bool nodeManagementUpdateIsSet_;
    std::string taintPolicyOnExistingNodes_;
    bool taintPolicyOnExistingNodesIsSet_;
    std::string labelPolicyOnExistingNodes_;
    bool labelPolicyOnExistingNodesIsSet_;
    std::string userTagsPolicyOnExistingNodes_;
    bool userTagsPolicyOnExistingNodesIsSet_;
    std::vector<ExtensionScaleGroup> extensionScaleGroups_;
    bool extensionScaleGroupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpecUpdate_H_

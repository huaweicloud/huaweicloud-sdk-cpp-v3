
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeManagement.h>
#include <huaweicloud/cce/v3/model/SecurityID.h>
#include <huaweicloud/cce/v3/model/NodeTemplate.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolSpec
    : public ModelBase
{
public:
    NodePoolSpec();
    virtual ~NodePoolSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolSpec members

    /// <summary>
    /// 节点池类型。不填写时默认为vm。  - vm：弹性云服务器 - ElasticBMS：C6型弹性裸金属通用计算增强型云服务器，规格示例：c6.22xlarge.2.physical - pm: 裸金属服务器 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate getNodeTemplate() const;
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const NodeTemplate& value);

    /// <summary>
    /// 节点池初始化节点个数。查询时为节点池目标节点数量。
    /// </summary>

    int32_t getInitialNodeCount() const;
    bool initialNodeCountIsSet() const;
    void unsetinitialNodeCount();
    void setInitialNodeCount(int32_t value);

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

    NodeManagement getNodeManagement() const;
    bool nodeManagementIsSet() const;
    void unsetnodeManagement();
    void setNodeManagement(const NodeManagement& value);

    /// <summary>
    /// 1.21版本集群节点池支持绑定安全组，最多五个。
    /// </summary>

    std::vector<SecurityID>& getPodSecurityGroups();
    bool podSecurityGroupsIsSet() const;
    void unsetpodSecurityGroups();
    void setPodSecurityGroups(const std::vector<SecurityID>& value);

    /// <summary>
    /// **参数解释**： 节点池扩展伸缩组配置列表，详情参见ExtensionScaleGroup类型定义。 **约束限制**： 更新节点池时如果未指定则保持原伸缩组配置，如果指定伸缩组（包括空数组），则基于请求体刷新所有伸缩组配置。
    /// </summary>

    std::vector<ExtensionScaleGroup>& getExtensionScaleGroups();
    bool extensionScaleGroupsIsSet() const;
    void unsetextensionScaleGroups();
    void setExtensionScaleGroups(const std::vector<ExtensionScaleGroup>& value);

    /// <summary>
    /// 节点池自定义安全组相关配置。支持节点池新扩容节点绑定指定的安全组。  - 未指定安全组ID，新建节点将添加Node节点默认安全组。  - 指定有效安全组ID，新建节点将使用指定安全组。  - 指定安全组，应避免对CCE运行依赖的端口规则进行修改。[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/cce_faq/cce_faq_00265.html)。](tag:hws)[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/intl/zh-cn/cce_faq/cce_faq_00265.html)。](tag:hws_hk) 
    /// </summary>

    std::vector<std::string>& getCustomSecurityGroups();
    bool customSecurityGroupsIsSet() const;
    void unsetcustomSecurityGroups();
    void setCustomSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 存量节点污点同步策略 **约束限制**： 不涉及 **取值范围**： - ignore：配置为\&quot;ignore\&quot;后，节点池不再同步更新存量节点的污点。 - refresh：配置为\&quot;refresh\&quot;后，节点池将同步更新存量节点的污点。  **默认取值**： refresh
    /// </summary>

    std::string getTaintPolicyOnExistingNodes() const;
    bool taintPolicyOnExistingNodesIsSet() const;
    void unsettaintPolicyOnExistingNodes();
    void setTaintPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释**： 存量节点标签同步策略 **约束限制**： 不涉及 **取值范围**： - ignore：配置为\&quot;ignore\&quot;后，节点池不再同步更新存量节点的标签。 - refresh：配置为\&quot;refresh\&quot;后，节点池将同步更新存量节点的标签。  **默认取值**： refresh
    /// </summary>

    std::string getLabelPolicyOnExistingNodes() const;
    bool labelPolicyOnExistingNodesIsSet() const;
    void unsetlabelPolicyOnExistingNodes();
    void setLabelPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释**： 存量节点资源标签同步策略 **约束限制**： 不涉及 **取值范围**： - ignore：配置为\&quot;ignore\&quot;后，节点池不再同步更新存量节点的资源标签。 - refresh：配置为\&quot;refresh\&quot;后，节点池将同步更新存量节点的资源标签。  **默认取值**： ignore
    /// </summary>

    std::string getUserTagsPolicyOnExistingNodes() const;
    bool userTagsPolicyOnExistingNodesIsSet() const;
    void unsetuserTagsPolicyOnExistingNodes();
    void setUserTagsPolicyOnExistingNodes(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    NodeTemplate nodeTemplate_;
    bool nodeTemplateIsSet_;
    int32_t initialNodeCount_;
    bool initialNodeCountIsSet_;
    NodePoolNodeAutoscaling autoscaling_;
    bool autoscalingIsSet_;
    NodeManagement nodeManagement_;
    bool nodeManagementIsSet_;
    std::vector<SecurityID> podSecurityGroups_;
    bool podSecurityGroupsIsSet_;
    std::vector<ExtensionScaleGroup> extensionScaleGroups_;
    bool extensionScaleGroupsIsSet_;
    std::vector<std::string> customSecurityGroups_;
    bool customSecurityGroupsIsSet_;
    std::string taintPolicyOnExistingNodes_;
    bool taintPolicyOnExistingNodesIsSet_;
    std::string labelPolicyOnExistingNodes_;
    bool labelPolicyOnExistingNodesIsSet_;
    std::string userTagsPolicyOnExistingNodes_;
    bool userTagsPolicyOnExistingNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolSpec_H_


#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceExtendParams_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceExtendParams_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：自定义配置。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceExtendParams
    : public ModelBase
{
public:
    ResourceExtendParams();
    virtual ~ResourceExtendParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceExtendParams members

    /// <summary>
    /// **参数解释**：节点的容器镜像空间大小。 **取值范围**：可选值如下： - 指定大小：dockerBaseSize的大小范围默认为50-500，但实际上限受到节点的容器数据盘大小约束。 - 不限制：dockerBaseSize&#x3D;\\\&quot;0\\\&quot;，表示不限制容器镜像空间大小。
    /// </summary>

    std::string getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(const std::string& value);

    /// <summary>
    /// **参数解释**：安装后执行脚本，输入的值需要经过Base64编码。 **取值范围**：不涉及。
    /// </summary>

    std::string getPostInstall() const;
    bool postInstallIsSet() const;
    void unsetpostInstall();
    void setPostInstall(const std::string& value);

    /// <summary>
    /// **参数解释**：容器运行时。 **取值范围**：可选值如下： - docker：容器运行时，是目前最常用的容器化引擎，基于容器镜像创建和管理容器实例。 - containerd：工业级的容器运行时，专注于容器的生命周期管理，是 Docker 底层核心组件之一，也可独立部署使用。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// **参数解释**：存量节点k8s标签更新策略，值为空时默认更新存量节点。 **取值范围**：可选值如下： - refresh：更新。 - ignore：不更新。
    /// </summary>

    std::string getLabelPolicyOnExistingNodes() const;
    bool labelPolicyOnExistingNodesIsSet() const;
    void unsetlabelPolicyOnExistingNodes();
    void setLabelPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释**：存量节点k8s污点更新策略，值为空时默认更新存量节点。 **取值范围**：可选值如下： - refresh：更新。 - ignore：不更新。
    /// </summary>

    std::string getTaintPolicyOnExistingNodes() const;
    bool taintPolicyOnExistingNodesIsSet() const;
    void unsettaintPolicyOnExistingNodes();
    void setTaintPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释**：存量节点资源标签更新策略，值为空时默认更新存量节点。 **取值范围**：可选值如下： - refresh：更新。 - ignore：不更新。
    /// </summary>

    std::string getTagPolicyOnExistingNodes() const;
    bool tagPolicyOnExistingNodesIsSet() const;
    void unsettagPolicyOnExistingNodes();
    void setTagPolicyOnExistingNodes(const std::string& value);

    /// <summary>
    /// **参数解释**：跨物理集群之间进行参数面数据传输使用的子网id。不可与节点子网和容器子网重复。 **取值范围**：不涉及。
    /// </summary>

    std::string getXParameterPlaneSubnet() const;
    bool xParameterPlaneSubnetIsSet() const;
    void unsetxParameterPlaneSubnet();
    void setXParameterPlaneSubnet(const std::string& value);

    /// <summary>
    /// **参数解释**：用户指定的节点池名称。最小长度为2，最大长度为50的小写字母、中划线-、数字组成，由小写字母开头，不能以-，-default结尾。 **取值范围**：不涉及
    /// </summary>

    std::string getNodePoolName() const;
    bool nodePoolNameIsSet() const;
    void unsetnodePoolName();
    void setNodePoolName(const std::string& value);


protected:
    std::string dockerBaseSize_;
    bool dockerBaseSizeIsSet_;
    std::string postInstall_;
    bool postInstallIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string labelPolicyOnExistingNodes_;
    bool labelPolicyOnExistingNodesIsSet_;
    std::string taintPolicyOnExistingNodes_;
    bool taintPolicyOnExistingNodesIsSet_;
    std::string tagPolicyOnExistingNodes_;
    bool tagPolicyOnExistingNodesIsSet_;
    std::string xParameterPlaneSubnet_;
    bool xParameterPlaneSubnetIsSet_;
    std::string nodePoolName_;
    bool nodePoolNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceExtendParams_H_

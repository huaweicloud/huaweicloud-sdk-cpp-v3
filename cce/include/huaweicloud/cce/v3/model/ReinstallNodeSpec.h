
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallNodeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallNodeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReinstallVolumeConfig.h>
#include <string>
#include <huaweicloud/cce/v3/model/NodeLifecycleConfig.h>
#include <huaweicloud/cce/v3/model/ReinstallServerConfig.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <huaweicloud/cce/v3/model/HostnameConfig.h>
#include <huaweicloud/cce/v3/model/ReinstallK8sOptionsConfig.h>
#include <huaweicloud/cce/v3/model/ReinstallRuntimeConfig.h>
#include <vector>
#include <huaweicloud/cce/v3/model/ReinstallExtendParam.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点重装配置参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallNodeSpec
    : public ModelBase
{
public:
    ReinstallNodeSpec();
    virtual ~ReinstallNodeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallNodeSpec members

    /// <summary>
    /// **参数解释**： 操作系统。指定自定义镜像场景将以IMS镜像的实际操作系统版本为准。请选择当前集群支持的操作系统版本。[例如Huawei Cloud EulerOS 2.0、Ubuntu 22.04、EulerOS 2.9、CentOS 7.6、EulerOS 2.8。](tag:hws,hws_hk) **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const Login& value);

    /// <summary>
    /// **参数解释**： 节点名称 &gt; 重装时指定将修改节点名称，且服务器名称会同步修改。默认以服务器当前名称作为节点名称。  **约束限制**： 命名规则：以小写字母开头，由小写字母、数字、中划线(-)、点(.)组成，长度范围1-56位。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallServerConfig getServerConfig() const;
    bool serverConfigIsSet() const;
    void unsetserverConfig();
    void setServerConfig(const ReinstallServerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallVolumeConfig getVolumeConfig() const;
    bool volumeConfigIsSet() const;
    void unsetvolumeConfig();
    void setVolumeConfig(const ReinstallVolumeConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallRuntimeConfig getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const ReinstallRuntimeConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallK8sOptionsConfig getK8sOptions() const;
    bool k8sOptionsIsSet() const;
    void unsetk8sOptions();
    void setK8sOptions(const ReinstallK8sOptionsConfig& value);

    /// <summary>
    /// 
    /// </summary>

    NodeLifecycleConfig getLifecycle() const;
    bool lifecycleIsSet() const;
    void unsetlifecycle();
    void setLifecycle(const NodeLifecycleConfig& value);

    /// <summary>
    /// **参数解释**： 自定义初始化标记，默认值为空。  CCE节点在初始化完成之前，会打上初始化未完成污点（node.cloudprovider.kubernetes.io/uninitialized）防止pod调度到节点上。用户在纳管/重置节点时，可以通过设置initializedConditions参数，控制污点的移除时间（默认不设置超时时间）。  使用示例如下： 1. 纳管/重置节点，传入参数 \&quot;initializedConditions\&quot;: [\&quot;CCEInitial\&quot;, \&quot;CustomedInitial\&quot;]； 2. 用户在执行完自定义初始化操作后，调用k8s接口（例如PATCH /v1/nodes/{node_ip}/status）更新节点的conditions，插入type为CCEInitial、CustomedInitial的两个标记，状态为True； 3. CCE组件轮询节点的status.Conditions，查看是否存在type为CCEInitial、CustomedInitial的condition，若存在且status字段值为True，认为节点初始化完成，则移除初始化污点； 4. initializedConditions支持设置超时时间，用户可以在创节点时传入，如：\&quot;initializedConditions\&quot;: [\&quot;CCEInitial:15m\&quot;, \&quot;CustomedInitial:15m\&quot;]，表示超时时间为15分钟，达到超时时间后，当CCE组件轮询到节点时会自动忽略初始化condition，移除初始化污点。  节点Conditions示例如下： &#x60;&#x60;&#x60; status:   conditions:   - type: CCEInitial     status: &#39;True&#39;   - type: CustomedInitial     status: &#39;True&#39; &#x60;&#x60;&#x60;  **约束限制**： - initializedConditions中超时时间取值范围为[1-99]秒 - 必须以字母、数字组成，长度范围1-20位。 - 标记数量不超过2个。 - 超时时间仅支持分钟(m)单位。 
    /// </summary>

    std::vector<std::string>& getInitializedConditions();
    bool initializedConditionsIsSet() const;
    void unsetinitializedConditions();
    void setInitializedConditions(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const ReinstallExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    HostnameConfig getHostnameConfig() const;
    bool hostnameConfigIsSet() const;
    void unsethostnameConfig();
    void setHostnameConfig(const HostnameConfig& value);

    /// <summary>
    /// **参数解释**： 指定节点安全加固类型，当前仅支持HCE2.0镜像等保2.0三级安全加固。 等保加固会对身份鉴别、访问控制、安全审计、入侵防范、恶意代码防范进行检查并加固。[详情请参见[Huawei Cloud EulerOS 2.0等保2.0三级版镜像概述](https://support.huaweicloud.com/productdesc-hce/hce_sec_0001.html)。](tag:hws) 若未指定此参数，则尝试用原有的值补全。如：原先HCE2.0镜像已配置安全加固，更新节点池时未指定此参数，则仍旧保持安全加固配置，若要取消，需显式指定参数值为\&quot;null\&quot;。 **约束限制**： 不涉及 **取值范围**： - 空值：表示不开启等保加固 - cybersecurity：表示开启等保加固  **默认取值**： 不涉及
    /// </summary>

    std::string getSecurityReinforcementType() const;
    bool securityReinforcementTypeIsSet() const;
    void unsetsecurityReinforcementType();
    void setSecurityReinforcementType(const std::string& value);


protected:
    std::string os_;
    bool osIsSet_;
    Login login_;
    bool loginIsSet_;
    std::string name_;
    bool nameIsSet_;
    ReinstallServerConfig serverConfig_;
    bool serverConfigIsSet_;
    ReinstallVolumeConfig volumeConfig_;
    bool volumeConfigIsSet_;
    ReinstallRuntimeConfig runtimeConfig_;
    bool runtimeConfigIsSet_;
    ReinstallK8sOptionsConfig k8sOptions_;
    bool k8sOptionsIsSet_;
    NodeLifecycleConfig lifecycle_;
    bool lifecycleIsSet_;
    std::vector<std::string> initializedConditions_;
    bool initializedConditionsIsSet_;
    ReinstallExtendParam extendParam_;
    bool extendParamIsSet_;
    HostnameConfig hostnameConfig_;
    bool hostnameConfigIsSet_;
    std::string securityReinforcementType_;
    bool securityReinforcementTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallNodeSpec_H_

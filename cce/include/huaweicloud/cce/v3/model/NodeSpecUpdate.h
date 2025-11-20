
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeEIPSpec.h>
#include <huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNameTemplate.h>
#include <string>
#include <huaweicloud/cce/v3/model/Runtime.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <vector>
#include <huaweicloud/cce/v3/model/UserTag.h>
#include <huaweicloud/cce/v3/model/Volume.h>
#include <huaweicloud/cce/v3/model/NodePoolUpdateExtendParam.h>
#include <huaweicloud/cce/v3/model/Storage.h>
#include <huaweicloud/cce/v3/model/Taint.h>
#include <map>
#include <huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNicSpecUpdate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSpecUpdate
    : public ModelBase
{
public:
    NodeSpecUpdate();
    virtual ~NodeSpecUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpecUpdate members

    /// <summary>
    /// **参数解释：** 节点的规格。  **约束限制**： 节点的规格不允许修改。 &gt; 仅在删除节点池的默认伸缩组场景，允许设置为空字符串。当且仅当 **az** 字段也设置为空字符串时，才能删除默认伸缩组。如果节点池没有扩容伸缩组，默认伸缩组无法删除。  **取值范围：** CCE支持的节点规格请参考[节点规格说明](cce_02_0368.xml)获取。 **默认取值：** 不涉及
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点所在的可用区，需要指定可用区（AZ）的名称。  **约束限制**： 节点的可用区不允许修改。 &gt; 仅在删除节点池的默认伸缩组场景，允许设置为空字符串。当且仅当 **flavor** 字段也设置为空字符串时，才能删除默认伸缩组。如果节点池没有扩容伸缩组，默认伸缩组无法删除。  **取值范围**： [CCE支持的可用区请参考[地区和终端节点](https://console.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws) [CCE支持的可用区请参考[地区和终端节点](https://console-intl.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws_hk) **默认取值**： 不涉及
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点的操作系统类型。具体支持的操作系统请参见[节点操作系统说明](node-os.xml)。 **约束限制**： - 若当前集群版本不支持该OS类型，则会自动替换为当前集群版本支持的同系列OS类型。 - 若在创建节点时指定了extendParam中的alpha.cce/NodeImageID参数，可以不填写此参数。 - 该参数缺省时，CCE会根据集群版本自动选择支持的OS版本。 - 创建节点池时，该参数为必选。 - 若创建节点时使用共享磁盘空间，即磁盘初始化配置管理参数使用storage，且StorageGroups中virtualSpaces的name字段指定为share，该参数为必选。  **取值范围**： 不涉及 **默认取值**： 不涉及
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
    /// 
    /// </summary>

    Volume getRootVolumeUpdate() const;
    bool rootVolumeUpdateIsSet() const;
    void unsetrootVolumeUpdate();
    void setRootVolumeUpdate(const Volume& value);

    /// <summary>
    /// **参数解释**： 节点的数据盘参数。针对专属云节点，参数解释与rootVolume一致。 **约束限制**： 磁盘挂载上限为虚拟机不超过16块，裸金属不超过10块。在此基础上还受限于虚拟机/裸金属规格可挂载磁盘数上限。（目前支持通过控制台和API为CCE节点添加多块数据盘）。 如果数据盘正供容器运行时和Kubelet组件使用，则不可被卸载，否则将导致节点不可用。
    /// </summary>

    std::vector<Volume>& getDataVolumesUpdate();
    bool dataVolumesUpdateIsSet() const;
    void unsetdataVolumesUpdate();
    void setDataVolumesUpdate(const std::vector<Volume>& value);

    /// <summary>
    /// 
    /// </summary>

    Storage getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(const Storage& value);

    /// <summary>
    /// 
    /// </summary>

    Runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const Runtime& value);

    /// <summary>
    /// **参数解释**： 支持给创建出来的节点加Taints来设置反亲和性。每条Taints包含以下3个参数：  - Key：必须以字母或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀。 - Value：必须以字符或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符。 - Effect：只可选NoSchedule，PreferNoSchedule或NoExecute。 字段使用场景：在节点创建场景下，支持指定初始值，查询时不返回该字段；在节点池场景下，创建节点池时节点模板参数中支持指定初始值，查询时支持返回该字段；在其余场景下，查询时都不会返回该字段。  示例：  &#x60;&#x60;&#x60; \&quot;taints\&quot;: [{   \&quot;key\&quot;: \&quot;status\&quot;,   \&quot;value\&quot;: \&quot;unavailable\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }, {   \&quot;key\&quot;: \&quot;looks\&quot;,   \&quot;value\&quot;: \&quot;bad\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }] &#x60;&#x60;&#x60;  **约束限制**： - taints配置不超过20条。 - 参数未指定时将不会更新节点池的自定义Taints。 - 参数为空数组时将删除节点池的自定义Taints。
    /// </summary>

    std::vector<Taint>& getTaints();
    bool taintsIsSet() const;
    void unsettaints();
    void setTaints(const std::vector<Taint>& value);

    /// <summary>
    /// **参数解释：** 该参数用于控制更新节点池时 **post-install脚本执行完成前允许节点调度** 行为。当该参数未设置或者为false时，在kubernetes节点就绪时，容器即可被调度到可用节点。当该参数为true时，在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **约束限制：** 不涉及  **取值范围：** - false：在kubernetes节点就绪时，容器即可被调度到可用节点。           - true：在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **默认取值：** false
    /// </summary>

    bool isWaitPostInstallFinish() const;
    bool waitPostInstallFinishIsSet() const;
    void unsetwaitPostInstallFinish();
    void setWaitPostInstallFinish(bool value);

    /// <summary>
    /// **参数解释**： 格式为key/value键值对。 - Key：必须以字母或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀，例如example.com/my-key，DNS子域最长253个字符。 - Value：可以为空或者非空字符串，非空字符串必须以字符或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符。 字段使用场景：在节点创建场景下，支持指定初始值，查询时不返回该字段；在节点池场景下，创建节点池时节点模板参数中支持指定初始值，查询时支持返回该字段；在其余场景下，查询时都不会返回该字段。   示例： &#x60;&#x60;&#x60; \&quot;k8sTags\&quot;: {   \&quot;key\&quot;: \&quot;value\&quot; } &#x60;&#x60;&#x60;  **约束限制**： - 键值对个数不超过20条。 - 参数未指定时将不会更新节点池的自定义K8s标签。 - 参数为空对象时将删除节点池的自定义K8s标签。
    /// </summary>

    std::map<std::string, std::string>& getK8sTags();
    bool k8sTagsIsSet() const;
    void unsetk8sTags();
    void setK8sTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 云服务器组ID，若指定，将节点创建在该云服务器组下。 **约束限制**： 创建节点池时该配置不会生效，若要保持节点池中的节点都在同一个云服务器组内，请在节点池 nodeManagement 字段中配置。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getEcsGroupId() const;
    bool ecsGroupIdIsSet() const;
    void unsetecsGroupId();
    void setEcsGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 云服务器标签（资源标签）。 **约束限制**： - 键必须唯一，CCE支持的最大用户自定义标签数量依region而定，自定义标签数上限为8个。 - 参数未指定时将不会更新节点池的自定义云服务器标签。 - 参数为空数组时将删除节点池的自定义云服务器标签。
    /// </summary>

    std::vector<UserTag>& getUserTags();
    bool userTagsIsSet() const;
    void unsetuserTags();
    void setUserTags(const std::vector<UserTag>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeSpecUpdate_nodeNameTemplate getNodeNameTemplate() const;
    bool nodeNameTemplateIsSet() const;
    void unsetnodeNameTemplate();
    void setNodeNameTemplate(const NodeSpecUpdate_nodeNameTemplate& value);

    /// <summary>
    /// **参数解释**： 自定义初始化标记，默认值为空。  CCE节点在初始化完成之前，会打上初始化未完成污点（node.cloudprovider.kubernetes.io/uninitialized）防止pod调度到节点上。用户在创建节点时，可以通过设置initializedConditions参数，控制污点的移除时间（默认不设置超时时间）。  使用示例如下： 1. 创建节点，传入参数 \&quot;initializedConditions\&quot;: [\&quot;CCEInitial\&quot;, \&quot;CustomedInitial\&quot;]； 2. 更新节点，传入参数 \&quot;initializedConditions\&quot;: [\&quot;NodeInitial\&quot;]，节点池新建的节点注册到集群时默认会被设置为不可调度； 3. 用户在执行完自定义初始化操作后，调用k8s接口（例如PATCH /v1/nodes/{node_ip}/status）更新节点的conditions，插入type为CCEInitial、CustomedInitial的两个标记，状态为True，如下所示：   &#x60;&#x60;&#x60;   status:     conditions:     - type: CCEInitial       status: &#39;True&#39;     - type: CustomedInitial       status: &#39;True&#39;   &#x60;&#x60;&#x60; 4. CCE组件轮询节点的status.Conditions，查看是否存在type为CCEInitial、CustomedInitial的condition，若存在且status字段值为True，认为节点初始化完成，则移除初始化污点； 5. initializedConditions支持设置超时时间，用户可以在创节点时传入，如：\&quot;initializedConditions\&quot;: [\&quot;CCEInitial:15m\&quot;, \&quot;CustomedInitial:15m\&quot;]，表示超时时间为15分钟，达到超时时间后，当CCE组件轮询到节点时会自动忽略初始化condition，移除初始化污点。  **约束限制**： - initializedConditions中超时时间取值范围为[1-99]秒 - 必须以字母、数字组成，长度范围1-20位。 - 标记数量不超过2个。 - 超时时间仅支持分钟(m)单位。
    /// </summary>

    std::vector<std::string>& getInitializedConditions();
    bool initializedConditionsIsSet() const;
    void unsetinitializedConditions();
    void setInitializedConditions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 服务器企业项目ID。CCE服务不实现EPS相关特性，该字段仅用于同步服务器企业项目ID。 **约束限制**： 创建节点/节点池场景：可指定已存在企业项目，当取值为空时，该字段继承集群企业项目属性。 更新节点池场景：配置修改后仅会对新增节点的服务器生效，存量节点需前往EPS界面迁移。 **取值范围**： 不涉及 **默认取值**： 如果更新时不指定值，不会更新该字段。 当该字段为空时，返回集群企业项目。
    /// </summary>

    std::string getServerEnterpriseProjectID() const;
    bool serverEnterpriseProjectIDIsSet() const;
    void unsetserverEnterpriseProjectID();
    void setServerEnterpriseProjectID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeSpecUpdate_nodeNicSpecUpdate getNodeNicSpecUpdate() const;
    bool nodeNicSpecUpdateIsSet() const;
    void unsetnodeNicSpecUpdate();
    void setNodeNicSpecUpdate(const NodeSpecUpdate_nodeNicSpecUpdate& value);

    /// <summary>
    /// **参数解释**： 指定节点安全加固类型，当前仅支持HCE2.0镜像等保2.0三级安全加固。 等保加固会对身份鉴别、访问控制、安全审计、入侵防范、恶意代码防范进行检查并加固。详情请参见[Huawei Cloud EulerOS 2.0等保2.0三级版镜像概述](https://support.huaweicloud.com/productdesc-hce/hce_sec_0001.html)。 若未指定此参数，则尝试用原有的值补全。如：原先HCE2.0镜像已配置安全加固，更新节点池时未指定此参数，则仍旧保持安全加固配置，若要取消，需显式指定参数值为\&quot;null\&quot;。 **约束限制**： 不涉及 **取值范围**： 取值范围：[&#39;null&#39;, cybersecurity]; **默认取值**： 不涉及
    /// </summary>

    std::string getSecurityReinforcementType() const;
    bool securityReinforcementTypeIsSet() const;
    void unsetsecurityReinforcementType();
    void setSecurityReinforcementType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolUpdateExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const NodePoolUpdateExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    NodeEIPSpec getPublicIP() const;
    bool publicIPIsSet() const;
    void unsetpublicIP();
    void setPublicIP(const NodeEIPSpec& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string az_;
    bool azIsSet_;
    std::string os_;
    bool osIsSet_;
    Login login_;
    bool loginIsSet_;
    Volume rootVolumeUpdate_;
    bool rootVolumeUpdateIsSet_;
    std::vector<Volume> dataVolumesUpdate_;
    bool dataVolumesUpdateIsSet_;
    Storage storage_;
    bool storageIsSet_;
    Runtime runtime_;
    bool runtimeIsSet_;
    std::vector<Taint> taints_;
    bool taintsIsSet_;
    bool waitPostInstallFinish_;
    bool waitPostInstallFinishIsSet_;
    std::map<std::string, std::string> k8sTags_;
    bool k8sTagsIsSet_;
    std::string ecsGroupId_;
    bool ecsGroupIdIsSet_;
    std::vector<UserTag> userTags_;
    bool userTagsIsSet_;
    NodeSpecUpdate_nodeNameTemplate nodeNameTemplate_;
    bool nodeNameTemplateIsSet_;
    std::vector<std::string> initializedConditions_;
    bool initializedConditionsIsSet_;
    std::string serverEnterpriseProjectID_;
    bool serverEnterpriseProjectIDIsSet_;
    NodeSpecUpdate_nodeNicSpecUpdate nodeNicSpecUpdate_;
    bool nodeNicSpecUpdateIsSet_;
    std::string securityReinforcementType_;
    bool securityReinforcementTypeIsSet_;
    NodePoolUpdateExtendParam extendParam_;
    bool extendParamIsSet_;
    NodeEIPSpec publicIP_;
    bool publicIPIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_H_

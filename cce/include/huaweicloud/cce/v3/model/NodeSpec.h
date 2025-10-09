
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePublicIP.h>
#include <string>
#include <huaweicloud/cce/v3/model/Runtime.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <huaweicloud/cce/v3/model/NodeNicSpec.h>
#include <vector>
#include <huaweicloud/cce/v3/model/UserTag.h>
#include <huaweicloud/cce/v3/model/Volume.h>
#include <huaweicloud/cce/v3/model/Storage.h>
#include <huaweicloud/cce/v3/model/NodeExtendParam.h>
#include <huaweicloud/cce/v3/model/HostnameConfig.h>
#include <huaweicloud/cce/v3/model/Taint.h>
#include <map>
#include <huaweicloud/cce/v3/model/NodeSpec_nodeNameTemplate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSpec
    : public ModelBase
{
public:
    NodeSpec();
    virtual ~NodeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpec members

    /// <summary>
    /// 节点的规格，CCE支持的节点规格请参考[节点规格说明](https://support.huaweicloud.com/api-cce/cce_02_0368.html)获取。 
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 待创建节点所在的可用区，需要指定可用区（AZ）的名称，不填或者填random选择随机可用区。 [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint?CCE)](tag:hws) [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/intl/zh-cn/endpoint?CCE)](tag:hws_hk) 
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点的操作系统类型。具体支持的操作系统请参见[节点操作系统说明](node-os.xml)。 **约束限制**： - 若在创建节点时未指定该配置，CCE会根据集群版本自动选择支持的OS版本。 - 若当前集群版本不支持该OS类型，则会自动替换为当前集群版本支持的同系列OS类型。 - 若在创建节点时指定了extendParam中的alpha.cce/NodeImageID参数，节点将使用私有镜像，则该参数为非必选参数。 [- 若在创建节点时指定了extendParam中的securityReinforcementType参数为cybersecurity，节点将开启安全等保加固功能，则节点的操作系统类型必须使用HCE2.0。当用户未配置私有镜像时，该参数必须为“Huawei Cloud EulerOS 2.0”；当用户配置了私有镜像且私有镜像操作系统类型为HCE2.0，则该参数为非必选参数。](tag:hws)  **取值范围**： 不涉及 **默认取值**： 不涉及
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

    Volume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const Volume& value);

    /// <summary>
    /// 节点的数据盘参数（目前已支持通过控制台为CCE节点添加第二块数据盘）。 如果数据盘正供容器运行时和Kubelet组件使用，则不可被卸载，否则将导致节点不可用。 针对专属云节点，参数解释与rootVolume一致
    /// </summary>

    std::vector<Volume>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<Volume>& value);

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

    NodePublicIP getPublicIP() const;
    bool publicIPIsSet() const;
    void unsetpublicIP();
    void setPublicIP(const NodePublicIP& value);

    /// <summary>
    /// 
    /// </summary>

    NodeNicSpec getNodeNicSpec() const;
    bool nodeNicSpecIsSet() const;
    void unsetnodeNicSpec();
    void setNodeNicSpec(const NodeNicSpec& value);

    /// <summary>
    /// **参数解释**： 批量创建时节点的个数。 **约束限制**： - 作用于节点池时该项可以不填写。 - 创建、更新节点池场景返回中无该参数。 - 创建节点时该参数为必填参数  **取值范围**： 必须为大于等于1，小于等于最大限额的正整数。 **默认取值**： 不涉及
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**： 节点的计费模式。 **约束限制**： 不涉及 **取值范围**： -  0: 按需付费 [- 1: 包周期](tag:hws,hws_hk) [- 2: 已废弃：自动付费包周期](tag:hws,hws_hk)  **默认取值**： 0 
    /// </summary>

    int32_t getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(int32_t value);

    /// <summary>
    /// 支持给创建出来的节点加Taints来设置反亲和性，taints配置不超过20条。每条Taints包含以下3个参数：  - Key：必须以字母或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀。 - Value：必须以字符或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符。 - Effect：只可选NoSchedule，PreferNoSchedule或NoExecute。 字段使用场景：在节点创建场景下，支持指定初始值，查询时不返回该字段；在节点池场景下，其中节点模板中支持指定初始值，查询时支持返回该字段；在其余场景下，查询时都不会返回该字段。  示例：  &#x60;&#x60;&#x60; \&quot;taints\&quot;: [{   \&quot;key\&quot;: \&quot;status\&quot;,   \&quot;value\&quot;: \&quot;unavailable\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }, {   \&quot;key\&quot;: \&quot;looks\&quot;,   \&quot;value\&quot;: \&quot;bad\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }] &#x60;&#x60;&#x60; 
    /// </summary>

    std::vector<Taint>& getTaints();
    bool taintsIsSet() const;
    void unsettaints();
    void setTaints(const std::vector<Taint>& value);

    /// <summary>
    /// **参数解释：** 该参数用于控制创建节点时 **post-install脚本执行完成前允许节点调度** 行为。当该参数未设置或者为false时，在kubernetes节点就绪时，容器即可被调度到可用节点。当该参数为true时，在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **约束限制：** 不涉及  **取值范围：** - false：在kubernetes节点就绪时，容器即可被调度到可用节点。           - true：在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **默认取值：** false
    /// </summary>

    bool isWaitPostInstallFinish() const;
    bool waitPostInstallFinishIsSet() const;
    void unsetwaitPostInstallFinish();
    void setWaitPostInstallFinish(bool value);

    /// <summary>
    /// 格式为key/value键值对。键值对个数不超过20条。 - Key：必须以字母或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀，例如example.com/my-key，DNS子域最长253个字符。 - Value：可以为空或者非空字符串，非空字符串必须以字符或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符。 字段使用场景：在节点创建场景下，支持指定初始值，查询时不返回该字段；在节点池场景下，其中节点模板中支持指定初始值，查询时支持返回该字段；在其余场景下，查询时都不会返回该字段。   示例： &#x60;&#x60;&#x60; \&quot;k8sTags\&quot;: {   \&quot;key\&quot;: \&quot;value\&quot; } &#x60;&#x60;&#x60; 
    /// </summary>

    std::map<std::string, std::string>& getK8sTags();
    bool k8sTagsIsSet() const;
    void unsetk8sTags();
    void setK8sTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 云服务器组ID，若指定，将节点创建在该云服务器组下。 **约束限制**： 创建、更新节点池时该配置不会生效，若要保持节点池中的节点都在同一个云服务器组内，请在节点池 nodeManagement 字段中配置。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getEcsGroupId() const;
    bool ecsGroupIdIsSet() const;
    void unsetecsGroupId();
    void setEcsGroupId(const std::string& value);

    /// <summary>
    /// 云服务器故障域，将节点创建在指定故障域下。  &gt;必须同时指定故障域策略的云服务器ID，且需要开启故障域特性开关 
    /// </summary>

    std::string getFaultDomain() const;
    bool faultDomainIsSet() const;
    void unsetfaultDomain();
    void setFaultDomain(const std::string& value);

    /// <summary>
    /// **参数解释**： 指定DeH主机的ID，将节点调度到自己的DeH上。 **约束限制**： 创建节点池添加节点时不支持该参数。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);

    /// <summary>
    /// 是否CCE Turbo集群节点 &gt;创建节点池添加节点时不支持该参数。
    /// </summary>

    bool isOffloadNode() const;
    bool offloadNodeIsSet() const;
    void unsetoffloadNode();
    void setOffloadNode(bool value);

    /// <summary>
    /// 节点来源是否为纳管节点
    /// </summary>

    bool isIsStatic() const;
    bool isStaticIsSet() const;
    void unsetisStatic();
    void setIsStatic(bool value);

    /// <summary>
    /// **参数解释**： 云服务器标签（资源标签）。字段使用场景：在节点创建场景下，支持指定初始值，查询时不返回该字段；在节点池场景下，其中节点模板中支持指定初始值，查询时支持返回该字段；在其余场景下，查询时都不会返回该字段。 **约束限制**： - 键必须唯一，CCE支持的最大用户自定义标签数量依region而定，自定义标签数上限为8个。
    /// </summary>

    std::vector<UserTag>& getUserTags();
    bool userTagsIsSet() const;
    void unsetuserTags();
    void setUserTags(const std::vector<UserTag>& value);

    /// <summary>
    /// 
    /// </summary>

    Runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const Runtime& value);

    /// <summary>
    /// 自定义初始化标记。  CCE节点在初始化完成之前，会打上初始化未完成污点（node.cloudprovider.kubernetes.io/uninitialized）防止pod调度到节点上。  cce支持自定义初始化标记，在接收到initializedConditions参数后，会将参数值转换成节点标签，随节点下发，例如：cloudprovider.openvessel.io/inject-initialized-conditions&#x3D;CCEInitial_CustomedInitial。  当节点上设置了此标签，会轮询节点的status.Conditions，查看conditions的type是否存在标记名，如CCEInitial、CustomedInitial标记，如果存在所有传入的标记，且状态为True，认为节点初始化完成，则移除初始化污点。  - 必须以字母、数字组成，长度范围1-20位。 - 标记数量不超过2个 
    /// </summary>

    std::vector<std::string>& getInitializedConditions();
    bool initializedConditionsIsSet() const;
    void unsetinitializedConditions();
    void setInitializedConditions(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const NodeExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    HostnameConfig getHostnameConfig() const;
    bool hostnameConfigIsSet() const;
    void unsethostnameConfig();
    void setHostnameConfig(const HostnameConfig& value);

    /// <summary>
    /// 服务器企业项目ID。CCE服务不实现EPS相关特性，该字段仅用于同步服务器企业项目ID。 创建节点/节点池场景：可指定已存在企业项目，当取值为空时，该字段继承集群企业项目属性。 更新节点池场景：配置修改后仅会对新增节点的服务器生效，存量节点需前往EPS界面迁移。 如果更新时不指定值，不会更新该字段。 当该字段为空时，返回集群企业项目。
    /// </summary>

    std::string getServerEnterpriseProjectID() const;
    bool serverEnterpriseProjectIDIsSet() const;
    void unsetserverEnterpriseProjectID();
    void setServerEnterpriseProjectID(const std::string& value);

    /// <summary>
    /// **参数解释**： 表示节点所属分区。分区可以选择中心云[或者[边缘小站](https://support.huaweicloud.com/usermanual-cloudpond/ies_02_0401.html)。](tag:hws)[或者[边缘小站](https://support.huaweicloud.com/intl/zh-cn/usermanual-cloudpond/ies_02_0401.html)。](tag:hws_hk) **约束限制**： 仅开启了对分布式云支持的Turbo集群支持指定该字段。 **取值范围**： - center: 中心云 - 边缘小站的可用区ID  **默认取值**： 不涉及
    /// </summary>

    std::string getPartition() const;
    bool partitionIsSet() const;
    void unsetpartition();
    void setPartition(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeSpec_nodeNameTemplate getNodeNameTemplate() const;
    bool nodeNameTemplateIsSet() const;
    void unsetnodeNameTemplate();
    void setNodeNameTemplate(const NodeSpec_nodeNameTemplate& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string az_;
    bool azIsSet_;
    std::string os_;
    bool osIsSet_;
    Login login_;
    bool loginIsSet_;
    Volume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<Volume> dataVolumes_;
    bool dataVolumesIsSet_;
    Storage storage_;
    bool storageIsSet_;
    NodePublicIP publicIP_;
    bool publicIPIsSet_;
    NodeNicSpec nodeNicSpec_;
    bool nodeNicSpecIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t billingMode_;
    bool billingModeIsSet_;
    std::vector<Taint> taints_;
    bool taintsIsSet_;
    bool waitPostInstallFinish_;
    bool waitPostInstallFinishIsSet_;
    std::map<std::string, std::string> k8sTags_;
    bool k8sTagsIsSet_;
    std::string ecsGroupId_;
    bool ecsGroupIdIsSet_;
    std::string faultDomain_;
    bool faultDomainIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;
    bool offloadNode_;
    bool offloadNodeIsSet_;
    bool isStatic_;
    bool isStaticIsSet_;
    std::vector<UserTag> userTags_;
    bool userTagsIsSet_;
    Runtime runtime_;
    bool runtimeIsSet_;
    std::vector<std::string> initializedConditions_;
    bool initializedConditionsIsSet_;
    NodeExtendParam extendParam_;
    bool extendParamIsSet_;
    HostnameConfig hostnameConfig_;
    bool hostnameConfigIsSet_;
    std::string serverEnterpriseProjectID_;
    bool serverEnterpriseProjectIDIsSet_;
    std::string partition_;
    bool partitionIsSet_;
    NodeSpec_nodeNameTemplate nodeNameTemplate_;
    bool nodeNameTemplateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_H_

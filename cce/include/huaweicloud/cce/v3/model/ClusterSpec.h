
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterOps.h>
#include <huaweicloud/cce/v3/model/HostNetwork.h>
#include <huaweicloud/cce/v3/model/Authentication.h>
#include <string>
#include <huaweicloud/cce/v3/model/PackageConfiguration.h>
#include <huaweicloud/cce/v3/model/MasterSpec.h>
#include <vector>
#include <huaweicloud/cce/v3/model/ContainerNetwork.h>
#include <huaweicloud/cce/v3/model/ClusterExtendParam.h>
#include <huaweicloud/cce/v3/model/EncryptionConfig.h>
#include <huaweicloud/cce/v3/model/ResourceTag.h>
#include <huaweicloud/cce/v3/model/EniNetwork.h>
#include <huaweicloud/cce/v3/model/ServiceNetwork.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群参数定义。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterSpec
    : public ModelBase
{
public:
    ClusterSpec();
    virtual ~ClusterSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterSpec members

    /// <summary>
    /// 集群类别： - CCE：CCE集群   CCE集群支持虚拟机与裸金属服务器混合、GPU、NPU等异构节点的混合部署，基于高性能网络模型提供全方位、多场景、安全稳定的容器运行环境。 [- Turbo: CCE Turbo集群。   全面基于云原生基础设施构建的云原生2.0的容器引擎服务，具备软硬协同、网络无损、安全可靠、调度智能的优势，为用户提供一站式、高性价比的全新容器服务体验。](tag:hws,hws_hk,dt,hcs,g42,sbc) 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定集群使用的委托。该委托用于生成集群中组件使用的临时访问凭证，在集群中自动创建其他相关云服务的资源时会使用该委托权限。当不传或为空时，集群将自动选择使用CCE的系统委托cce_admin_trust或cce_cluster_agency。  [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/usermanual-cce/cce_10_0556.html)](tag:hws) [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0556.html)](tag:hws_hk)  **约束限制：** 仅1.27及以上版本集群支持该参数  **取值范围：** 不涉及 **默认取值：** 空 
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群Master节点架构 **约束限制：** 不涉及 **取值范围：** - VirtualMachine：Master节点为x86架构服务器 - [ARM64: Master节点为鲲鹏（ARM架构）服务器](tag:hws,hws_hk,hcs)  **默认取值：** VirtualMachine[，如若VirtualMachine资源不足，取值为ARM64](tag:hws,hws_hk,hcs) 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群规格，当集群为v1.15及以上版本时支持创建后变更，详情请参见[变更集群规格](ResizeCluster.xml)。请按实际业务需求进行选择 **约束限制：** 不涉及 **取值范围：** - cce.s1.small: 小规模单控制节点CCE集群（最大50节点） - cce.s1.medium: 中等规模单控制节点CCE集群（最大200节点） - cce.s1.large: 大规模单控制节点CCE集群（最大1000节点） - cce.s2.small: 小规模三控制节点CCE集群（最大50节点） - cce.s2.medium: 中等规模三控制节点CCE集群（最大200节点） - cce.s2.large: 大规模三控制节点CCE集群（最大1000节点） - cce.s2.xlarge: 超大规模三控制节点CCE集群（最大2000节点） [- cce.s3.small: 小规模五控制节点CCE集群（最大50节点）](tag:hcs,hcs_sm) [- cce.s3.medium: 中等规模五控制节点CCE集群（最大200节点）](tag:hcs,hcs_sm) [- cce.s3.large: 大规模五控制节点CCE集群（最大1000节点）](tag:hcs,hcs_sm) [- cce.s3.xlarge: 超大规模五控制节点CCE集群（最大2000节点）](tag:hcs,hcs_sm)  [专属云特殊规格如下：](tag:hws,hws_hk,hcs,hcs_sm) [- cce.dec.s1.small: 小规模单控制节点的专属云CCE集群（最大50节点）](tag:hws,hws_hk) [- cce.dec.s1.medium: 中等规模单控制节点的专属云CCE集群（最大200节点）](tag:hws,hws_hk) [- cce.dec.s1.large: 大规模单控制节点的专属云CCE集群（最大1000节点）](tag:hws,hws_hk) [- cce.dec.s1.xlarge: 超大规模单控制节点的专属云CCE集群（最大2000节点）](tag:hws,hws_hk) [- cce.dec.s2.small: 小规模三控制节点的专属云CCE集群（最大50节点）](tag:hws,hws_hk) [- cce.dec.s2.medium: 中等规模三控制节点的专属云CCE集群（最大200节点）](tag:hws,hws_hk) [- cce.dec.s2.large: 大规模三控制节点的专属云CCE集群（最大1000节点）](tag:hws,hws_hk) [- cce.dec.s2.xlarge: 超大规模三控制节点的专属云CCE集群（最大2000节点）](tag:hws,hws_hk) [- cce.dec.s3.small: 小规模五控制节点的专属云CCE集群（最大50节点）](tag:hcs,hcs_sm) [- cce.dec.s3.medium: 中等规模五控制节点的专属云CCE集群（最大200节点）](tag:hcs,hcs_sm) [- cce.dec.s3.large: 大规模五控制节点的专属云CCE集群（最大1000节点）](tag:hcs,hcs_sm) [- cce.dec.s3.xlarge: 超大规模五控制节点的专属云CCE集群（最大2000节点）](tag:hcs,hcs_sm)  **默认取值：** 不涉及  &gt;    关于规格参数中的字段说明如下： &gt;    - s1：单控制节点的集群，控制节点数为1。单控制节点故障后，集群将不可用，但已运行工作负载不受影响。 &gt;    - s2：三控制节点的集群，即高可用集群，控制节点数为3。当某个控制节点故障时，集群仍然可用。 [&gt;   - s3：五控制节点的集群，即超高可用集群，控制节点数为5。当某2个控制节点故障时，集群仍然可用。](tag:hcs,hcs_sm) [&gt;   - dec：表示专属云的CCE集群规格。例如cce.dec.s1.small表示小规模单控制节点的专属云CCE集群（最大50节点）。](tag:hws,hws_hk) &gt;    - small：表示集群支持管理的最大节点规模为50节点。 &gt;    - medium：表示集群支持管理的最大节点规模为200节点。 &gt;    - large：表示集群支持管理的最大节点规模为1000节点。 &gt;    - xlarge：表示集群支持管理的最大节点规模为2000节点。 
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群版本，与Kubernetes社区基线版本保持一致，建议选择最新商用版本。 [&gt; 关于Kubernetes版本策略，请参见[Kubernetes版本策略](https://support.huaweicloud.com/bulletin-cce/cce_bulletin_0033.html)](tag:hws) [&gt; 关于Kubernetes版本策略，请参见[Kubernetes版本策略](https://support.huaweicloud.com/intl/zh-cn/bulletin-cce/cce_bulletin_0033.html)](tag:hws_hk)  在CCE控制台支持创建三种最新版本的集群。可登录CCE控制台创建集群，在“版本”处获取到集群版本。 其它集群版本，当前仍可通过api创建，但后续会逐渐下线，具体下线策略请关注CCE官方公告。 **约束限制：** 格式必须为：vX.Y[.Z[-rN]]，例如 v1.30，v1.30.0，v1.30.0-r0 都将创建1.30版本的集群 - X: 对应社区Kubernetes的主要版本 - Y: 对应社区Kubernetes的次要版本 - Z: 对应社区Kubernetes的补丁版本 [- N: 对应CCE补丁版本，关于CCE补丁版本详情，请参见[补丁版本发布记录](https://support.huaweicloud.com/bulletin-cce/cce_10_0405.html)](tag:hws) [- N: 对应CCE补丁版本，关于CCE补丁版本详情，请参见[补丁版本发布记录](https://support.huaweicloud.com/intl/zh-cn/bulletin-cce/cce_10_0405.html)](tag:hws_hk)  **取值范围：** 不涉及 **默认取值：** - 若不配置，默认创建最新版本的集群。 - 若指定集群基线版本但是不指定具体r版本，则系统默认选择对应集群版本的最新r版本。建议不指定具体r版本由系统选择最新版本。  [&gt;    - Turbo集群支持1.19及以上版本商用。](tag:hws,hws_hk,dt) [&gt;    - Turbo集群支持1.23及以上版本商用。](tag:hcs,g42,sbc)
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// CCE集群平台版本号，表示集群版本(version)下的内部版本。用于跟踪某一集群版本内的迭代，集群版本内唯一，跨集群版本重新计数。不支持用户指定，集群创建时自动选择对应集群版本的最新平台版本。  platformVersion格式为：cce.X.Y - X: 表示内部特性版本。集群版本中特性或者补丁修复，或者OS支持等变更场景。其值从1开始单调递增。 - Y: 表示内部特性版本的补丁版本。仅用于特性版本上线后的软件包更新，不涉及其他修改。其值从0开始单调递增。 
    /// </summary>

    std::string getPlatformVersion() const;
    bool platformVersionIsSet() const;
    void unsetplatformVersion();
    void setPlatformVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** CCE集群旧版本（已废弃），无实际功能，仅用于集群version与platformVersion组合展示，该版本号全局内唯一。如集群version为va.b, platformVersion为cce.X.Y，则legacyVersion值为va.b.X-rY。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getLegacyVersion() const;
    bool legacyVersionIsSet() const;
    void unsetlegacyVersion();
    void setLegacyVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群描述，对于集群使用目的的描述，可根据实际情况自定义，默认为空。集群创建成功后可通过接口[更新指定的集群](cce_02_0240.xml)来做出修改，也可在CCE控制台中对应集群的“集群详情”下的“描述”处进行修改。 **约束限制：** 仅支持utf-8编码，长度必须小于等于200个字节 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 集群的API Server服务端证书中的自定义SAN（Subject Alternative Name）字段，遵从SSL标准X509定义的格式规范。  1. 不允许出现同名重复。 2. 格式符合IP和域名格式。  示例: &#x60;&#x60;&#x60; SAN 1: DNS Name&#x3D;example.com SAN 2: DNS Name&#x3D;www.example.com SAN 3: DNS Name&#x3D;example.net SAN 4: IP Address&#x3D;93.184.216.34 &#x60;&#x60;&#x60;
    /// </summary>

    std::vector<std::string>& getCustomSan();
    bool customSanIsSet() const;
    void unsetcustomSan();
    void setCustomSan(const std::vector<std::string>& value);

    /// <summary>
    /// 集群是否使用IPv6模式，1.15版本及以上支持。
    /// </summary>

    bool isIpv6enable() const;
    bool ipv6enableIsSet() const;
    void unsetipv6enable();
    void setIpv6enable(bool value);

    /// <summary>
    /// CCE Turbo集群
    /// </summary>

    bool isOffloadCluster() const;
    bool offloadClusterIsSet() const;
    void unsetoffloadCluster();
    void setOffloadCluster(bool value);

    /// <summary>
    /// 
    /// </summary>

    HostNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const HostNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    ContainerNetwork getContainerNetwork() const;
    bool containerNetworkIsSet() const;
    void unsetcontainerNetwork();
    void setContainerNetwork(const ContainerNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    EniNetwork getEniNetwork() const;
    bool eniNetworkIsSet() const;
    void unseteniNetwork();
    void setEniNetwork(const EniNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceNetwork getServiceNetwork() const;
    bool serviceNetworkIsSet() const;
    void unsetserviceNetwork();
    void setServiceNetwork(const ServiceNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    Authentication getAuthentication() const;
    bool authenticationIsSet() const;
    void unsetauthentication();
    void setAuthentication(const Authentication& value);

    /// <summary>
    /// 集群的计费方式。 - 0: 按需计费 [- 1: 包周期](tag:hws,hws_hk)  默认为“按需计费”。 
    /// </summary>

    int32_t getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(int32_t value);

    /// <summary>
    /// **参数解释：** 集群控制节点的高级配置，支持指定控制节点的可用区。 **约束限制：** 该参数未配置时将不返回。 
    /// </summary>

    std::vector<MasterSpec>& getMasters();
    bool mastersIsSet() const;
    void unsetmasters();
    void setMasters(const std::vector<MasterSpec>& value);

    /// <summary>
    /// 服务网段参数，kubernetes clusterIP取值范围，1.11.7版本及以上支持。创建集群时如若未传参，默认为\&quot;10.247.0.0/16\&quot;。该参数废弃中，推荐使用新字段serviceNetwork，包含IPv4服务网段。 
    /// </summary>

    std::string getKubernetesSvcIpRange() const;
    bool kubernetesSvcIpRangeIsSet() const;
    void unsetkubernetesSvcIpRange();
    void setKubernetesSvcIpRange(const std::string& value);

    /// <summary>
    /// 集群资源标签
    /// </summary>

    std::vector<ResourceTag>& getClusterTags();
    bool clusterTagsIsSet() const;
    void unsetclusterTags();
    void setClusterTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 服务转发模式，支持以下两种实现：  - iptables：社区传统的kube-proxy模式，完全以iptables规则的方式来实现service负载均衡。该方式最主要的问题是在服务多的时候产生太多的iptables规则，非增量式更新会引入一定的时延，大规模情况下有明显的性能问题。 - ipvs：主导开发并在社区获得广泛支持的kube-proxy模式，采用增量式更新，吞吐更高，速度更快，并可以保证service更新期间连接保持不断开，适用于大规模场景。  &gt; 默认使用iptables转发模式。 
    /// </summary>

    std::string getKubeProxyMode() const;
    bool kubeProxyModeIsSet() const;
    void unsetkubeProxyMode();
    void setKubeProxyMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 可用区（废弃中）。 [CCE支持的可用区请参考[地区和终端节点](https://console.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws)  [CCE支持的可用区请参考[地区和终端节点](https://console-intl.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws_hk) **约束限制：** 仅查询接口返回该字段。 
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const ClusterExtendParam& value);

    /// <summary>
    /// 支持Istio
    /// </summary>

    bool isSupportIstio() const;
    bool supportIstioIsSet() const;
    void unsetsupportIstio();
    void setSupportIstio(bool value);

    /// <summary>
    /// 集群控制节点系统盘、数据盘加密。默认使用AES_256加密算法。CCE、Turbo集群1.25及以上版本开始支持。集群创建后不支持修改。开启后存在一定的磁盘读写性能损耗。
    /// </summary>

    bool isEnableMasterVolumeEncryption() const;
    bool enableMasterVolumeEncryptionIsSet() const;
    void unsetenableMasterVolumeEncryption();
    void setEnableMasterVolumeEncryption(bool value);

    /// <summary>
    /// 集群开启对分布式云支持。创建CCE Turbo集群时，可在创建集群过程中，开启对分布式云(cloudpond)支持。
    /// </summary>

    bool isEnableDistMgt() const;
    bool enableDistMgtIsSet() const;
    void unsetenableDistMgt();
    void setEnableDistMgt(bool value);

    /// <summary>
    /// 集群删除保护，默认为false关闭，如果开启后用户将无法删除该集群。
    /// </summary>

    bool isDeletionProtection() const;
    bool deletionProtectionIsSet() const;
    void unsetdeletionProtection();
    void setDeletionProtection(bool value);

    /// <summary>
    /// 覆盖集群默认组件配置  若指定了不支持的组件或组件不支持的参数，该配置项将被忽略。  当前支持的可配置组件及其参数详见 [[配置管理](https://support.huaweicloud.com/usermanual-cce/cce_10_0213.html)](tag:hws) [[配置管理](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0213.html)](tag:hws_hk) 
    /// </summary>

    std::vector<PackageConfiguration>& getConfigurationsOverride();
    bool configurationsOverrideIsSet() const;
    void unsetconfigurationsOverride();
    void setConfigurationsOverride(const std::vector<PackageConfiguration>& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterOps getClusterOps() const;
    bool clusterOpsIsSet() const;
    void unsetclusterOps();
    void setClusterOps(const ClusterOps& value);

    /// <summary>
    /// **参数解释：** 是否为Autopilot集群。 **约束限制：** 不涉及 **取值范围：** - true: 创建Autopilot类型集群 - false: 创建CCE/Turbo类型集群  **默认取值：** 默认false 
    /// </summary>

    bool isEnableAutopilot() const;
    bool enableAutopilotIsSet() const;
    void unsetenableAutopilot();
    void setEnableAutopilot(bool value);

    /// <summary>
    /// **参数解释：** 是否启用CCE Standard/Turbo集群自动升配功能。 **约束限制：** 当前集群自动升配功能受限开放。 集群支持范围： - 版本范围：v1.27及以上 - 规格范围：cce.s2.*规格的集群支持启用自动升配  **取值范围：** - true: 启用自动升配能力 - false: 禁用自动升配能力  **默认取值：** 默认false 
    /// </summary>

    bool isEnableAutoResizing() const;
    bool enableAutoResizingIsSet() const;
    void unsetenableAutoResizing();
    void setEnableAutoResizing(bool value);

    /// <summary>
    /// 
    /// </summary>

    EncryptionConfig getEncryptionConfig() const;
    bool encryptionConfigIsSet() const;
    void unsetencryptionConfig();
    void setEncryptionConfig(const EncryptionConfig& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string platformVersion_;
    bool platformVersionIsSet_;
    std::string legacyVersion_;
    bool legacyVersionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> customSan_;
    bool customSanIsSet_;
    bool ipv6enable_;
    bool ipv6enableIsSet_;
    bool offloadCluster_;
    bool offloadClusterIsSet_;
    HostNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    ContainerNetwork containerNetwork_;
    bool containerNetworkIsSet_;
    EniNetwork eniNetwork_;
    bool eniNetworkIsSet_;
    ServiceNetwork serviceNetwork_;
    bool serviceNetworkIsSet_;
    Authentication authentication_;
    bool authenticationIsSet_;
    int32_t billingMode_;
    bool billingModeIsSet_;
    std::vector<MasterSpec> masters_;
    bool mastersIsSet_;
    std::string kubernetesSvcIpRange_;
    bool kubernetesSvcIpRangeIsSet_;
    std::vector<ResourceTag> clusterTags_;
    bool clusterTagsIsSet_;
    std::string kubeProxyMode_;
    bool kubeProxyModeIsSet_;
    std::string az_;
    bool azIsSet_;
    ClusterExtendParam extendParam_;
    bool extendParamIsSet_;
    bool supportIstio_;
    bool supportIstioIsSet_;
    bool enableMasterVolumeEncryption_;
    bool enableMasterVolumeEncryptionIsSet_;
    bool enableDistMgt_;
    bool enableDistMgtIsSet_;
    bool deletionProtection_;
    bool deletionProtectionIsSet_;
    std::vector<PackageConfiguration> configurationsOverride_;
    bool configurationsOverrideIsSet_;
    ClusterOps clusterOps_;
    bool clusterOpsIsSet_;
    bool enableAutopilot_;
    bool enableAutopilotIsSet_;
    bool enableAutoResizing_;
    bool enableAutoResizingIsSet_;
    EncryptionConfig encryptionConfig_;
    bool encryptionConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterSpec_H_

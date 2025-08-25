
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotEniNetwork.h>
#include <huaweicloud/cce/v3/model/AutopilotPackageConfiguration.h>
#include <huaweicloud/cce/v3/model/AutopilotHostNetwork.h>
#include <huaweicloud/cce/v3/model/AutopilotResourceTag.h>
#include <huaweicloud/cce/v3/model/AutopilotAuthentication.h>
#include <string>
#include <huaweicloud/cce/v3/model/AutopilotClusterExtendParam.h>
#include <huaweicloud/cce/v3/model/AutopilotServiceNetwork.h>
#include <vector>
#include <huaweicloud/cce/v3/model/AutopilotContainerNetwork.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotClusterSpec
    : public ModelBase
{
public:
    AutopilotClusterSpec();
    virtual ~AutopilotClusterSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotClusterSpec members

    /// <summary>
    /// 集群类别。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 集群Master节点架构：  - VirtualMachine：Master节点为x86架构服务器 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 集群规格，cce.autopilot.cluster 
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 集群版本，与Kubernetes社区基线版本保持一致，建议选择最新版本。  在CCE控制台支持创建两种最新版本的集群。可登录CCE控制台创建集群，在“版本”处获取到集群版本。 其它集群版本，当前仍可通过api创建，但后续会逐渐下线，具体下线策略请关注CCE官方公告。  &gt;    - 若不配置，默认创建最新版本的集群。
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
    /// 集群描述，对于集群使用目的的描述，可根据实际情况自定义，默认为空。集群创建成功后可通过接口[更新指定的集群](cce_02_0240.xml)来做出修改，也可在CCE控制台中对应集群的“集群详情”下的“描述”处进行修改。仅支持utf-8编码。 
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
    /// 集群是否配置SNAT。开启后您的集群可以通过NAT网关访问公网，默认使用所选的VPC中已有的NAT网关，否则系统将会为您自动创建一个默认规格的NAT网关并绑定弹性公网IP，自动配置SNAT规则。
    /// </summary>

    bool isEnableSnat() const;
    bool enableSnatIsSet() const;
    void unsetenableSnat();
    void setEnableSnat(bool value);

    /// <summary>
    /// 集群是否配置镜像访问。为确保您的集群节点可以从容器镜像服务中拉取镜像，默认使用所选VPC中已有的SWR和OBS终端节点，否则将会为您自动新建SWR和OBS终端节点。
    /// </summary>

    bool isEnableSWRImageAccess() const;
    bool enableSWRImageAccessIsSet() const;
    void unsetenableSWRImageAccess();
    void setEnableSWRImageAccess(bool value);

    /// <summary>
    /// 是否为Autopilot集群。
    /// </summary>

    bool isEnableAutopilot() const;
    bool enableAutopilotIsSet() const;
    void unsetenableAutopilot();
    void setEnableAutopilot(bool value);

    /// <summary>
    /// 集群是否使用IPv6模式。
    /// </summary>

    bool isIpv6enable() const;
    bool ipv6enableIsSet() const;
    void unsetipv6enable();
    void setIpv6enable(bool value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotHostNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const AutopilotHostNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotContainerNetwork getContainerNetwork() const;
    bool containerNetworkIsSet() const;
    void unsetcontainerNetwork();
    void setContainerNetwork(const AutopilotContainerNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotEniNetwork getEniNetwork() const;
    bool eniNetworkIsSet() const;
    void unseteniNetwork();
    void setEniNetwork(const AutopilotEniNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotServiceNetwork getServiceNetwork() const;
    bool serviceNetworkIsSet() const;
    void unsetserviceNetwork();
    void setServiceNetwork(const AutopilotServiceNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotAuthentication getAuthentication() const;
    bool authenticationIsSet() const;
    void unsetauthentication();
    void setAuthentication(const AutopilotAuthentication& value);

    /// <summary>
    /// 集群的计费方式。 - 0: 按需计费  默认为“按需计费”。 
    /// </summary>

    int32_t getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(int32_t value);

    /// <summary>
    /// 服务网段参数，kubernetes clusterIP取值范围。创建集群时如若未传参，默认为\&quot;10.247.0.0/16\&quot;。该参数废弃中，推荐使用新字段serviceNetwork，包含IPv4服务网段。 
    /// </summary>

    std::string getKubernetesSvcIpRange() const;
    bool kubernetesSvcIpRangeIsSet() const;
    void unsetkubernetesSvcIpRange();
    void setKubernetesSvcIpRange(const std::string& value);

    /// <summary>
    /// 集群资源标签
    /// </summary>

    std::vector<AutopilotResourceTag>& getClusterTags();
    bool clusterTagsIsSet() const;
    void unsetclusterTags();
    void setClusterTags(const std::vector<AutopilotResourceTag>& value);

    /// <summary>
    /// 服务转发模式：  - iptables：社区传统的kube-proxy模式，完全以iptables规则的方式来实现service负载均衡。该方式最主要的问题是在服务多的时候产生太多的iptables规则，非增量式更新会引入一定的时延，大规模情况下有明显的性能问题。  &gt; 默认使用iptables转发模式。 
    /// </summary>

    std::string getKubeProxyMode() const;
    bool kubeProxyModeIsSet() const;
    void unsetkubeProxyMode();
    void setKubeProxyMode(const std::string& value);

    /// <summary>
    /// 可用区（仅查询返回字段）。  [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint?CCE)](tag:hws)  [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/intl/zh-cn/endpoint?CCE)](tag:hws_hk) 
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotClusterExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const AutopilotClusterExtendParam& value);

    /// <summary>
    /// 覆盖集群默认组件配置  若指定了不支持的组件或组件不支持的参数，该配置项将被忽略。  当前支持的可配置组件及其参数详见 [[配置管理](https://support.huaweicloud.com/usermanual-cce/cce_10_0213.html)](tag:hws) [[配置管理](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0213.html)](tag:hws_hk) 
    /// </summary>

    std::vector<AutopilotPackageConfiguration>& getConfigurationsOverride();
    bool configurationsOverrideIsSet() const;
    void unsetconfigurationsOverride();
    void setConfigurationsOverride(const std::vector<AutopilotPackageConfiguration>& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string platformVersion_;
    bool platformVersionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> customSan_;
    bool customSanIsSet_;
    bool enableSnat_;
    bool enableSnatIsSet_;
    bool enableSWRImageAccess_;
    bool enableSWRImageAccessIsSet_;
    bool enableAutopilot_;
    bool enableAutopilotIsSet_;
    bool ipv6enable_;
    bool ipv6enableIsSet_;
    AutopilotHostNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    AutopilotContainerNetwork containerNetwork_;
    bool containerNetworkIsSet_;
    AutopilotEniNetwork eniNetwork_;
    bool eniNetworkIsSet_;
    AutopilotServiceNetwork serviceNetwork_;
    bool serviceNetworkIsSet_;
    AutopilotAuthentication authentication_;
    bool authenticationIsSet_;
    int32_t billingMode_;
    bool billingModeIsSet_;
    std::string kubernetesSvcIpRange_;
    bool kubernetesSvcIpRangeIsSet_;
    std::vector<AutopilotResourceTag> clusterTags_;
    bool clusterTagsIsSet_;
    std::string kubeProxyMode_;
    bool kubeProxyModeIsSet_;
    std::string az_;
    bool azIsSet_;
    AutopilotClusterExtendParam extendParam_;
    bool extendParamIsSet_;
    std::vector<AutopilotPackageConfiguration> configurationsOverride_;
    bool configurationsOverrideIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterSpec_H_

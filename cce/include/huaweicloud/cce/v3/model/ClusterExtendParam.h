
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterExtendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterExtendParam
    : public ModelBase
{
public:
    ClusterExtendParam();
    virtual ~ClusterExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterExtendParam members

    /// <summary>
    /// 集群控制节点可用区配置。  [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint?CCE)](tag:hws) [CCE支持的可用区请参考[地区和终端节点](https://developer.huaweicloud.com/intl/zh-cn/endpoint?CCE)](tag:hws_hk)    - multi_az：多可用区，可选。仅使用高可用集群时才可以配置多可用区。 - 专属云计算池可用区：用于指定专属云可用区部署集群控制节点。如果需配置专属CCE集群，该字段为必选。 
    /// </summary>

    std::string getClusterAZ() const;
    bool clusterAZIsSet() const;
    void unsetclusterAZ();
    void setClusterAZ(const std::string& value);

    /// <summary>
    /// 用于指定控制节点的系统盘和数据盘使用专属分布式存储，未指定或者值为空时，默认使用EVS云硬盘。  如果配置专属CCE集群，该字段为必选，请按照如下格式设置：  &#x60;&#x60;&#x60; &lt;rootVol.dssPoolID&gt;.&lt;rootVol.volType&gt;;&lt;dataVol.dssPoolID&gt;.&lt;dataVol.volType&gt; &#x60;&#x60;&#x60;  字段说明： - rootVol为系统盘；dataVol为数据盘； - dssPoolID为专属分布式存储池ID； - volType为专属分布式存储池的存储类型，如SAS、SSD。  样例：c950ee97-587c-4f24-8a74-3367e3da570f.sas;6edbc2f4-1507-44f8-ac0d-eed1d2608d38.ssd  &gt; 非专属CCE集群不支持配置该字段。 
    /// </summary>

    std::string getDssMasterVolumes() const;
    bool dssMasterVolumesIsSet() const;
    void unsetdssMasterVolumes();
    void setDssMasterVolumes(const std::string& value);

    /// <summary>
    /// 集群所属的企业项目ID。 &gt;   - 需要开通企业项目功能后才可配置企业项目。 &gt;   - 集群所属的企业项目与集群下所关联的其他云服务资源所属的企业项目必须保持一致。 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 服务转发模式，支持以下两种实现：  - iptables：社区传统的kube-proxy模式，完全以iptables规则的方式来实现service负载均衡。该方式最主要的问题是在服务多的时候产生太多的iptables规则，非增量式更新会引入一定的时延，大规模情况下有明显的性能问题 - ipvs：主导开发并在社区获得广泛支持的kube-proxy模式，采用增量式更新，吞吐更高，速度更快，并可以保证service更新期间连接保持不断开，适用于大规模场景。  &gt; 此参数已废弃，若同时指定此参数和ClusterSpec下的kubeProxyMode，以ClusterSpec下的为准。 
    /// </summary>

    std::string getKubeProxyMode() const;
    bool kubeProxyModeIsSet() const;
    void unsetkubeProxyMode();
    void setKubeProxyMode(const std::string& value);

    /// <summary>
    /// master 弹性公网IP
    /// </summary>

    std::string getClusterExternalIP() const;
    bool clusterExternalIPIsSet() const;
    void unsetclusterExternalIP();
    void setClusterExternalIP(const std::string& value);

    /// <summary>
    /// 容器网络固定IP池掩码位数，仅vpc-router网络支持。  该参数决定节点可分配容器IP数量，与创建节点时设置的maxPods参数共同决定节点最多可以创建多少个Pod， 具体请参见[节点最多可以创建多少Pod](maxPods.xml)。   整数字符传取值范围: 24 ~ 28 
    /// </summary>

    std::string getAlphaCceFixPoolMask() const;
    bool alphaCceFixPoolMaskIsSet() const;
    void unsetalphaCceFixPoolMask();
    void setAlphaCceFixPoolMask(const std::string& value);

    /// <summary>
    /// 专属CCE集群指定可控制节点的规格。
    /// </summary>

    std::string getDecMasterFlavor() const;
    bool decMasterFlavorIsSet() const;
    void unsetdecMasterFlavor();
    void setDecMasterFlavor(const std::string& value);

    /// <summary>
    /// 集群默认Docker的UmaskMode配置，可取值为secure或normal，不指定时默认为normal。 
    /// </summary>

    std::string getDockerUmaskMode() const;
    bool dockerUmaskModeIsSet() const;
    void unsetdockerUmaskMode();
    void setDockerUmaskMode(const std::string& value);

    /// <summary>
    /// 集群CPU管理策略。取值为none（或空值）或static，默认为none（或空值）。 - none(或空值)：关闭工作负载实例独占CPU核的功能，优点是CPU共享池的可分配核数较多 - static：支持给节点上的工作负载实例配置CPU独占，适用于对CPU缓存和调度延迟敏感的工作负载[，Turbo集群下仅对普通容器节点有效，安全容器节点无效](tag:hws,hws_hk,dt,g42,sbc)。 
    /// </summary>

    std::string getKubernetesIoCpuManagerPolicy() const;
    bool kubernetesIoCpuManagerPolicyIsSet() const;
    void unsetkubernetesIoCpuManagerPolicy();
    void setKubernetesIoCpuManagerPolicy(const std::string& value);

    /// <summary>
    /// 订单ID，集群付费类型为自动付费包周期类型时，响应中会返回此字段(仅创建场景涉及)。
    /// </summary>

    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);

    /// <summary>
    /// - month：月 - year：年 &gt; 作为请求参数，billingMode为1（包周期）时生效，且为必选。 &gt; 作为响应参数，仅在创建包周期集群时返回。 
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 订购周期数，取值范围： - periodType&#x3D;month（周期类型为月）时，取值为[1-9]。 - periodType&#x3D;year（周期类型为年）时，取值为1-3。 &gt; 作为请求参数，billingMode为1时生效，且为必选。 &gt; 作为响应参数，仅在创建包周期集群时返回。 
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订 - “true”：自动续订 - “false”：不自动续订 &gt; billingMode为1时生效，不填写此参数时默认不会自动续费。 
    /// </summary>

    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);

    /// <summary>
    /// 是否自动扣款 - “true”：自动扣款 - “false”：不自动扣款 &gt; billingMode为1时生效，不填写此参数时默认不会自动扣款。 
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);

    /// <summary>
    /// 记录集群通过何种升级方式升级到当前版本。 
    /// </summary>

    std::string getUpgradefrom() const;
    bool upgradefromIsSet() const;
    void unsetupgradefrom();
    void setUpgradefrom(const std::string& value);


protected:
    std::string clusterAZ_;
    bool clusterAZIsSet_;
    std::string dssMasterVolumes_;
    bool dssMasterVolumesIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string kubeProxyMode_;
    bool kubeProxyModeIsSet_;
    std::string clusterExternalIP_;
    bool clusterExternalIPIsSet_;
    std::string alphaCceFixPoolMask_;
    bool alphaCceFixPoolMaskIsSet_;
    std::string decMasterFlavor_;
    bool decMasterFlavorIsSet_;
    std::string dockerUmaskMode_;
    bool dockerUmaskModeIsSet_;
    std::string kubernetesIoCpuManagerPolicy_;
    bool kubernetesIoCpuManagerPolicyIsSet_;
    std::string orderID_;
    bool orderIDIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;
    std::string upgradefrom_;
    bool upgradefromIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterExtendParam_H_

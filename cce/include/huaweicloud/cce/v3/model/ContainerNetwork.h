
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/ContainerCIDR.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Container network parameters.
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ContainerNetwork
    : public ModelBase
{
public:
    ContainerNetwork();
    virtual ~ContainerNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContainerNetwork members

    /// <summary>
    /// 容器网络类型（只可选择其一） - overlay_l2：容器隧道网络，通过OVS（OpenVSwitch）为容器构建的overlay_l2网络。 - vpc-router：VPC网络，使用ipvlan和自定义VPC路由为容器构建的Underlay的l2网络。 [- eni：云原生网络2.0，深度整合VPC原生ENI弹性网卡能力，采用VPC网段分配容器地址，支持ELB直通容器，享有高性能，创建CCE Turbo集群时指定。](tag:hws,hws_hk,dt,hcs,g42,sbc) 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 容器网络网段，建议使用网段10.0.0.0/12~19，172.16.0.0/16~19，192.168.0.0/16~19，如存在网段冲突，将会报错。  此参数在集群创建后不可更改，请谨慎选择。（已废弃，如填写cidrs将忽略该cidr） 
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 容器网络网段列表。1.21及新版本集群使用cidrs字段，当集群网络类型为vpc-router类型时，支持多个容器网段，最多配置20个；1.21之前版本若使用cidrs字段，则取值cidrs数组中的第一个cidr元素作为容器网络网段地址。  此参数在集群创建后不可更改，请谨慎选择。 
    /// </summary>

    std::vector<ContainerCIDR>& getCidrs();
    bool cidrsIsSet() const;
    void unsetcidrs();
    void setCidrs(const std::vector<ContainerCIDR>& value);

    /// <summary>
    /// **参数解释**： VPC容器网段预留。在VPC的默认路由表中添加容器网段路由，避免创建与容器网段冲突的子网。支持的集群版本如下： - v1.28.15-r70及以上版本 - v1.29.15-r30及以上版本 - v1.30.14-r30及以上版本 - v1.31.10-r30及以上版本 - v1.32.6-r30及以上版本 - v1.33.5-r20及以上版本  **约束限制**： 仅支持VPC网络模型集群。不支持集群设置不生效。 **取值范围**： - false：不开启VPC容器网段预留 - true：开启VPC容器网段预留  **默认取值**： false
    /// </summary>

    bool isEnableContainerCIDRsReservation() const;
    bool enableContainerCIDRsReservationIsSet() const;
    void unsetenableContainerCIDRsReservation();
    void setEnableContainerCIDRsReservation(bool value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::vector<ContainerCIDR> cidrs_;
    bool cidrsIsSet_;
    bool enableContainerCIDRsReservation_;
    bool enableContainerCIDRsReservationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetwork_H_


#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_Port_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_Port_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/vpc/v2/model/ExtraDhcpOpt.h>
#include <huaweicloud/vpc/v2/model/FixedIp.h>
#include <string>
#include <huaweicloud/vpc/v2/model/BindingVifDetails.h>
#include <huaweicloud/vpc/v2/model/DnsAssignMent.h>
#include <huaweicloud/vpc/v2/model/AllowedAddressPair.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  Port
    : public ModelBase
{
public:
    Port();
    virtual ~Port();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Port members

    /// <summary>
    /// 端口ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：端口名称 取值范围：0~255个字符，支持中文、英文、字母、_(下划线)、-（中划线）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 端口所属网络的ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 功能说明：管理状态 约束：只支持true，默认为true 
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能描述：端口MAC地址 约束：由系统分配，不支持指定
    /// </summary>

    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);

    /// <summary>
    /// 功能说明：端口IP 例如：\&quot;fixed_ips\&quot;: [{\&quot;subnet_id\&quot;: \&quot;4dc70db6-cb7f-4200-9790-a6a910776bba\&quot;, \&quot;ip_address\&quot;: \&quot;192.169.25.79\&quot;}] 约束：一个端口只支持一个fixed_ip，且不支持更新。
    /// </summary>

    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);

    /// <summary>
    /// 功能说明：端口所属设备ID 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 功能说明：设备所属 取值范围：合法设备所属，如network:dhcp、neutron:VIP_PORT、network:router_interface_distributed、network:router_centralized_snat 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：端口状态，Hana硬直通虚拟机端口状态总为DOWN 取值范围：ACTIVE、BUILD、DOWN
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 安全组的ID列表
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：IP/Mac对列表 约束：IP地址不允许为 “0.0.0.0” 如果配置地址池较大（CIDR掩码小于24位），建议为该port配置一个单独的安全组。
    /// </summary>

    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);

    /// <summary>
    /// 功能说明：DHCP的扩展Option(扩展属性)
    /// </summary>

    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);

    /// <summary>
    /// 功能说明：绑定的vNIC类型 取值范围：  - normal（软交换）  - direct: SRIOV硬直通（不支持） 
    /// </summary>

    std::string getBindingVnicType() const;
    bool bindingVnicTypeIsSet() const;
    void unsetbindingVnicType();
    void setBindingVnicType(const std::string& value);

    /// <summary>
    /// 功能说明：主网卡默认内网域名信息 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::vector<DnsAssignMent>& getDnsAssignment();
    bool dnsAssignmentIsSet() const;
    void unsetdnsAssignment();
    void setDnsAssignment(const std::vector<DnsAssignMent>& value);

    /// <summary>
    /// 功能说明：主网卡默认内网DNS名称 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BindingVifDetails getBindingVifDetails() const;
    bool bindingVifDetailsIsSet() const;
    void unsetbindingVifDetails();
    void setBindingVifDetails(const BindingVifDetails& value);

    /// <summary>
    /// 功能说明：提供用户设置自定义信息(扩展属性)
    /// </summary>

    Object getBindingProfile() const;
    bool bindingProfileIsSet() const;
    void unsetbindingProfile();
    void setBindingProfile(const Object& value);

    /// <summary>
    /// 功能说明：端口所属实例ID，例如RDS实例ID 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例类型，例如“RDS” 约束：不支持设置和更新，由系统自动维护
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 功能说明：端口安全使能标记，如果不使能则安全组和dhcp防欺骗不生效 取值范围：启用（true）或禁用（false）
    /// </summary>

    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);

    /// <summary>
    /// 功能说明：port所属的可用分区
    /// </summary>

    std::string getZoneId() const;
    bool zoneIdIsSet() const;
    void unsetzoneId();
    void setZoneId(const std::string& value);

    /// <summary>
    /// 功能说明：是否使能efi，使能则表示端口支持vRoCE能力，默认为false
    /// </summary>

    bool isEnableEfi() const;
    bool enableEfiIsSet() const;
    void unsetenableEfi();
    void setEnableEfi(bool value);

    /// <summary>
    /// 功能说明：IPv6网卡绑定的共享带宽ID 约束：只有IPv6网卡绑定了共享带宽，才会显示此参数
    /// </summary>

    std::string getIpv6BandwidthId() const;
    bool ipv6BandwidthIdIsSet() const;
    void unsetipv6BandwidthId();
    void setIpv6BandwidthId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::string bindingVnicType_;
    bool bindingVnicTypeIsSet_;
    std::vector<DnsAssignMent> dnsAssignment_;
    bool dnsAssignmentIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    BindingVifDetails bindingVifDetails_;
    bool bindingVifDetailsIsSet_;
    Object bindingProfile_;
    bool bindingProfileIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;
    std::string zoneId_;
    bool zoneIdIsSet_;
    bool enableEfi_;
    bool enableEfiIsSet_;
    std::string ipv6BandwidthId_;
    bool ipv6BandwidthIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_Port_H_

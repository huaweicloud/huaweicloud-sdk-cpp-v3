
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronPort_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronPort_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/vpc/v2/model/ExtraDhcpOpt.h>
#include <huaweicloud/vpc/v2/model/FixedIp.h>
#include <string>
#include <cpprest/details/basic_types.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronPort
    : public ModelBase
{
public:
    NeutronPort();
    virtual ~NeutronPort();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronPort members

    /// <summary>
    /// 功能说明：端口管理状态 约束：目前支持true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能说明：扩展属性：IP/Mac对列表，详情参见“allow_address_pair对象”表 约束：IP地址不允许为 “0.0.0.0”如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组硬件SDN环境不支持ip_address属性配置为CIDR格式。
    /// </summary>

    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);

    /// <summary>
    /// 扩展属性：提供用户设置自定义信息 【使用说明】  internal_elb字段，布尔类型，普通租户可见。只有在创建内网ELB的虚拟IP的网卡时设置为true。普通租户没有权限更改该字段，由系统维护。 举例：{\&quot;internal_elb\&quot;: true}  disable_security_groups字段，布尔类型，普通租户可见。默认为false高性能通信场景下，允许指定为true普通租户可见。仅支持创建port和读取时指定。当前仅支持指定为true，不支持指定为false 举例：{\&quot;disable_security_groups\&quot;：true }， 当前仅支持指定为true，不支持指定为false，指定为true时，FWaaS功能不生效。  仅对于“华北-北京二”：udp_srvports和tcp_srvports，字段，字符串类型，默认不设置udp_srvports和tcp_srvports字段。允许指定udp_srvports和tcp_srvports字段为端口号，表示这些端口的tcp报文和udp报文可支持高并发连接，但是此类报文不受ACL和安全组规则的限制。udp_srvports和tcp_srvports字段同时支持更新操作。 − 格式： {\&quot;tcp_srvports\&quot;: \&quot;port1 port2 port3\&quot;, \&quot;udp_srvports\&quot;: \&quot;port1 port2 port3\&quot;} 端口号之间以空格间隔，最多允许指定的端口号总共为15个，端口号范围是1到65535。 − 示例：{\&quot;tcp_srvports\&quot;: \&quot;80 443\&quot;, \&quot;udp_srvports\&quot;: \&quot;53\&quot;} 示例表示入方向目的端口为80或者443的tcp报文可支持高并发连接。入方向目的端口为53的udp报文可支持高并发连接。但是此类报文不受ACL和安全组规则的限制。 
    /// </summary>

    Object getBindingprofile() const;
    bool bindingprofileIsSet() const;
    void unsetbindingprofile();
    void setBindingprofile(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    BindingVifDetails getBindingvifDetails() const;
    bool bindingvifDetailsIsSet() const;
    void unsetbindingvifDetails();
    void setBindingvifDetails(const BindingVifDetails& value);

    /// <summary>
    /// 功能说明：绑定的vNIC类型  - normal：软交换
    /// </summary>

    std::string getBindingvnicType() const;
    bool bindingvnicTypeIsSet() const;
    void unsetbindingvnicType();
    void setBindingvnicType(const std::string& value);

    /// <summary>
    /// 功能说明：端口设备ID 约束：不支持设置和更新，由系统自动维护，该字段非空的端口不允许删除。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 功能说明：端口设备所属（DHCP/Router/ Nova等） 约束：不支持更新，只允许用户在创建虚拟IP端口时，为虚拟IP端口设置device_owner为neutron:VIP_PORT，当端口的该字段不为空时，仅支持该字段为neutron:VIP_PORT时的端口删除。该字段非空的端口不允许删除。
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 功能说明：扩展属性：主网卡默认内网域名信息 约束：不支持设置和更新，由系统自动维护  - hostname：与端口dns_name一致  - ip_address：端口ipv4私有地址  - fqdn：为端口创建默认内网fqdn
    /// </summary>

    std::vector<DnsAssignMent>& getDnsAssignment();
    bool dnsAssignmentIsSet() const;
    void unsetdnsAssignment();
    void setDnsAssignment(const std::vector<DnsAssignMent>& value);

    /// <summary>
    /// 功能说明：扩展属性：主网卡默认内网DNS名称 约束：不支持设置和更新，由系统自动维护,访问该默认内网域名前，请确保子网使用当前系统提供的DNS
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);

    /// <summary>
    /// 功能说明：扩展属性：DHCP的扩展Option，详情参见“ExtraDhcpOpt对象”表
    /// </summary>

    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);

    /// <summary>
    /// 功能说明：端口的IP地址，参见“FixedIp对象”表 约束：device_owner为neutron: VIP_PORT时最多指定一个fixed_ip，给云服务器创建IPv6端口时，必须具备一个IPv4 subnet_id和一个IPv6 subnet_id 。
    /// </summary>

    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);

    /// <summary>
    /// 端口ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：端口mac地址 约束：只支持系统动态分配，不支持指定
    /// </summary>

    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);

    /// <summary>
    /// 功能说明：端口的名称 取值范围：0-255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 端口所属网络ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 功能说明：端口安全使能标记，如果不使能则安全组和dhcp防欺骗不生效 取值范围：启用（true）或禁用（false）
    /// </summary>

    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);

    /// <summary>
    /// 功能说明：作用在该端口上的安全组的ID列表 约束：不支持更新为空
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：端口状态 取值范围：ACTIVE，BUILD，DOWN 约束：Hana硬直通虚拟机端口状态总为DOWN
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    Object bindingprofile_;
    bool bindingprofileIsSet_;
    BindingVifDetails bindingvifDetails_;
    bool bindingvifDetailsIsSet_;
    std::string bindingvnicType_;
    bool bindingvnicTypeIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::vector<DnsAssignMent> dnsAssignment_;
    bool dnsAssignmentIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronPort_H_

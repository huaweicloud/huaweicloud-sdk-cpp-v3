
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_Subnet_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_Subnet_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/vpc/model/ExtraDhcpOption.h"
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
class HUAWEICLOUD_VPC_EXPORT  Subnet
    : public ModelBase
{
public:
    Subnet();
    virtual ~Subnet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Subnet members

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：子网名称 取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：子网描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：子网的网段 取值范围：必须在vpc对应cidr范围内 约束：必须是cidr格式。掩码长度不能大于28
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 功能说明：子网的网关 取值范围：子网网段中的IP地址 约束：必须是ip格式
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// 功能说明：是否创建cidr_v6 取值范围：true（开启），false（关闭）
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);

    /// <summary>
    /// IPv6子网的网段，如果子网为IPv4子网，则不返回此参数
    /// </summary>

    std::string getCidrV6() const;
    bool cidrV6IsSet() const;
    void unsetcidrV6();
    void setCidrV6(const std::string& value);

    /// <summary>
    /// IPv6子网的网关，如果子网为IPv4子网，则不返回此参数
    /// </summary>

    std::string getGatewayIpV6() const;
    bool gatewayIpV6IsSet() const;
    void unsetgatewayIpV6();
    void setGatewayIpV6(const std::string& value);

    /// <summary>
    /// 子网是否开启dhcp功能
    /// </summary>

    bool isDhcpEnable() const;
    bool dhcpEnableIsSet() const;
    void unsetdhcpEnable();
    void setDhcpEnable(bool value);

    /// <summary>
    /// 子网dns服务器地址1
    /// </summary>

    std::string getPrimaryDns() const;
    bool primaryDnsIsSet() const;
    void unsetprimaryDns();
    void setPrimaryDns(const std::string& value);

    /// <summary>
    /// 子网dns服务器地址2
    /// </summary>

    std::string getSecondaryDns() const;
    bool secondaryDnsIsSet() const;
    void unsetsecondaryDns();
    void setSecondaryDns(const std::string& value);

    /// <summary>
    /// 子网dns服务器地址列表
    /// </summary>

    std::vector<std::string>& getDnsList();
    bool dnsListIsSet() const;
    void unsetdnsList();
    void setDnsList(const std::vector<std::string>& value);

    /// <summary>
    /// 子网所在的可用区标识
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 子网所在VPC标识
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 功能说明：子网的状态 取值范围： - ACTIVE：表示子网已挂载到ROUTER上 - UNKNOWN：表示子网还未挂载到ROUTER上 - ERROR：表示子网状态故障
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对应网络（OpenStack Neutron接口）id
    /// </summary>

    std::string getNeutronNetworkId() const;
    bool neutronNetworkIdIsSet() const;
    void unsetneutronNetworkId();
    void setNeutronNetworkId(const std::string& value);

    /// <summary>
    /// 对应子网（OpenStack Neutron接口）id
    /// </summary>

    std::string getNeutronSubnetId() const;
    bool neutronSubnetIdIsSet() const;
    void unsetneutronSubnetId();
    void setNeutronSubnetId(const std::string& value);

    /// <summary>
    /// 对应IPv6子网（OpenStack Neutron接口）id，如果子网为IPv4子网，则不返回此参数
    /// </summary>

    std::string getNeutronSubnetIdV6() const;
    bool neutronSubnetIdV6IsSet() const;
    void unsetneutronSubnetIdV6();
    void setNeutronSubnetIdV6(const std::string& value);

    /// <summary>
    /// 子网配置的NTP地址
    /// </summary>

    std::vector<ExtraDhcpOption>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    std::string cidrV6_;
    bool cidrV6IsSet_;
    std::string gatewayIpV6_;
    bool gatewayIpV6IsSet_;
    bool dhcpEnable_;
    bool dhcpEnableIsSet_;
    std::string primaryDns_;
    bool primaryDnsIsSet_;
    std::string secondaryDns_;
    bool secondaryDnsIsSet_;
    std::vector<std::string> dnsList_;
    bool dnsListIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string neutronNetworkId_;
    bool neutronNetworkIdIsSet_;
    std::string neutronSubnetId_;
    bool neutronSubnetIdIsSet_;
    std::string neutronSubnetIdV6_;
    bool neutronSubnetIdV6IsSet_;
    std::vector<ExtraDhcpOption> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_Subnet_H_


#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSubnet_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSubnet_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/HostRoute.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/vpc/v2/model/AllocationPool.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronSubnet
    : public ModelBase
{
public:
    NeutronSubnet();
    virtual ~NeutronSubnet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronSubnet members

    /// <summary>
    /// 功能说明：可用的IP池，allocation_pool对象参见 allocation_pool对象 例如：[ { \&quot;start\&quot;: \&quot;10.0.0.2\&quot;, \&quot;end\&quot;: \&quot;10.0.0.251\&quot;} ]每个子网的第1个和最后4个IP地址为系统保留地址。以192.168.1.0/24为例，192.168.1.0、 192.168.1.252、192.168.1.253、192.168.1.254和192.168.1.255这些地址是系统保留地址。系统预留地址默认不在allocation_pool范围内 约束：更新时allocation_pool范围不能包含网关和广播地址的所有IP。
    /// </summary>

    std::vector<AllocationPool>& getAllocationPools();
    bool allocationPoolsIsSet() const;
    void unsetallocationPools();
    void setAllocationPools(const std::vector<AllocationPool>& value);

    /// <summary>
    /// 功能说明：子网网段 取值范围：CIDR格式，只支持10.0.0.0/8,172.16.0.0/12,192.168.0.0/16三个网段内的地址，掩码长度不能大于28 约束：当ip_version&#x3D;6时，该字段不支持设置
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 功能说明：子网关联的DNS名称服务器列表 取值范围：IP地址格式例如：\&quot;dns_nameservers\&quot;: [\&quot;8.xx.xx.8\&quot;,\&quot;8.xx.xx.4\&quot;]； 默认值：不填时为空，无法使用云内网DNS功能
    /// </summary>

    std::vector<std::string>& getDnsNameservers();
    bool dnsNameserversIsSet() const;
    void unsetdnsNameservers();
    void setDnsNameservers(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：是否启动dhcp 取值范围：只支持true
    /// </summary>

    bool isEnableDhcp() const;
    bool enableDhcpIsSet() const;
    void unsetenableDhcp();
    void setEnableDhcp(bool value);

    /// <summary>
    /// 功能说明：子网网关IP  取值范围：本子网网段内的可用IP  约束：不允许和allocation_pools地址块冲突；ip_version&#x3D;6时该字段不支持设置 默认值：本子网网段内第一个可用IP
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// 虚拟机静态路由，参见“host_route对象”表
    /// </summary>

    std::vector<HostRoute>& getHostRoutes();
    bool hostRoutesIsSet() const;
    void unsethostRoutes();
    void setHostRoutes(const std::vector<HostRoute>& value);

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：IP协议版本 取值范围：4或6(支持后)
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：IPv6寻址模式 取值范围：dhcpv6-stateful
    /// </summary>

    std::string getIpv6AddressMode() const;
    bool ipv6AddressModeIsSet() const;
    void unsetipv6AddressMode();
    void setIpv6AddressMode(const std::string& value);

    /// <summary>
    /// 功能说明：IPv6路由广播模式 取值范围：dhcpv6-stateful
    /// </summary>

    std::string getIpv6RaMode() const;
    bool ipv6RaModeIsSet() const;
    void unsetipv6RaMode();
    void setIpv6RaMode(const std::string& value);

    /// <summary>
    /// 功能说明：子网的名称 取值范围：0-255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 所属网络的ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

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

    /// <summary>
    /// 子网池id 【使用说明】目前IPv4不支持，IPv6支持
    /// </summary>

    std::string getSubnetpoolId() const;
    bool subnetpoolIdIsSet() const;
    void unsetsubnetpoolId();
    void setSubnetpoolId(const std::string& value);


protected:
    std::vector<AllocationPool> allocationPools_;
    bool allocationPoolsIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::vector<std::string> dnsNameservers_;
    bool dnsNameserversIsSet_;
    bool enableDhcp_;
    bool enableDhcpIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    std::vector<HostRoute> hostRoutes_;
    bool hostRoutesIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string ipv6AddressMode_;
    bool ipv6AddressModeIsSet_;
    std::string ipv6RaMode_;
    bool ipv6RaModeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string subnetpoolId_;
    bool subnetpoolIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSubnet_H_

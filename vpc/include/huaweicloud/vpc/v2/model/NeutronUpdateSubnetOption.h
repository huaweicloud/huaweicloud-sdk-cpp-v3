
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/HostRoute.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateSubnetOption
    : public ModelBase
{
public:
    NeutronUpdateSubnetOption();
    virtual ~NeutronUpdateSubnetOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateSubnetOption members

    /// <summary>
    /// 功能说明：dns服务器 取值范围：IP地址格式例如：\&quot;dns_nameservers\&quot;: [\&quot;8.xx.xx.8\&quot;,\&quot;8.xx.xx.4\&quot;]，最多5个 默认值：不填时为空，无法使用云内网DNS功能 [内网DNS地址请参见](https://support.huaweicloud.com/dns_faq/dns_faq_002.html) [通过API获取请参见](https://support.huaweicloud.com/api-dns/dns_api_69001.html)
    /// </summary>

    std::vector<std::string>& getDnsNameservers();
    bool dnsNameserversIsSet() const;
    void unsetdnsNameservers();
    void setDnsNameservers(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：是否启动dhcp，false表示不提供dhcp服务的能力 约束：只支持true
    /// </summary>

    bool isEnableDhcp() const;
    bool enableDhcpIsSet() const;
    void unsetenableDhcp();
    void setEnableDhcp(bool value);

    /// <summary>
    /// 功能说明：虚拟机静态路由，参见“host_route对象”表 约束：不支持，忽略输入信息
    /// </summary>

    std::vector<HostRoute>& getHostRoutes();
    bool hostRoutesIsSet() const;
    void unsethostRoutes();
    void setHostRoutes(const std::vector<HostRoute>& value);

    /// <summary>
    /// 子网的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：可用的IP池，allocation_pool对象参见表 allocation_pool对象 例如：[ { \&quot;start\&quot;: \&quot;10.0.0.2\&quot;, \&quot;end\&quot;: \&quot;10.0.0.251\&quot;} ]每个子网的第1个和最后3个IP地址为系统保留地址。以192.168.1.0/24为例，192.168.1.0、 192.168.1.253、192.168.1.254和192.168.1.255这些地址是系统保留地址。系统预留地址默认不在allocation_pool范围内。 约束：更新时allocation_pool范围不能包含网关和广播地址的所有IP。
    /// </summary>

    std::vector<AllocationPool>& getAllocationPools();
    bool allocationPoolsIsSet() const;
    void unsetallocationPools();
    void setAllocationPools(const std::vector<AllocationPool>& value);


protected:
    std::vector<std::string> dnsNameservers_;
    bool dnsNameserversIsSet_;
    bool enableDhcp_;
    bool enableDhcpIsSet_;
    std::vector<HostRoute> hostRoutes_;
    bool hostRoutesIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AllocationPool> allocationPools_;
    bool allocationPoolsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetOption_H_

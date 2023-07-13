
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ExtraDhcpOpt.h>
#include <huaweicloud/vpc/v2/model/FixedIp.h>
#include <string>
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
class HUAWEICLOUD_VPC_V2_EXPORT  CreatePortOption
    : public ModelBase
{
public:
    CreatePortOption();
    virtual ~CreatePortOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePortOption members

    /// <summary>
    /// 功能说明：端口名称 取值范围：0~255个字符，支持中文、英文、字母、_(下划线)、-（中划线），默认为空
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属网络的ID 约束：必须是存在的网络ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 功能说明：端口IP 例如：\&quot;fixed_ips\&quot;: [{\&quot;subnet_id\&quot;: \&quot;4dc70db6-cb7f-4200-9790-a6a910776bba\&quot;, \&quot;ip_address\&quot;: \&quot;192.169.25.79\&quot;}] 约束：ipv4场景下一个端口只支持一个fixed_ip，且不支持更新
    /// </summary>

    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);

    /// <summary>
    /// 功能说明：端口设备所属 取值范围：目前只支持指定\&quot;\&quot;和\&quot;neutron:VIP_PORT\&quot;；neutron:VIP_PORT表示创建的是VIP
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 功能说明：安全组的ID列表；例如：\&quot;security_groups\&quot;: [\&quot;a0608cbf-d047-4f54-8b28-cd7b59853fff\&quot;] 取值范围：默认值为系统默认安全组
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：管理状态 取值范围：只支持true，默认为true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能说明：IP/Mac对列表 约束：IP地址不允许为 “0.0.0.0/0” 如果配置的地址池较大（CIDR掩码小于24位），建议为该port配置一个单独的安全组。
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
    /// 功能说明：端口所属项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_

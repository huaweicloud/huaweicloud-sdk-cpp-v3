
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_SecurityGroupRule_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_SecurityGroupRule_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  SecurityGroupRule
    : public ModelBase
{
public:
    SecurityGroupRule();
    virtual ~SecurityGroupRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SecurityGroupRule members

    /// <summary>
    /// 安全组规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：安全组规则描述 取值范围：0-255个字符，支持数字、字母、中文字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 功能说明：出入控制方向 取值范围： - egress：出方向 - ingress：入方向
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 功能说明：IP协议类型 取值范围：IPv4,IPv6
    /// </summary>

    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);

    /// <summary>
    /// 功能说明：协议类型 取值范围：tcp、udp、icmp或IP协议编号（0~255） 约束：为空表示支持所有协议
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 功能说明：起始端口值 取值范围：1~65535 约束：不能大于port_range_max的值，为空表示所有端口，如果协议是icmp类型，取值范围请参见 [安全组规则icmp协议名称对应关系表](https://support.huaweicloud.com/api-vpc/vpc_api_0009.html)
    /// </summary>

    int32_t getPortRangeMin() const;
    bool portRangeMinIsSet() const;
    void unsetportRangeMin();
    void setPortRangeMin(int32_t value);

    /// <summary>
    /// 功能说明：结束端口值 取值范围：1~65535 约束：取值不能小于port_range_min的值，为空表示所有端口，如果协议是icmp类型，取值范围请参见 [安全组规则icmp协议名称对应关系表](https://support.huaweicloud.com/api-vpc/vpc_api_0009.html)
    /// </summary>

    int32_t getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(int32_t value);

    /// <summary>
    /// 功能说明：远端IP地址，当direction是egress时为虚拟机访问端的地址，当direction是ingress时为访问虚拟机的地址 取值范围：IP地址，或者cidr格式 约束：和remote_group_id互斥
    /// </summary>

    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);

    /// <summary>
    /// 功能说明：对端安全组ID 约束：和remote_ip_prefix互斥
    /// </summary>

    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);

    /// <summary>
    /// 安全组所属项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int32_t portRangeMin_;
    bool portRangeMinIsSet_;
    int32_t portRangeMax_;
    bool portRangeMaxIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;
    std::string remoteGroupId_;
    bool remoteGroupIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_SecurityGroupRule_H_

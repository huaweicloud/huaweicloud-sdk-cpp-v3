
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRuleOption
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRuleOption();
    virtual ~NeutronCreateSecurityGroupRuleOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRuleOption members

    /// <summary>
    /// 功能说明：安全组规则描述 取值范围：0-255个字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：安全组规则方向 取值范围：ingress(入方向)或egress(出方向)
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 功能说明：安全组规则网络类型 取值范围：IPv4或IPv6
    /// </summary>

    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);

    /// <summary>
    /// 最大端口，当协议类型为ICMP时，该值表示ICMP的code
    /// </summary>

    int32_t getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(int32_t value);

    /// <summary>
    /// 功能说明：最小端口，当协议类型为ICMP时，该值表示ICMP的type 约束：protocol为tcp和udp时，port_range_max和port_range_min必须同时输入，且port_range_max应大于等于port_range_min。protocol为icmp时，指定ICMP code（port_range_max）时，必须同时指定ICMP type（port_range_min）。
    /// </summary>

    int32_t getPortRangeMin() const;
    bool portRangeMinIsSet() const;
    void unsetportRangeMin();
    void setPortRangeMin(int32_t value);

    /// <summary>
    /// 功能说明：tcp/udp/icmp/icmpv6或IP协议编号（0~255） 约束：协议为icmpv6时，网络类型应该为IPv6；协议为icmp时，网络类型应该为IPv4
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 功能说明：目的安全组的ID
    /// </summary>

    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);

    /// <summary>
    /// 功能说明：目的端ip网段 取值范围：cidr格式，如10.10.0.0/16
    /// </summary>

    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);

    /// <summary>
    /// 功能说明：远端地址组的ID
    /// </summary>

    std::string getRemoteAddressGroupId() const;
    bool remoteAddressGroupIdIsSet() const;
    void unsetremoteAddressGroupId();
    void setRemoteAddressGroupId(const std::string& value);

    /// <summary>
    /// 所属安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    int32_t portRangeMax_;
    bool portRangeMaxIsSet_;
    int32_t portRangeMin_;
    bool portRangeMinIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string remoteGroupId_;
    bool remoteGroupIdIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;
    std::string remoteAddressGroupId_;
    bool remoteAddressGroupIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_

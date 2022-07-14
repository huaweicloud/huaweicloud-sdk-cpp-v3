
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSecurityGroupRule_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSecurityGroupRule_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronSecurityGroupRule
    : public ModelBase
{
public:
    NeutronSecurityGroupRule();
    virtual ~NeutronSecurityGroupRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronSecurityGroupRule members

    /// <summary>
    /// 安全组规则描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：规则方向 取值范围：ingress、egress
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 功能说明：网络类型 取值范围：IPv4、IPv6
    /// </summary>

    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);

    /// <summary>
    /// 安全组规则ID，查询安全组规则非必选
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：最大端口 取值范围：当协议类型为ICMP时，该值表示ICMP的code
    /// </summary>

    int32_t getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(int32_t value);

    /// <summary>
    /// 功能说明：最小端口 当协议类型为ICMP时，该值表示ICMP的type。protocol为tcp和udp时，port_range_max和port_range_min必须同时输入，且port_range_max应大于等于port_range_min。protocol为icmp时，指定ICMP code（port_range_max）时，必须同时指定ICMP type（port_range_min）。
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
    /// 所属安全组的对端ID
    /// </summary>

    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);

    /// <summary>
    /// 对端ip网段
    /// </summary>

    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);

    /// <summary>
    /// 功能说明：远端IP地址组ID 约束：和remote_ip_prefix，remote_group_id互斥
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
    std::string description_;
    bool descriptionIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    std::string id_;
    bool idIsSet_;
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronSecurityGroupRule_H_

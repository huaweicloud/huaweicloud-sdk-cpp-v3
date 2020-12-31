
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleOption_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

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
class HUAWEICLOUD_VPC_EXPORT  NeutronCreateFirewallRuleOption
    : public ModelBase
{
public:
    NeutronCreateFirewallRuleOption();
    virtual ~NeutronCreateFirewallRuleOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallRuleOption members

    /// <summary>
    /// 功能说明：网络ACL规则名称 取值范围：0-255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL规则描述 取值范围：0-255个字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：IP协议 取值范围：支持TCP,UDP,ICMP, ICMPV6或者ip协议号（0-255）
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 功能说明：对通过网络ACL的流量执行的操作 取值范围：DENY（拒绝）/ALLOW（允许）
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 功能说明：IP协议版本
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：目的地址或者CIDR
    /// </summary>

    std::string getDestinationIpAddress() const;
    bool destinationIpAddressIsSet() const;
    void unsetdestinationIpAddress();
    void setDestinationIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：目的端口号或者一段端口范围
    /// </summary>

    std::string getDestinationPort() const;
    bool destinationPortIsSet() const;
    void unsetdestinationPort();
    void setDestinationPort(const std::string& value);

    /// <summary>
    /// 功能说明：源地址或者CIDR
    /// </summary>

    std::string getSourceIpAddress() const;
    bool sourceIpAddressIsSet() const;
    void unsetsourceIpAddress();
    void setSourceIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：源端口号或者一段端口范围
    /// </summary>

    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);

    /// <summary>
    /// 功能说明：是否使能网络ACL防火墙规则。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string action_;
    bool actionIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string destinationIpAddress_;
    bool destinationIpAddressIsSet_;
    std::string destinationPort_;
    bool destinationPortIsSet_;
    std::string sourceIpAddress_;
    bool sourceIpAddressIsSet_;
    std::string sourcePort_;
    bool sourcePortIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleOption_H_

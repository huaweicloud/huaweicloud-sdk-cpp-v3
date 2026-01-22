
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 管理子网信息 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  SubnetInfo
    : public ModelBase
{
public:
    SubnetInfo();
    virtual ~SubnetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubnetInfo members

    /// <summary>
    /// **参数解释**： 子网所在的可用区标识，从终端节点获取，参考[终端节点](cfw_02_0000.xml) **取值范围**： 不涉及
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**： 虚拟私有云下可用子网的范围 **取值范围**： 10.0.0.0/8~24 172.16.0.0/12~24 192.168.0.0/16~24
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// **参数解释**： 子网名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 子网id **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 子网的网关 **取值范围**： 子网网段cidr中的IP地址
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建VPC产生的uuid **取值范围**： 不涉及
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否支持ipv6 **取值范围**： - true：是 - false：否
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_


#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/Ipv6Bandwidth.h>
#include <huaweicloud/ecs/v2/model/ServerNicSecurityGroup.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAddServerNicOption
    : public ModelBase
{
public:
    BatchAddServerNicOption();
    virtual ~BatchAddServerNicOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddServerNicOption members

    /// <summary>
    /// 云服务器添加网卡的信息。  需要指定云服务器所属虚拟私有云下已创建的网络（network）的ID，UUID格式。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 网卡ID，UUID格式。 当该字段不为空时，表示挂载指定的网卡。port_id和subnet_id不能同时为空。 网卡ID可以从虚拟私有云的“查询端口列表”章节查询到。 约束： 网卡状态必须为DOWN。 网卡的vpcid必须和传入的vpcid一致。 当port_id和subnet_id同时存在的时候，优先使用port_id。当选择port_id不为空时，代表此时使用的是弹性网卡，此时security_groups和ip_address等参数不生效。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 添加网卡的安全组信息
    /// </summary>

    std::vector<ServerNicSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<ServerNicSecurityGroup>& value);

    /// <summary>
    /// IP地址，无该参数表示自动分配IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 是否支持ipv6。  取值为true时，标识此网卡支持ipv6。
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);

    /// <summary>
    /// 
    /// </summary>

    Ipv6Bandwidth getIpv6Bandwidth() const;
    bool ipv6BandwidthIsSet() const;
    void unsetipv6Bandwidth();
    void setIpv6Bandwidth(const Ipv6Bandwidth& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::vector<ServerNicSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    Ipv6Bandwidth ipv6Bandwidth_;
    bool ipv6BandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_

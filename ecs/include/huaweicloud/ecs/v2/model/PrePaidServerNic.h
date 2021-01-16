
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/PrePaidServerIpv6Bandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 待创建云服务器的网卡信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PrePaidServerNic
    : public ModelBase
{
public:
    PrePaidServerNic();
    virtual ~PrePaidServerNic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerNic members

    /// <summary>
    /// 待创建云服务器的网卡信息。   需要指定vpcid对应VPC下已创建的网络（network）的ID，UUID格式。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 待创建云服务器网卡的IP地址，IPv4格式。  约束：  - 不填或空字符串，默认在子网（subnet）中自动分配一个未使用的IP作网卡的IP地址。 - 若指定IP地址，该IP地址必须在子网（subnet）对应的网段内，且未被使用。
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

    PrePaidServerIpv6Bandwidth getIpv6Bandwidth() const;
    bool ipv6BandwidthIsSet() const;
    void unsetipv6Bandwidth();
    void setIpv6Bandwidth(const PrePaidServerIpv6Bandwidth& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    PrePaidServerIpv6Bandwidth ipv6Bandwidth_;
    bool ipv6BandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_

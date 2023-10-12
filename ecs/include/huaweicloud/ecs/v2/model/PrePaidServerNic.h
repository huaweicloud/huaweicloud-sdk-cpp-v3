
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/CreateServerNicAllowedAddressPairs.h>
#include <string>
#include <huaweicloud/ecs/v2/model/PrePaidServerIpv6Bandwidth.h>
#include <vector>

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
    /// 待创建云服务器所在的子网信息，需要指定vpcid对应VPC下的子网ID，UUID格式。  可以通过VPC服务 [查询子网](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;VPC&amp;api&#x3D;ListSubnets) 接口查询，该接口支持通过创建云服务器填写的vpcid进行过滤查询。
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

    /// <summary>
    /// IP/Mac对列表， 约束：IP地址不允许为 “0.0.0.0/0” 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组 如果allowed_address_pairs为“1.1.1.1/0”，表示关闭源目地址检查开关 被绑定的云服务器网卡allowed_address_pairs填“1.1.1.1/0”
    /// </summary>

    std::vector<CreateServerNicAllowedAddressPairs>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<CreateServerNicAllowedAddressPairs>& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    PrePaidServerIpv6Bandwidth ipv6Bandwidth_;
    bool ipv6BandwidthIsSet_;
    std::vector<CreateServerNicAllowedAddressPairs> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerNic_H_

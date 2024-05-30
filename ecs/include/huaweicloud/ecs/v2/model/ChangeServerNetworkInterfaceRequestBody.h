
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerNetworkInterfaceRequestBody
    : public ModelBase
{
public:
    ChangeServerNetworkInterfaceRequestBody();
    virtual ~ChangeServerNetworkInterfaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerNetworkInterfaceRequestBody members

    /// <summary>
    /// 子网ID ，UUID格式。更新IP地址时，必须指定该参数；更新IPv6地址时，该参数可以不填。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// IPv4地址，为空字符串时表示随机更新网卡IPv4地址。  约束： - 该参数和ipv6_address必须指定一个。 - 该参数和ipv6_address不能同时指定。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// IPv6地址，为空字符串时表示随机更新网卡IPv6地址。  约束： - 该参数和ip_address必须指定一个。 - 该参数和ip_address不能同时指定。
    /// </summary>

    std::string getIpv6Address() const;
    bool ipv6AddressIsSet() const;
    void unsetipv6Address();
    void setIpv6Address(const std::string& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string ipv6Address_;
    bool ipv6AddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequestBody_H_


#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerNetworkInterfaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeServerNetworkInterfaceResponse();
    virtual ~ChangeServerNetworkInterfaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerNetworkInterfaceResponse members

    /// <summary>
    /// 网卡ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 网卡IPv4地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 网卡IPv6地址，未开通IPv6协议的网卡不返回该字段。
    /// </summary>

    std::string getIpv6Address() const;
    bool ipv6AddressIsSet() const;
    void unsetipv6Address();
    void setIpv6Address(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string ipv6Address_;
    bool ipv6AddressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceResponse_H_


#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkInterfaces_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkInterfaces_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/Association.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  NetworkInterfaces
    : public ModelBase
{
public:
    NetworkInterfaces();
    virtual ~NetworkInterfaces();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkInterfaces members

    /// <summary>
    /// 网卡端口id
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 是否是主网卡
    /// </summary>

    bool isPrimary() const;
    bool primaryIsSet() const;
    void unsetprimary();
    void setPrimary(bool value);

    /// <summary>
    /// ipv4地址
    /// </summary>

    std::vector<std::string>& getIpAddresses();
    bool ipAddressesIsSet() const;
    void unsetipAddresses();
    void setIpAddresses(const std::vector<std::string>& value);

    /// <summary>
    /// ipv6地址
    /// </summary>

    std::vector<std::string>& getIpv6Addresses();
    bool ipv6AddressesIsSet() const;
    void unsetipv6Addresses();
    void setIpv6Addresses(const std::vector<std::string>& value);

    /// <summary>
    /// 子网id
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Association getAssociation() const;
    bool associationIsSet() const;
    void unsetassociation();
    void setAssociation(const Association& value);


protected:
    std::string portId_;
    bool portIdIsSet_;
    bool primary_;
    bool primaryIsSet_;
    std::vector<std::string> ipAddresses_;
    bool ipAddressesIsSet_;
    std::vector<std::string> ipv6Addresses_;
    bool ipv6AddressesIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    Association association_;
    bool associationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkInterfaces_H_

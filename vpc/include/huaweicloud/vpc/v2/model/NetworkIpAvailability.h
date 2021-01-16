
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/vpc/v2/model/SubnetIpAvailability.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NetworkIpAvailability
    : public ModelBase
{
public:
    NetworkIpAvailability();
    virtual ~NetworkIpAvailability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NetworkIpAvailability members

    /// <summary>
    /// 网络ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 网络名称
    /// </summary>

    std::string getNetworkName() const;
    bool networkNameIsSet() const;
    void unsetnetworkName();
    void setNetworkName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 网络中IP总数（不包含系统预留地址）
    /// </summary>

    int32_t getTotalIps() const;
    bool totalIpsIsSet() const;
    void unsettotalIps();
    void setTotalIps(int32_t value);

    /// <summary>
    /// 网络中已经使用的IP数目（不包含系统预留地址）
    /// </summary>

    int32_t getUsedIps() const;
    bool usedIpsIsSet() const;
    void unsetusedIps();
    void setUsedIps(int32_t value);

    /// <summary>
    /// 子网IP使用情况的对象
    /// </summary>

    std::vector<SubnetIpAvailability>& getSubnetIpAvailability();
    bool subnetIpAvailabilityIsSet() const;
    void unsetsubnetIpAvailability();
    void setSubnetIpAvailability(const std::vector<SubnetIpAvailability>& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;
    std::string networkName_;
    bool networkNameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    int32_t totalIps_;
    bool totalIpsIsSet_;
    int32_t usedIps_;
    bool usedIpsIsSet_;
    std::vector<SubnetIpAvailability> subnetIpAvailability_;
    bool subnetIpAvailabilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_


#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  SubnetIpAvailability
    : public ModelBase
{
public:
    SubnetIpAvailability();
    virtual ~SubnetIpAvailability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubnetIpAvailability members

    /// <summary>
    /// 子网中已经使用的IP数目（不包含系统预留地址）
    /// </summary>

    int32_t getUsedIps() const;
    bool usedIpsIsSet() const;
    void unsetusedIps();
    void setUsedIps(int32_t value);

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 子网名称
    /// </summary>

    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);

    /// <summary>
    /// 子网的IP版本，取值为4或者6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 子网的CIDR
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 子网中IP总数（不包含系统预留地址）
    /// </summary>

    int32_t getTotalIps() const;
    bool totalIpsIsSet() const;
    void unsettotalIps();
    void setTotalIps(int32_t value);


protected:
    int32_t usedIps_;
    bool usedIpsIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    int32_t totalIps_;
    bool totalIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_

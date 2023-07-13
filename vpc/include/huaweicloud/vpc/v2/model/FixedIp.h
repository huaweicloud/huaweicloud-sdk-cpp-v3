
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_FixedIp_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_FixedIp_H_

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
class HUAWEICLOUD_VPC_V2_EXPORT  FixedIp
    : public ModelBase
{
public:
    FixedIp();
    virtual ~FixedIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FixedIp members

    /// <summary>
    /// 功能说明：端口IP地址,如果同时指定子网ID和IP地址，会尝试将该子网上的IP地址分配给该端口。 如果仅指定子网ID，会将该子网中的可用IP分配给该端口。 如果仅指定IP地址，会尝试分配IP地址（如果该地址是指定网络上任何子网的有效IP）
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属子网ID,如果同时指定子网ID和IP地址，会尝试将该子网上的IP地址分配给该端口。 如果仅指定子网ID，会将该子网中的可用IP分配给该端口。 如果仅指定IP地址，会尝试分配IP地址（如果该地址是指定网络上任何子网的有效IP）
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_FixedIp_H_

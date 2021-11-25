
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_

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
class HUAWEICLOUD_VPC_V2_EXPORT  AllowedAddressPair
    : public ModelBase
{
public:
    AllowedAddressPair();
    virtual ~AllowedAddressPair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AllowedAddressPair members

    /// <summary>
    /// 功能说明：IP地址 取值范围：可以是IP地址或CIDR 约束：不支持0.0.0.0/0如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组。 如果填写allowed_address_pairs参数，则ip_address是必选参数。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// mac地址
    /// </summary>

    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_

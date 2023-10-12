
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerNicAllowedAddressPairs_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerNicAllowedAddressPairs_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreateServerNicAllowedAddressPairs
    : public ModelBase
{
public:
    CreateServerNicAllowedAddressPairs();
    virtual ~CreateServerNicAllowedAddressPairs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateServerNicAllowedAddressPairs members

    /// <summary>
    /// IP地址 不支持0.0.0.0/0 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// MAC地址
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerNicAllowedAddressPairs_H_

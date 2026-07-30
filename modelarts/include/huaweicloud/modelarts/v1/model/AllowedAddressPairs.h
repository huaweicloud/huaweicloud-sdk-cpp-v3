
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AllowedAddressPairs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AllowedAddressPairs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** IP/Mac地址对。 **约束限制：** - IP地址不允许为 “0.0.0.0/0”。 - 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组。 - 如果allowed_address_pairs为“1.1.1.1/0”，表示关闭源目的地址检查开关。 - 如果是虚拟IP绑定云服务器    则mac_address可为空或者填写被绑定云服务器网卡的Mac地址。    被绑定的云服务器网卡allowed_address_pairs的IP地址填“1.1.1.1/0”。 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AllowedAddressPairs
    : public ModelBase
{
public:
    AllowedAddressPairs();
    virtual ~AllowedAddressPairs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllowedAddressPairs members

    /// <summary>
    /// **参数解释：** IP地址。 **约束限制：** - 不支持0.0.0.0/0。 - 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** MAC地址。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AllowedAddressPairs_H_

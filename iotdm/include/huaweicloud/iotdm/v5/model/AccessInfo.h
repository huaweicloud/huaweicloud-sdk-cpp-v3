
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AccessInfo_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AccessInfo_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/IPWhiteList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备接入实例的接入信息。用户可以使用该结构体中的信息将应用服务器和设备接入到物联网平台。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  AccessInfo
    : public ModelBase
{
public:
    AccessInfo();
    virtual ~AccessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessInfo members

    /// <summary>
    /// **参数说明**：接入地址的类型，如应用接入的HTTPS协议的取值为：APP_HTTPS，设备接入的MQTT协议的取值为：DEVICE_MQTT。 **取值范围**： - APP_HTTPS：应用接入HTTPS协议 - APP_AMQP：应用接入AMQP协议 - APP_MQTT：应用接入MQTT协议 - DEVICE_COAP：设备接入COAP协议 - DEVICE_MQTT：设备接入MQTT协议 - DEVICE_HTTPS：设备接入HTTPS协议 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数说明**：实例的应用/设备的安全接入端口。 
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数说明**：实例的应用/设备的非安全接入端口。返回null时表示该类型的接入地址不支持非安全端口接入。 
    /// </summary>

    int32_t getNonTlsPort() const;
    bool nonTlsPortIsSet() const;
    void unsetnonTlsPort();
    void setNonTlsPort(int32_t value);

    /// <summary>
    /// **参数说明**：基于WebSocket的MQTT接入端口。返回null时表示该类型的接入地址不支持WebSocket端口接入。 
    /// </summary>

    int32_t getWebsocketPort() const;
    bool websocketPortIsSet() const;
    void unsetwebsocketPort();
    void setWebsocketPort(int32_t value);

    /// <summary>
    /// **参数说明**：实例的接入域名。 
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数说明**：实例的私网接入地址列表。 
    /// </summary>

    std::vector<std::string>& getPrivateAddresses();
    bool privateAddressesIsSet() const;
    void unsetprivateAddresses();
    void setPrivateAddresses(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：实例的公网接入地址。 
    /// </summary>

    std::vector<std::string>& getPublicAddress();
    bool publicAddressIsSet() const;
    void unsetpublicAddress();
    void setPublicAddress(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：实例的ipv6接入地址列表。 
    /// </summary>

    std::vector<std::string>& getIpv6Address();
    bool ipv6AddressIsSet() const;
    void unsetipv6Address();
    void setIpv6Address(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    IPWhiteList getIpWhitelist() const;
    bool ipWhitelistIsSet() const;
    void unsetipWhitelist();
    void setIpWhitelist(const IPWhiteList& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t port_;
    bool portIsSet_;
    int32_t nonTlsPort_;
    bool nonTlsPortIsSet_;
    int32_t websocketPort_;
    bool websocketPortIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::vector<std::string> privateAddresses_;
    bool privateAddressesIsSet_;
    std::vector<std::string> publicAddress_;
    bool publicAddressIsSet_;
    std::vector<std::string> ipv6Address_;
    bool ipv6AddressIsSet_;
    IPWhiteList ipWhitelist_;
    bool ipWhitelistIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AccessInfo_H_

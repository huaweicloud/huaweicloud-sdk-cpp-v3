
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateAccessInfo_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateAccessInfo_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/IPWhiteList.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备接入实例的接入信息。用户可以使用该结构体中的信息将应用服务器和设备接入到物联网平台。 约束：只有企业版实例支持自定义接入信息。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  UpdateAccessInfo
    : public ModelBase
{
public:
    UpdateAccessInfo();
    virtual ~UpdateAccessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAccessInfo members

    /// <summary>
    /// **参数说明**：接入地址的类型，如应用接入的HTTPS协议的取值为：APP_HTTPS，设备接入的MQTT协议的取值为：DEVICE_MQTT。 **取值范围**： - APP_HTTPS：应用接入HTTPS协议 - APP_AMQP：应用接入AMQP协议 - APP_MQTT：应用接入MQTT协议 - DEVICE_COAP：设备接入COAP协议 - DEVICE_MQTT：设备接入MQTT协议 - DEVICE_HTTPS：设备接入HTTPS协议 
    /// </summary>

    std::string getAccessType() const;
    bool accessTypeIsSet() const;
    void unsetaccessType();
    void setAccessType(const std::string& value);

    /// <summary>
    /// **参数说明**：接入域名，如果需要更新域名，则携带该字段。 
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数说明**：是否配置公网接入地址。约束：access_type为APP_HTTPS/APP_AMQP/APP_MQTT的公网地址会同时被解绑或绑定。access_type为DEVICE_MQTT/DEVICE_HTTPS的公网地址会同时被解绑或绑定。 **取值范围**： - true：配置公网接入地址，平台将自动分配公网接入地址。 - false: 解绑公网接入地址，解绑公网地址不会被删除，再次配置公网地址将绑定原来的公网地址。 
    /// </summary>

    bool isPublicAddressesEnable() const;
    bool publicAddressesEnableIsSet() const;
    void unsetpublicAddressesEnable();
    void setPublicAddressesEnable(bool value);

    /// <summary>
    /// 
    /// </summary>

    IPWhiteList getIpWhitelist() const;
    bool ipWhitelistIsSet() const;
    void unsetipWhitelist();
    void setIpWhitelist(const IPWhiteList& value);


protected:
    std::string accessType_;
    bool accessTypeIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    bool publicAddressesEnable_;
    bool publicAddressesEnableIsSet_;
    IPWhiteList ipWhitelist_;
    bool ipWhitelistIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateAccessInfo_H_

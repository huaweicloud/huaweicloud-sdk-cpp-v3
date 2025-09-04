
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Port_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Port_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业版端口信息。创建企业版实例时必填。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  Port
    : public ModelBase
{
public:
    Port();
    virtual ~Port();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Port members

    /// <summary>
    /// **参数说明**：应用接入HTTPS协议端口，默认值：443。 
    /// </summary>

    int32_t getAppHttpsPort() const;
    bool appHttpsPortIsSet() const;
    void unsetappHttpsPort();
    void setAppHttpsPort(int32_t value);

    /// <summary>
    /// **参数说明**：应用接入AMQP协议端口, 默认值：5671。 
    /// </summary>

    int32_t getAppAmqpsPort() const;
    bool appAmqpsPortIsSet() const;
    void unsetappAmqpsPort();
    void setAppAmqpsPort(int32_t value);

    /// <summary>
    /// **参数说明**：应用接入MQTTS协议端口, 默认值：8883。 
    /// </summary>

    int32_t getAppMqttsPort() const;
    bool appMqttsPortIsSet() const;
    void unsetappMqttsPort();
    void setAppMqttsPort(int32_t value);

    /// <summary>
    /// **参数说明**：设备接入COAP协议端口, 默认值：5683。 
    /// </summary>

    int32_t getDeviceCoapPort() const;
    bool deviceCoapPortIsSet() const;
    void unsetdeviceCoapPort();
    void setDeviceCoapPort(int32_t value);

    /// <summary>
    /// **参数说明**：设备接入COAPS协议端口, 默认值：5684。 
    /// </summary>

    int32_t getDeviceCoapsPort() const;
    bool deviceCoapsPortIsSet() const;
    void unsetdeviceCoapsPort();
    void setDeviceCoapsPort(int32_t value);

    /// <summary>
    /// **参数说明**：设备接入MQTT协议端口, 默认值：1883。 
    /// </summary>

    int32_t getDeviceMqttPort() const;
    bool deviceMqttPortIsSet() const;
    void unsetdeviceMqttPort();
    void setDeviceMqttPort(int32_t value);

    /// <summary>
    /// **参数说明**：设备接入MQTTS协议端口, 默认值：8883。 
    /// </summary>

    int32_t getDeviceMqttsPort() const;
    bool deviceMqttsPortIsSet() const;
    void unsetdeviceMqttsPort();
    void setDeviceMqttsPort(int32_t value);

    /// <summary>
    /// **参数说明**：设备接入HTTPS协议端口, 默认值：443。 
    /// </summary>

    int32_t getDeviceHttpsPort() const;
    bool deviceHttpsPortIsSet() const;
    void unsetdeviceHttpsPort();
    void setDeviceHttpsPort(int32_t value);


protected:
    int32_t appHttpsPort_;
    bool appHttpsPortIsSet_;
    int32_t appAmqpsPort_;
    bool appAmqpsPortIsSet_;
    int32_t appMqttsPort_;
    bool appMqttsPortIsSet_;
    int32_t deviceCoapPort_;
    bool deviceCoapPortIsSet_;
    int32_t deviceCoapsPort_;
    bool deviceCoapsPortIsSet_;
    int32_t deviceMqttPort_;
    bool deviceMqttPortIsSet_;
    int32_t deviceMqttsPort_;
    bool deviceMqttsPortIsSet_;
    int32_t deviceHttpsPort_;
    bool deviceHttpsPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Port_H_

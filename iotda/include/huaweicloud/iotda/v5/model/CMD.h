
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CMD_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CMD_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 给设备下发命令的命令内容，在动作的type为“DEVICE_CMD”时有效，且为必选
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CMD
    : public ModelBase
{
public:
    CMD();
    virtual ~CMD();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CMD members

    /// <summary>
    /// **参数说明**：设备命令名称，在设备关联的产品模型中定义。
    /// </summary>

    std::string getCommandName() const;
    bool commandNameIsSet() const;
    void unsetcommandName();
    void setCommandName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备命令参数，Json格式。 使用LWM2M协议设备命令示例：{\&quot;value\&quot;:\&quot;1\&quot;}，里面是一个个键值对，每个键都是产品模型中命令的参数名（paraName）。 使用MQTT协议设备命令示例：{\&quot;header\&quot;: {\&quot;mode\&quot;: \&quot;ACK\&quot;,\&quot;from\&quot;: \&quot;/users/testUser\&quot;,\&quot;method\&quot;: \&quot;SET_TEMPERATURE_READ_PERIOD\&quot;,\&quot;to\&quot;:\&quot;/devices/{device_id}/services/{service_id}\&quot;},\&quot;body\&quot;: {\&quot;value\&quot; : \&quot;1\&quot;}}。 - mode：必选，设备收到命令后是否需要回复确认消息，默认为ACK模式。ACK表示需要回复确认消息，NOACK表示不需要回复确认消息，其它值无效。 - from：可选，命令发送方的地址。App发起请求时格式为/users/{userId} ，应用服务器发起请求时格式为/{serviceName}，物联网平台发起请求时格式为/cloud/{serviceName}。 - to：可选，命令接收方的地址，格式为/devices/{device_id}/services/{service_id}。 - method：可选，产品模型中定义的命令名称。 - body：可选，命令的消息体，里面是一个个键值对，每个键都是产品模型中命令的参数名（paraName）。具体格式需要应用和设备约定。
    /// </summary>

    Object getCommandBody() const;
    bool commandBodyIsSet() const;
    void unsetcommandBody();
    void setCommandBody(const Object& value);

    /// <summary>
    /// **参数说明**：设备命令所属的设备服务ID，在设备关联的产品模型中定义。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备命令的缓存时间，单位为秒，表示物联网平台在把命令下发给设备前缓存命令的有效时间，超过这个时间后命令将不再下发，默认值为172800s（48小时）。 如果buffer_timeout设置为0，则无论物联网平台上设置的命令下发模式是什么，该命令都会立即下发给设备。
    /// </summary>

    int32_t getBufferTimeout() const;
    bool bufferTimeoutIsSet() const;
    void unsetbufferTimeout();
    void setBufferTimeout(int32_t value);

    /// <summary>
    /// **参数说明**：命令响应的有效时间，单位为秒，表示设备接收到命令后，在response_timeout时间内响应有效，超过这个时间未收到命令的响应，则认为命令响应超时，默认值为1800s。
    /// </summary>

    int32_t getResponseTimeout() const;
    bool responseTimeoutIsSet() const;
    void unsetresponseTimeout();
    void setResponseTimeout(int32_t value);

    /// <summary>
    /// **参数说明**：设备命令的下发模式，仅当buffer_timeout的值大于0时有效。 - ACTIVE：主动模式，物联网平台主动将命令下发给设备。 - PASSIVE：被动模式，物联网平台创建设备命令后，会直接缓存命令。等到设备再次上线或者上报上一条命令的执行结果后才下发命令。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string commandName_;
    bool commandNameIsSet_;
    Object commandBody_;
    bool commandBodyIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    int32_t bufferTimeout_;
    bool bufferTimeoutIsSet_;
    int32_t responseTimeout_;
    bool responseTimeoutIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CMD_H_

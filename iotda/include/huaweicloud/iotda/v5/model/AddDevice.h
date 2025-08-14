
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDevice_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDevice_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/AuthInfo.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/InitialDesired.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加设备结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddDevice
    : public ModelBase
{
public:
    AddDevice();
    virtual ~AddDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDevice members

    /// <summary>
    /// **参数说明**：设备ID，全局唯一，用于唯一标识一个设备。如果携带该参数，平台将设备ID设置为该参数值；如果不携带该参数，设备ID由物联网平台分配获得，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合，建议不少于4个字符。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备标识码，通常使用IMEI、MAC地址或Serial No作为node_id。 设备标识码长度为1到64个字符，包含英文字母、数字、连接号“-”和下划线“_”。 注意：NB设备由于模组烧录信息后无法配置，所以NB设备会校验node_id全局唯一。 **取值范围**：长度不超过64，只允许字母、数字、下划线（_）、连接符（-）的组合，建议不少于4个字符。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合，建议不少于4个字符。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuthInfo getAuthInfo() const;
    bool authInfoIsSet() const;
    void unsetauthInfo();
    void setAuthInfo(const AuthInfo& value);

    /// <summary>
    /// **参数说明**：设备的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：网关ID，用于标识设备所属的父设备，即父设备的设备ID。携带该参数时，表示在该父设备下创建一个子设备，这个子设备不与平台直连，此时必须保证这个父设备在平台已存在，创建成功后子设备的gateway_id等于该参数值；不携带该参数时，表示创建一个和平台直连的设备，创建成功后设备的device_id和gateway_id一致。注意：当前平台最多支持二级子设备。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getGatewayId() const;
    bool gatewayIdIsSet() const;
    void unsetgatewayId();
    void setGatewayId(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的设备归属到哪个资源空间下，否则创建的设备将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备扩展信息。用户可以自定义任何想要的扩展信息，如果在创建设备时为子设备指定该字段，将会通过MQTT接口“平台通知网关子设备新增“将该信息通知给网关。字段值大小上限为1K。
    /// </summary>

    Object getExtensionInfo() const;
    bool extensionInfoIsSet() const;
    void unsetextensionInfo();
    void setExtensionInfo(const Object& value);

    /// <summary>
    /// **参数说明**：设备初始配置。用户使用该字段可以为设备指定初始配置，指定后将会根据service_id和desired设置的属性值与产品中对应属性的默认值比对，如果不同，则将以shadow字段中设置的属性值为准写入到设备影子中。service_id的值和desired内的属性必须是profile中定义的。
    /// </summary>

    std::vector<InitialDesired>& getShadow();
    bool shadowIsSet() const;
    void unsetshadow();
    void setShadow(const std::vector<InitialDesired>& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    AuthInfo authInfo_;
    bool authInfoIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string gatewayId_;
    bool gatewayIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    Object extensionInfo_;
    bool extensionInfoIsSet_;
    std::vector<InitialDesired> shadow_;
    bool shadowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDevice_H_

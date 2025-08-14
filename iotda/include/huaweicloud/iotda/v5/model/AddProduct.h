
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddProduct_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddProduct_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ServiceCapability.h>
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
/// 创建产品信息结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddProduct
    : public ModelBase
{
public:
    AddProduct();
    virtual ~AddProduct();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddProduct members

    /// <summary>
    /// **参数说明**：产品ID，资源空间下唯一。常app_id一起使用，用于唯一标识一个产品。如果携带此参数，平台将产品ID设置为该参数值；如果不携带此参数，产品ID在物联网平台创建产品后由平台分配获得。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：产品名称。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备类型。 **取值范围**：长度不超过32，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetdeviceType();
    void setDeviceType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备使用的协议类型。 **取值范围**：MQTT，CoAP，HTTP，HTTPS，Modbus，ONVIF，OPC-UA，OPC-DA，Other，TCP，UDP。
    /// </summary>

    std::string getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备上报数据的格式。 **取值范围**： - json：JSON格式 - binary：二进制码流格式 默认值json。
    /// </summary>

    std::string getDataFormat() const;
    bool dataFormatIsSet() const;
    void unsetdataFormat();
    void setDataFormat(const std::string& value);

    /// <summary>
    /// **参数说明**：设备的服务能力列表。 **取值范围**：数组长度大小不超过500，内容大小不超过500k。
    /// </summary>

    std::vector<ServiceCapability>& getServiceCapabilities();
    bool serviceCapabilitiesIsSet() const;
    void unsetserviceCapabilities();
    void setServiceCapabilities(const std::vector<ServiceCapability>& value);

    /// <summary>
    /// **参数说明**：厂商名称。 **取值范围**：长度不超过32，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getManufacturerName() const;
    bool manufacturerNameIsSet() const;
    void unsetmanufacturerName();
    void setManufacturerName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备所属行业。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getIndustry() const;
    bool industryIsSet() const;
    void unsetindustry();
    void setIndustry(const std::string& value);

    /// <summary>
    /// **参数说明**：产品的描述信息。 **取值范围**：长度不超过128，只允许中文、字母、数字、空白字符、以及_?&#39;#().,;&amp;%@!- ，、：；。/等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的产品归属到哪个资源空间下，否则创建的产品将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string deviceType_;
    bool deviceTypeIsSet_;
    std::string protocolType_;
    bool protocolTypeIsSet_;
    std::string dataFormat_;
    bool dataFormatIsSet_;
    std::vector<ServiceCapability> serviceCapabilities_;
    bool serviceCapabilitiesIsSet_;
    std::string manufacturerName_;
    bool manufacturerNameIsSet_;
    std::string industry_;
    bool industryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string appId_;
    bool appIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddProduct_H_

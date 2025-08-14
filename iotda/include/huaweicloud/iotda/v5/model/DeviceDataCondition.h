
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceDataCondition_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceDataCondition_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/PropertyFilter.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 条件中设备数据类型的信息，自定义结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceDataCondition
    : public ModelBase
{
public:
    DeviceDataCondition();
    virtual ~DeviceDataCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceDataCondition members

    /// <summary>
    /// **参数说明**：设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。存在该参数时设备属性触发根据指定设备触发，该参数值和product_id不能同时为空。如果该参数和product_id同时存在时，以该参数值对应的设备进行条件过滤。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。存在该参数且device_id为空时设备属性触发匹配该产品下所有设备触发，该参数值和device_id不能同时为空。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 数据过滤条件。
    /// </summary>

    std::vector<PropertyFilter>& getFilters();
    bool filtersIsSet() const;
    void unsetfilters();
    void setFilters(const std::vector<PropertyFilter>& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::vector<PropertyFilter> filters_;
    bool filtersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceDataCondition_H_

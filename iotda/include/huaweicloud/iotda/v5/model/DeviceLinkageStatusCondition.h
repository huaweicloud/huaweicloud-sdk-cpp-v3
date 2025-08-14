
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceLinkageStatusCondition_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceLinkageStatusCondition_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 条件中设备状态类型的信息，自定义结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceLinkageStatusCondition
    : public ModelBase
{
public:
    DeviceLinkageStatusCondition();
    virtual ~DeviceLinkageStatusCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceLinkageStatusCondition members

    /// <summary>
    /// **参数说明**：设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。存在该参数时设备状态触发根据指定设备触发，该参数值和product_id不能同时为空。如果该参数和product_id同时存在时，以该参数值对应的设备进行条件过滤。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。存在该参数且device_id为空时设备状态触发匹配该产品下所有设备触发，该参数值和device_id不能同时为空。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：状态列表，设备状态条件携带该参数。 **取值范围**： - ONLINE：设备上线 - OFFLINE：设备下线
    /// </summary>

    std::vector<std::string>& getStatusList();
    bool statusListIsSet() const;
    void unsetstatusList();
    void setStatusList(const std::vector<std::string>& value);

    /// <summary>
    /// **持续时长**：设备状态持续时长，取值范围: 0-60(分钟)。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::vector<std::string> statusList_;
    bool statusListIsSet_;
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceLinkageStatusCondition_H_
